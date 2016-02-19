#include "tree_sitter/parser.h"

#define STATE_COUNT 926
#define SYMBOL_COUNT 100

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
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(87);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(107);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            if (lookahead == '|')
                ADVANCE(128);
            if (lookahead == '~')
                ADVANCE(129);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_for);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(88);
            if (lookahead == 'n')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_in);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(92);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(100);
            if (lookahead == 'u')
                ADVANCE(103);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
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
            ACCEPT_TOKEN(anon_sym_self);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(109);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(110);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_then);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(112);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'l')
                ADVANCE(116);
            if (lookahead == 't')
                ADVANCE(120);
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(115);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(117);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(118);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(119);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(124);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(125);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(126);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(127);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 128:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 129:
            ACCEPT_TOKEN(anon_sym_TILDE);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 131:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 134:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(131);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 136:
            if (lookahead == 'f')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_if);
        case 138:
            if (lookahead == 'n')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            if (lookahead == 'l')
                ADVANCE(140);
            if (lookahead == 't')
                ADVANCE(144);
            LEX_ERROR();
        case 140:
            if (lookahead == 'e')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 's')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 's')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            ACCEPT_TOKEN(anon_sym_unless);
        case 144:
            if (lookahead == 'i')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'l')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_until);
        case 147:
            if (lookahead == 'h')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'i')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'l')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'e')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_while);
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
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'd')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'o')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_do);
        case 155:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 156:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 157:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 158:
            ACCEPT_TOKEN(anon_sym_LBRACK);
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
                ADVANCE(160);
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
                ADVANCE(161);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(128);
            if (lookahead == '~')
                ADVANCE(129);
            LEX_ERROR();
        case 160:
            if (lookahead == '.')
                ADVANCE(18);
            LEX_ERROR();
        case 161:
            if (lookahead == ']')
                ADVANCE(58);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
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
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(165);
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
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
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
                ADVANCE(168);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            LEX_ERROR();
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'd')
                ADVANCE(153);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'd')
                ADVANCE(153);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'i')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'n')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            ACCEPT_TOKEN(anon_sym_in);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
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
            if (lookahead == '=')
                ADVANCE(131);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'd')
                ADVANCE(153);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'd')
                ADVANCE(153);
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
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
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
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(165);
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
            if (lookahead == '=')
                ADVANCE(131);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
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
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == ']')
                ADVANCE(60);
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
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(190);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(191);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 190:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 191:
            ACCEPT_TOKEN(anon_sym_LT);
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
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 193:
            if (lookahead == 'n')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'd')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(193);
            LEX_ERROR();
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
                ADVANCE(131);
            if (lookahead == 't')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'h')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'e')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'n')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            ACCEPT_TOKEN(anon_sym_then);
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 't')
                ADVANCE(199);
            LEX_ERROR();
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
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'l')
                ADVANCE(206);
            if (lookahead == 'n')
                ADVANCE(194);
            LEX_ERROR();
        case 206:
            if (lookahead == 's')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'e')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            ACCEPT_TOKEN(anon_sym_else);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(210);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(211);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(212);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 213:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(213);
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
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
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
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(210);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(107);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
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
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'e')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
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
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'l')
                ADVANCE(218);
            if (lookahead == 'n')
                ADVANCE(194);
            LEX_ERROR();
        case 218:
            if (lookahead == 's')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'e')
                ADVANCE(208);
            if (lookahead == 'i')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 'f')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            ACCEPT_TOKEN(anon_sym_elsif);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
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
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(107);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == 'e')
                ADVANCE(217);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '[')
                ADVANCE(158);
            if (lookahead == 'e')
                ADVANCE(217);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(138);
            if (lookahead == 'w')
                ADVANCE(147);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(191);
            if (lookahead == '=')
                ADVANCE(131);
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
            if (lookahead == ':')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(190);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(190);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(131);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(190);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
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
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(131);
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
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
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
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(132);
            if (lookahead == 'e')
                ADVANCE(188);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'm')
                ADVANCE(90);
            if (lookahead == 'n')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(99);
            if (lookahead == 'u')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(123);
            if (lookahead == '|')
                ADVANCE(128);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 130,
    [1] = 134,
    [2] = 135,
    [3] = 135,
    [4] = 135,
    [5] = 152,
    [6] = 152,
    [7] = 135,
    [8] = 155,
    [9] = 155,
    [10] = 155,
    [11] = 159,
    [12] = 159,
    [13] = 159,
    [14] = 162,
    [15] = 163,
    [16] = 163,
    [17] = 163,
    [18] = 164,
    [19] = 164,
    [20] = 164,
    [21] = 164,
    [22] = 166,
    [23] = 167,
    [24] = 155,
    [25] = 152,
    [26] = 152,
    [27] = 169,
    [28] = 170,
    [29] = 170,
    [30] = 170,
    [31] = 162,
    [32] = 163,
    [33] = 171,
    [34] = 170,
    [35] = 170,
    [36] = 172,
    [37] = 172,
    [38] = 172,
    [39] = 152,
    [40] = 172,
    [41] = 173,
    [42] = 173,
    [43] = 173,
    [44] = 159,
    [45] = 159,
    [46] = 159,
    [47] = 162,
    [48] = 170,
    [49] = 163,
    [50] = 163,
    [51] = 163,
    [52] = 164,
    [53] = 164,
    [54] = 164,
    [55] = 164,
    [56] = 166,
    [57] = 173,
    [58] = 174,
    [59] = 175,
    [60] = 175,
    [61] = 162,
    [62] = 163,
    [63] = 175,
    [64] = 175,
    [65] = 172,
    [66] = 174,
    [67] = 178,
    [68] = 179,
    [69] = 174,
    [70] = 164,
    [71] = 164,
    [72] = 164,
    [73] = 164,
    [74] = 180,
    [75] = 178,
    [76] = 172,
    [77] = 172,
    [78] = 172,
    [79] = 172,
    [80] = 174,
    [81] = 172,
    [82] = 179,
    [83] = 164,
    [84] = 181,
    [85] = 181,
    [86] = 182,
    [87] = 182,
    [88] = 182,
    [89] = 162,
    [90] = 163,
    [91] = 182,
    [92] = 182,
    [93] = 172,
    [94] = 182,
    [95] = 179,
    [96] = 182,
    [97] = 182,
    [98] = 163,
    [99] = 183,
    [100] = 163,
    [101] = 182,
    [102] = 184,
    [103] = 185,
    [104] = 185,
    [105] = 185,
    [106] = 162,
    [107] = 163,
    [108] = 182,
    [109] = 185,
    [110] = 185,
    [111] = 172,
    [112] = 185,
    [113] = 179,
    [114] = 185,
    [115] = 185,
    [116] = 163,
    [117] = 183,
    [118] = 163,
    [119] = 185,
    [120] = 184,
    [121] = 185,
    [122] = 186,
    [123] = 166,
    [124] = 185,
    [125] = 184,
    [126] = 186,
    [127] = 185,
    [128] = 185,
    [129] = 186,
    [130] = 182,
    [131] = 182,
    [132] = 182,
    [133] = 172,
    [134] = 172,
    [135] = 187,
    [136] = 187,
    [137] = 189,
    [138] = 187,
    [139] = 192,
    [140] = 192,
    [141] = 192,
    [142] = 152,
    [143] = 192,
    [144] = 196,
    [145] = 196,
    [146] = 196,
    [147] = 172,
    [148] = 159,
    [149] = 159,
    [150] = 159,
    [151] = 162,
    [152] = 163,
    [153] = 163,
    [154] = 163,
    [155] = 164,
    [156] = 164,
    [157] = 164,
    [158] = 164,
    [159] = 166,
    [160] = 196,
    [161] = 175,
    [162] = 164,
    [163] = 181,
    [164] = 192,
    [165] = 192,
    [166] = 187,
    [167] = 187,
    [168] = 192,
    [169] = 192,
    [170] = 178,
    [171] = 197,
    [172] = 192,
    [173] = 164,
    [174] = 164,
    [175] = 164,
    [176] = 164,
    [177] = 192,
    [178] = 192,
    [179] = 192,
    [180] = 192,
    [181] = 192,
    [182] = 192,
    [183] = 197,
    [184] = 192,
    [185] = 192,
    [186] = 197,
    [187] = 192,
    [188] = 192,
    [189] = 198,
    [190] = 198,
    [191] = 198,
    [192] = 203,
    [193] = 203,
    [194] = 203,
    [195] = 162,
    [196] = 163,
    [197] = 203,
    [198] = 203,
    [199] = 172,
    [200] = 203,
    [201] = 179,
    [202] = 203,
    [203] = 203,
    [204] = 163,
    [205] = 183,
    [206] = 163,
    [207] = 203,
    [208] = 184,
    [209] = 203,
    [210] = 186,
    [211] = 203,
    [212] = 203,
    [213] = 203,
    [214] = 204,
    [215] = 192,
    [216] = 209,
    [217] = 213,
    [218] = 209,
    [219] = 214,
    [220] = 214,
    [221] = 214,
    [222] = 152,
    [223] = 214,
    [224] = 215,
    [225] = 215,
    [226] = 215,
    [227] = 159,
    [228] = 159,
    [229] = 159,
    [230] = 162,
    [231] = 163,
    [232] = 163,
    [233] = 163,
    [234] = 164,
    [235] = 164,
    [236] = 164,
    [237] = 164,
    [238] = 166,
    [239] = 215,
    [240] = 175,
    [241] = 164,
    [242] = 181,
    [243] = 214,
    [244] = 214,
    [245] = 187,
    [246] = 187,
    [247] = 192,
    [248] = 214,
    [249] = 197,
    [250] = 214,
    [251] = 214,
    [252] = 192,
    [253] = 214,
    [254] = 197,
    [255] = 214,
    [256] = 214,
    [257] = 198,
    [258] = 204,
    [259] = 214,
    [260] = 197,
    [261] = 214,
    [262] = 187,
    [263] = 192,
    [264] = 197,
    [265] = 214,
    [266] = 198,
    [267] = 198,
    [268] = 198,
    [269] = 203,
    [270] = 203,
    [271] = 203,
    [272] = 162,
    [273] = 163,
    [274] = 203,
    [275] = 203,
    [276] = 172,
    [277] = 203,
    [278] = 179,
    [279] = 203,
    [280] = 203,
    [281] = 163,
    [282] = 183,
    [283] = 163,
    [284] = 203,
    [285] = 184,
    [286] = 203,
    [287] = 186,
    [288] = 203,
    [289] = 203,
    [290] = 203,
    [291] = 216,
    [292] = 214,
    [293] = 222,
    [294] = 223,
    [295] = 222,
    [296] = 224,
    [297] = 224,
    [298] = 224,
    [299] = 152,
    [300] = 224,
    [301] = 225,
    [302] = 225,
    [303] = 225,
    [304] = 159,
    [305] = 159,
    [306] = 159,
    [307] = 162,
    [308] = 163,
    [309] = 163,
    [310] = 163,
    [311] = 164,
    [312] = 164,
    [313] = 164,
    [314] = 164,
    [315] = 166,
    [316] = 225,
    [317] = 175,
    [318] = 164,
    [319] = 181,
    [320] = 224,
    [321] = 224,
    [322] = 187,
    [323] = 187,
    [324] = 192,
    [325] = 224,
    [326] = 197,
    [327] = 224,
    [328] = 224,
    [329] = 192,
    [330] = 224,
    [331] = 197,
    [332] = 224,
    [333] = 224,
    [334] = 198,
    [335] = 204,
    [336] = 224,
    [337] = 197,
    [338] = 224,
    [339] = 224,
    [340] = 198,
    [341] = 216,
    [342] = 224,
    [343] = 197,
    [344] = 204,
    [345] = 224,
    [346] = 164,
    [347] = 198,
    [348] = 198,
    [349] = 198,
    [350] = 203,
    [351] = 203,
    [352] = 203,
    [353] = 162,
    [354] = 163,
    [355] = 203,
    [356] = 203,
    [357] = 172,
    [358] = 203,
    [359] = 179,
    [360] = 203,
    [361] = 203,
    [362] = 163,
    [363] = 183,
    [364] = 163,
    [365] = 203,
    [366] = 184,
    [367] = 203,
    [368] = 186,
    [369] = 203,
    [370] = 203,
    [371] = 203,
    [372] = 216,
    [373] = 204,
    [374] = 197,
    [375] = 224,
    [376] = 224,
    [377] = 181,
    [378] = 181,
    [379] = 224,
    [380] = 181,
    [381] = 224,
    [382] = 226,
    [383] = 187,
    [384] = 192,
    [385] = 224,
    [386] = 197,
    [387] = 224,
    [388] = 224,
    [389] = 225,
    [390] = 227,
    [391] = 187,
    [392] = 163,
    [393] = 228,
    [394] = 187,
    [395] = 226,
    [396] = 163,
    [397] = 228,
    [398] = 226,
    [399] = 187,
    [400] = 192,
    [401] = 224,
    [402] = 197,
    [403] = 224,
    [404] = 224,
    [405] = 192,
    [406] = 224,
    [407] = 197,
    [408] = 192,
    [409] = 224,
    [410] = 197,
    [411] = 224,
    [412] = 172,
    [413] = 225,
    [414] = 179,
    [415] = 225,
    [416] = 225,
    [417] = 229,
    [418] = 229,
    [419] = 226,
    [420] = 187,
    [421] = 230,
    [422] = 163,
    [423] = 231,
    [424] = 226,
    [425] = 232,
    [426] = 163,
    [427] = 231,
    [428] = 226,
    [429] = 231,
    [430] = 226,
    [431] = 231,
    [432] = 226,
    [433] = 179,
    [434] = 187,
    [435] = 163,
    [436] = 233,
    [437] = 179,
    [438] = 232,
    [439] = 163,
    [440] = 233,
    [441] = 179,
    [442] = 233,
    [443] = 179,
    [444] = 233,
    [445] = 179,
    [446] = 192,
    [447] = 224,
    [448] = 197,
    [449] = 224,
    [450] = 224,
    [451] = 187,
    [452] = 192,
    [453] = 197,
    [454] = 224,
    [455] = 192,
    [456] = 224,
    [457] = 197,
    [458] = 159,
    [459] = 159,
    [460] = 224,
    [461] = 224,
    [462] = 224,
    [463] = 163,
    [464] = 183,
    [465] = 163,
    [466] = 225,
    [467] = 184,
    [468] = 225,
    [469] = 186,
    [470] = 225,
    [471] = 225,
    [472] = 225,
    [473] = 234,
    [474] = 192,
    [475] = 187,
    [476] = 192,
    [477] = 224,
    [478] = 197,
    [479] = 224,
    [480] = 224,
    [481] = 197,
    [482] = 178,
    [483] = 216,
    [484] = 164,
    [485] = 164,
    [486] = 164,
    [487] = 164,
    [488] = 224,
    [489] = 224,
    [490] = 224,
    [491] = 224,
    [492] = 224,
    [493] = 216,
    [494] = 197,
    [495] = 204,
    [496] = 214,
    [497] = 197,
    [498] = 214,
    [499] = 214,
    [500] = 181,
    [501] = 214,
    [502] = 181,
    [503] = 214,
    [504] = 226,
    [505] = 187,
    [506] = 192,
    [507] = 214,
    [508] = 197,
    [509] = 214,
    [510] = 214,
    [511] = 215,
    [512] = 227,
    [513] = 187,
    [514] = 163,
    [515] = 228,
    [516] = 187,
    [517] = 226,
    [518] = 187,
    [519] = 192,
    [520] = 214,
    [521] = 197,
    [522] = 214,
    [523] = 214,
    [524] = 192,
    [525] = 214,
    [526] = 197,
    [527] = 192,
    [528] = 214,
    [529] = 197,
    [530] = 214,
    [531] = 172,
    [532] = 215,
    [533] = 179,
    [534] = 215,
    [535] = 215,
    [536] = 229,
    [537] = 226,
    [538] = 187,
    [539] = 230,
    [540] = 179,
    [541] = 187,
    [542] = 192,
    [543] = 214,
    [544] = 197,
    [545] = 214,
    [546] = 214,
    [547] = 187,
    [548] = 192,
    [549] = 197,
    [550] = 214,
    [551] = 192,
    [552] = 214,
    [553] = 197,
    [554] = 159,
    [555] = 214,
    [556] = 214,
    [557] = 214,
    [558] = 163,
    [559] = 183,
    [560] = 163,
    [561] = 215,
    [562] = 184,
    [563] = 215,
    [564] = 186,
    [565] = 215,
    [566] = 215,
    [567] = 215,
    [568] = 234,
    [569] = 192,
    [570] = 187,
    [571] = 192,
    [572] = 214,
    [573] = 197,
    [574] = 214,
    [575] = 214,
    [576] = 197,
    [577] = 178,
    [578] = 204,
    [579] = 164,
    [580] = 164,
    [581] = 164,
    [582] = 164,
    [583] = 214,
    [584] = 214,
    [585] = 214,
    [586] = 214,
    [587] = 214,
    [588] = 204,
    [589] = 197,
    [590] = 192,
    [591] = 192,
    [592] = 198,
    [593] = 216,
    [594] = 192,
    [595] = 197,
    [596] = 204,
    [597] = 192,
    [598] = 197,
    [599] = 192,
    [600] = 192,
    [601] = 181,
    [602] = 192,
    [603] = 181,
    [604] = 192,
    [605] = 226,
    [606] = 187,
    [607] = 192,
    [608] = 192,
    [609] = 197,
    [610] = 192,
    [611] = 192,
    [612] = 196,
    [613] = 227,
    [614] = 187,
    [615] = 163,
    [616] = 228,
    [617] = 187,
    [618] = 226,
    [619] = 187,
    [620] = 192,
    [621] = 192,
    [622] = 197,
    [623] = 192,
    [624] = 192,
    [625] = 192,
    [626] = 192,
    [627] = 197,
    [628] = 192,
    [629] = 192,
    [630] = 197,
    [631] = 192,
    [632] = 172,
    [633] = 196,
    [634] = 179,
    [635] = 196,
    [636] = 196,
    [637] = 229,
    [638] = 226,
    [639] = 187,
    [640] = 230,
    [641] = 179,
    [642] = 187,
    [643] = 192,
    [644] = 192,
    [645] = 197,
    [646] = 192,
    [647] = 192,
    [648] = 187,
    [649] = 192,
    [650] = 197,
    [651] = 192,
    [652] = 192,
    [653] = 192,
    [654] = 197,
    [655] = 159,
    [656] = 192,
    [657] = 192,
    [658] = 192,
    [659] = 163,
    [660] = 183,
    [661] = 163,
    [662] = 196,
    [663] = 184,
    [664] = 196,
    [665] = 186,
    [666] = 196,
    [667] = 196,
    [668] = 196,
    [669] = 234,
    [670] = 192,
    [671] = 187,
    [672] = 192,
    [673] = 192,
    [674] = 197,
    [675] = 192,
    [676] = 192,
    [677] = 197,
    [678] = 197,
    [679] = 172,
    [680] = 172,
    [681] = 192,
    [682] = 172,
    [683] = 197,
    [684] = 172,
    [685] = 172,
    [686] = 163,
    [687] = 183,
    [688] = 163,
    [689] = 175,
    [690] = 184,
    [691] = 175,
    [692] = 186,
    [693] = 175,
    [694] = 175,
    [695] = 175,
    [696] = 198,
    [697] = 204,
    [698] = 172,
    [699] = 197,
    [700] = 172,
    [701] = 172,
    [702] = 198,
    [703] = 216,
    [704] = 172,
    [705] = 197,
    [706] = 204,
    [707] = 172,
    [708] = 197,
    [709] = 172,
    [710] = 172,
    [711] = 181,
    [712] = 172,
    [713] = 181,
    [714] = 172,
    [715] = 226,
    [716] = 187,
    [717] = 192,
    [718] = 172,
    [719] = 197,
    [720] = 172,
    [721] = 172,
    [722] = 173,
    [723] = 227,
    [724] = 187,
    [725] = 163,
    [726] = 228,
    [727] = 187,
    [728] = 226,
    [729] = 187,
    [730] = 192,
    [731] = 172,
    [732] = 197,
    [733] = 172,
    [734] = 172,
    [735] = 192,
    [736] = 172,
    [737] = 197,
    [738] = 192,
    [739] = 172,
    [740] = 197,
    [741] = 172,
    [742] = 172,
    [743] = 173,
    [744] = 179,
    [745] = 173,
    [746] = 173,
    [747] = 229,
    [748] = 226,
    [749] = 187,
    [750] = 230,
    [751] = 179,
    [752] = 187,
    [753] = 192,
    [754] = 172,
    [755] = 197,
    [756] = 172,
    [757] = 172,
    [758] = 187,
    [759] = 192,
    [760] = 197,
    [761] = 172,
    [762] = 192,
    [763] = 172,
    [764] = 197,
    [765] = 159,
    [766] = 172,
    [767] = 172,
    [768] = 172,
    [769] = 163,
    [770] = 183,
    [771] = 163,
    [772] = 173,
    [773] = 184,
    [774] = 173,
    [775] = 186,
    [776] = 173,
    [777] = 173,
    [778] = 173,
    [779] = 234,
    [780] = 192,
    [781] = 187,
    [782] = 192,
    [783] = 172,
    [784] = 197,
    [785] = 172,
    [786] = 172,
    [787] = 197,
    [788] = 179,
    [789] = 170,
    [790] = 170,
    [791] = 163,
    [792] = 183,
    [793] = 163,
    [794] = 170,
    [795] = 184,
    [796] = 170,
    [797] = 186,
    [798] = 170,
    [799] = 170,
    [800] = 170,
    [801] = 152,
    [802] = 166,
    [803] = 169,
    [804] = 152,
    [805] = 175,
    [806] = 164,
    [807] = 181,
    [808] = 135,
    [809] = 135,
    [810] = 187,
    [811] = 187,
    [812] = 192,
    [813] = 135,
    [814] = 197,
    [815] = 135,
    [816] = 135,
    [817] = 192,
    [818] = 135,
    [819] = 197,
    [820] = 135,
    [821] = 135,
    [822] = 198,
    [823] = 204,
    [824] = 135,
    [825] = 197,
    [826] = 135,
    [827] = 135,
    [828] = 198,
    [829] = 216,
    [830] = 135,
    [831] = 197,
    [832] = 204,
    [833] = 135,
    [834] = 197,
    [835] = 135,
    [836] = 135,
    [837] = 181,
    [838] = 135,
    [839] = 181,
    [840] = 135,
    [841] = 226,
    [842] = 187,
    [843] = 192,
    [844] = 135,
    [845] = 197,
    [846] = 135,
    [847] = 135,
    [848] = 155,
    [849] = 227,
    [850] = 187,
    [851] = 163,
    [852] = 228,
    [853] = 187,
    [854] = 226,
    [855] = 187,
    [856] = 192,
    [857] = 135,
    [858] = 197,
    [859] = 135,
    [860] = 135,
    [861] = 192,
    [862] = 135,
    [863] = 197,
    [864] = 192,
    [865] = 135,
    [866] = 197,
    [867] = 135,
    [868] = 172,
    [869] = 155,
    [870] = 179,
    [871] = 155,
    [872] = 155,
    [873] = 229,
    [874] = 226,
    [875] = 187,
    [876] = 230,
    [877] = 179,
    [878] = 187,
    [879] = 192,
    [880] = 135,
    [881] = 197,
    [882] = 135,
    [883] = 135,
    [884] = 187,
    [885] = 192,
    [886] = 197,
    [887] = 135,
    [888] = 192,
    [889] = 135,
    [890] = 197,
    [891] = 159,
    [892] = 135,
    [893] = 135,
    [894] = 135,
    [895] = 163,
    [896] = 183,
    [897] = 163,
    [898] = 155,
    [899] = 184,
    [900] = 155,
    [901] = 186,
    [902] = 155,
    [903] = 155,
    [904] = 155,
    [905] = 234,
    [906] = 192,
    [907] = 187,
    [908] = 192,
    [909] = 135,
    [910] = 197,
    [911] = 135,
    [912] = 135,
    [913] = 197,
    [914] = 178,
    [915] = 134,
    [916] = 164,
    [917] = 164,
    [918] = 164,
    [919] = 164,
    [920] = 135,
    [921] = 135,
    [922] = 135,
    [923] = 135,
    [924] = 135,
    [925] = 134,
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
        [anon_sym_super] = 48,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [1] = {
        [ts_builtin_sym_end] = 54,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [2] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 58,
        [ts_builtin_sym_end] = 60,
        [anon_sym_while] = 62,
        [anon_sym_until] = 64,
        [anon_sym_if] = 66,
        [anon_sym_unless] = 68,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [3] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [ts_builtin_sym_end] = 74,
        [anon_sym_while] = 74,
        [anon_sym_until] = 74,
        [anon_sym_if] = 74,
        [anon_sym_unless] = 74,
        [sym_comment] = 52,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [4] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [ts_builtin_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [sym_comment] = 52,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [5] = {
        [anon_sym_do] = 78,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [6] = {
        [anon_sym_do] = 80,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [7] = {
        [sym__terminator] = 82,
        [aux_sym_program_repeat1] = 82,
        [ts_builtin_sym_end] = 82,
        [anon_sym_while] = 82,
        [anon_sym_until] = 82,
        [anon_sym_if] = 82,
        [anon_sym_unless] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [8] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [ts_builtin_sym_end] = 84,
        [anon_sym_COLON_COLON] = 86,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_LBRACK] = 88,
        [anon_sym_DOT] = 90,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [9] = {
        [sym__terminator] = 92,
        [aux_sym_program_repeat1] = 92,
        [ts_builtin_sym_end] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_while] = 92,
        [anon_sym_until] = 92,
        [anon_sym_if] = 92,
        [anon_sym_unless] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [10] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [11] = {
        [sym__function_name] = 96,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [12] = {
        [sym__function_name] = 100,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [13] = {
        [sym__function_name] = 104,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [14] = {
        [sym__statement] = 108,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 132,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [15] = {
        [sym_identifier] = 152,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [16] = {
        [sym_identifier] = 154,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [17] = {
        [sym_identifier] = 156,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [18] = {
        [sym_condition] = 158,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [19] = {
        [sym_condition] = 176,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [20] = {
        [sym_condition] = 178,
        [sym__expression] = 180,
        [sym__argument] = 182,
        [sym__primary] = 184,
        [sym_scope_resolution_expression] = 186,
        [sym_subscript_expression] = 186,
        [sym_member_access] = 186,
        [sym__lhs] = 188,
        [sym__variable] = 186,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 52,
        [sym_symbol] = 182,
        [sym__line_break] = 52,
    },
    [21] = {
        [sym_condition] = 196,
        [sym__expression] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym_member_access] = 204,
        [sym__lhs] = 206,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [sym_identifier] = 212,
        [sym_comment] = 52,
        [sym_symbol] = 200,
        [sym__line_break] = 52,
    },
    [22] = {
        [sym__primary] = 214,
        [sym_scope_resolution_expression] = 216,
        [sym_subscript_expression] = 216,
        [sym_member_access] = 216,
        [sym__lhs] = 218,
        [sym__variable] = 216,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [23] = {
        [sym__call_arguments] = 226,
        [sym__command] = 228,
        [sym__argument] = 230,
        [sym__primary] = 232,
        [sym_scope_resolution_expression] = 234,
        [sym_subscript_expression] = 234,
        [sym_member_access] = 234,
        [sym__lhs] = 236,
        [sym__variable] = 234,
        [anon_sym_do] = 238,
        [anon_sym_LPAREN] = 240,
        [anon_sym_COLON_COLON] = 242,
        [anon_sym_super] = 244,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [sym_identifier] = 246,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [24] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_while] = 248,
        [anon_sym_until] = 248,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [25] = {
        [anon_sym_do] = 250,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [26] = {
        [anon_sym_do] = 252,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 254,
        [anon_sym_do] = 252,
        [anon_sym_COMMA] = 256,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [28] = {
        [aux_sym__call_arguments_repeat1] = 84,
        [anon_sym_do] = 84,
        [anon_sym_COMMA] = 84,
        [anon_sym_COLON_COLON] = 258,
        [anon_sym_LBRACK] = 260,
        [anon_sym_DOT] = 262,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [29] = {
        [aux_sym__call_arguments_repeat1] = 92,
        [anon_sym_do] = 92,
        [anon_sym_COMMA] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [30] = {
        [aux_sym__call_arguments_repeat1] = 94,
        [anon_sym_do] = 94,
        [anon_sym_COMMA] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [31] = {
        [sym__statement] = 264,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 266,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [32] = {
        [sym_identifier] = 268,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [33] = {
        [sym__call_arguments] = 226,
        [sym__command] = 228,
        [sym__argument] = 230,
        [sym__primary] = 232,
        [sym_scope_resolution_expression] = 234,
        [sym_subscript_expression] = 234,
        [sym_member_access] = 234,
        [sym__lhs] = 236,
        [sym__variable] = 234,
        [anon_sym_LPAREN] = 240,
        [anon_sym_COLON_COLON] = 242,
        [anon_sym_super] = 244,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [sym_identifier] = 246,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [34] = {
        [aux_sym__call_arguments_repeat1] = 248,
        [anon_sym_do] = 248,
        [anon_sym_COMMA] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [35] = {
        [aux_sym__call_arguments_repeat1] = 270,
        [anon_sym_do] = 270,
        [anon_sym_COMMA] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [36] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 274,
        [anon_sym_RPAREN] = 276,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [37] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_RPAREN] = 74,
        [anon_sym_while] = 74,
        [anon_sym_until] = 74,
        [anon_sym_if] = 74,
        [anon_sym_unless] = 74,
        [sym_comment] = 52,
        [sym__line_break] = 74,
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
        [sym_comment] = 52,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [39] = {
        [anon_sym_do] = 286,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [40] = {
        [sym__terminator] = 82,
        [aux_sym_program_repeat1] = 82,
        [anon_sym_RPAREN] = 82,
        [anon_sym_while] = 82,
        [anon_sym_until] = 82,
        [anon_sym_if] = 82,
        [anon_sym_unless] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [41] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_RPAREN] = 84,
        [anon_sym_COLON_COLON] = 288,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_LBRACK] = 290,
        [anon_sym_DOT] = 292,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [42] = {
        [sym__terminator] = 92,
        [aux_sym_program_repeat1] = 92,
        [anon_sym_RPAREN] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_while] = 92,
        [anon_sym_until] = 92,
        [anon_sym_if] = 92,
        [anon_sym_unless] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
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
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [44] = {
        [sym__function_name] = 294,
        [anon_sym_PIPE] = 296,
        [anon_sym_STAR] = 296,
        [anon_sym_AMP] = 296,
        [anon_sym_LT] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 296,
        [anon_sym_CARET] = 296,
        [anon_sym_LT_EQ_GT] = 296,
        [anon_sym_EQ_EQ] = 296,
        [anon_sym_EQ_EQ_EQ] = 296,
        [anon_sym_EQ_TILDE] = 296,
        [anon_sym_GT] = 296,
        [anon_sym_GT_EQ] = 296,
        [anon_sym_LT_EQ] = 296,
        [anon_sym_PLUS] = 296,
        [anon_sym_DASH] = 296,
        [anon_sym_SLASH] = 296,
        [anon_sym_PERCENT] = 296,
        [anon_sym_STAR_STAR] = 296,
        [anon_sym_LT_LT] = 296,
        [anon_sym_GT_GT] = 296,
        [anon_sym_TILDE] = 296,
        [anon_sym_PLUS_AT] = 296,
        [anon_sym_DASH_AT] = 296,
        [anon_sym_LBRACK_RBRACK] = 296,
        [anon_sym_LBRACK_RBRACK_EQ] = 296,
        [sym__line_break] = 52,
    },
    [45] = {
        [sym__function_name] = 298,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [46] = {
        [sym__function_name] = 300,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [47] = {
        [sym__statement] = 302,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 304,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [48] = {
        [aux_sym__call_arguments_repeat1] = 306,
        [anon_sym_do] = 306,
        [anon_sym_COMMA] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [49] = {
        [sym_identifier] = 308,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [50] = {
        [sym_identifier] = 310,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [51] = {
        [sym_identifier] = 312,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [52] = {
        [sym_condition] = 314,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [53] = {
        [sym_condition] = 316,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [54] = {
        [sym_condition] = 318,
        [sym__expression] = 180,
        [sym__argument] = 182,
        [sym__primary] = 184,
        [sym_scope_resolution_expression] = 186,
        [sym_subscript_expression] = 186,
        [sym_member_access] = 186,
        [sym__lhs] = 188,
        [sym__variable] = 186,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 52,
        [sym_symbol] = 182,
        [sym__line_break] = 52,
    },
    [55] = {
        [sym_condition] = 320,
        [sym__expression] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym_member_access] = 204,
        [sym__lhs] = 206,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [sym_identifier] = 212,
        [sym_comment] = 52,
        [sym_symbol] = 200,
        [sym__line_break] = 52,
    },
    [56] = {
        [sym__primary] = 214,
        [sym_scope_resolution_expression] = 216,
        [sym_subscript_expression] = 216,
        [sym_member_access] = 216,
        [sym__lhs] = 322,
        [sym__variable] = 216,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [57] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [anon_sym_RPAREN] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_while] = 248,
        [anon_sym_until] = 248,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [58] = {
        [anon_sym_COLON_COLON] = 324,
        [anon_sym_LBRACK] = 326,
        [anon_sym_DOT] = 328,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [59] = {
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_in] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [60] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 330,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [61] = {
        [sym__statement] = 332,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 334,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [62] = {
        [sym_identifier] = 336,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [63] = {
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_in] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [64] = {
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_in] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [65] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_RPAREN] = 340,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [66] = {
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [67] = {
        [sym__statement] = 342,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [68] = {
        [anon_sym_RPAREN] = 344,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [69] = {
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [70] = {
        [sym__expression] = 348,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 130,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [71] = {
        [sym__expression] = 350,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 130,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [72] = {
        [sym__expression] = 352,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 130,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [73] = {
        [sym__expression] = 354,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_LPAREN] = 130,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [74] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym_else_block] = 358,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [sym__terminator] = 358,
        [aux_sym_program_repeat1] = 358,
        [aux_sym__then_elsif_else_block_repeat1] = 358,
        [ts_builtin_sym_end] = 358,
        [anon_sym_end] = 358,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_RPAREN] = 358,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_else] = 358,
        [anon_sym_elsif] = 358,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 358,
    },
    [75] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
    },
    [76] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_RPAREN] = 360,
        [anon_sym_while] = 360,
        [anon_sym_until] = 360,
        [anon_sym_if] = 360,
        [anon_sym_unless] = 360,
        [sym_comment] = 52,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [77] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_RPAREN] = 362,
        [anon_sym_while] = 362,
        [anon_sym_until] = 362,
        [anon_sym_if] = 362,
        [anon_sym_unless] = 362,
        [sym_comment] = 52,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [78] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_RPAREN] = 364,
        [anon_sym_while] = 364,
        [anon_sym_until] = 364,
        [anon_sym_if] = 364,
        [anon_sym_unless] = 364,
        [sym_comment] = 52,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [79] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_RPAREN] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [sym_comment] = 52,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [80] = {
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [81] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_RPAREN] = 372,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [82] = {
        [anon_sym_RPAREN] = 374,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [83] = {
        [sym__expression] = 376,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [84] = {
        [sym__statement_block] = 378,
        [sym__do_block] = 380,
        [sym__terminator] = 382,
        [anon_sym_do] = 384,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [85] = {
        [sym__statement_block] = 82,
        [sym__do_block] = 82,
        [sym__terminator] = 82,
        [anon_sym_do] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [86] = {
        [sym__statement_block] = 84,
        [sym__do_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_do] = 84,
        [anon_sym_COLON_COLON] = 390,
        [anon_sym_LBRACK] = 392,
        [anon_sym_DOT] = 394,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [87] = {
        [sym__statement_block] = 92,
        [sym__do_block] = 92,
        [sym__terminator] = 92,
        [anon_sym_do] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [88] = {
        [sym__statement_block] = 94,
        [sym__do_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_do] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [89] = {
        [sym__statement] = 396,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 398,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [90] = {
        [sym_identifier] = 400,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [91] = {
        [sym__statement_block] = 248,
        [sym__do_block] = 248,
        [sym__terminator] = 248,
        [anon_sym_do] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [92] = {
        [sym__statement_block] = 270,
        [sym__do_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_do] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [93] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 402,
        [anon_sym_RPAREN] = 404,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [94] = {
        [sym__statement_block] = 306,
        [sym__do_block] = 306,
        [sym__terminator] = 306,
        [anon_sym_do] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [95] = {
        [anon_sym_RPAREN] = 406,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [96] = {
        [sym__statement_block] = 346,
        [sym__do_block] = 346,
        [sym__terminator] = 346,
        [anon_sym_do] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [97] = {
        [sym__statement_block] = 368,
        [sym__do_block] = 368,
        [sym__terminator] = 368,
        [anon_sym_do] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [98] = {
        [sym_identifier] = 408,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [99] = {
        [sym__argument] = 410,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 422,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [100] = {
        [sym_identifier] = 426,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [101] = {
        [sym__statement_block] = 428,
        [sym__do_block] = 428,
        [sym__terminator] = 428,
        [anon_sym_do] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [102] = {
        [aux_sym__call_arguments_repeat1] = 430,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 434,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [103] = {
        [aux_sym__call_arguments_repeat1] = 84,
        [anon_sym_COMMA] = 84,
        [anon_sym_COLON_COLON] = 436,
        [anon_sym_LBRACK] = 438,
        [anon_sym_RBRACK] = 84,
        [anon_sym_DOT] = 440,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [104] = {
        [aux_sym__call_arguments_repeat1] = 92,
        [anon_sym_COMMA] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_RBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [105] = {
        [aux_sym__call_arguments_repeat1] = 94,
        [anon_sym_COMMA] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_RBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [106] = {
        [sym__statement] = 442,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 444,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [107] = {
        [sym_identifier] = 446,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [108] = {
        [sym__statement_block] = 448,
        [sym__do_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_do] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [109] = {
        [aux_sym__call_arguments_repeat1] = 248,
        [anon_sym_COMMA] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_RBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [110] = {
        [aux_sym__call_arguments_repeat1] = 270,
        [anon_sym_COMMA] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_RBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [111] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_RPAREN] = 452,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [112] = {
        [aux_sym__call_arguments_repeat1] = 306,
        [anon_sym_COMMA] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_RBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [113] = {
        [anon_sym_RPAREN] = 454,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [114] = {
        [aux_sym__call_arguments_repeat1] = 346,
        [anon_sym_COMMA] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_RBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [115] = {
        [aux_sym__call_arguments_repeat1] = 368,
        [anon_sym_COMMA] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_RBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [116] = {
        [sym_identifier] = 456,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [117] = {
        [sym__argument] = 458,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 460,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [118] = {
        [sym_identifier] = 462,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [119] = {
        [aux_sym__call_arguments_repeat1] = 428,
        [anon_sym_COMMA] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_RBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [120] = {
        [aux_sym__call_arguments_repeat1] = 464,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 466,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [121] = {
        [aux_sym__call_arguments_repeat1] = 448,
        [anon_sym_COMMA] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_RBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [122] = {
        [anon_sym_RBRACK] = 468,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [123] = {
        [sym__argument] = 470,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [124] = {
        [aux_sym__call_arguments_repeat1] = 472,
        [anon_sym_COMMA] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_RBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [125] = {
        [aux_sym__call_arguments_repeat1] = 474,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 476,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [126] = {
        [anon_sym_RBRACK] = 478,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [127] = {
        [aux_sym__call_arguments_repeat1] = 480,
        [anon_sym_COMMA] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_RBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [128] = {
        [aux_sym__call_arguments_repeat1] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_RBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [129] = {
        [anon_sym_RBRACK] = 484,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [130] = {
        [sym__statement_block] = 472,
        [sym__do_block] = 472,
        [sym__terminator] = 472,
        [anon_sym_do] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [131] = {
        [sym__statement_block] = 480,
        [sym__do_block] = 480,
        [sym__terminator] = 480,
        [anon_sym_do] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [132] = {
        [sym__statement_block] = 482,
        [sym__do_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_do] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [133] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_RPAREN] = 486,
        [anon_sym_while] = 486,
        [anon_sym_until] = 486,
        [anon_sym_if] = 486,
        [anon_sym_unless] = 486,
        [sym_comment] = 52,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [134] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [anon_sym_RPAREN] = 488,
        [anon_sym_while] = 488,
        [anon_sym_until] = 488,
        [anon_sym_if] = 488,
        [anon_sym_unless] = 488,
        [sym_comment] = 52,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [135] = {
        [sym__statement] = 490,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 506,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [136] = {
        [sym__statement] = 534,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 536,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [137] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_argument_list] = 358,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym__statement_block] = 358,
        [sym__do_block] = 358,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [sym__terminator] = 358,
        [aux_sym_class_declaration_repeat1] = 358,
        [anon_sym_do] = 358,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_STAR] = 358,
        [anon_sym_AMP] = 358,
        [anon_sym_class] = 356,
        [anon_sym_LT] = 358,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 358,
    },
    [138] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
    },
    [139] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_end] = 542,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [140] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_while] = 74,
        [anon_sym_until] = 74,
        [anon_sym_if] = 74,
        [anon_sym_unless] = 74,
        [sym_comment] = 52,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [141] = {
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [sym_comment] = 52,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [142] = {
        [anon_sym_do] = 552,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [143] = {
        [sym__terminator] = 82,
        [aux_sym_program_repeat1] = 82,
        [anon_sym_end] = 82,
        [anon_sym_while] = 82,
        [anon_sym_until] = 82,
        [anon_sym_if] = 82,
        [anon_sym_unless] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [144] = {
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_COLON_COLON] = 554,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_LBRACK] = 556,
        [anon_sym_DOT] = 558,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [145] = {
        [sym__terminator] = 92,
        [aux_sym_program_repeat1] = 92,
        [anon_sym_end] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_while] = 92,
        [anon_sym_until] = 92,
        [anon_sym_if] = 92,
        [anon_sym_unless] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [146] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [147] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_RPAREN] = 560,
        [anon_sym_while] = 560,
        [anon_sym_until] = 560,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 560,
        [sym_comment] = 52,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [148] = {
        [sym__function_name] = 562,
        [anon_sym_PIPE] = 564,
        [anon_sym_STAR] = 564,
        [anon_sym_AMP] = 564,
        [anon_sym_LT] = 564,
        [sym_identifier] = 564,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 564,
        [anon_sym_CARET] = 564,
        [anon_sym_LT_EQ_GT] = 564,
        [anon_sym_EQ_EQ] = 564,
        [anon_sym_EQ_EQ_EQ] = 564,
        [anon_sym_EQ_TILDE] = 564,
        [anon_sym_GT] = 564,
        [anon_sym_GT_EQ] = 564,
        [anon_sym_LT_EQ] = 564,
        [anon_sym_PLUS] = 564,
        [anon_sym_DASH] = 564,
        [anon_sym_SLASH] = 564,
        [anon_sym_PERCENT] = 564,
        [anon_sym_STAR_STAR] = 564,
        [anon_sym_LT_LT] = 564,
        [anon_sym_GT_GT] = 564,
        [anon_sym_TILDE] = 564,
        [anon_sym_PLUS_AT] = 564,
        [anon_sym_DASH_AT] = 564,
        [anon_sym_LBRACK_RBRACK] = 564,
        [anon_sym_LBRACK_RBRACK_EQ] = 564,
        [sym__line_break] = 52,
    },
    [149] = {
        [sym__function_name] = 566,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [150] = {
        [sym__function_name] = 568,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [151] = {
        [sym__statement] = 570,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 572,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [152] = {
        [sym_identifier] = 574,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [153] = {
        [sym_identifier] = 576,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [154] = {
        [sym_identifier] = 578,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [155] = {
        [sym_condition] = 580,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [156] = {
        [sym_condition] = 582,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [157] = {
        [sym_condition] = 584,
        [sym__expression] = 180,
        [sym__argument] = 182,
        [sym__primary] = 184,
        [sym_scope_resolution_expression] = 186,
        [sym_subscript_expression] = 186,
        [sym_member_access] = 186,
        [sym__lhs] = 188,
        [sym__variable] = 186,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 52,
        [sym_symbol] = 182,
        [sym__line_break] = 52,
    },
    [158] = {
        [sym_condition] = 586,
        [sym__expression] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym_member_access] = 204,
        [sym__lhs] = 206,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [sym_identifier] = 212,
        [sym_comment] = 52,
        [sym_symbol] = 200,
        [sym__line_break] = 52,
    },
    [159] = {
        [sym__primary] = 214,
        [sym_scope_resolution_expression] = 216,
        [sym_subscript_expression] = 216,
        [sym_member_access] = 216,
        [sym__lhs] = 588,
        [sym__variable] = 216,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [160] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [anon_sym_end] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_while] = 248,
        [anon_sym_until] = 248,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [161] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 590,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [162] = {
        [sym__expression] = 592,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [163] = {
        [sym__statement_block] = 594,
        [sym__do_block] = 596,
        [sym__terminator] = 598,
        [anon_sym_do] = 600,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [164] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_end] = 486,
        [anon_sym_while] = 486,
        [anon_sym_until] = 486,
        [anon_sym_if] = 486,
        [anon_sym_unless] = 486,
        [sym_comment] = 52,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [165] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [anon_sym_end] = 488,
        [anon_sym_while] = 488,
        [anon_sym_until] = 488,
        [anon_sym_if] = 488,
        [anon_sym_unless] = 488,
        [sym_comment] = 52,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [166] = {
        [sym__statement] = 602,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 604,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [167] = {
        [sym__statement] = 606,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 608,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [168] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 612,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [169] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 560,
        [anon_sym_while] = 560,
        [anon_sym_until] = 560,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 560,
        [sym_comment] = 52,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [170] = {
        [sym__statement] = 614,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [171] = {
        [anon_sym_end] = 616,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [172] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_end] = 618,
        [anon_sym_while] = 618,
        [anon_sym_until] = 618,
        [anon_sym_if] = 618,
        [anon_sym_unless] = 618,
        [sym_comment] = 52,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [173] = {
        [sym__expression] = 620,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [174] = {
        [sym__expression] = 622,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [175] = {
        [sym__expression] = 624,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [176] = {
        [sym__expression] = 626,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [177] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_while] = 360,
        [anon_sym_until] = 360,
        [anon_sym_if] = 360,
        [anon_sym_unless] = 360,
        [sym_comment] = 52,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [178] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 362,
        [anon_sym_while] = 362,
        [anon_sym_until] = 362,
        [anon_sym_if] = 362,
        [anon_sym_unless] = 362,
        [sym_comment] = 52,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [179] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_end] = 364,
        [anon_sym_while] = 364,
        [anon_sym_until] = 364,
        [anon_sym_if] = 364,
        [anon_sym_unless] = 364,
        [sym_comment] = 52,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [180] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [sym_comment] = 52,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [181] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_while] = 628,
        [anon_sym_until] = 628,
        [anon_sym_if] = 628,
        [anon_sym_unless] = 628,
        [sym_comment] = 52,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [182] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_end] = 372,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [183] = {
        [anon_sym_end] = 374,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [184] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 634,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [185] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 636,
        [anon_sym_while] = 636,
        [anon_sym_until] = 636,
        [anon_sym_if] = 636,
        [anon_sym_unless] = 636,
        [sym_comment] = 52,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [186] = {
        [anon_sym_end] = 638,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [187] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_end] = 640,
        [anon_sym_while] = 640,
        [anon_sym_until] = 640,
        [anon_sym_if] = 640,
        [anon_sym_unless] = 640,
        [sym_comment] = 52,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [188] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 52,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [189] = {
        [sym_then_block] = 644,
        [sym__then_else_block] = 646,
        [sym__terminator] = 648,
        [anon_sym_then] = 648,
        [sym_comment] = 52,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 652,
    },
    [190] = {
        [sym_then_block] = 654,
        [sym__then_else_block] = 654,
        [sym__terminator] = 654,
        [anon_sym_then] = 654,
        [sym_comment] = 52,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [191] = {
        [sym_then_block] = 82,
        [sym__then_else_block] = 82,
        [sym__terminator] = 82,
        [anon_sym_then] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [192] = {
        [sym_then_block] = 84,
        [sym__then_else_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_COLON_COLON] = 656,
        [anon_sym_then] = 84,
        [anon_sym_LBRACK] = 658,
        [anon_sym_DOT] = 660,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [193] = {
        [sym_then_block] = 92,
        [sym__then_else_block] = 92,
        [sym__terminator] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_then] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [194] = {
        [sym_then_block] = 94,
        [sym__then_else_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [195] = {
        [sym__statement] = 662,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 664,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [196] = {
        [sym_identifier] = 666,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [197] = {
        [sym_then_block] = 248,
        [sym__then_else_block] = 248,
        [sym__terminator] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_then] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [198] = {
        [sym_then_block] = 270,
        [sym__then_else_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [199] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 668,
        [anon_sym_RPAREN] = 670,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [200] = {
        [sym_then_block] = 306,
        [sym__then_else_block] = 306,
        [sym__terminator] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_then] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [201] = {
        [anon_sym_RPAREN] = 672,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [202] = {
        [sym_then_block] = 346,
        [sym__then_else_block] = 346,
        [sym__terminator] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_then] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [203] = {
        [sym_then_block] = 368,
        [sym__then_else_block] = 368,
        [sym__terminator] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_then] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [204] = {
        [sym_identifier] = 674,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [205] = {
        [sym__argument] = 676,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 678,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [206] = {
        [sym_identifier] = 680,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [207] = {
        [sym_then_block] = 428,
        [sym__then_else_block] = 428,
        [sym__terminator] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_then] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [208] = {
        [aux_sym__call_arguments_repeat1] = 682,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 684,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [209] = {
        [sym_then_block] = 448,
        [sym__then_else_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_then] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [210] = {
        [anon_sym_RBRACK] = 686,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [211] = {
        [sym_then_block] = 472,
        [sym__then_else_block] = 472,
        [sym__terminator] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_then] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [212] = {
        [sym_then_block] = 480,
        [sym__then_else_block] = 480,
        [sym__terminator] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_then] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [213] = {
        [sym_then_block] = 482,
        [sym__then_else_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [214] = {
        [sym_else_block] = 688,
        [anon_sym_end] = 690,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [215] = {
        [sym__terminator] = 694,
        [aux_sym_program_repeat1] = 694,
        [anon_sym_end] = 694,
        [anon_sym_while] = 694,
        [anon_sym_until] = 694,
        [anon_sym_if] = 694,
        [anon_sym_unless] = 694,
        [sym_comment] = 52,
        [sym__line_break] = 694,
        [anon_sym_SEMI] = 694,
    },
    [216] = {
        [sym__statement] = 696,
        [sym__declaration] = 698,
        [sym_method_declaration] = 700,
        [sym_class_declaration] = 700,
        [sym_module_declaration] = 700,
        [sym_while_statement] = 698,
        [sym_until_statement] = 698,
        [sym_if_statement] = 698,
        [sym_unless_statement] = 698,
        [sym_for_statement] = 698,
        [sym_if_modifier] = 698,
        [sym_unless_modifier] = 698,
        [sym_while_modifier] = 698,
        [sym_until_modifier] = 698,
        [sym_else_block] = 702,
        [sym__call] = 704,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 698,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_end] = 702,
        [anon_sym_undef] = 714,
        [anon_sym_alias] = 716,
        [anon_sym_def] = 718,
        [anon_sym_LPAREN] = 720,
        [anon_sym_class] = 722,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_module] = 726,
        [anon_sym_while] = 728,
        [anon_sym_until] = 730,
        [anon_sym_if] = 732,
        [anon_sym_unless] = 734,
        [anon_sym_for] = 736,
        [anon_sym_else] = 702,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [217] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym_then_block] = 358,
        [sym_else_block] = 356,
        [sym__then_else_block] = 358,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [sym__terminator] = 358,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_then] = 358,
        [anon_sym_else] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 358,
    },
    [218] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym_else_block] = 356,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_else] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
    },
    [219] = {
        [sym_else_block] = 740,
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 744,
        [anon_sym_end] = 740,
        [anon_sym_while] = 746,
        [anon_sym_until] = 748,
        [anon_sym_if] = 750,
        [anon_sym_unless] = 752,
        [anon_sym_else] = 740,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [220] = {
        [sym_else_block] = 74,
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_while] = 74,
        [anon_sym_until] = 74,
        [anon_sym_if] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_else] = 74,
        [sym_comment] = 52,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [221] = {
        [sym_else_block] = 76,
        [sym__terminator] = 76,
        [aux_sym_program_repeat1] = 76,
        [anon_sym_end] = 76,
        [anon_sym_while] = 76,
        [anon_sym_until] = 76,
        [anon_sym_if] = 76,
        [anon_sym_unless] = 76,
        [anon_sym_else] = 76,
        [sym_comment] = 52,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [222] = {
        [anon_sym_do] = 754,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [223] = {
        [sym_else_block] = 82,
        [sym__terminator] = 82,
        [aux_sym_program_repeat1] = 82,
        [anon_sym_end] = 82,
        [anon_sym_while] = 82,
        [anon_sym_until] = 82,
        [anon_sym_if] = 82,
        [anon_sym_unless] = 82,
        [anon_sym_else] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [224] = {
        [sym_else_block] = 84,
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_COLON_COLON] = 756,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_else] = 84,
        [anon_sym_LBRACK] = 758,
        [anon_sym_DOT] = 760,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [225] = {
        [sym_else_block] = 92,
        [sym__terminator] = 92,
        [aux_sym_program_repeat1] = 92,
        [anon_sym_end] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_while] = 92,
        [anon_sym_until] = 92,
        [anon_sym_if] = 92,
        [anon_sym_unless] = 92,
        [anon_sym_else] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [226] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [227] = {
        [sym__function_name] = 762,
        [anon_sym_PIPE] = 764,
        [anon_sym_STAR] = 764,
        [anon_sym_AMP] = 764,
        [anon_sym_LT] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_LT_EQ_GT] = 764,
        [anon_sym_EQ_EQ] = 764,
        [anon_sym_EQ_EQ_EQ] = 764,
        [anon_sym_EQ_TILDE] = 764,
        [anon_sym_GT] = 764,
        [anon_sym_GT_EQ] = 764,
        [anon_sym_LT_EQ] = 764,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_SLASH] = 764,
        [anon_sym_PERCENT] = 764,
        [anon_sym_STAR_STAR] = 764,
        [anon_sym_LT_LT] = 764,
        [anon_sym_GT_GT] = 764,
        [anon_sym_TILDE] = 764,
        [anon_sym_PLUS_AT] = 764,
        [anon_sym_DASH_AT] = 764,
        [anon_sym_LBRACK_RBRACK] = 764,
        [anon_sym_LBRACK_RBRACK_EQ] = 764,
        [sym__line_break] = 52,
    },
    [228] = {
        [sym__function_name] = 766,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [229] = {
        [sym__function_name] = 768,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [230] = {
        [sym__statement] = 770,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 772,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [231] = {
        [sym_identifier] = 774,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [232] = {
        [sym_identifier] = 776,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [233] = {
        [sym_identifier] = 778,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [234] = {
        [sym_condition] = 780,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [235] = {
        [sym_condition] = 782,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [236] = {
        [sym_condition] = 784,
        [sym__expression] = 180,
        [sym__argument] = 182,
        [sym__primary] = 184,
        [sym_scope_resolution_expression] = 186,
        [sym_subscript_expression] = 186,
        [sym_member_access] = 186,
        [sym__lhs] = 188,
        [sym__variable] = 186,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 52,
        [sym_symbol] = 182,
        [sym__line_break] = 52,
    },
    [237] = {
        [sym_condition] = 786,
        [sym__expression] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym_member_access] = 204,
        [sym__lhs] = 206,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [sym_identifier] = 212,
        [sym_comment] = 52,
        [sym_symbol] = 200,
        [sym__line_break] = 52,
    },
    [238] = {
        [sym__primary] = 214,
        [sym_scope_resolution_expression] = 216,
        [sym_subscript_expression] = 216,
        [sym_member_access] = 216,
        [sym__lhs] = 788,
        [sym__variable] = 216,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [239] = {
        [sym_else_block] = 248,
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [anon_sym_end] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_while] = 248,
        [anon_sym_until] = 248,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_else] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [240] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 790,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [241] = {
        [sym__expression] = 792,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [242] = {
        [sym__statement_block] = 794,
        [sym__do_block] = 796,
        [sym__terminator] = 798,
        [anon_sym_do] = 800,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [243] = {
        [sym_else_block] = 486,
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_end] = 486,
        [anon_sym_while] = 486,
        [anon_sym_until] = 486,
        [anon_sym_if] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_else] = 486,
        [sym_comment] = 52,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [244] = {
        [sym_else_block] = 488,
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [anon_sym_end] = 488,
        [anon_sym_while] = 488,
        [anon_sym_until] = 488,
        [anon_sym_if] = 488,
        [anon_sym_unless] = 488,
        [anon_sym_else] = 488,
        [sym_comment] = 52,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [245] = {
        [sym__statement] = 802,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 804,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [246] = {
        [sym__statement] = 806,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 808,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [247] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 810,
        [anon_sym_end] = 812,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [248] = {
        [sym_else_block] = 560,
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 560,
        [anon_sym_while] = 560,
        [anon_sym_until] = 560,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_else] = 560,
        [sym_comment] = 52,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [249] = {
        [anon_sym_end] = 814,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [250] = {
        [sym_else_block] = 618,
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_end] = 618,
        [anon_sym_while] = 618,
        [anon_sym_until] = 618,
        [anon_sym_if] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_else] = 618,
        [sym_comment] = 52,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [251] = {
        [sym_else_block] = 628,
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_while] = 628,
        [anon_sym_until] = 628,
        [anon_sym_if] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_else] = 628,
        [sym_comment] = 52,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [252] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 816,
        [anon_sym_end] = 818,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [253] = {
        [sym_else_block] = 636,
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_end] = 636,
        [anon_sym_while] = 636,
        [anon_sym_until] = 636,
        [anon_sym_if] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_else] = 636,
        [sym_comment] = 52,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [254] = {
        [anon_sym_end] = 820,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [255] = {
        [sym_else_block] = 640,
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_end] = 640,
        [anon_sym_while] = 640,
        [anon_sym_until] = 640,
        [anon_sym_if] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_else] = 640,
        [sym_comment] = 52,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [256] = {
        [sym_else_block] = 642,
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [anon_sym_else] = 642,
        [sym_comment] = 52,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [257] = {
        [sym_then_block] = 822,
        [sym__then_else_block] = 824,
        [sym__terminator] = 648,
        [anon_sym_then] = 648,
        [sym_comment] = 52,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 652,
    },
    [258] = {
        [sym_else_block] = 826,
        [anon_sym_end] = 828,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [259] = {
        [sym_else_block] = 694,
        [sym__terminator] = 694,
        [aux_sym_program_repeat1] = 694,
        [anon_sym_end] = 694,
        [anon_sym_while] = 694,
        [anon_sym_until] = 694,
        [anon_sym_if] = 694,
        [anon_sym_unless] = 694,
        [anon_sym_else] = 694,
        [sym_comment] = 52,
        [sym__line_break] = 694,
        [anon_sym_SEMI] = 694,
    },
    [260] = {
        [anon_sym_end] = 830,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [261] = {
        [sym_else_block] = 832,
        [sym__terminator] = 832,
        [aux_sym_program_repeat1] = 832,
        [anon_sym_end] = 832,
        [anon_sym_while] = 832,
        [anon_sym_until] = 832,
        [anon_sym_if] = 832,
        [anon_sym_unless] = 832,
        [anon_sym_else] = 832,
        [sym_comment] = 52,
        [sym__line_break] = 832,
        [anon_sym_SEMI] = 832,
    },
    [262] = {
        [sym__statement] = 834,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 836,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [263] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 838,
        [anon_sym_end] = 840,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [264] = {
        [anon_sym_end] = 842,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [265] = {
        [sym_else_block] = 844,
        [sym__terminator] = 844,
        [aux_sym_program_repeat1] = 844,
        [anon_sym_end] = 844,
        [anon_sym_while] = 844,
        [anon_sym_until] = 844,
        [anon_sym_if] = 844,
        [anon_sym_unless] = 844,
        [anon_sym_else] = 844,
        [sym_comment] = 52,
        [sym__line_break] = 844,
        [anon_sym_SEMI] = 844,
    },
    [266] = {
        [sym_then_block] = 846,
        [sym__then_elsif_else_block] = 848,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [267] = {
        [sym_then_block] = 654,
        [sym__then_elsif_else_block] = 654,
        [sym__terminator] = 654,
        [anon_sym_then] = 654,
        [sym_comment] = 52,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [268] = {
        [sym_then_block] = 82,
        [sym__then_elsif_else_block] = 82,
        [sym__terminator] = 82,
        [anon_sym_then] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [269] = {
        [sym_then_block] = 84,
        [sym__then_elsif_else_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_COLON_COLON] = 856,
        [anon_sym_then] = 84,
        [anon_sym_LBRACK] = 858,
        [anon_sym_DOT] = 860,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [270] = {
        [sym_then_block] = 92,
        [sym__then_elsif_else_block] = 92,
        [sym__terminator] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_then] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [271] = {
        [sym_then_block] = 94,
        [sym__then_elsif_else_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [272] = {
        [sym__statement] = 862,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 864,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [273] = {
        [sym_identifier] = 866,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [274] = {
        [sym_then_block] = 248,
        [sym__then_elsif_else_block] = 248,
        [sym__terminator] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_then] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [275] = {
        [sym_then_block] = 270,
        [sym__then_elsif_else_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [276] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 868,
        [anon_sym_RPAREN] = 870,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [277] = {
        [sym_then_block] = 306,
        [sym__then_elsif_else_block] = 306,
        [sym__terminator] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_then] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [278] = {
        [anon_sym_RPAREN] = 872,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [279] = {
        [sym_then_block] = 346,
        [sym__then_elsif_else_block] = 346,
        [sym__terminator] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_then] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [280] = {
        [sym_then_block] = 368,
        [sym__then_elsif_else_block] = 368,
        [sym__terminator] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_then] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [281] = {
        [sym_identifier] = 874,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [282] = {
        [sym__argument] = 876,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 878,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [283] = {
        [sym_identifier] = 880,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [284] = {
        [sym_then_block] = 428,
        [sym__then_elsif_else_block] = 428,
        [sym__terminator] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_then] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [285] = {
        [aux_sym__call_arguments_repeat1] = 882,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 884,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [286] = {
        [sym_then_block] = 448,
        [sym__then_elsif_else_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_then] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [287] = {
        [anon_sym_RBRACK] = 886,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [288] = {
        [sym_then_block] = 472,
        [sym__then_elsif_else_block] = 472,
        [sym__terminator] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_then] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [289] = {
        [sym_then_block] = 480,
        [sym__then_elsif_else_block] = 480,
        [sym__terminator] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_then] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [290] = {
        [sym_then_block] = 482,
        [sym__then_elsif_else_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [291] = {
        [sym_else_block] = 888,
        [aux_sym__then_elsif_else_block_repeat1] = 890,
        [anon_sym_end] = 892,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [292] = {
        [sym_else_block] = 896,
        [sym__terminator] = 896,
        [aux_sym_program_repeat1] = 896,
        [anon_sym_end] = 896,
        [anon_sym_while] = 896,
        [anon_sym_until] = 896,
        [anon_sym_if] = 896,
        [anon_sym_unless] = 896,
        [anon_sym_else] = 896,
        [sym_comment] = 52,
        [sym__line_break] = 896,
        [anon_sym_SEMI] = 896,
    },
    [293] = {
        [sym__statement] = 898,
        [sym__declaration] = 900,
        [sym_method_declaration] = 902,
        [sym_class_declaration] = 902,
        [sym_module_declaration] = 902,
        [sym_while_statement] = 900,
        [sym_until_statement] = 900,
        [sym_if_statement] = 900,
        [sym_unless_statement] = 900,
        [sym_for_statement] = 900,
        [sym_if_modifier] = 900,
        [sym_unless_modifier] = 900,
        [sym_while_modifier] = 900,
        [sym_until_modifier] = 900,
        [sym_else_block] = 702,
        [sym__call] = 904,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 900,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [aux_sym__then_elsif_else_block_repeat1] = 702,
        [anon_sym_end] = 702,
        [anon_sym_undef] = 914,
        [anon_sym_alias] = 916,
        [anon_sym_def] = 918,
        [anon_sym_LPAREN] = 920,
        [anon_sym_class] = 922,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_module] = 926,
        [anon_sym_while] = 928,
        [anon_sym_until] = 930,
        [anon_sym_if] = 932,
        [anon_sym_unless] = 934,
        [anon_sym_for] = 936,
        [anon_sym_else] = 702,
        [anon_sym_elsif] = 702,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [294] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym_then_block] = 358,
        [sym_else_block] = 356,
        [sym__then_elsif_else_block] = 358,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [sym__terminator] = 358,
        [aux_sym__then_elsif_else_block_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_then] = 358,
        [anon_sym_else] = 356,
        [anon_sym_elsif] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 358,
    },
    [295] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym_while_statement] = 356,
        [sym_until_statement] = 356,
        [sym_if_statement] = 356,
        [sym_unless_statement] = 356,
        [sym_for_statement] = 356,
        [sym_if_modifier] = 356,
        [sym_unless_modifier] = 356,
        [sym_while_modifier] = 356,
        [sym_until_modifier] = 356,
        [sym_else_block] = 356,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym_scope_resolution_expression] = 356,
        [sym_subscript_expression] = 356,
        [sym_member_access] = 356,
        [sym__lhs] = 356,
        [sym__variable] = 356,
        [aux_sym__then_elsif_else_block_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 356,
        [anon_sym_module] = 356,
        [anon_sym_while] = 356,
        [anon_sym_until] = 356,
        [anon_sym_if] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_for] = 356,
        [anon_sym_else] = 356,
        [anon_sym_elsif] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 52,
        [sym_symbol] = 356,
        [sym__line_break] = 52,
    },
    [296] = {
        [sym_else_block] = 740,
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 942,
        [aux_sym__then_elsif_else_block_repeat1] = 740,
        [anon_sym_end] = 740,
        [anon_sym_while] = 944,
        [anon_sym_until] = 946,
        [anon_sym_if] = 948,
        [anon_sym_unless] = 950,
        [anon_sym_else] = 740,
        [anon_sym_elsif] = 740,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [297] = {
        [sym_else_block] = 74,
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [aux_sym__then_elsif_else_block_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_while] = 74,
        [anon_sym_until] = 74,
        [anon_sym_if] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_else] = 74,
        [anon_sym_elsif] = 74,
        [sym_comment] = 52,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [298] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 76,
        [anon_sym_SEMI] = 76,
    },
    [299] = {
        [anon_sym_do] = 952,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [300] = {
        [sym_else_block] = 82,
        [sym__terminator] = 82,
        [aux_sym_program_repeat1] = 82,
        [aux_sym__then_elsif_else_block_repeat1] = 82,
        [anon_sym_end] = 82,
        [anon_sym_while] = 82,
        [anon_sym_until] = 82,
        [anon_sym_if] = 82,
        [anon_sym_unless] = 82,
        [anon_sym_else] = 82,
        [anon_sym_elsif] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [301] = {
        [sym_else_block] = 84,
        [sym__terminator] = 84,
        [aux_sym_program_repeat1] = 84,
        [aux_sym__then_elsif_else_block_repeat1] = 84,
        [anon_sym_end] = 84,
        [anon_sym_COLON_COLON] = 954,
        [anon_sym_while] = 84,
        [anon_sym_until] = 84,
        [anon_sym_if] = 84,
        [anon_sym_unless] = 84,
        [anon_sym_else] = 84,
        [anon_sym_elsif] = 84,
        [anon_sym_LBRACK] = 956,
        [anon_sym_DOT] = 958,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [302] = {
        [sym_else_block] = 92,
        [sym__terminator] = 92,
        [aux_sym_program_repeat1] = 92,
        [aux_sym__then_elsif_else_block_repeat1] = 92,
        [anon_sym_end] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_while] = 92,
        [anon_sym_until] = 92,
        [anon_sym_if] = 92,
        [anon_sym_unless] = 92,
        [anon_sym_else] = 92,
        [anon_sym_elsif] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [303] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [304] = {
        [sym__function_name] = 960,
        [anon_sym_PIPE] = 962,
        [anon_sym_STAR] = 962,
        [anon_sym_AMP] = 962,
        [anon_sym_LT] = 962,
        [sym_identifier] = 962,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 962,
        [anon_sym_CARET] = 962,
        [anon_sym_LT_EQ_GT] = 962,
        [anon_sym_EQ_EQ] = 962,
        [anon_sym_EQ_EQ_EQ] = 962,
        [anon_sym_EQ_TILDE] = 962,
        [anon_sym_GT] = 962,
        [anon_sym_GT_EQ] = 962,
        [anon_sym_LT_EQ] = 962,
        [anon_sym_PLUS] = 962,
        [anon_sym_DASH] = 962,
        [anon_sym_SLASH] = 962,
        [anon_sym_PERCENT] = 962,
        [anon_sym_STAR_STAR] = 962,
        [anon_sym_LT_LT] = 962,
        [anon_sym_GT_GT] = 962,
        [anon_sym_TILDE] = 962,
        [anon_sym_PLUS_AT] = 962,
        [anon_sym_DASH_AT] = 962,
        [anon_sym_LBRACK_RBRACK] = 962,
        [anon_sym_LBRACK_RBRACK_EQ] = 962,
        [sym__line_break] = 52,
    },
    [305] = {
        [sym__function_name] = 964,
        [anon_sym_PIPE] = 102,
        [anon_sym_STAR] = 102,
        [anon_sym_AMP] = 102,
        [anon_sym_LT] = 102,
        [sym_identifier] = 102,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [306] = {
        [sym__function_name] = 966,
        [anon_sym_PIPE] = 106,
        [anon_sym_STAR] = 106,
        [anon_sym_AMP] = 106,
        [anon_sym_LT] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [307] = {
        [sym__statement] = 968,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 970,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [308] = {
        [sym_identifier] = 972,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [309] = {
        [sym_identifier] = 974,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [310] = {
        [sym_identifier] = 976,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [311] = {
        [sym_condition] = 978,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [312] = {
        [sym_condition] = 980,
        [sym__expression] = 160,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [313] = {
        [sym_condition] = 982,
        [sym__expression] = 180,
        [sym__argument] = 182,
        [sym__primary] = 184,
        [sym_scope_resolution_expression] = 186,
        [sym_subscript_expression] = 186,
        [sym_member_access] = 186,
        [sym__lhs] = 188,
        [sym__variable] = 186,
        [anon_sym_LPAREN] = 190,
        [anon_sym_COLON_COLON] = 192,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [sym_identifier] = 194,
        [sym_comment] = 52,
        [sym_symbol] = 182,
        [sym__line_break] = 52,
    },
    [314] = {
        [sym_condition] = 984,
        [sym__expression] = 198,
        [sym__argument] = 200,
        [sym__primary] = 202,
        [sym_scope_resolution_expression] = 204,
        [sym_subscript_expression] = 204,
        [sym_member_access] = 204,
        [sym__lhs] = 206,
        [sym__variable] = 204,
        [anon_sym_LPAREN] = 208,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [sym_identifier] = 212,
        [sym_comment] = 52,
        [sym_symbol] = 200,
        [sym__line_break] = 52,
    },
    [315] = {
        [sym__primary] = 214,
        [sym_scope_resolution_expression] = 216,
        [sym_subscript_expression] = 216,
        [sym_member_access] = 216,
        [sym__lhs] = 986,
        [sym__variable] = 216,
        [anon_sym_LPAREN] = 220,
        [anon_sym_COLON_COLON] = 222,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [316] = {
        [sym_else_block] = 248,
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 248,
        [aux_sym__then_elsif_else_block_repeat1] = 248,
        [anon_sym_end] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_while] = 248,
        [anon_sym_until] = 248,
        [anon_sym_if] = 248,
        [anon_sym_unless] = 248,
        [anon_sym_else] = 248,
        [anon_sym_elsif] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [317] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 988,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [318] = {
        [sym__expression] = 990,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [319] = {
        [sym__statement_block] = 992,
        [sym__do_block] = 994,
        [sym__terminator] = 996,
        [anon_sym_do] = 998,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [320] = {
        [sym_else_block] = 486,
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [aux_sym__then_elsif_else_block_repeat1] = 486,
        [anon_sym_end] = 486,
        [anon_sym_while] = 486,
        [anon_sym_until] = 486,
        [anon_sym_if] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_else] = 486,
        [anon_sym_elsif] = 486,
        [sym_comment] = 52,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [321] = {
        [sym_else_block] = 488,
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [aux_sym__then_elsif_else_block_repeat1] = 488,
        [anon_sym_end] = 488,
        [anon_sym_while] = 488,
        [anon_sym_until] = 488,
        [anon_sym_if] = 488,
        [anon_sym_unless] = 488,
        [anon_sym_else] = 488,
        [anon_sym_elsif] = 488,
        [sym_comment] = 52,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [322] = {
        [sym__statement] = 1000,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1002,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [323] = {
        [sym__statement] = 1004,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1006,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [324] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1008,
        [anon_sym_end] = 1010,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [325] = {
        [sym_else_block] = 560,
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [aux_sym__then_elsif_else_block_repeat1] = 560,
        [anon_sym_end] = 560,
        [anon_sym_while] = 560,
        [anon_sym_until] = 560,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_else] = 560,
        [anon_sym_elsif] = 560,
        [sym_comment] = 52,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [326] = {
        [anon_sym_end] = 1012,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [327] = {
        [sym_else_block] = 618,
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [aux_sym__then_elsif_else_block_repeat1] = 618,
        [anon_sym_end] = 618,
        [anon_sym_while] = 618,
        [anon_sym_until] = 618,
        [anon_sym_if] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_else] = 618,
        [anon_sym_elsif] = 618,
        [sym_comment] = 52,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [328] = {
        [sym_else_block] = 628,
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [aux_sym__then_elsif_else_block_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_while] = 628,
        [anon_sym_until] = 628,
        [anon_sym_if] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_else] = 628,
        [anon_sym_elsif] = 628,
        [sym_comment] = 52,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [329] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1014,
        [anon_sym_end] = 1016,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [330] = {
        [sym_else_block] = 636,
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [aux_sym__then_elsif_else_block_repeat1] = 636,
        [anon_sym_end] = 636,
        [anon_sym_while] = 636,
        [anon_sym_until] = 636,
        [anon_sym_if] = 636,
        [anon_sym_unless] = 636,
        [anon_sym_else] = 636,
        [anon_sym_elsif] = 636,
        [sym_comment] = 52,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [331] = {
        [anon_sym_end] = 1018,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [332] = {
        [sym_else_block] = 640,
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [aux_sym__then_elsif_else_block_repeat1] = 640,
        [anon_sym_end] = 640,
        [anon_sym_while] = 640,
        [anon_sym_until] = 640,
        [anon_sym_if] = 640,
        [anon_sym_unless] = 640,
        [anon_sym_else] = 640,
        [anon_sym_elsif] = 640,
        [sym_comment] = 52,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [333] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [334] = {
        [sym_then_block] = 1020,
        [sym__then_else_block] = 1022,
        [sym__terminator] = 648,
        [anon_sym_then] = 648,
        [sym_comment] = 52,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 652,
    },
    [335] = {
        [sym_else_block] = 1024,
        [anon_sym_end] = 1026,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [336] = {
        [sym_else_block] = 694,
        [sym__terminator] = 694,
        [aux_sym_program_repeat1] = 694,
        [aux_sym__then_elsif_else_block_repeat1] = 694,
        [anon_sym_end] = 694,
        [anon_sym_while] = 694,
        [anon_sym_until] = 694,
        [anon_sym_if] = 694,
        [anon_sym_unless] = 694,
        [anon_sym_else] = 694,
        [anon_sym_elsif] = 694,
        [sym_comment] = 52,
        [sym__line_break] = 694,
        [anon_sym_SEMI] = 694,
    },
    [337] = {
        [anon_sym_end] = 1028,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [338] = {
        [sym_else_block] = 832,
        [sym__terminator] = 832,
        [aux_sym_program_repeat1] = 832,
        [aux_sym__then_elsif_else_block_repeat1] = 832,
        [anon_sym_end] = 832,
        [anon_sym_while] = 832,
        [anon_sym_until] = 832,
        [anon_sym_if] = 832,
        [anon_sym_unless] = 832,
        [anon_sym_else] = 832,
        [anon_sym_elsif] = 832,
        [sym_comment] = 52,
        [sym__line_break] = 832,
        [anon_sym_SEMI] = 832,
    },
    [339] = {
        [sym_else_block] = 844,
        [sym__terminator] = 844,
        [aux_sym_program_repeat1] = 844,
        [aux_sym__then_elsif_else_block_repeat1] = 844,
        [anon_sym_end] = 844,
        [anon_sym_while] = 844,
        [anon_sym_until] = 844,
        [anon_sym_if] = 844,
        [anon_sym_unless] = 844,
        [anon_sym_else] = 844,
        [anon_sym_elsif] = 844,
        [sym_comment] = 52,
        [sym__line_break] = 844,
        [anon_sym_SEMI] = 844,
    },
    [340] = {
        [sym_then_block] = 1030,
        [sym__then_elsif_else_block] = 1032,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [341] = {
        [sym_else_block] = 1034,
        [aux_sym__then_elsif_else_block_repeat1] = 1036,
        [anon_sym_end] = 1038,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [342] = {
        [sym_else_block] = 896,
        [sym__terminator] = 896,
        [aux_sym_program_repeat1] = 896,
        [aux_sym__then_elsif_else_block_repeat1] = 896,
        [anon_sym_end] = 896,
        [anon_sym_while] = 896,
        [anon_sym_until] = 896,
        [anon_sym_if] = 896,
        [anon_sym_unless] = 896,
        [anon_sym_else] = 896,
        [anon_sym_elsif] = 896,
        [sym_comment] = 52,
        [sym__line_break] = 896,
        [anon_sym_SEMI] = 896,
    },
    [343] = {
        [anon_sym_end] = 1040,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [344] = {
        [sym_else_block] = 1042,
        [anon_sym_end] = 1040,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [345] = {
        [sym_else_block] = 1044,
        [sym__terminator] = 1044,
        [aux_sym_program_repeat1] = 1044,
        [aux_sym__then_elsif_else_block_repeat1] = 1044,
        [anon_sym_end] = 1044,
        [anon_sym_while] = 1044,
        [anon_sym_until] = 1044,
        [anon_sym_if] = 1044,
        [anon_sym_unless] = 1044,
        [anon_sym_else] = 1044,
        [anon_sym_elsif] = 1044,
        [sym_comment] = 52,
        [sym__line_break] = 1044,
        [anon_sym_SEMI] = 1044,
    },
    [346] = {
        [sym_condition] = 1046,
        [sym__expression] = 1048,
        [sym__argument] = 1050,
        [sym__primary] = 1052,
        [sym_scope_resolution_expression] = 1054,
        [sym_subscript_expression] = 1054,
        [sym_member_access] = 1054,
        [sym__lhs] = 1056,
        [sym__variable] = 1054,
        [anon_sym_LPAREN] = 1058,
        [anon_sym_COLON_COLON] = 1060,
        [anon_sym_nil] = 1062,
        [anon_sym_self] = 1062,
        [sym_identifier] = 1062,
        [sym_comment] = 52,
        [sym_symbol] = 1050,
        [sym__line_break] = 52,
    },
    [347] = {
        [sym_then_block] = 1064,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [348] = {
        [sym_then_block] = 654,
        [sym__terminator] = 654,
        [anon_sym_then] = 654,
        [sym_comment] = 52,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [349] = {
        [sym_then_block] = 82,
        [sym__terminator] = 82,
        [anon_sym_then] = 82,
        [sym_comment] = 52,
        [sym__line_break] = 82,
        [anon_sym_SEMI] = 82,
    },
    [350] = {
        [sym_then_block] = 84,
        [sym__terminator] = 84,
        [anon_sym_COLON_COLON] = 1066,
        [anon_sym_then] = 84,
        [anon_sym_LBRACK] = 1068,
        [anon_sym_DOT] = 1070,
        [sym_comment] = 52,
        [sym__line_break] = 84,
        [anon_sym_SEMI] = 84,
    },
    [351] = {
        [sym_then_block] = 92,
        [sym__terminator] = 92,
        [anon_sym_COLON_COLON] = 92,
        [anon_sym_then] = 92,
        [anon_sym_LBRACK] = 92,
        [anon_sym_DOT] = 92,
        [sym_comment] = 52,
        [sym__line_break] = 92,
        [anon_sym_SEMI] = 92,
    },
    [352] = {
        [sym_then_block] = 94,
        [sym__terminator] = 94,
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_then] = 94,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 94,
        [anon_sym_SEMI] = 94,
    },
    [353] = {
        [sym__statement] = 1072,
        [sym__declaration] = 110,
        [sym_method_declaration] = 112,
        [sym_class_declaration] = 112,
        [sym_module_declaration] = 112,
        [sym_while_statement] = 110,
        [sym_until_statement] = 110,
        [sym_if_statement] = 110,
        [sym_unless_statement] = 110,
        [sym_for_statement] = 110,
        [sym_if_modifier] = 110,
        [sym_unless_modifier] = 110,
        [sym_while_modifier] = 110,
        [sym_until_modifier] = 110,
        [sym__call] = 114,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 110,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym_scope_resolution_expression] = 120,
        [sym_subscript_expression] = 120,
        [sym_member_access] = 120,
        [sym__lhs] = 122,
        [sym__variable] = 120,
        [anon_sym_undef] = 124,
        [anon_sym_alias] = 126,
        [anon_sym_def] = 128,
        [anon_sym_LPAREN] = 130,
        [anon_sym_RPAREN] = 1074,
        [anon_sym_class] = 134,
        [anon_sym_COLON_COLON] = 136,
        [anon_sym_module] = 138,
        [anon_sym_while] = 140,
        [anon_sym_until] = 142,
        [anon_sym_if] = 144,
        [anon_sym_unless] = 146,
        [anon_sym_for] = 148,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 150,
        [anon_sym_self] = 150,
        [sym_identifier] = 150,
        [sym_comment] = 52,
        [sym_symbol] = 116,
        [sym__line_break] = 52,
    },
    [354] = {
        [sym_identifier] = 1076,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [355] = {
        [sym_then_block] = 248,
        [sym__terminator] = 248,
        [anon_sym_COLON_COLON] = 248,
        [anon_sym_then] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_DOT] = 248,
        [sym_comment] = 52,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [356] = {
        [sym_then_block] = 270,
        [sym__terminator] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_then] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [357] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1078,
        [anon_sym_RPAREN] = 1080,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [358] = {
        [sym_then_block] = 306,
        [sym__terminator] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_then] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [359] = {
        [anon_sym_RPAREN] = 1082,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [360] = {
        [sym_then_block] = 346,
        [sym__terminator] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_then] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [361] = {
        [sym_then_block] = 368,
        [sym__terminator] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_then] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [362] = {
        [sym_identifier] = 1084,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [363] = {
        [sym__argument] = 1086,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1088,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [364] = {
        [sym_identifier] = 1090,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [365] = {
        [sym_then_block] = 428,
        [sym__terminator] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_then] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [366] = {
        [aux_sym__call_arguments_repeat1] = 1092,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1094,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [367] = {
        [sym_then_block] = 448,
        [sym__terminator] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_then] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [368] = {
        [anon_sym_RBRACK] = 1096,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [369] = {
        [sym_then_block] = 472,
        [sym__terminator] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_then] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [370] = {
        [sym_then_block] = 480,
        [sym__terminator] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_then] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [371] = {
        [sym_then_block] = 482,
        [sym__terminator] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_then] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [372] = {
        [sym_else_block] = 1098,
        [aux_sym__then_elsif_else_block_repeat1] = 1100,
        [anon_sym_end] = 1098,
        [anon_sym_else] = 1098,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [373] = {
        [sym_else_block] = 1102,
        [anon_sym_end] = 1102,
        [anon_sym_else] = 1102,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [374] = {
        [anon_sym_end] = 1104,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [375] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [376] = {
        [sym_else_block] = 1108,
        [sym__terminator] = 1108,
        [aux_sym_program_repeat1] = 1108,
        [aux_sym__then_elsif_else_block_repeat1] = 1108,
        [anon_sym_end] = 1108,
        [anon_sym_while] = 1108,
        [anon_sym_until] = 1108,
        [anon_sym_if] = 1108,
        [anon_sym_unless] = 1108,
        [anon_sym_else] = 1108,
        [anon_sym_elsif] = 1108,
        [sym_comment] = 52,
        [sym__line_break] = 1108,
        [anon_sym_SEMI] = 1108,
    },
    [377] = {
        [sym__statement_block] = 1110,
        [sym__do_block] = 994,
        [sym__terminator] = 996,
        [anon_sym_do] = 998,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [378] = {
        [sym__statement_block] = 654,
        [sym__do_block] = 654,
        [sym__terminator] = 654,
        [anon_sym_do] = 654,
        [sym_comment] = 52,
        [sym__line_break] = 654,
        [anon_sym_SEMI] = 654,
    },
    [379] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [380] = {
        [sym__statement_block] = 1114,
        [sym__do_block] = 994,
        [sym__terminator] = 996,
        [anon_sym_do] = 998,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [381] = {
        [sym_else_block] = 1116,
        [sym__terminator] = 1116,
        [aux_sym_program_repeat1] = 1116,
        [aux_sym__then_elsif_else_block_repeat1] = 1116,
        [anon_sym_end] = 1116,
        [anon_sym_while] = 1116,
        [anon_sym_until] = 1116,
        [anon_sym_if] = 1116,
        [anon_sym_unless] = 1116,
        [anon_sym_else] = 1116,
        [anon_sym_elsif] = 1116,
        [sym_comment] = 52,
        [sym__line_break] = 1116,
        [anon_sym_SEMI] = 1116,
    },
    [382] = {
        [sym__terminator] = 1118,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [383] = {
        [sym__statement] = 1120,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1122,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [384] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1124,
        [anon_sym_end] = 1126,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [385] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [386] = {
        [anon_sym_end] = 1130,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [387] = {
        [sym_else_block] = 1132,
        [sym__terminator] = 1132,
        [aux_sym_program_repeat1] = 1132,
        [aux_sym__then_elsif_else_block_repeat1] = 1132,
        [anon_sym_end] = 1132,
        [anon_sym_while] = 1132,
        [anon_sym_until] = 1132,
        [anon_sym_if] = 1132,
        [anon_sym_unless] = 1132,
        [anon_sym_else] = 1132,
        [anon_sym_elsif] = 1132,
        [sym_comment] = 52,
        [sym__line_break] = 1132,
        [anon_sym_SEMI] = 1132,
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
        [sym_comment] = 52,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [389] = {
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
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [390] = {
        [sym__terminator] = 1136,
        [anon_sym_LT] = 1138,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [391] = {
        [sym__statement] = 1140,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1142,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [392] = {
        [sym_identifier] = 1144,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [393] = {
        [sym__terminator] = 1146,
        [aux_sym_class_declaration_repeat1] = 1148,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [394] = {
        [sym__statement] = 1152,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1154,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [395] = {
        [sym__terminator] = 1156,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [396] = {
        [sym_identifier] = 1158,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [397] = {
        [sym__terminator] = 1160,
        [aux_sym_class_declaration_repeat1] = 1162,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 1160,
        [anon_sym_SEMI] = 1160,
    },
    [398] = {
        [sym__terminator] = 1164,
        [sym_comment] = 52,
        [sym__line_break] = 1164,
        [anon_sym_SEMI] = 1164,
    },
    [399] = {
        [sym__statement] = 1166,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1168,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [400] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1170,
        [anon_sym_end] = 1172,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [401] = {
        [sym_else_block] = 1174,
        [sym__terminator] = 1174,
        [aux_sym_program_repeat1] = 1174,
        [aux_sym__then_elsif_else_block_repeat1] = 1174,
        [anon_sym_end] = 1174,
        [anon_sym_while] = 1174,
        [anon_sym_until] = 1174,
        [anon_sym_if] = 1174,
        [anon_sym_unless] = 1174,
        [anon_sym_else] = 1174,
        [anon_sym_elsif] = 1174,
        [sym_comment] = 52,
        [sym__line_break] = 1174,
        [anon_sym_SEMI] = 1174,
    },
    [402] = {
        [anon_sym_end] = 1176,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [403] = {
        [sym_else_block] = 1178,
        [sym__terminator] = 1178,
        [aux_sym_program_repeat1] = 1178,
        [aux_sym__then_elsif_else_block_repeat1] = 1178,
        [anon_sym_end] = 1178,
        [anon_sym_while] = 1178,
        [anon_sym_until] = 1178,
        [anon_sym_if] = 1178,
        [anon_sym_unless] = 1178,
        [anon_sym_else] = 1178,
        [anon_sym_elsif] = 1178,
        [sym_comment] = 52,
        [sym__line_break] = 1178,
        [anon_sym_SEMI] = 1178,
    },
    [404] = {
        [sym_else_block] = 1180,
        [sym__terminator] = 1180,
        [aux_sym_program_repeat1] = 1180,
        [aux_sym__then_elsif_else_block_repeat1] = 1180,
        [anon_sym_end] = 1180,
        [anon_sym_while] = 1180,
        [anon_sym_until] = 1180,
        [anon_sym_if] = 1180,
        [anon_sym_unless] = 1180,
        [anon_sym_else] = 1180,
        [anon_sym_elsif] = 1180,
        [sym_comment] = 52,
        [sym__line_break] = 1180,
        [anon_sym_SEMI] = 1180,
    },
    [405] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1182,
        [anon_sym_end] = 1168,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [406] = {
        [sym_else_block] = 1184,
        [sym__terminator] = 1184,
        [aux_sym_program_repeat1] = 1184,
        [aux_sym__then_elsif_else_block_repeat1] = 1184,
        [anon_sym_end] = 1184,
        [anon_sym_while] = 1184,
        [anon_sym_until] = 1184,
        [anon_sym_if] = 1184,
        [anon_sym_unless] = 1184,
        [anon_sym_else] = 1184,
        [anon_sym_elsif] = 1184,
        [sym_comment] = 52,
        [sym__line_break] = 1184,
        [anon_sym_SEMI] = 1184,
    },
    [407] = {
        [anon_sym_end] = 1172,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [408] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1186,
        [anon_sym_end] = 1188,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [409] = {
        [sym_else_block] = 1190,
        [sym__terminator] = 1190,
        [aux_sym_program_repeat1] = 1190,
        [aux_sym__then_elsif_else_block_repeat1] = 1190,
        [anon_sym_end] = 1190,
        [anon_sym_while] = 1190,
        [anon_sym_until] = 1190,
        [anon_sym_if] = 1190,
        [anon_sym_unless] = 1190,
        [anon_sym_else] = 1190,
        [anon_sym_elsif] = 1190,
        [sym_comment] = 52,
        [sym__line_break] = 1190,
        [anon_sym_SEMI] = 1190,
    },
    [410] = {
        [anon_sym_end] = 1154,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [411] = {
        [sym_else_block] = 1192,
        [sym__terminator] = 1192,
        [aux_sym_program_repeat1] = 1192,
        [aux_sym__then_elsif_else_block_repeat1] = 1192,
        [anon_sym_end] = 1192,
        [anon_sym_while] = 1192,
        [anon_sym_until] = 1192,
        [anon_sym_if] = 1192,
        [anon_sym_unless] = 1192,
        [anon_sym_else] = 1192,
        [anon_sym_elsif] = 1192,
        [sym_comment] = 52,
        [sym__line_break] = 1192,
        [anon_sym_SEMI] = 1192,
    },
    [412] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1194,
        [anon_sym_RPAREN] = 1196,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [413] = {
        [sym_else_block] = 306,
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [aux_sym__then_elsif_else_block_repeat1] = 306,
        [anon_sym_end] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_while] = 306,
        [anon_sym_until] = 306,
        [anon_sym_if] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_else] = 306,
        [anon_sym_elsif] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [414] = {
        [anon_sym_RPAREN] = 1198,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [415] = {
        [sym_else_block] = 346,
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [aux_sym__then_elsif_else_block_repeat1] = 346,
        [anon_sym_end] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_while] = 346,
        [anon_sym_until] = 346,
        [anon_sym_if] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_else] = 346,
        [anon_sym_elsif] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [416] = {
        [sym_else_block] = 368,
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [aux_sym__then_elsif_else_block_repeat1] = 368,
        [anon_sym_end] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_while] = 368,
        [anon_sym_until] = 368,
        [anon_sym_if] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_else] = 368,
        [anon_sym_elsif] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [417] = {
        [sym_argument_list] = 1200,
        [sym__terminator] = 1202,
        [anon_sym_LPAREN] = 1204,
        [anon_sym_STAR] = 1206,
        [anon_sym_AMP] = 1206,
        [sym_identifier] = 1208,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [418] = {
        [sym_argument_list] = 1210,
        [sym__terminator] = 1210,
        [anon_sym_LPAREN] = 1210,
        [anon_sym_STAR] = 1210,
        [anon_sym_AMP] = 1210,
        [sym_identifier] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [419] = {
        [sym__terminator] = 1212,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [420] = {
        [sym__statement] = 1214,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1216,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [421] = {
        [sym_argument_list] = 1218,
        [anon_sym_RPAREN] = 1212,
        [anon_sym_STAR] = 1220,
        [anon_sym_AMP] = 1220,
        [sym_identifier] = 1222,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [422] = {
        [sym_identifier] = 1224,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [423] = {
        [sym__terminator] = 1226,
        [aux_sym_argument_list_repeat1] = 1228,
        [anon_sym_COMMA] = 1230,
        [sym_comment] = 52,
        [sym__line_break] = 1226,
        [anon_sym_SEMI] = 1226,
    },
    [424] = {
        [sym__terminator] = 1232,
        [sym_comment] = 52,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [425] = {
        [anon_sym_STAR] = 1234,
        [anon_sym_AMP] = 1234,
        [sym_identifier] = 1236,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [426] = {
        [sym_identifier] = 1238,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [427] = {
        [sym__terminator] = 1240,
        [aux_sym_argument_list_repeat1] = 1242,
        [anon_sym_COMMA] = 1230,
        [sym_comment] = 52,
        [sym__line_break] = 1240,
        [anon_sym_SEMI] = 1240,
    },
    [428] = {
        [sym__terminator] = 1244,
        [sym_comment] = 52,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [429] = {
        [sym__terminator] = 1244,
        [aux_sym_argument_list_repeat1] = 1246,
        [anon_sym_COMMA] = 1230,
        [sym_comment] = 52,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [430] = {
        [sym__terminator] = 1248,
        [sym_comment] = 52,
        [sym__line_break] = 1248,
        [anon_sym_SEMI] = 1248,
    },
    [431] = {
        [sym__terminator] = 1232,
        [aux_sym_argument_list_repeat1] = 1250,
        [anon_sym_COMMA] = 1230,
        [sym_comment] = 52,
        [sym__line_break] = 1232,
        [anon_sym_SEMI] = 1232,
    },
    [432] = {
        [sym__terminator] = 1252,
        [sym_comment] = 52,
        [sym__line_break] = 1252,
        [anon_sym_SEMI] = 1252,
    },
    [433] = {
        [anon_sym_RPAREN] = 1254,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [434] = {
        [sym__statement] = 1256,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1258,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [435] = {
        [sym_identifier] = 1260,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [436] = {
        [aux_sym_argument_list_repeat1] = 1262,
        [anon_sym_RPAREN] = 1226,
        [anon_sym_COMMA] = 1264,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [437] = {
        [anon_sym_RPAREN] = 1232,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [438] = {
        [anon_sym_STAR] = 1266,
        [anon_sym_AMP] = 1266,
        [sym_identifier] = 1268,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [439] = {
        [sym_identifier] = 1270,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [440] = {
        [aux_sym_argument_list_repeat1] = 1272,
        [anon_sym_RPAREN] = 1240,
        [anon_sym_COMMA] = 1264,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [441] = {
        [anon_sym_RPAREN] = 1244,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [442] = {
        [aux_sym_argument_list_repeat1] = 1274,
        [anon_sym_RPAREN] = 1244,
        [anon_sym_COMMA] = 1264,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [443] = {
        [anon_sym_RPAREN] = 1248,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [444] = {
        [aux_sym_argument_list_repeat1] = 1276,
        [anon_sym_RPAREN] = 1232,
        [anon_sym_COMMA] = 1264,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [445] = {
        [anon_sym_RPAREN] = 1252,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [446] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1278,
        [anon_sym_end] = 1280,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [447] = {
        [sym_else_block] = 1282,
        [sym__terminator] = 1282,
        [aux_sym_program_repeat1] = 1282,
        [aux_sym__then_elsif_else_block_repeat1] = 1282,
        [anon_sym_end] = 1282,
        [anon_sym_while] = 1282,
        [anon_sym_until] = 1282,
        [anon_sym_if] = 1282,
        [anon_sym_unless] = 1282,
        [anon_sym_else] = 1282,
        [anon_sym_elsif] = 1282,
        [sym_comment] = 52,
        [sym__line_break] = 1282,
        [anon_sym_SEMI] = 1282,
    },
    [448] = {
        [anon_sym_end] = 1284,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [449] = {
        [sym_else_block] = 1286,
        [sym__terminator] = 1286,
        [aux_sym_program_repeat1] = 1286,
        [aux_sym__then_elsif_else_block_repeat1] = 1286,
        [anon_sym_end] = 1286,
        [anon_sym_while] = 1286,
        [anon_sym_until] = 1286,
        [anon_sym_if] = 1286,
        [anon_sym_unless] = 1286,
        [anon_sym_else] = 1286,
        [anon_sym_elsif] = 1286,
        [sym_comment] = 52,
        [sym__line_break] = 1286,
        [anon_sym_SEMI] = 1286,
    },
    [450] = {
        [sym_else_block] = 1288,
        [sym__terminator] = 1288,
        [aux_sym_program_repeat1] = 1288,
        [aux_sym__then_elsif_else_block_repeat1] = 1288,
        [anon_sym_end] = 1288,
        [anon_sym_while] = 1288,
        [anon_sym_until] = 1288,
        [anon_sym_if] = 1288,
        [anon_sym_unless] = 1288,
        [anon_sym_else] = 1288,
        [anon_sym_elsif] = 1288,
        [sym_comment] = 52,
        [sym__line_break] = 1288,
        [anon_sym_SEMI] = 1288,
    },
    [451] = {
        [sym__statement] = 1290,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1280,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [452] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1292,
        [anon_sym_end] = 1284,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [453] = {
        [anon_sym_end] = 1294,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [454] = {
        [sym_else_block] = 1296,
        [sym__terminator] = 1296,
        [aux_sym_program_repeat1] = 1296,
        [aux_sym__then_elsif_else_block_repeat1] = 1296,
        [anon_sym_end] = 1296,
        [anon_sym_while] = 1296,
        [anon_sym_until] = 1296,
        [anon_sym_if] = 1296,
        [anon_sym_unless] = 1296,
        [anon_sym_else] = 1296,
        [anon_sym_elsif] = 1296,
        [sym_comment] = 52,
        [sym__line_break] = 1296,
        [anon_sym_SEMI] = 1296,
    },
    [455] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1298,
        [anon_sym_end] = 1258,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [456] = {
        [sym_else_block] = 1300,
        [sym__terminator] = 1300,
        [aux_sym_program_repeat1] = 1300,
        [aux_sym__then_elsif_else_block_repeat1] = 1300,
        [anon_sym_end] = 1300,
        [anon_sym_while] = 1300,
        [anon_sym_until] = 1300,
        [anon_sym_if] = 1300,
        [anon_sym_unless] = 1300,
        [anon_sym_else] = 1300,
        [anon_sym_elsif] = 1300,
        [sym_comment] = 52,
        [sym__line_break] = 1300,
        [anon_sym_SEMI] = 1300,
    },
    [457] = {
        [anon_sym_end] = 1280,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [458] = {
        [sym__function_name] = 1302,
        [anon_sym_PIPE] = 962,
        [anon_sym_STAR] = 962,
        [anon_sym_AMP] = 962,
        [anon_sym_LT] = 962,
        [sym_identifier] = 962,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 962,
        [anon_sym_CARET] = 962,
        [anon_sym_LT_EQ_GT] = 962,
        [anon_sym_EQ_EQ] = 962,
        [anon_sym_EQ_EQ_EQ] = 962,
        [anon_sym_EQ_TILDE] = 962,
        [anon_sym_GT] = 962,
        [anon_sym_GT_EQ] = 962,
        [anon_sym_LT_EQ] = 962,
        [anon_sym_PLUS] = 962,
        [anon_sym_DASH] = 962,
        [anon_sym_SLASH] = 962,
        [anon_sym_PERCENT] = 962,
        [anon_sym_STAR_STAR] = 962,
        [anon_sym_LT_LT] = 962,
        [anon_sym_GT_GT] = 962,
        [anon_sym_TILDE] = 962,
        [anon_sym_PLUS_AT] = 962,
        [anon_sym_DASH_AT] = 962,
        [anon_sym_LBRACK_RBRACK] = 962,
        [anon_sym_LBRACK_RBRACK_EQ] = 962,
        [sym__line_break] = 52,
    },
    [459] = {
        [sym__function_name] = 1210,
        [anon_sym_PIPE] = 1210,
        [anon_sym_STAR] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_LT] = 1210,
        [sym_identifier] = 1210,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 1210,
        [anon_sym_CARET] = 1210,
        [anon_sym_LT_EQ_GT] = 1210,
        [anon_sym_EQ_EQ] = 1210,
        [anon_sym_EQ_EQ_EQ] = 1210,
        [anon_sym_EQ_TILDE] = 1210,
        [anon_sym_GT] = 1210,
        [anon_sym_GT_EQ] = 1210,
        [anon_sym_LT_EQ] = 1210,
        [anon_sym_PLUS] = 1210,
        [anon_sym_DASH] = 1210,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_STAR_STAR] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_TILDE] = 1210,
        [anon_sym_PLUS_AT] = 1210,
        [anon_sym_DASH_AT] = 1210,
        [anon_sym_LBRACK_RBRACK] = 1210,
        [anon_sym_LBRACK_RBRACK_EQ] = 1210,
        [sym__line_break] = 52,
    },
    [460] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [461] = {
        [sym_else_block] = 1210,
        [sym__terminator] = 1210,
        [aux_sym_program_repeat1] = 1210,
        [aux_sym__then_elsif_else_block_repeat1] = 1210,
        [anon_sym_end] = 1210,
        [anon_sym_while] = 1210,
        [anon_sym_until] = 1210,
        [anon_sym_if] = 1210,
        [anon_sym_unless] = 1210,
        [anon_sym_else] = 1210,
        [anon_sym_elsif] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [462] = {
        [sym_else_block] = 1306,
        [sym__terminator] = 1306,
        [aux_sym_program_repeat1] = 1306,
        [aux_sym__then_elsif_else_block_repeat1] = 1306,
        [anon_sym_end] = 1306,
        [anon_sym_while] = 1306,
        [anon_sym_until] = 1306,
        [anon_sym_if] = 1306,
        [anon_sym_unless] = 1306,
        [anon_sym_else] = 1306,
        [anon_sym_elsif] = 1306,
        [sym_comment] = 52,
        [sym__line_break] = 1306,
        [anon_sym_SEMI] = 1306,
    },
    [463] = {
        [sym_identifier] = 1308,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [464] = {
        [sym__argument] = 1310,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1312,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [465] = {
        [sym_identifier] = 1314,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [466] = {
        [sym_else_block] = 428,
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [aux_sym__then_elsif_else_block_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_while] = 428,
        [anon_sym_until] = 428,
        [anon_sym_if] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_else] = 428,
        [anon_sym_elsif] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [467] = {
        [aux_sym__call_arguments_repeat1] = 1316,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1318,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [468] = {
        [sym_else_block] = 448,
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [aux_sym__then_elsif_else_block_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_while] = 448,
        [anon_sym_until] = 448,
        [anon_sym_if] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_else] = 448,
        [anon_sym_elsif] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [469] = {
        [anon_sym_RBRACK] = 1320,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [470] = {
        [sym_else_block] = 472,
        [sym__terminator] = 472,
        [aux_sym_program_repeat1] = 472,
        [aux_sym__then_elsif_else_block_repeat1] = 472,
        [anon_sym_end] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_while] = 472,
        [anon_sym_until] = 472,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 472,
        [anon_sym_else] = 472,
        [anon_sym_elsif] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [471] = {
        [sym_else_block] = 480,
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [aux_sym__then_elsif_else_block_repeat1] = 480,
        [anon_sym_end] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_while] = 480,
        [anon_sym_until] = 480,
        [anon_sym_if] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_else] = 480,
        [anon_sym_elsif] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [472] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [473] = {
        [sym__statement] = 1322,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_PIPE] = 1324,
        [anon_sym_end] = 1302,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [474] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_end] = 1328,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [475] = {
        [sym__statement] = 1330,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1328,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [476] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1332,
        [anon_sym_end] = 1334,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [477] = {
        [sym_else_block] = 1336,
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [aux_sym__then_elsif_else_block_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_else] = 1336,
        [anon_sym_elsif] = 1336,
        [sym_comment] = 52,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [478] = {
        [anon_sym_end] = 1338,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [479] = {
        [sym_else_block] = 1340,
        [sym__terminator] = 1340,
        [aux_sym_program_repeat1] = 1340,
        [aux_sym__then_elsif_else_block_repeat1] = 1340,
        [anon_sym_end] = 1340,
        [anon_sym_while] = 1340,
        [anon_sym_until] = 1340,
        [anon_sym_if] = 1340,
        [anon_sym_unless] = 1340,
        [anon_sym_else] = 1340,
        [anon_sym_elsif] = 1340,
        [sym_comment] = 52,
        [sym__line_break] = 1340,
        [anon_sym_SEMI] = 1340,
    },
    [480] = {
        [sym_else_block] = 1342,
        [sym__terminator] = 1342,
        [aux_sym_program_repeat1] = 1342,
        [aux_sym__then_elsif_else_block_repeat1] = 1342,
        [anon_sym_end] = 1342,
        [anon_sym_while] = 1342,
        [anon_sym_until] = 1342,
        [anon_sym_if] = 1342,
        [anon_sym_unless] = 1342,
        [anon_sym_else] = 1342,
        [anon_sym_elsif] = 1342,
        [sym_comment] = 52,
        [sym__line_break] = 1342,
        [anon_sym_SEMI] = 1342,
    },
    [481] = {
        [anon_sym_end] = 1334,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [482] = {
        [sym__statement] = 1344,
        [sym__declaration] = 900,
        [sym_method_declaration] = 902,
        [sym_class_declaration] = 902,
        [sym_module_declaration] = 902,
        [sym_while_statement] = 900,
        [sym_until_statement] = 900,
        [sym_if_statement] = 900,
        [sym_unless_statement] = 900,
        [sym_for_statement] = 900,
        [sym_if_modifier] = 900,
        [sym_unless_modifier] = 900,
        [sym_while_modifier] = 900,
        [sym_until_modifier] = 900,
        [sym__call] = 904,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 900,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [anon_sym_undef] = 914,
        [anon_sym_alias] = 916,
        [anon_sym_def] = 918,
        [anon_sym_LPAREN] = 920,
        [anon_sym_class] = 922,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_module] = 926,
        [anon_sym_while] = 928,
        [anon_sym_until] = 930,
        [anon_sym_if] = 932,
        [anon_sym_unless] = 934,
        [anon_sym_for] = 936,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [483] = {
        [sym_else_block] = 1346,
        [aux_sym__then_elsif_else_block_repeat1] = 1346,
        [anon_sym_end] = 1346,
        [anon_sym_else] = 1346,
        [anon_sym_elsif] = 1346,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [484] = {
        [sym__expression] = 1348,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [anon_sym_LPAREN] = 920,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [485] = {
        [sym__expression] = 1350,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [anon_sym_LPAREN] = 920,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [486] = {
        [sym__expression] = 1352,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [anon_sym_LPAREN] = 920,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [487] = {
        [sym__expression] = 1354,
        [sym__argument] = 906,
        [sym__primary] = 908,
        [sym_scope_resolution_expression] = 910,
        [sym_subscript_expression] = 910,
        [sym_member_access] = 910,
        [sym__lhs] = 912,
        [sym__variable] = 910,
        [anon_sym_LPAREN] = 920,
        [anon_sym_COLON_COLON] = 924,
        [anon_sym_nil] = 938,
        [anon_sym_self] = 938,
        [sym_identifier] = 938,
        [sym_comment] = 52,
        [sym_symbol] = 906,
        [sym__line_break] = 52,
    },
    [488] = {
        [sym_else_block] = 360,
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [aux_sym__then_elsif_else_block_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_while] = 360,
        [anon_sym_until] = 360,
        [anon_sym_if] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_else] = 360,
        [anon_sym_elsif] = 360,
        [sym_comment] = 52,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [489] = {
        [sym_else_block] = 362,
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [aux_sym__then_elsif_else_block_repeat1] = 362,
        [anon_sym_end] = 362,
        [anon_sym_while] = 362,
        [anon_sym_until] = 362,
        [anon_sym_if] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_else] = 362,
        [anon_sym_elsif] = 362,
        [sym_comment] = 52,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [490] = {
        [sym_else_block] = 364,
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [aux_sym__then_elsif_else_block_repeat1] = 364,
        [anon_sym_end] = 364,
        [anon_sym_while] = 364,
        [anon_sym_until] = 364,
        [anon_sym_if] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_else] = 364,
        [anon_sym_elsif] = 364,
        [sym_comment] = 52,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [491] = {
        [sym_else_block] = 366,
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [aux_sym__then_elsif_else_block_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_else] = 366,
        [anon_sym_elsif] = 366,
        [sym_comment] = 52,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [492] = {
        [sym_else_block] = 372,
        [sym__terminator] = 940,
        [aux_sym_program_repeat1] = 1356,
        [aux_sym__then_elsif_else_block_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_while] = 944,
        [anon_sym_until] = 946,
        [anon_sym_if] = 948,
        [anon_sym_unless] = 950,
        [anon_sym_else] = 372,
        [anon_sym_elsif] = 372,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [493] = {
        [sym_else_block] = 374,
        [aux_sym__then_elsif_else_block_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_else] = 374,
        [anon_sym_elsif] = 374,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [494] = {
        [anon_sym_end] = 1358,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [495] = {
        [sym_else_block] = 1360,
        [anon_sym_end] = 1358,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [496] = {
        [sym_else_block] = 1044,
        [sym__terminator] = 1044,
        [aux_sym_program_repeat1] = 1044,
        [anon_sym_end] = 1044,
        [anon_sym_while] = 1044,
        [anon_sym_until] = 1044,
        [anon_sym_if] = 1044,
        [anon_sym_unless] = 1044,
        [anon_sym_else] = 1044,
        [sym_comment] = 52,
        [sym__line_break] = 1044,
        [anon_sym_SEMI] = 1044,
    },
    [497] = {
        [anon_sym_end] = 1362,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [498] = {
        [sym_else_block] = 1106,
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [anon_sym_else] = 1106,
        [sym_comment] = 52,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [499] = {
        [sym_else_block] = 1108,
        [sym__terminator] = 1108,
        [aux_sym_program_repeat1] = 1108,
        [anon_sym_end] = 1108,
        [anon_sym_while] = 1108,
        [anon_sym_until] = 1108,
        [anon_sym_if] = 1108,
        [anon_sym_unless] = 1108,
        [anon_sym_else] = 1108,
        [sym_comment] = 52,
        [sym__line_break] = 1108,
        [anon_sym_SEMI] = 1108,
    },
    [500] = {
        [sym__statement_block] = 1364,
        [sym__do_block] = 796,
        [sym__terminator] = 798,
        [anon_sym_do] = 800,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [501] = {
        [sym_else_block] = 1112,
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [anon_sym_else] = 1112,
        [sym_comment] = 52,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [502] = {
        [sym__statement_block] = 1366,
        [sym__do_block] = 796,
        [sym__terminator] = 798,
        [anon_sym_do] = 800,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [503] = {
        [sym_else_block] = 1116,
        [sym__terminator] = 1116,
        [aux_sym_program_repeat1] = 1116,
        [anon_sym_end] = 1116,
        [anon_sym_while] = 1116,
        [anon_sym_until] = 1116,
        [anon_sym_if] = 1116,
        [anon_sym_unless] = 1116,
        [anon_sym_else] = 1116,
        [sym_comment] = 52,
        [sym__line_break] = 1116,
        [anon_sym_SEMI] = 1116,
    },
    [504] = {
        [sym__terminator] = 1368,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [505] = {
        [sym__statement] = 1370,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1372,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [506] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1374,
        [anon_sym_end] = 1376,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
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
        [sym_comment] = 52,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [508] = {
        [anon_sym_end] = 1378,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [509] = {
        [sym_else_block] = 1132,
        [sym__terminator] = 1132,
        [aux_sym_program_repeat1] = 1132,
        [anon_sym_end] = 1132,
        [anon_sym_while] = 1132,
        [anon_sym_until] = 1132,
        [anon_sym_if] = 1132,
        [anon_sym_unless] = 1132,
        [anon_sym_else] = 1132,
        [sym_comment] = 52,
        [sym__line_break] = 1132,
        [anon_sym_SEMI] = 1132,
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
        [sym_comment] = 52,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [511] = {
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
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [512] = {
        [sym__terminator] = 1380,
        [anon_sym_LT] = 1382,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [513] = {
        [sym__statement] = 1384,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1386,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [514] = {
        [sym_identifier] = 1388,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [515] = {
        [sym__terminator] = 1390,
        [aux_sym_class_declaration_repeat1] = 1392,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [516] = {
        [sym__statement] = 1394,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1396,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [517] = {
        [sym__terminator] = 1398,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [518] = {
        [sym__statement] = 1400,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1402,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [519] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1404,
        [anon_sym_end] = 1406,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [520] = {
        [sym_else_block] = 1174,
        [sym__terminator] = 1174,
        [aux_sym_program_repeat1] = 1174,
        [anon_sym_end] = 1174,
        [anon_sym_while] = 1174,
        [anon_sym_until] = 1174,
        [anon_sym_if] = 1174,
        [anon_sym_unless] = 1174,
        [anon_sym_else] = 1174,
        [sym_comment] = 52,
        [sym__line_break] = 1174,
        [anon_sym_SEMI] = 1174,
    },
    [521] = {
        [anon_sym_end] = 1408,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [522] = {
        [sym_else_block] = 1178,
        [sym__terminator] = 1178,
        [aux_sym_program_repeat1] = 1178,
        [anon_sym_end] = 1178,
        [anon_sym_while] = 1178,
        [anon_sym_until] = 1178,
        [anon_sym_if] = 1178,
        [anon_sym_unless] = 1178,
        [anon_sym_else] = 1178,
        [sym_comment] = 52,
        [sym__line_break] = 1178,
        [anon_sym_SEMI] = 1178,
    },
    [523] = {
        [sym_else_block] = 1180,
        [sym__terminator] = 1180,
        [aux_sym_program_repeat1] = 1180,
        [anon_sym_end] = 1180,
        [anon_sym_while] = 1180,
        [anon_sym_until] = 1180,
        [anon_sym_if] = 1180,
        [anon_sym_unless] = 1180,
        [anon_sym_else] = 1180,
        [sym_comment] = 52,
        [sym__line_break] = 1180,
        [anon_sym_SEMI] = 1180,
    },
    [524] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1410,
        [anon_sym_end] = 1402,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [525] = {
        [sym_else_block] = 1184,
        [sym__terminator] = 1184,
        [aux_sym_program_repeat1] = 1184,
        [anon_sym_end] = 1184,
        [anon_sym_while] = 1184,
        [anon_sym_until] = 1184,
        [anon_sym_if] = 1184,
        [anon_sym_unless] = 1184,
        [anon_sym_else] = 1184,
        [sym_comment] = 52,
        [sym__line_break] = 1184,
        [anon_sym_SEMI] = 1184,
    },
    [526] = {
        [anon_sym_end] = 1406,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [527] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1412,
        [anon_sym_end] = 1414,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [528] = {
        [sym_else_block] = 1190,
        [sym__terminator] = 1190,
        [aux_sym_program_repeat1] = 1190,
        [anon_sym_end] = 1190,
        [anon_sym_while] = 1190,
        [anon_sym_until] = 1190,
        [anon_sym_if] = 1190,
        [anon_sym_unless] = 1190,
        [anon_sym_else] = 1190,
        [sym_comment] = 52,
        [sym__line_break] = 1190,
        [anon_sym_SEMI] = 1190,
    },
    [529] = {
        [anon_sym_end] = 1396,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [530] = {
        [sym_else_block] = 1192,
        [sym__terminator] = 1192,
        [aux_sym_program_repeat1] = 1192,
        [anon_sym_end] = 1192,
        [anon_sym_while] = 1192,
        [anon_sym_until] = 1192,
        [anon_sym_if] = 1192,
        [anon_sym_unless] = 1192,
        [anon_sym_else] = 1192,
        [sym_comment] = 52,
        [sym__line_break] = 1192,
        [anon_sym_SEMI] = 1192,
    },
    [531] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1416,
        [anon_sym_RPAREN] = 1418,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [532] = {
        [sym_else_block] = 306,
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [anon_sym_end] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_while] = 306,
        [anon_sym_until] = 306,
        [anon_sym_if] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_else] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [533] = {
        [anon_sym_RPAREN] = 1420,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [534] = {
        [sym_else_block] = 346,
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_while] = 346,
        [anon_sym_until] = 346,
        [anon_sym_if] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_else] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [535] = {
        [sym_else_block] = 368,
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_end] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_while] = 368,
        [anon_sym_until] = 368,
        [anon_sym_if] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_else] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [536] = {
        [sym_argument_list] = 1422,
        [sym__terminator] = 1424,
        [anon_sym_LPAREN] = 1426,
        [anon_sym_STAR] = 1206,
        [anon_sym_AMP] = 1206,
        [sym_identifier] = 1208,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [537] = {
        [sym__terminator] = 1428,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [538] = {
        [sym__statement] = 1430,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1432,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [539] = {
        [sym_argument_list] = 1434,
        [anon_sym_RPAREN] = 1428,
        [anon_sym_STAR] = 1220,
        [anon_sym_AMP] = 1220,
        [sym_identifier] = 1222,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [540] = {
        [anon_sym_RPAREN] = 1436,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [541] = {
        [sym__statement] = 1438,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1440,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [542] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1442,
        [anon_sym_end] = 1444,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [543] = {
        [sym_else_block] = 1282,
        [sym__terminator] = 1282,
        [aux_sym_program_repeat1] = 1282,
        [anon_sym_end] = 1282,
        [anon_sym_while] = 1282,
        [anon_sym_until] = 1282,
        [anon_sym_if] = 1282,
        [anon_sym_unless] = 1282,
        [anon_sym_else] = 1282,
        [sym_comment] = 52,
        [sym__line_break] = 1282,
        [anon_sym_SEMI] = 1282,
    },
    [544] = {
        [anon_sym_end] = 1446,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [545] = {
        [sym_else_block] = 1286,
        [sym__terminator] = 1286,
        [aux_sym_program_repeat1] = 1286,
        [anon_sym_end] = 1286,
        [anon_sym_while] = 1286,
        [anon_sym_until] = 1286,
        [anon_sym_if] = 1286,
        [anon_sym_unless] = 1286,
        [anon_sym_else] = 1286,
        [sym_comment] = 52,
        [sym__line_break] = 1286,
        [anon_sym_SEMI] = 1286,
    },
    [546] = {
        [sym_else_block] = 1288,
        [sym__terminator] = 1288,
        [aux_sym_program_repeat1] = 1288,
        [anon_sym_end] = 1288,
        [anon_sym_while] = 1288,
        [anon_sym_until] = 1288,
        [anon_sym_if] = 1288,
        [anon_sym_unless] = 1288,
        [anon_sym_else] = 1288,
        [sym_comment] = 52,
        [sym__line_break] = 1288,
        [anon_sym_SEMI] = 1288,
    },
    [547] = {
        [sym__statement] = 1448,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1444,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [548] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1450,
        [anon_sym_end] = 1446,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [549] = {
        [anon_sym_end] = 1452,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [550] = {
        [sym_else_block] = 1296,
        [sym__terminator] = 1296,
        [aux_sym_program_repeat1] = 1296,
        [anon_sym_end] = 1296,
        [anon_sym_while] = 1296,
        [anon_sym_until] = 1296,
        [anon_sym_if] = 1296,
        [anon_sym_unless] = 1296,
        [anon_sym_else] = 1296,
        [sym_comment] = 52,
        [sym__line_break] = 1296,
        [anon_sym_SEMI] = 1296,
    },
    [551] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1454,
        [anon_sym_end] = 1440,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [552] = {
        [sym_else_block] = 1300,
        [sym__terminator] = 1300,
        [aux_sym_program_repeat1] = 1300,
        [anon_sym_end] = 1300,
        [anon_sym_while] = 1300,
        [anon_sym_until] = 1300,
        [anon_sym_if] = 1300,
        [anon_sym_unless] = 1300,
        [anon_sym_else] = 1300,
        [sym_comment] = 52,
        [sym__line_break] = 1300,
        [anon_sym_SEMI] = 1300,
    },
    [553] = {
        [anon_sym_end] = 1444,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [554] = {
        [sym__function_name] = 1456,
        [anon_sym_PIPE] = 764,
        [anon_sym_STAR] = 764,
        [anon_sym_AMP] = 764,
        [anon_sym_LT] = 764,
        [sym_identifier] = 764,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_LT_EQ_GT] = 764,
        [anon_sym_EQ_EQ] = 764,
        [anon_sym_EQ_EQ_EQ] = 764,
        [anon_sym_EQ_TILDE] = 764,
        [anon_sym_GT] = 764,
        [anon_sym_GT_EQ] = 764,
        [anon_sym_LT_EQ] = 764,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_SLASH] = 764,
        [anon_sym_PERCENT] = 764,
        [anon_sym_STAR_STAR] = 764,
        [anon_sym_LT_LT] = 764,
        [anon_sym_GT_GT] = 764,
        [anon_sym_TILDE] = 764,
        [anon_sym_PLUS_AT] = 764,
        [anon_sym_DASH_AT] = 764,
        [anon_sym_LBRACK_RBRACK] = 764,
        [anon_sym_LBRACK_RBRACK_EQ] = 764,
        [sym__line_break] = 52,
    },
    [555] = {
        [sym_else_block] = 1304,
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [anon_sym_else] = 1304,
        [sym_comment] = 52,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [556] = {
        [sym_else_block] = 1210,
        [sym__terminator] = 1210,
        [aux_sym_program_repeat1] = 1210,
        [anon_sym_end] = 1210,
        [anon_sym_while] = 1210,
        [anon_sym_until] = 1210,
        [anon_sym_if] = 1210,
        [anon_sym_unless] = 1210,
        [anon_sym_else] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [557] = {
        [sym_else_block] = 1306,
        [sym__terminator] = 1306,
        [aux_sym_program_repeat1] = 1306,
        [anon_sym_end] = 1306,
        [anon_sym_while] = 1306,
        [anon_sym_until] = 1306,
        [anon_sym_if] = 1306,
        [anon_sym_unless] = 1306,
        [anon_sym_else] = 1306,
        [sym_comment] = 52,
        [sym__line_break] = 1306,
        [anon_sym_SEMI] = 1306,
    },
    [558] = {
        [sym_identifier] = 1458,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [559] = {
        [sym__argument] = 1460,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1462,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [560] = {
        [sym_identifier] = 1464,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [561] = {
        [sym_else_block] = 428,
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_while] = 428,
        [anon_sym_until] = 428,
        [anon_sym_if] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_else] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [562] = {
        [aux_sym__call_arguments_repeat1] = 1466,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1468,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [563] = {
        [sym_else_block] = 448,
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_while] = 448,
        [anon_sym_until] = 448,
        [anon_sym_if] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_else] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [564] = {
        [anon_sym_RBRACK] = 1470,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [565] = {
        [sym_else_block] = 472,
        [sym__terminator] = 472,
        [aux_sym_program_repeat1] = 472,
        [anon_sym_end] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_while] = 472,
        [anon_sym_until] = 472,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 472,
        [anon_sym_else] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [566] = {
        [sym_else_block] = 480,
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [anon_sym_end] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_while] = 480,
        [anon_sym_until] = 480,
        [anon_sym_if] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_else] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [567] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [568] = {
        [sym__statement] = 1472,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_PIPE] = 1474,
        [anon_sym_end] = 1456,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [569] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1476,
        [anon_sym_end] = 1478,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [570] = {
        [sym__statement] = 1480,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1478,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [571] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1482,
        [anon_sym_end] = 1484,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [572] = {
        [sym_else_block] = 1336,
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_else] = 1336,
        [sym_comment] = 52,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [573] = {
        [anon_sym_end] = 1486,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [574] = {
        [sym_else_block] = 1340,
        [sym__terminator] = 1340,
        [aux_sym_program_repeat1] = 1340,
        [anon_sym_end] = 1340,
        [anon_sym_while] = 1340,
        [anon_sym_until] = 1340,
        [anon_sym_if] = 1340,
        [anon_sym_unless] = 1340,
        [anon_sym_else] = 1340,
        [sym_comment] = 52,
        [sym__line_break] = 1340,
        [anon_sym_SEMI] = 1340,
    },
    [575] = {
        [sym_else_block] = 1342,
        [sym__terminator] = 1342,
        [aux_sym_program_repeat1] = 1342,
        [anon_sym_end] = 1342,
        [anon_sym_while] = 1342,
        [anon_sym_until] = 1342,
        [anon_sym_if] = 1342,
        [anon_sym_unless] = 1342,
        [anon_sym_else] = 1342,
        [sym_comment] = 52,
        [sym__line_break] = 1342,
        [anon_sym_SEMI] = 1342,
    },
    [576] = {
        [anon_sym_end] = 1484,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [577] = {
        [sym__statement] = 1488,
        [sym__declaration] = 698,
        [sym_method_declaration] = 700,
        [sym_class_declaration] = 700,
        [sym_module_declaration] = 700,
        [sym_while_statement] = 698,
        [sym_until_statement] = 698,
        [sym_if_statement] = 698,
        [sym_unless_statement] = 698,
        [sym_for_statement] = 698,
        [sym_if_modifier] = 698,
        [sym_unless_modifier] = 698,
        [sym_while_modifier] = 698,
        [sym_until_modifier] = 698,
        [sym__call] = 704,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 698,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_undef] = 714,
        [anon_sym_alias] = 716,
        [anon_sym_def] = 718,
        [anon_sym_LPAREN] = 720,
        [anon_sym_class] = 722,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_module] = 726,
        [anon_sym_while] = 728,
        [anon_sym_until] = 730,
        [anon_sym_if] = 732,
        [anon_sym_unless] = 734,
        [anon_sym_for] = 736,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [578] = {
        [sym_else_block] = 1346,
        [anon_sym_end] = 1346,
        [anon_sym_else] = 1346,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [579] = {
        [sym__expression] = 1490,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [580] = {
        [sym__expression] = 1492,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [581] = {
        [sym__expression] = 1494,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [582] = {
        [sym__expression] = 1496,
        [sym__argument] = 706,
        [sym__primary] = 708,
        [sym_scope_resolution_expression] = 710,
        [sym_subscript_expression] = 710,
        [sym_member_access] = 710,
        [sym__lhs] = 712,
        [sym__variable] = 710,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COLON_COLON] = 724,
        [anon_sym_nil] = 738,
        [anon_sym_self] = 738,
        [sym_identifier] = 738,
        [sym_comment] = 52,
        [sym_symbol] = 706,
        [sym__line_break] = 52,
    },
    [583] = {
        [sym_else_block] = 360,
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_while] = 360,
        [anon_sym_until] = 360,
        [anon_sym_if] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_else] = 360,
        [sym_comment] = 52,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [584] = {
        [sym_else_block] = 362,
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 362,
        [anon_sym_while] = 362,
        [anon_sym_until] = 362,
        [anon_sym_if] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_else] = 362,
        [sym_comment] = 52,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [585] = {
        [sym_else_block] = 364,
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_end] = 364,
        [anon_sym_while] = 364,
        [anon_sym_until] = 364,
        [anon_sym_if] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_else] = 364,
        [sym_comment] = 52,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [586] = {
        [sym_else_block] = 366,
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_else] = 366,
        [sym_comment] = 52,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [587] = {
        [sym_else_block] = 372,
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 1498,
        [anon_sym_end] = 372,
        [anon_sym_while] = 746,
        [anon_sym_until] = 748,
        [anon_sym_if] = 750,
        [anon_sym_unless] = 752,
        [anon_sym_else] = 372,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [588] = {
        [sym_else_block] = 374,
        [anon_sym_end] = 374,
        [anon_sym_else] = 374,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [589] = {
        [anon_sym_end] = 1500,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [590] = {
        [sym__terminator] = 832,
        [aux_sym_program_repeat1] = 832,
        [anon_sym_end] = 832,
        [anon_sym_while] = 832,
        [anon_sym_until] = 832,
        [anon_sym_if] = 832,
        [anon_sym_unless] = 832,
        [sym_comment] = 52,
        [sym__line_break] = 832,
        [anon_sym_SEMI] = 832,
    },
    [591] = {
        [sym__terminator] = 844,
        [aux_sym_program_repeat1] = 844,
        [anon_sym_end] = 844,
        [anon_sym_while] = 844,
        [anon_sym_until] = 844,
        [anon_sym_if] = 844,
        [anon_sym_unless] = 844,
        [sym_comment] = 52,
        [sym__line_break] = 844,
        [anon_sym_SEMI] = 844,
    },
    [592] = {
        [sym_then_block] = 1502,
        [sym__then_elsif_else_block] = 1504,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [593] = {
        [sym_else_block] = 1506,
        [aux_sym__then_elsif_else_block_repeat1] = 1508,
        [anon_sym_end] = 1510,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [594] = {
        [sym__terminator] = 896,
        [aux_sym_program_repeat1] = 896,
        [anon_sym_end] = 896,
        [anon_sym_while] = 896,
        [anon_sym_until] = 896,
        [anon_sym_if] = 896,
        [anon_sym_unless] = 896,
        [sym_comment] = 52,
        [sym__line_break] = 896,
        [anon_sym_SEMI] = 896,
    },
    [595] = {
        [anon_sym_end] = 1512,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [596] = {
        [sym_else_block] = 1514,
        [anon_sym_end] = 1512,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [597] = {
        [sym__terminator] = 1044,
        [aux_sym_program_repeat1] = 1044,
        [anon_sym_end] = 1044,
        [anon_sym_while] = 1044,
        [anon_sym_until] = 1044,
        [anon_sym_if] = 1044,
        [anon_sym_unless] = 1044,
        [sym_comment] = 52,
        [sym__line_break] = 1044,
        [anon_sym_SEMI] = 1044,
    },
    [598] = {
        [anon_sym_end] = 1516,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [599] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 52,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [600] = {
        [sym__terminator] = 1108,
        [aux_sym_program_repeat1] = 1108,
        [anon_sym_end] = 1108,
        [anon_sym_while] = 1108,
        [anon_sym_until] = 1108,
        [anon_sym_if] = 1108,
        [anon_sym_unless] = 1108,
        [sym_comment] = 52,
        [sym__line_break] = 1108,
        [anon_sym_SEMI] = 1108,
    },
    [601] = {
        [sym__statement_block] = 1518,
        [sym__do_block] = 596,
        [sym__terminator] = 598,
        [anon_sym_do] = 600,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [602] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 52,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [603] = {
        [sym__statement_block] = 1520,
        [sym__do_block] = 596,
        [sym__terminator] = 598,
        [anon_sym_do] = 600,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [604] = {
        [sym__terminator] = 1116,
        [aux_sym_program_repeat1] = 1116,
        [anon_sym_end] = 1116,
        [anon_sym_while] = 1116,
        [anon_sym_until] = 1116,
        [anon_sym_if] = 1116,
        [anon_sym_unless] = 1116,
        [sym_comment] = 52,
        [sym__line_break] = 1116,
        [anon_sym_SEMI] = 1116,
    },
    [605] = {
        [sym__terminator] = 1522,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [606] = {
        [sym__statement] = 1524,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1526,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [607] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1528,
        [anon_sym_end] = 1530,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [608] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [anon_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 52,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [609] = {
        [anon_sym_end] = 1532,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [610] = {
        [sym__terminator] = 1132,
        [aux_sym_program_repeat1] = 1132,
        [anon_sym_end] = 1132,
        [anon_sym_while] = 1132,
        [anon_sym_until] = 1132,
        [anon_sym_if] = 1132,
        [anon_sym_unless] = 1132,
        [sym_comment] = 52,
        [sym__line_break] = 1132,
        [anon_sym_SEMI] = 1132,
    },
    [611] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 52,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [612] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [anon_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [613] = {
        [sym__terminator] = 1534,
        [anon_sym_LT] = 1536,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [614] = {
        [sym__statement] = 1538,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1540,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [615] = {
        [sym_identifier] = 1542,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [616] = {
        [sym__terminator] = 1544,
        [aux_sym_class_declaration_repeat1] = 1546,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [617] = {
        [sym__statement] = 1548,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1550,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [618] = {
        [sym__terminator] = 1552,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [619] = {
        [sym__statement] = 1554,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1556,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [620] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1558,
        [anon_sym_end] = 1560,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [621] = {
        [sym__terminator] = 1174,
        [aux_sym_program_repeat1] = 1174,
        [anon_sym_end] = 1174,
        [anon_sym_while] = 1174,
        [anon_sym_until] = 1174,
        [anon_sym_if] = 1174,
        [anon_sym_unless] = 1174,
        [sym_comment] = 52,
        [sym__line_break] = 1174,
        [anon_sym_SEMI] = 1174,
    },
    [622] = {
        [anon_sym_end] = 1562,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [623] = {
        [sym__terminator] = 1178,
        [aux_sym_program_repeat1] = 1178,
        [anon_sym_end] = 1178,
        [anon_sym_while] = 1178,
        [anon_sym_until] = 1178,
        [anon_sym_if] = 1178,
        [anon_sym_unless] = 1178,
        [sym_comment] = 52,
        [sym__line_break] = 1178,
        [anon_sym_SEMI] = 1178,
    },
    [624] = {
        [sym__terminator] = 1180,
        [aux_sym_program_repeat1] = 1180,
        [anon_sym_end] = 1180,
        [anon_sym_while] = 1180,
        [anon_sym_until] = 1180,
        [anon_sym_if] = 1180,
        [anon_sym_unless] = 1180,
        [sym_comment] = 52,
        [sym__line_break] = 1180,
        [anon_sym_SEMI] = 1180,
    },
    [625] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1564,
        [anon_sym_end] = 1556,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [626] = {
        [sym__terminator] = 1184,
        [aux_sym_program_repeat1] = 1184,
        [anon_sym_end] = 1184,
        [anon_sym_while] = 1184,
        [anon_sym_until] = 1184,
        [anon_sym_if] = 1184,
        [anon_sym_unless] = 1184,
        [sym_comment] = 52,
        [sym__line_break] = 1184,
        [anon_sym_SEMI] = 1184,
    },
    [627] = {
        [anon_sym_end] = 1560,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [628] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1566,
        [anon_sym_end] = 1568,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [629] = {
        [sym__terminator] = 1190,
        [aux_sym_program_repeat1] = 1190,
        [anon_sym_end] = 1190,
        [anon_sym_while] = 1190,
        [anon_sym_until] = 1190,
        [anon_sym_if] = 1190,
        [anon_sym_unless] = 1190,
        [sym_comment] = 52,
        [sym__line_break] = 1190,
        [anon_sym_SEMI] = 1190,
    },
    [630] = {
        [anon_sym_end] = 1550,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [631] = {
        [sym__terminator] = 1192,
        [aux_sym_program_repeat1] = 1192,
        [anon_sym_end] = 1192,
        [anon_sym_while] = 1192,
        [anon_sym_until] = 1192,
        [anon_sym_if] = 1192,
        [anon_sym_unless] = 1192,
        [sym_comment] = 52,
        [sym__line_break] = 1192,
        [anon_sym_SEMI] = 1192,
    },
    [632] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1570,
        [anon_sym_RPAREN] = 1572,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [633] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [anon_sym_end] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_while] = 306,
        [anon_sym_until] = 306,
        [anon_sym_if] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [634] = {
        [anon_sym_RPAREN] = 1574,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [635] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_while] = 346,
        [anon_sym_until] = 346,
        [anon_sym_if] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [636] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_end] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_while] = 368,
        [anon_sym_until] = 368,
        [anon_sym_if] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [637] = {
        [sym_argument_list] = 1576,
        [sym__terminator] = 1578,
        [anon_sym_LPAREN] = 1580,
        [anon_sym_STAR] = 1206,
        [anon_sym_AMP] = 1206,
        [sym_identifier] = 1208,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [638] = {
        [sym__terminator] = 1582,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [639] = {
        [sym__statement] = 1584,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1586,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [640] = {
        [sym_argument_list] = 1588,
        [anon_sym_RPAREN] = 1582,
        [anon_sym_STAR] = 1220,
        [anon_sym_AMP] = 1220,
        [sym_identifier] = 1222,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [641] = {
        [anon_sym_RPAREN] = 1590,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [642] = {
        [sym__statement] = 1592,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1594,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [643] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1596,
        [anon_sym_end] = 1598,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [644] = {
        [sym__terminator] = 1282,
        [aux_sym_program_repeat1] = 1282,
        [anon_sym_end] = 1282,
        [anon_sym_while] = 1282,
        [anon_sym_until] = 1282,
        [anon_sym_if] = 1282,
        [anon_sym_unless] = 1282,
        [sym_comment] = 52,
        [sym__line_break] = 1282,
        [anon_sym_SEMI] = 1282,
    },
    [645] = {
        [anon_sym_end] = 1600,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [646] = {
        [sym__terminator] = 1286,
        [aux_sym_program_repeat1] = 1286,
        [anon_sym_end] = 1286,
        [anon_sym_while] = 1286,
        [anon_sym_until] = 1286,
        [anon_sym_if] = 1286,
        [anon_sym_unless] = 1286,
        [sym_comment] = 52,
        [sym__line_break] = 1286,
        [anon_sym_SEMI] = 1286,
    },
    [647] = {
        [sym__terminator] = 1288,
        [aux_sym_program_repeat1] = 1288,
        [anon_sym_end] = 1288,
        [anon_sym_while] = 1288,
        [anon_sym_until] = 1288,
        [anon_sym_if] = 1288,
        [anon_sym_unless] = 1288,
        [sym_comment] = 52,
        [sym__line_break] = 1288,
        [anon_sym_SEMI] = 1288,
    },
    [648] = {
        [sym__statement] = 1602,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1598,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [649] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1604,
        [anon_sym_end] = 1600,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [650] = {
        [anon_sym_end] = 1606,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [651] = {
        [sym__terminator] = 1296,
        [aux_sym_program_repeat1] = 1296,
        [anon_sym_end] = 1296,
        [anon_sym_while] = 1296,
        [anon_sym_until] = 1296,
        [anon_sym_if] = 1296,
        [anon_sym_unless] = 1296,
        [sym_comment] = 52,
        [sym__line_break] = 1296,
        [anon_sym_SEMI] = 1296,
    },
    [652] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1608,
        [anon_sym_end] = 1594,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [653] = {
        [sym__terminator] = 1300,
        [aux_sym_program_repeat1] = 1300,
        [anon_sym_end] = 1300,
        [anon_sym_while] = 1300,
        [anon_sym_until] = 1300,
        [anon_sym_if] = 1300,
        [anon_sym_unless] = 1300,
        [sym_comment] = 52,
        [sym__line_break] = 1300,
        [anon_sym_SEMI] = 1300,
    },
    [654] = {
        [anon_sym_end] = 1598,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [655] = {
        [sym__function_name] = 1610,
        [anon_sym_PIPE] = 564,
        [anon_sym_STAR] = 564,
        [anon_sym_AMP] = 564,
        [anon_sym_LT] = 564,
        [sym_identifier] = 564,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 564,
        [anon_sym_CARET] = 564,
        [anon_sym_LT_EQ_GT] = 564,
        [anon_sym_EQ_EQ] = 564,
        [anon_sym_EQ_EQ_EQ] = 564,
        [anon_sym_EQ_TILDE] = 564,
        [anon_sym_GT] = 564,
        [anon_sym_GT_EQ] = 564,
        [anon_sym_LT_EQ] = 564,
        [anon_sym_PLUS] = 564,
        [anon_sym_DASH] = 564,
        [anon_sym_SLASH] = 564,
        [anon_sym_PERCENT] = 564,
        [anon_sym_STAR_STAR] = 564,
        [anon_sym_LT_LT] = 564,
        [anon_sym_GT_GT] = 564,
        [anon_sym_TILDE] = 564,
        [anon_sym_PLUS_AT] = 564,
        [anon_sym_DASH_AT] = 564,
        [anon_sym_LBRACK_RBRACK] = 564,
        [anon_sym_LBRACK_RBRACK_EQ] = 564,
        [sym__line_break] = 52,
    },
    [656] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 52,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [657] = {
        [sym__terminator] = 1210,
        [aux_sym_program_repeat1] = 1210,
        [anon_sym_end] = 1210,
        [anon_sym_while] = 1210,
        [anon_sym_until] = 1210,
        [anon_sym_if] = 1210,
        [anon_sym_unless] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [658] = {
        [sym__terminator] = 1306,
        [aux_sym_program_repeat1] = 1306,
        [anon_sym_end] = 1306,
        [anon_sym_while] = 1306,
        [anon_sym_until] = 1306,
        [anon_sym_if] = 1306,
        [anon_sym_unless] = 1306,
        [sym_comment] = 52,
        [sym__line_break] = 1306,
        [anon_sym_SEMI] = 1306,
    },
    [659] = {
        [sym_identifier] = 1612,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [660] = {
        [sym__argument] = 1614,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1616,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [661] = {
        [sym_identifier] = 1618,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [662] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_end] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_while] = 428,
        [anon_sym_until] = 428,
        [anon_sym_if] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [663] = {
        [aux_sym__call_arguments_repeat1] = 1620,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1622,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [664] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_while] = 448,
        [anon_sym_until] = 448,
        [anon_sym_if] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [665] = {
        [anon_sym_RBRACK] = 1624,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [666] = {
        [sym__terminator] = 472,
        [aux_sym_program_repeat1] = 472,
        [anon_sym_end] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_while] = 472,
        [anon_sym_until] = 472,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [667] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [anon_sym_end] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_while] = 480,
        [anon_sym_until] = 480,
        [anon_sym_if] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [668] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [669] = {
        [sym__statement] = 1626,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_PIPE] = 1628,
        [anon_sym_end] = 1610,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [670] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1630,
        [anon_sym_end] = 1632,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [671] = {
        [sym__statement] = 1634,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1632,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [672] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1636,
        [anon_sym_end] = 1638,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [673] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_unless] = 1336,
        [sym_comment] = 52,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [674] = {
        [anon_sym_end] = 1640,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [675] = {
        [sym__terminator] = 1340,
        [aux_sym_program_repeat1] = 1340,
        [anon_sym_end] = 1340,
        [anon_sym_while] = 1340,
        [anon_sym_until] = 1340,
        [anon_sym_if] = 1340,
        [anon_sym_unless] = 1340,
        [sym_comment] = 52,
        [sym__line_break] = 1340,
        [anon_sym_SEMI] = 1340,
    },
    [676] = {
        [sym__terminator] = 1342,
        [aux_sym_program_repeat1] = 1342,
        [anon_sym_end] = 1342,
        [anon_sym_while] = 1342,
        [anon_sym_until] = 1342,
        [anon_sym_if] = 1342,
        [anon_sym_unless] = 1342,
        [sym_comment] = 52,
        [sym__line_break] = 1342,
        [anon_sym_SEMI] = 1342,
    },
    [677] = {
        [anon_sym_end] = 1638,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [678] = {
        [anon_sym_end] = 1642,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [679] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_RPAREN] = 618,
        [anon_sym_while] = 618,
        [anon_sym_until] = 618,
        [anon_sym_if] = 618,
        [anon_sym_unless] = 618,
        [sym_comment] = 52,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [680] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_RPAREN] = 628,
        [anon_sym_while] = 628,
        [anon_sym_until] = 628,
        [anon_sym_if] = 628,
        [anon_sym_unless] = 628,
        [sym_comment] = 52,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [681] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1644,
        [anon_sym_end] = 1646,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [682] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [anon_sym_RPAREN] = 636,
        [anon_sym_while] = 636,
        [anon_sym_until] = 636,
        [anon_sym_if] = 636,
        [anon_sym_unless] = 636,
        [sym_comment] = 52,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [683] = {
        [anon_sym_end] = 1648,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [684] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_RPAREN] = 640,
        [anon_sym_while] = 640,
        [anon_sym_until] = 640,
        [anon_sym_if] = 640,
        [anon_sym_unless] = 640,
        [sym_comment] = 52,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [685] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_RPAREN] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 52,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [686] = {
        [sym_identifier] = 1650,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [687] = {
        [sym__argument] = 1652,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1654,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [688] = {
        [sym_identifier] = 1656,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [689] = {
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_in] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [690] = {
        [aux_sym__call_arguments_repeat1] = 1658,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1660,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [691] = {
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_in] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [692] = {
        [anon_sym_RBRACK] = 1662,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [693] = {
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_in] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [694] = {
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_in] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [695] = {
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_in] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [696] = {
        [sym_then_block] = 1664,
        [sym__then_else_block] = 1666,
        [sym__terminator] = 648,
        [anon_sym_then] = 648,
        [sym_comment] = 52,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 652,
    },
    [697] = {
        [sym_else_block] = 1668,
        [anon_sym_end] = 1670,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [698] = {
        [sym__terminator] = 694,
        [aux_sym_program_repeat1] = 694,
        [anon_sym_RPAREN] = 694,
        [anon_sym_while] = 694,
        [anon_sym_until] = 694,
        [anon_sym_if] = 694,
        [anon_sym_unless] = 694,
        [sym_comment] = 52,
        [sym__line_break] = 694,
        [anon_sym_SEMI] = 694,
    },
    [699] = {
        [anon_sym_end] = 1672,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [700] = {
        [sym__terminator] = 832,
        [aux_sym_program_repeat1] = 832,
        [anon_sym_RPAREN] = 832,
        [anon_sym_while] = 832,
        [anon_sym_until] = 832,
        [anon_sym_if] = 832,
        [anon_sym_unless] = 832,
        [sym_comment] = 52,
        [sym__line_break] = 832,
        [anon_sym_SEMI] = 832,
    },
    [701] = {
        [sym__terminator] = 844,
        [aux_sym_program_repeat1] = 844,
        [anon_sym_RPAREN] = 844,
        [anon_sym_while] = 844,
        [anon_sym_until] = 844,
        [anon_sym_if] = 844,
        [anon_sym_unless] = 844,
        [sym_comment] = 52,
        [sym__line_break] = 844,
        [anon_sym_SEMI] = 844,
    },
    [702] = {
        [sym_then_block] = 1674,
        [sym__then_elsif_else_block] = 1676,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [703] = {
        [sym_else_block] = 1678,
        [aux_sym__then_elsif_else_block_repeat1] = 1680,
        [anon_sym_end] = 1682,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [704] = {
        [sym__terminator] = 896,
        [aux_sym_program_repeat1] = 896,
        [anon_sym_RPAREN] = 896,
        [anon_sym_while] = 896,
        [anon_sym_until] = 896,
        [anon_sym_if] = 896,
        [anon_sym_unless] = 896,
        [sym_comment] = 52,
        [sym__line_break] = 896,
        [anon_sym_SEMI] = 896,
    },
    [705] = {
        [anon_sym_end] = 1684,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [706] = {
        [sym_else_block] = 1686,
        [anon_sym_end] = 1684,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [707] = {
        [sym__terminator] = 1044,
        [aux_sym_program_repeat1] = 1044,
        [anon_sym_RPAREN] = 1044,
        [anon_sym_while] = 1044,
        [anon_sym_until] = 1044,
        [anon_sym_if] = 1044,
        [anon_sym_unless] = 1044,
        [sym_comment] = 52,
        [sym__line_break] = 1044,
        [anon_sym_SEMI] = 1044,
    },
    [708] = {
        [anon_sym_end] = 1688,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [709] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [anon_sym_RPAREN] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 52,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [710] = {
        [sym__terminator] = 1108,
        [aux_sym_program_repeat1] = 1108,
        [anon_sym_RPAREN] = 1108,
        [anon_sym_while] = 1108,
        [anon_sym_until] = 1108,
        [anon_sym_if] = 1108,
        [anon_sym_unless] = 1108,
        [sym_comment] = 52,
        [sym__line_break] = 1108,
        [anon_sym_SEMI] = 1108,
    },
    [711] = {
        [sym__statement_block] = 1690,
        [sym__do_block] = 380,
        [sym__terminator] = 382,
        [anon_sym_do] = 384,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [712] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [anon_sym_RPAREN] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 52,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [713] = {
        [sym__statement_block] = 1692,
        [sym__do_block] = 380,
        [sym__terminator] = 382,
        [anon_sym_do] = 384,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [714] = {
        [sym__terminator] = 1116,
        [aux_sym_program_repeat1] = 1116,
        [anon_sym_RPAREN] = 1116,
        [anon_sym_while] = 1116,
        [anon_sym_until] = 1116,
        [anon_sym_if] = 1116,
        [anon_sym_unless] = 1116,
        [sym_comment] = 52,
        [sym__line_break] = 1116,
        [anon_sym_SEMI] = 1116,
    },
    [715] = {
        [sym__terminator] = 1694,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [716] = {
        [sym__statement] = 1696,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1698,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [717] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1700,
        [anon_sym_end] = 1702,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [718] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [anon_sym_RPAREN] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 52,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [719] = {
        [anon_sym_end] = 1704,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [720] = {
        [sym__terminator] = 1132,
        [aux_sym_program_repeat1] = 1132,
        [anon_sym_RPAREN] = 1132,
        [anon_sym_while] = 1132,
        [anon_sym_until] = 1132,
        [anon_sym_if] = 1132,
        [anon_sym_unless] = 1132,
        [sym_comment] = 52,
        [sym__line_break] = 1132,
        [anon_sym_SEMI] = 1132,
    },
    [721] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [anon_sym_RPAREN] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 52,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [722] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [anon_sym_RPAREN] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [723] = {
        [sym__terminator] = 1706,
        [anon_sym_LT] = 1708,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [724] = {
        [sym__statement] = 1710,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1712,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [725] = {
        [sym_identifier] = 1714,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [726] = {
        [sym__terminator] = 1716,
        [aux_sym_class_declaration_repeat1] = 1718,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [727] = {
        [sym__statement] = 1720,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1722,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [728] = {
        [sym__terminator] = 1724,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [729] = {
        [sym__statement] = 1726,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1728,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [730] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1730,
        [anon_sym_end] = 1732,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [731] = {
        [sym__terminator] = 1174,
        [aux_sym_program_repeat1] = 1174,
        [anon_sym_RPAREN] = 1174,
        [anon_sym_while] = 1174,
        [anon_sym_until] = 1174,
        [anon_sym_if] = 1174,
        [anon_sym_unless] = 1174,
        [sym_comment] = 52,
        [sym__line_break] = 1174,
        [anon_sym_SEMI] = 1174,
    },
    [732] = {
        [anon_sym_end] = 1734,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [733] = {
        [sym__terminator] = 1178,
        [aux_sym_program_repeat1] = 1178,
        [anon_sym_RPAREN] = 1178,
        [anon_sym_while] = 1178,
        [anon_sym_until] = 1178,
        [anon_sym_if] = 1178,
        [anon_sym_unless] = 1178,
        [sym_comment] = 52,
        [sym__line_break] = 1178,
        [anon_sym_SEMI] = 1178,
    },
    [734] = {
        [sym__terminator] = 1180,
        [aux_sym_program_repeat1] = 1180,
        [anon_sym_RPAREN] = 1180,
        [anon_sym_while] = 1180,
        [anon_sym_until] = 1180,
        [anon_sym_if] = 1180,
        [anon_sym_unless] = 1180,
        [sym_comment] = 52,
        [sym__line_break] = 1180,
        [anon_sym_SEMI] = 1180,
    },
    [735] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1736,
        [anon_sym_end] = 1728,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [736] = {
        [sym__terminator] = 1184,
        [aux_sym_program_repeat1] = 1184,
        [anon_sym_RPAREN] = 1184,
        [anon_sym_while] = 1184,
        [anon_sym_until] = 1184,
        [anon_sym_if] = 1184,
        [anon_sym_unless] = 1184,
        [sym_comment] = 52,
        [sym__line_break] = 1184,
        [anon_sym_SEMI] = 1184,
    },
    [737] = {
        [anon_sym_end] = 1732,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [738] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1738,
        [anon_sym_end] = 1740,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [739] = {
        [sym__terminator] = 1190,
        [aux_sym_program_repeat1] = 1190,
        [anon_sym_RPAREN] = 1190,
        [anon_sym_while] = 1190,
        [anon_sym_until] = 1190,
        [anon_sym_if] = 1190,
        [anon_sym_unless] = 1190,
        [sym_comment] = 52,
        [sym__line_break] = 1190,
        [anon_sym_SEMI] = 1190,
    },
    [740] = {
        [anon_sym_end] = 1722,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [741] = {
        [sym__terminator] = 1192,
        [aux_sym_program_repeat1] = 1192,
        [anon_sym_RPAREN] = 1192,
        [anon_sym_while] = 1192,
        [anon_sym_until] = 1192,
        [anon_sym_if] = 1192,
        [anon_sym_unless] = 1192,
        [sym_comment] = 52,
        [sym__line_break] = 1192,
        [anon_sym_SEMI] = 1192,
    },
    [742] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1742,
        [anon_sym_RPAREN] = 1744,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [743] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [anon_sym_RPAREN] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_while] = 306,
        [anon_sym_until] = 306,
        [anon_sym_if] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [744] = {
        [anon_sym_RPAREN] = 1746,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [745] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_RPAREN] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_while] = 346,
        [anon_sym_until] = 346,
        [anon_sym_if] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [746] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_RPAREN] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_while] = 368,
        [anon_sym_until] = 368,
        [anon_sym_if] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [747] = {
        [sym_argument_list] = 1748,
        [sym__terminator] = 1750,
        [anon_sym_LPAREN] = 1752,
        [anon_sym_STAR] = 1206,
        [anon_sym_AMP] = 1206,
        [sym_identifier] = 1208,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [748] = {
        [sym__terminator] = 1754,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [749] = {
        [sym__statement] = 1756,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1758,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [750] = {
        [sym_argument_list] = 1760,
        [anon_sym_RPAREN] = 1754,
        [anon_sym_STAR] = 1220,
        [anon_sym_AMP] = 1220,
        [sym_identifier] = 1222,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [751] = {
        [anon_sym_RPAREN] = 1762,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [752] = {
        [sym__statement] = 1764,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1766,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [753] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1768,
        [anon_sym_end] = 1770,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [754] = {
        [sym__terminator] = 1282,
        [aux_sym_program_repeat1] = 1282,
        [anon_sym_RPAREN] = 1282,
        [anon_sym_while] = 1282,
        [anon_sym_until] = 1282,
        [anon_sym_if] = 1282,
        [anon_sym_unless] = 1282,
        [sym_comment] = 52,
        [sym__line_break] = 1282,
        [anon_sym_SEMI] = 1282,
    },
    [755] = {
        [anon_sym_end] = 1772,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [756] = {
        [sym__terminator] = 1286,
        [aux_sym_program_repeat1] = 1286,
        [anon_sym_RPAREN] = 1286,
        [anon_sym_while] = 1286,
        [anon_sym_until] = 1286,
        [anon_sym_if] = 1286,
        [anon_sym_unless] = 1286,
        [sym_comment] = 52,
        [sym__line_break] = 1286,
        [anon_sym_SEMI] = 1286,
    },
    [757] = {
        [sym__terminator] = 1288,
        [aux_sym_program_repeat1] = 1288,
        [anon_sym_RPAREN] = 1288,
        [anon_sym_while] = 1288,
        [anon_sym_until] = 1288,
        [anon_sym_if] = 1288,
        [anon_sym_unless] = 1288,
        [sym_comment] = 52,
        [sym__line_break] = 1288,
        [anon_sym_SEMI] = 1288,
    },
    [758] = {
        [sym__statement] = 1774,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1770,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [759] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1776,
        [anon_sym_end] = 1772,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [760] = {
        [anon_sym_end] = 1778,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [761] = {
        [sym__terminator] = 1296,
        [aux_sym_program_repeat1] = 1296,
        [anon_sym_RPAREN] = 1296,
        [anon_sym_while] = 1296,
        [anon_sym_until] = 1296,
        [anon_sym_if] = 1296,
        [anon_sym_unless] = 1296,
        [sym_comment] = 52,
        [sym__line_break] = 1296,
        [anon_sym_SEMI] = 1296,
    },
    [762] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1780,
        [anon_sym_end] = 1766,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [763] = {
        [sym__terminator] = 1300,
        [aux_sym_program_repeat1] = 1300,
        [anon_sym_RPAREN] = 1300,
        [anon_sym_while] = 1300,
        [anon_sym_until] = 1300,
        [anon_sym_if] = 1300,
        [anon_sym_unless] = 1300,
        [sym_comment] = 52,
        [sym__line_break] = 1300,
        [anon_sym_SEMI] = 1300,
    },
    [764] = {
        [anon_sym_end] = 1770,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [765] = {
        [sym__function_name] = 1782,
        [anon_sym_PIPE] = 296,
        [anon_sym_STAR] = 296,
        [anon_sym_AMP] = 296,
        [anon_sym_LT] = 296,
        [sym_identifier] = 296,
        [sym_comment] = 52,
        [anon_sym_DOT_DOT] = 296,
        [anon_sym_CARET] = 296,
        [anon_sym_LT_EQ_GT] = 296,
        [anon_sym_EQ_EQ] = 296,
        [anon_sym_EQ_EQ_EQ] = 296,
        [anon_sym_EQ_TILDE] = 296,
        [anon_sym_GT] = 296,
        [anon_sym_GT_EQ] = 296,
        [anon_sym_LT_EQ] = 296,
        [anon_sym_PLUS] = 296,
        [anon_sym_DASH] = 296,
        [anon_sym_SLASH] = 296,
        [anon_sym_PERCENT] = 296,
        [anon_sym_STAR_STAR] = 296,
        [anon_sym_LT_LT] = 296,
        [anon_sym_GT_GT] = 296,
        [anon_sym_TILDE] = 296,
        [anon_sym_PLUS_AT] = 296,
        [anon_sym_DASH_AT] = 296,
        [anon_sym_LBRACK_RBRACK] = 296,
        [anon_sym_LBRACK_RBRACK_EQ] = 296,
        [sym__line_break] = 52,
    },
    [766] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [anon_sym_RPAREN] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 52,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [767] = {
        [sym__terminator] = 1210,
        [aux_sym_program_repeat1] = 1210,
        [anon_sym_RPAREN] = 1210,
        [anon_sym_while] = 1210,
        [anon_sym_until] = 1210,
        [anon_sym_if] = 1210,
        [anon_sym_unless] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [768] = {
        [sym__terminator] = 1306,
        [aux_sym_program_repeat1] = 1306,
        [anon_sym_RPAREN] = 1306,
        [anon_sym_while] = 1306,
        [anon_sym_until] = 1306,
        [anon_sym_if] = 1306,
        [anon_sym_unless] = 1306,
        [sym_comment] = 52,
        [sym__line_break] = 1306,
        [anon_sym_SEMI] = 1306,
    },
    [769] = {
        [sym_identifier] = 1784,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [770] = {
        [sym__argument] = 1786,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1788,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [771] = {
        [sym_identifier] = 1790,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [772] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_RPAREN] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_while] = 428,
        [anon_sym_until] = 428,
        [anon_sym_if] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [773] = {
        [aux_sym__call_arguments_repeat1] = 1792,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1794,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [774] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_RPAREN] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_while] = 448,
        [anon_sym_until] = 448,
        [anon_sym_if] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [775] = {
        [anon_sym_RBRACK] = 1796,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [776] = {
        [sym__terminator] = 472,
        [aux_sym_program_repeat1] = 472,
        [anon_sym_RPAREN] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_while] = 472,
        [anon_sym_until] = 472,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [777] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [anon_sym_RPAREN] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_while] = 480,
        [anon_sym_until] = 480,
        [anon_sym_if] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [778] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [779] = {
        [sym__statement] = 1798,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_PIPE] = 1800,
        [anon_sym_end] = 1782,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [780] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1802,
        [anon_sym_end] = 1804,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [781] = {
        [sym__statement] = 1806,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1804,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [782] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1808,
        [anon_sym_end] = 1810,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [783] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_RPAREN] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_unless] = 1336,
        [sym_comment] = 52,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [784] = {
        [anon_sym_end] = 1812,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [785] = {
        [sym__terminator] = 1340,
        [aux_sym_program_repeat1] = 1340,
        [anon_sym_RPAREN] = 1340,
        [anon_sym_while] = 1340,
        [anon_sym_until] = 1340,
        [anon_sym_if] = 1340,
        [anon_sym_unless] = 1340,
        [sym_comment] = 52,
        [sym__line_break] = 1340,
        [anon_sym_SEMI] = 1340,
    },
    [786] = {
        [sym__terminator] = 1342,
        [aux_sym_program_repeat1] = 1342,
        [anon_sym_RPAREN] = 1342,
        [anon_sym_while] = 1342,
        [anon_sym_until] = 1342,
        [anon_sym_if] = 1342,
        [anon_sym_unless] = 1342,
        [sym_comment] = 52,
        [sym__line_break] = 1342,
        [anon_sym_SEMI] = 1342,
    },
    [787] = {
        [anon_sym_end] = 1810,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [788] = {
        [anon_sym_RPAREN] = 1814,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [789] = {
        [aux_sym__call_arguments_repeat1] = 346,
        [anon_sym_do] = 346,
        [anon_sym_COMMA] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [790] = {
        [aux_sym__call_arguments_repeat1] = 368,
        [anon_sym_do] = 368,
        [anon_sym_COMMA] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [791] = {
        [sym_identifier] = 1816,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [792] = {
        [sym__argument] = 1818,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1820,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [793] = {
        [sym_identifier] = 1822,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [794] = {
        [aux_sym__call_arguments_repeat1] = 428,
        [anon_sym_do] = 428,
        [anon_sym_COMMA] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [795] = {
        [aux_sym__call_arguments_repeat1] = 1824,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1826,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [796] = {
        [aux_sym__call_arguments_repeat1] = 448,
        [anon_sym_do] = 448,
        [anon_sym_COMMA] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [797] = {
        [anon_sym_RBRACK] = 1828,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [798] = {
        [aux_sym__call_arguments_repeat1] = 472,
        [anon_sym_do] = 472,
        [anon_sym_COMMA] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [799] = {
        [aux_sym__call_arguments_repeat1] = 480,
        [anon_sym_do] = 480,
        [anon_sym_COMMA] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [800] = {
        [aux_sym__call_arguments_repeat1] = 482,
        [anon_sym_do] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_COLON_COLON] = 482,
        [anon_sym_LBRACK] = 482,
        [anon_sym_DOT] = 482,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [801] = {
        [anon_sym_do] = 1830,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [802] = {
        [sym__argument] = 1832,
        [sym__primary] = 232,
        [sym_scope_resolution_expression] = 234,
        [sym_subscript_expression] = 234,
        [sym_member_access] = 234,
        [sym__lhs] = 236,
        [sym__variable] = 234,
        [anon_sym_LPAREN] = 240,
        [anon_sym_COLON_COLON] = 242,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [sym_identifier] = 246,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [803] = {
        [aux_sym__call_arguments_repeat1] = 1834,
        [anon_sym_do] = 476,
        [anon_sym_COMMA] = 256,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [804] = {
        [anon_sym_do] = 478,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [805] = {
        [anon_sym_COLON_COLON] = 94,
        [anon_sym_in] = 1836,
        [anon_sym_LBRACK] = 94,
        [anon_sym_DOT] = 94,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [806] = {
        [sym__expression] = 1838,
        [sym__argument] = 162,
        [sym__primary] = 164,
        [sym_scope_resolution_expression] = 166,
        [sym_subscript_expression] = 166,
        [sym_member_access] = 166,
        [sym__lhs] = 168,
        [sym__variable] = 166,
        [anon_sym_LPAREN] = 170,
        [anon_sym_COLON_COLON] = 172,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 52,
        [sym_symbol] = 162,
        [sym__line_break] = 52,
    },
    [807] = {
        [sym__statement_block] = 1840,
        [sym__do_block] = 1842,
        [sym__terminator] = 1844,
        [anon_sym_do] = 1846,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [808] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [ts_builtin_sym_end] = 486,
        [anon_sym_while] = 486,
        [anon_sym_until] = 486,
        [anon_sym_if] = 486,
        [anon_sym_unless] = 486,
        [sym_comment] = 52,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [809] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [ts_builtin_sym_end] = 488,
        [anon_sym_while] = 488,
        [anon_sym_until] = 488,
        [anon_sym_if] = 488,
        [anon_sym_unless] = 488,
        [sym_comment] = 52,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [810] = {
        [sym__statement] = 1848,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1850,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [811] = {
        [sym__statement] = 1852,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1854,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [812] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1856,
        [anon_sym_end] = 1858,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [813] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [ts_builtin_sym_end] = 560,
        [anon_sym_while] = 560,
        [anon_sym_until] = 560,
        [anon_sym_if] = 560,
        [anon_sym_unless] = 560,
        [sym_comment] = 52,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [814] = {
        [anon_sym_end] = 1860,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [815] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [ts_builtin_sym_end] = 618,
        [anon_sym_while] = 618,
        [anon_sym_until] = 618,
        [anon_sym_if] = 618,
        [anon_sym_unless] = 618,
        [sym_comment] = 52,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [816] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [ts_builtin_sym_end] = 628,
        [anon_sym_while] = 628,
        [anon_sym_until] = 628,
        [anon_sym_if] = 628,
        [anon_sym_unless] = 628,
        [sym_comment] = 52,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [817] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1862,
        [anon_sym_end] = 1864,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [818] = {
        [sym__terminator] = 636,
        [aux_sym_program_repeat1] = 636,
        [ts_builtin_sym_end] = 636,
        [anon_sym_while] = 636,
        [anon_sym_until] = 636,
        [anon_sym_if] = 636,
        [anon_sym_unless] = 636,
        [sym_comment] = 52,
        [sym__line_break] = 636,
        [anon_sym_SEMI] = 636,
    },
    [819] = {
        [anon_sym_end] = 1866,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [820] = {
        [sym__terminator] = 640,
        [aux_sym_program_repeat1] = 640,
        [ts_builtin_sym_end] = 640,
        [anon_sym_while] = 640,
        [anon_sym_until] = 640,
        [anon_sym_if] = 640,
        [anon_sym_unless] = 640,
        [sym_comment] = 52,
        [sym__line_break] = 640,
        [anon_sym_SEMI] = 640,
    },
    [821] = {
        [sym__terminator] = 642,
        [aux_sym_program_repeat1] = 642,
        [ts_builtin_sym_end] = 642,
        [anon_sym_while] = 642,
        [anon_sym_until] = 642,
        [anon_sym_if] = 642,
        [anon_sym_unless] = 642,
        [sym_comment] = 52,
        [sym__line_break] = 642,
        [anon_sym_SEMI] = 642,
    },
    [822] = {
        [sym_then_block] = 1868,
        [sym__then_else_block] = 1870,
        [sym__terminator] = 648,
        [anon_sym_then] = 648,
        [sym_comment] = 52,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 652,
    },
    [823] = {
        [sym_else_block] = 1872,
        [anon_sym_end] = 1874,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [824] = {
        [sym__terminator] = 694,
        [aux_sym_program_repeat1] = 694,
        [ts_builtin_sym_end] = 694,
        [anon_sym_while] = 694,
        [anon_sym_until] = 694,
        [anon_sym_if] = 694,
        [anon_sym_unless] = 694,
        [sym_comment] = 52,
        [sym__line_break] = 694,
        [anon_sym_SEMI] = 694,
    },
    [825] = {
        [anon_sym_end] = 1876,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [826] = {
        [sym__terminator] = 832,
        [aux_sym_program_repeat1] = 832,
        [ts_builtin_sym_end] = 832,
        [anon_sym_while] = 832,
        [anon_sym_until] = 832,
        [anon_sym_if] = 832,
        [anon_sym_unless] = 832,
        [sym_comment] = 52,
        [sym__line_break] = 832,
        [anon_sym_SEMI] = 832,
    },
    [827] = {
        [sym__terminator] = 844,
        [aux_sym_program_repeat1] = 844,
        [ts_builtin_sym_end] = 844,
        [anon_sym_while] = 844,
        [anon_sym_until] = 844,
        [anon_sym_if] = 844,
        [anon_sym_unless] = 844,
        [sym_comment] = 52,
        [sym__line_break] = 844,
        [anon_sym_SEMI] = 844,
    },
    [828] = {
        [sym_then_block] = 1878,
        [sym__then_elsif_else_block] = 1880,
        [sym__terminator] = 850,
        [anon_sym_then] = 850,
        [sym_comment] = 52,
        [sym__line_break] = 852,
        [anon_sym_SEMI] = 854,
    },
    [829] = {
        [sym_else_block] = 1882,
        [aux_sym__then_elsif_else_block_repeat1] = 1884,
        [anon_sym_end] = 1886,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 894,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [830] = {
        [sym__terminator] = 896,
        [aux_sym_program_repeat1] = 896,
        [ts_builtin_sym_end] = 896,
        [anon_sym_while] = 896,
        [anon_sym_until] = 896,
        [anon_sym_if] = 896,
        [anon_sym_unless] = 896,
        [sym_comment] = 52,
        [sym__line_break] = 896,
        [anon_sym_SEMI] = 896,
    },
    [831] = {
        [anon_sym_end] = 1888,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [832] = {
        [sym_else_block] = 1890,
        [anon_sym_end] = 1888,
        [anon_sym_else] = 692,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [833] = {
        [sym__terminator] = 1044,
        [aux_sym_program_repeat1] = 1044,
        [ts_builtin_sym_end] = 1044,
        [anon_sym_while] = 1044,
        [anon_sym_until] = 1044,
        [anon_sym_if] = 1044,
        [anon_sym_unless] = 1044,
        [sym_comment] = 52,
        [sym__line_break] = 1044,
        [anon_sym_SEMI] = 1044,
    },
    [834] = {
        [anon_sym_end] = 1892,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [835] = {
        [sym__terminator] = 1106,
        [aux_sym_program_repeat1] = 1106,
        [ts_builtin_sym_end] = 1106,
        [anon_sym_while] = 1106,
        [anon_sym_until] = 1106,
        [anon_sym_if] = 1106,
        [anon_sym_unless] = 1106,
        [sym_comment] = 52,
        [sym__line_break] = 1106,
        [anon_sym_SEMI] = 1106,
    },
    [836] = {
        [sym__terminator] = 1108,
        [aux_sym_program_repeat1] = 1108,
        [ts_builtin_sym_end] = 1108,
        [anon_sym_while] = 1108,
        [anon_sym_until] = 1108,
        [anon_sym_if] = 1108,
        [anon_sym_unless] = 1108,
        [sym_comment] = 52,
        [sym__line_break] = 1108,
        [anon_sym_SEMI] = 1108,
    },
    [837] = {
        [sym__statement_block] = 1894,
        [sym__do_block] = 1842,
        [sym__terminator] = 1844,
        [anon_sym_do] = 1846,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [838] = {
        [sym__terminator] = 1112,
        [aux_sym_program_repeat1] = 1112,
        [ts_builtin_sym_end] = 1112,
        [anon_sym_while] = 1112,
        [anon_sym_until] = 1112,
        [anon_sym_if] = 1112,
        [anon_sym_unless] = 1112,
        [sym_comment] = 52,
        [sym__line_break] = 1112,
        [anon_sym_SEMI] = 1112,
    },
    [839] = {
        [sym__statement_block] = 1896,
        [sym__do_block] = 1842,
        [sym__terminator] = 1844,
        [anon_sym_do] = 1846,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [840] = {
        [sym__terminator] = 1116,
        [aux_sym_program_repeat1] = 1116,
        [ts_builtin_sym_end] = 1116,
        [anon_sym_while] = 1116,
        [anon_sym_until] = 1116,
        [anon_sym_if] = 1116,
        [anon_sym_unless] = 1116,
        [sym_comment] = 52,
        [sym__line_break] = 1116,
        [anon_sym_SEMI] = 1116,
    },
    [841] = {
        [sym__terminator] = 1898,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [842] = {
        [sym__statement] = 1900,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1902,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [843] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1904,
        [anon_sym_end] = 1906,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [844] = {
        [sym__terminator] = 1128,
        [aux_sym_program_repeat1] = 1128,
        [ts_builtin_sym_end] = 1128,
        [anon_sym_while] = 1128,
        [anon_sym_until] = 1128,
        [anon_sym_if] = 1128,
        [anon_sym_unless] = 1128,
        [sym_comment] = 52,
        [sym__line_break] = 1128,
        [anon_sym_SEMI] = 1128,
    },
    [845] = {
        [anon_sym_end] = 1908,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [846] = {
        [sym__terminator] = 1132,
        [aux_sym_program_repeat1] = 1132,
        [ts_builtin_sym_end] = 1132,
        [anon_sym_while] = 1132,
        [anon_sym_until] = 1132,
        [anon_sym_if] = 1132,
        [anon_sym_unless] = 1132,
        [sym_comment] = 52,
        [sym__line_break] = 1132,
        [anon_sym_SEMI] = 1132,
    },
    [847] = {
        [sym__terminator] = 1134,
        [aux_sym_program_repeat1] = 1134,
        [ts_builtin_sym_end] = 1134,
        [anon_sym_while] = 1134,
        [anon_sym_until] = 1134,
        [anon_sym_if] = 1134,
        [anon_sym_unless] = 1134,
        [sym_comment] = 52,
        [sym__line_break] = 1134,
        [anon_sym_SEMI] = 1134,
    },
    [848] = {
        [sym__terminator] = 270,
        [aux_sym_program_repeat1] = 270,
        [ts_builtin_sym_end] = 270,
        [anon_sym_COLON_COLON] = 270,
        [anon_sym_while] = 270,
        [anon_sym_until] = 270,
        [anon_sym_if] = 270,
        [anon_sym_unless] = 270,
        [anon_sym_LBRACK] = 270,
        [anon_sym_DOT] = 270,
        [sym_comment] = 52,
        [sym__line_break] = 270,
        [anon_sym_SEMI] = 270,
    },
    [849] = {
        [sym__terminator] = 1910,
        [anon_sym_LT] = 1912,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [850] = {
        [sym__statement] = 1914,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1916,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [851] = {
        [sym_identifier] = 1918,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [852] = {
        [sym__terminator] = 1920,
        [aux_sym_class_declaration_repeat1] = 1922,
        [anon_sym_COLON_COLON] = 1150,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [853] = {
        [sym__statement] = 1924,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1926,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [854] = {
        [sym__terminator] = 1928,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [855] = {
        [sym__statement] = 1930,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1932,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [856] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1934,
        [anon_sym_end] = 1936,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [857] = {
        [sym__terminator] = 1174,
        [aux_sym_program_repeat1] = 1174,
        [ts_builtin_sym_end] = 1174,
        [anon_sym_while] = 1174,
        [anon_sym_until] = 1174,
        [anon_sym_if] = 1174,
        [anon_sym_unless] = 1174,
        [sym_comment] = 52,
        [sym__line_break] = 1174,
        [anon_sym_SEMI] = 1174,
    },
    [858] = {
        [anon_sym_end] = 1938,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [859] = {
        [sym__terminator] = 1178,
        [aux_sym_program_repeat1] = 1178,
        [ts_builtin_sym_end] = 1178,
        [anon_sym_while] = 1178,
        [anon_sym_until] = 1178,
        [anon_sym_if] = 1178,
        [anon_sym_unless] = 1178,
        [sym_comment] = 52,
        [sym__line_break] = 1178,
        [anon_sym_SEMI] = 1178,
    },
    [860] = {
        [sym__terminator] = 1180,
        [aux_sym_program_repeat1] = 1180,
        [ts_builtin_sym_end] = 1180,
        [anon_sym_while] = 1180,
        [anon_sym_until] = 1180,
        [anon_sym_if] = 1180,
        [anon_sym_unless] = 1180,
        [sym_comment] = 52,
        [sym__line_break] = 1180,
        [anon_sym_SEMI] = 1180,
    },
    [861] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1940,
        [anon_sym_end] = 1932,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [862] = {
        [sym__terminator] = 1184,
        [aux_sym_program_repeat1] = 1184,
        [ts_builtin_sym_end] = 1184,
        [anon_sym_while] = 1184,
        [anon_sym_until] = 1184,
        [anon_sym_if] = 1184,
        [anon_sym_unless] = 1184,
        [sym_comment] = 52,
        [sym__line_break] = 1184,
        [anon_sym_SEMI] = 1184,
    },
    [863] = {
        [anon_sym_end] = 1936,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [864] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1942,
        [anon_sym_end] = 1944,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [865] = {
        [sym__terminator] = 1190,
        [aux_sym_program_repeat1] = 1190,
        [ts_builtin_sym_end] = 1190,
        [anon_sym_while] = 1190,
        [anon_sym_until] = 1190,
        [anon_sym_if] = 1190,
        [anon_sym_unless] = 1190,
        [sym_comment] = 52,
        [sym__line_break] = 1190,
        [anon_sym_SEMI] = 1190,
    },
    [866] = {
        [anon_sym_end] = 1926,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [867] = {
        [sym__terminator] = 1192,
        [aux_sym_program_repeat1] = 1192,
        [ts_builtin_sym_end] = 1192,
        [anon_sym_while] = 1192,
        [anon_sym_until] = 1192,
        [anon_sym_if] = 1192,
        [anon_sym_unless] = 1192,
        [sym_comment] = 52,
        [sym__line_break] = 1192,
        [anon_sym_SEMI] = 1192,
    },
    [868] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 1946,
        [anon_sym_RPAREN] = 1948,
        [anon_sym_while] = 278,
        [anon_sym_until] = 280,
        [anon_sym_if] = 282,
        [anon_sym_unless] = 284,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [869] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [ts_builtin_sym_end] = 306,
        [anon_sym_COLON_COLON] = 306,
        [anon_sym_while] = 306,
        [anon_sym_until] = 306,
        [anon_sym_if] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_LBRACK] = 306,
        [anon_sym_DOT] = 306,
        [sym_comment] = 52,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [870] = {
        [anon_sym_RPAREN] = 1950,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [871] = {
        [sym__terminator] = 346,
        [aux_sym_program_repeat1] = 346,
        [ts_builtin_sym_end] = 346,
        [anon_sym_COLON_COLON] = 346,
        [anon_sym_while] = 346,
        [anon_sym_until] = 346,
        [anon_sym_if] = 346,
        [anon_sym_unless] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_DOT] = 346,
        [sym_comment] = 52,
        [sym__line_break] = 346,
        [anon_sym_SEMI] = 346,
    },
    [872] = {
        [sym__terminator] = 368,
        [aux_sym_program_repeat1] = 368,
        [ts_builtin_sym_end] = 368,
        [anon_sym_COLON_COLON] = 368,
        [anon_sym_while] = 368,
        [anon_sym_until] = 368,
        [anon_sym_if] = 368,
        [anon_sym_unless] = 368,
        [anon_sym_LBRACK] = 368,
        [anon_sym_DOT] = 368,
        [sym_comment] = 52,
        [sym__line_break] = 368,
        [anon_sym_SEMI] = 368,
    },
    [873] = {
        [sym_argument_list] = 1952,
        [sym__terminator] = 1954,
        [anon_sym_LPAREN] = 1956,
        [anon_sym_STAR] = 1206,
        [anon_sym_AMP] = 1206,
        [sym_identifier] = 1208,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [874] = {
        [sym__terminator] = 1958,
        [sym_comment] = 52,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 388,
    },
    [875] = {
        [sym__statement] = 1960,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1962,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [876] = {
        [sym_argument_list] = 1964,
        [anon_sym_RPAREN] = 1958,
        [anon_sym_STAR] = 1220,
        [anon_sym_AMP] = 1220,
        [sym_identifier] = 1222,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [877] = {
        [anon_sym_RPAREN] = 1966,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [878] = {
        [sym__statement] = 1968,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1970,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [879] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1972,
        [anon_sym_end] = 1974,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [880] = {
        [sym__terminator] = 1282,
        [aux_sym_program_repeat1] = 1282,
        [ts_builtin_sym_end] = 1282,
        [anon_sym_while] = 1282,
        [anon_sym_until] = 1282,
        [anon_sym_if] = 1282,
        [anon_sym_unless] = 1282,
        [sym_comment] = 52,
        [sym__line_break] = 1282,
        [anon_sym_SEMI] = 1282,
    },
    [881] = {
        [anon_sym_end] = 1976,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [882] = {
        [sym__terminator] = 1286,
        [aux_sym_program_repeat1] = 1286,
        [ts_builtin_sym_end] = 1286,
        [anon_sym_while] = 1286,
        [anon_sym_until] = 1286,
        [anon_sym_if] = 1286,
        [anon_sym_unless] = 1286,
        [sym_comment] = 52,
        [sym__line_break] = 1286,
        [anon_sym_SEMI] = 1286,
    },
    [883] = {
        [sym__terminator] = 1288,
        [aux_sym_program_repeat1] = 1288,
        [ts_builtin_sym_end] = 1288,
        [anon_sym_while] = 1288,
        [anon_sym_until] = 1288,
        [anon_sym_if] = 1288,
        [anon_sym_unless] = 1288,
        [sym_comment] = 52,
        [sym__line_break] = 1288,
        [anon_sym_SEMI] = 1288,
    },
    [884] = {
        [sym__statement] = 1978,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 1974,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [885] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1980,
        [anon_sym_end] = 1976,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [886] = {
        [anon_sym_end] = 1982,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [887] = {
        [sym__terminator] = 1296,
        [aux_sym_program_repeat1] = 1296,
        [ts_builtin_sym_end] = 1296,
        [anon_sym_while] = 1296,
        [anon_sym_until] = 1296,
        [anon_sym_if] = 1296,
        [anon_sym_unless] = 1296,
        [sym_comment] = 52,
        [sym__line_break] = 1296,
        [anon_sym_SEMI] = 1296,
    },
    [888] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 1984,
        [anon_sym_end] = 1970,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [889] = {
        [sym__terminator] = 1300,
        [aux_sym_program_repeat1] = 1300,
        [ts_builtin_sym_end] = 1300,
        [anon_sym_while] = 1300,
        [anon_sym_until] = 1300,
        [anon_sym_if] = 1300,
        [anon_sym_unless] = 1300,
        [sym_comment] = 52,
        [sym__line_break] = 1300,
        [anon_sym_SEMI] = 1300,
    },
    [890] = {
        [anon_sym_end] = 1974,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [891] = {
        [sym__function_name] = 1986,
        [anon_sym_PIPE] = 98,
        [anon_sym_STAR] = 98,
        [anon_sym_AMP] = 98,
        [anon_sym_LT] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 52,
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
        [sym__line_break] = 52,
    },
    [892] = {
        [sym__terminator] = 1304,
        [aux_sym_program_repeat1] = 1304,
        [ts_builtin_sym_end] = 1304,
        [anon_sym_while] = 1304,
        [anon_sym_until] = 1304,
        [anon_sym_if] = 1304,
        [anon_sym_unless] = 1304,
        [sym_comment] = 52,
        [sym__line_break] = 1304,
        [anon_sym_SEMI] = 1304,
    },
    [893] = {
        [sym__terminator] = 1210,
        [aux_sym_program_repeat1] = 1210,
        [ts_builtin_sym_end] = 1210,
        [anon_sym_while] = 1210,
        [anon_sym_until] = 1210,
        [anon_sym_if] = 1210,
        [anon_sym_unless] = 1210,
        [sym_comment] = 52,
        [sym__line_break] = 1210,
        [anon_sym_SEMI] = 1210,
    },
    [894] = {
        [sym__terminator] = 1306,
        [aux_sym_program_repeat1] = 1306,
        [ts_builtin_sym_end] = 1306,
        [anon_sym_while] = 1306,
        [anon_sym_until] = 1306,
        [anon_sym_if] = 1306,
        [anon_sym_unless] = 1306,
        [sym_comment] = 52,
        [sym__line_break] = 1306,
        [anon_sym_SEMI] = 1306,
    },
    [895] = {
        [sym_identifier] = 1988,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [896] = {
        [sym__argument] = 1990,
        [sym__primary] = 412,
        [sym_scope_resolution_expression] = 414,
        [sym_subscript_expression] = 414,
        [sym_member_access] = 414,
        [sym__lhs] = 416,
        [sym__variable] = 414,
        [anon_sym_LPAREN] = 418,
        [anon_sym_COLON_COLON] = 420,
        [anon_sym_RBRACK] = 1992,
        [anon_sym_nil] = 424,
        [anon_sym_self] = 424,
        [sym_identifier] = 424,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [897] = {
        [sym_identifier] = 1994,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [898] = {
        [sym__terminator] = 428,
        [aux_sym_program_repeat1] = 428,
        [ts_builtin_sym_end] = 428,
        [anon_sym_COLON_COLON] = 428,
        [anon_sym_while] = 428,
        [anon_sym_until] = 428,
        [anon_sym_if] = 428,
        [anon_sym_unless] = 428,
        [anon_sym_LBRACK] = 428,
        [anon_sym_DOT] = 428,
        [sym_comment] = 52,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [899] = {
        [aux_sym__call_arguments_repeat1] = 1996,
        [anon_sym_COMMA] = 432,
        [anon_sym_RBRACK] = 1998,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [900] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_COLON_COLON] = 448,
        [anon_sym_while] = 448,
        [anon_sym_until] = 448,
        [anon_sym_if] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_LBRACK] = 448,
        [anon_sym_DOT] = 448,
        [sym_comment] = 52,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [901] = {
        [anon_sym_RBRACK] = 2000,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [902] = {
        [sym__terminator] = 472,
        [aux_sym_program_repeat1] = 472,
        [ts_builtin_sym_end] = 472,
        [anon_sym_COLON_COLON] = 472,
        [anon_sym_while] = 472,
        [anon_sym_until] = 472,
        [anon_sym_if] = 472,
        [anon_sym_unless] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_DOT] = 472,
        [sym_comment] = 52,
        [sym__line_break] = 472,
        [anon_sym_SEMI] = 472,
    },
    [903] = {
        [sym__terminator] = 480,
        [aux_sym_program_repeat1] = 480,
        [ts_builtin_sym_end] = 480,
        [anon_sym_COLON_COLON] = 480,
        [anon_sym_while] = 480,
        [anon_sym_until] = 480,
        [anon_sym_if] = 480,
        [anon_sym_unless] = 480,
        [anon_sym_LBRACK] = 480,
        [anon_sym_DOT] = 480,
        [sym_comment] = 52,
        [sym__line_break] = 480,
        [anon_sym_SEMI] = 480,
    },
    [904] = {
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
        [sym_comment] = 52,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [905] = {
        [sym__statement] = 2002,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_PIPE] = 2004,
        [anon_sym_end] = 1986,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [906] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 2006,
        [anon_sym_end] = 2008,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [907] = {
        [sym__statement] = 2010,
        [sym__declaration] = 492,
        [sym_method_declaration] = 494,
        [sym_class_declaration] = 494,
        [sym_module_declaration] = 494,
        [sym_while_statement] = 492,
        [sym_until_statement] = 492,
        [sym_if_statement] = 492,
        [sym_unless_statement] = 492,
        [sym_for_statement] = 492,
        [sym_if_modifier] = 492,
        [sym_unless_modifier] = 492,
        [sym_while_modifier] = 492,
        [sym_until_modifier] = 492,
        [sym__call] = 496,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 492,
        [sym__argument] = 498,
        [sym__primary] = 500,
        [sym_scope_resolution_expression] = 502,
        [sym_subscript_expression] = 502,
        [sym_member_access] = 502,
        [sym__lhs] = 504,
        [sym__variable] = 502,
        [anon_sym_end] = 2008,
        [anon_sym_undef] = 508,
        [anon_sym_alias] = 510,
        [anon_sym_def] = 512,
        [anon_sym_LPAREN] = 514,
        [anon_sym_class] = 516,
        [anon_sym_COLON_COLON] = 518,
        [anon_sym_module] = 520,
        [anon_sym_while] = 522,
        [anon_sym_until] = 524,
        [anon_sym_if] = 526,
        [anon_sym_unless] = 528,
        [anon_sym_for] = 530,
        [anon_sym_super] = 48,
        [anon_sym_nil] = 532,
        [anon_sym_self] = 532,
        [sym_identifier] = 532,
        [sym_comment] = 52,
        [sym_symbol] = 498,
        [sym__line_break] = 52,
    },
    [908] = {
        [sym__terminator] = 538,
        [aux_sym_program_repeat1] = 2012,
        [anon_sym_end] = 2014,
        [anon_sym_while] = 544,
        [anon_sym_until] = 546,
        [anon_sym_if] = 548,
        [anon_sym_unless] = 550,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [909] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [ts_builtin_sym_end] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_unless] = 1336,
        [sym_comment] = 52,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [910] = {
        [anon_sym_end] = 2016,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [911] = {
        [sym__terminator] = 1340,
        [aux_sym_program_repeat1] = 1340,
        [ts_builtin_sym_end] = 1340,
        [anon_sym_while] = 1340,
        [anon_sym_until] = 1340,
        [anon_sym_if] = 1340,
        [anon_sym_unless] = 1340,
        [sym_comment] = 52,
        [sym__line_break] = 1340,
        [anon_sym_SEMI] = 1340,
    },
    [912] = {
        [sym__terminator] = 1342,
        [aux_sym_program_repeat1] = 1342,
        [ts_builtin_sym_end] = 1342,
        [anon_sym_while] = 1342,
        [anon_sym_until] = 1342,
        [anon_sym_if] = 1342,
        [anon_sym_unless] = 1342,
        [sym_comment] = 52,
        [sym__line_break] = 1342,
        [anon_sym_SEMI] = 1342,
    },
    [913] = {
        [anon_sym_end] = 2014,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [914] = {
        [sym__statement] = 2018,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym_for_statement] = 6,
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
        [anon_sym_super] = 48,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [915] = {
        [ts_builtin_sym_end] = 2020,
        [sym_comment] = 52,
        [sym__line_break] = 52,
    },
    [916] = {
        [sym__expression] = 2022,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [917] = {
        [sym__expression] = 2024,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [918] = {
        [sym__expression] = 2026,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [919] = {
        [sym__expression] = 2028,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym_member_access] = 18,
        [sym__lhs] = 20,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 30,
        [anon_sym_COLON_COLON] = 34,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [sym_identifier] = 50,
        [sym_comment] = 52,
        [sym_symbol] = 14,
        [sym__line_break] = 52,
    },
    [920] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [ts_builtin_sym_end] = 360,
        [anon_sym_while] = 360,
        [anon_sym_until] = 360,
        [anon_sym_if] = 360,
        [anon_sym_unless] = 360,
        [sym_comment] = 52,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [921] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_while] = 362,
        [anon_sym_until] = 362,
        [anon_sym_if] = 362,
        [anon_sym_unless] = 362,
        [sym_comment] = 52,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [922] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [ts_builtin_sym_end] = 364,
        [anon_sym_while] = 364,
        [anon_sym_until] = 364,
        [anon_sym_if] = 364,
        [anon_sym_unless] = 364,
        [sym_comment] = 52,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [923] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [ts_builtin_sym_end] = 366,
        [anon_sym_while] = 366,
        [anon_sym_until] = 366,
        [anon_sym_if] = 366,
        [anon_sym_unless] = 366,
        [sym_comment] = 52,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [924] = {
        [sym__terminator] = 56,
        [aux_sym_program_repeat1] = 2030,
        [ts_builtin_sym_end] = 372,
        [anon_sym_while] = 62,
        [anon_sym_until] = 64,
        [anon_sym_if] = 66,
        [anon_sym_unless] = 68,
        [sym_comment] = 52,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 72,
    },
    [925] = {
        [ts_builtin_sym_end] = 374,
        [sym_comment] = 52,
        [sym__line_break] = 52,
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
    [52] = {.count = 1}, SHIFT_EXTRA(),
    [54] = {.count = 1}, ACCEPT_INPUT(),
    [56] = {.count = 1}, SHIFT(914, 0),
    [58] = {.count = 1}, SHIFT(915, 0),
    [60] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [62] = {.count = 1}, SHIFT(916, 0),
    [64] = {.count = 1}, SHIFT(917, 0),
    [66] = {.count = 1}, SHIFT(918, 0),
    [68] = {.count = 1}, SHIFT(919, 0),
    [70] = {.count = 1}, SHIFT(74, 0),
    [72] = {.count = 1}, SHIFT(75, 0),
    [74] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [76] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [78] = {.count = 1}, SHIFT(905, 0),
    [80] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [82] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [84] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [86] = {.count = 1}, SHIFT(895, 0),
    [88] = {.count = 1}, SHIFT(896, 0),
    [90] = {.count = 1}, SHIFT(897, 0),
    [92] = {.count = 1}, REDUCE(sym__lhs, 1, 0),
    [94] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [96] = {.count = 1}, SHIFT(894, 0),
    [98] = {.count = 1}, SHIFT(893, 0),
    [100] = {.count = 1}, SHIFT(891, 0),
    [102] = {.count = 1}, SHIFT(459, 0),
    [104] = {.count = 1}, SHIFT(873, 0),
    [106] = {.count = 1}, SHIFT(418, 0),
    [108] = {.count = 1}, SHIFT(868, 0),
    [110] = {.count = 1}, SHIFT(37, 0),
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
    [132] = {.count = 1}, SHIFT(869, 0),
    [134] = {.count = 1}, SHIFT(49, 0),
    [136] = {.count = 1}, SHIFT(50, 0),
    [138] = {.count = 1}, SHIFT(51, 0),
    [140] = {.count = 1}, SHIFT(52, 0),
    [142] = {.count = 1}, SHIFT(53, 0),
    [144] = {.count = 1}, SHIFT(54, 0),
    [146] = {.count = 1}, SHIFT(55, 0),
    [148] = {.count = 1}, SHIFT(56, 0),
    [150] = {.count = 1}, SHIFT(57, 0),
    [152] = {.count = 1}, SHIFT(849, 0),
    [154] = {.count = 1}, SHIFT(848, 0),
    [156] = {.count = 1}, SHIFT(841, 0),
    [158] = {.count = 1}, SHIFT(839, 0),
    [160] = {.count = 1}, SHIFT(378, 0),
    [162] = {.count = 1}, SHIFT(85, 0),
    [164] = {.count = 1}, SHIFT(86, 0),
    [166] = {.count = 1}, SHIFT(87, 0),
    [168] = {.count = 1}, SHIFT(88, 0),
    [170] = {.count = 1}, SHIFT(89, 0),
    [172] = {.count = 1}, SHIFT(90, 0),
    [174] = {.count = 1}, SHIFT(91, 0),
    [176] = {.count = 1}, SHIFT(837, 0),
    [178] = {.count = 1}, SHIFT(828, 0),
    [180] = {.count = 1}, SHIFT(267, 0),
    [182] = {.count = 1}, SHIFT(268, 0),
    [184] = {.count = 1}, SHIFT(269, 0),
    [186] = {.count = 1}, SHIFT(270, 0),
    [188] = {.count = 1}, SHIFT(271, 0),
    [190] = {.count = 1}, SHIFT(272, 0),
    [192] = {.count = 1}, SHIFT(273, 0),
    [194] = {.count = 1}, SHIFT(274, 0),
    [196] = {.count = 1}, SHIFT(822, 0),
    [198] = {.count = 1}, SHIFT(190, 0),
    [200] = {.count = 1}, SHIFT(191, 0),
    [202] = {.count = 1}, SHIFT(192, 0),
    [204] = {.count = 1}, SHIFT(193, 0),
    [206] = {.count = 1}, SHIFT(194, 0),
    [208] = {.count = 1}, SHIFT(195, 0),
    [210] = {.count = 1}, SHIFT(196, 0),
    [212] = {.count = 1}, SHIFT(197, 0),
    [214] = {.count = 1}, SHIFT(58, 0),
    [216] = {.count = 1}, SHIFT(59, 0),
    [218] = {.count = 1}, SHIFT(805, 0),
    [220] = {.count = 1}, SHIFT(61, 0),
    [222] = {.count = 1}, SHIFT(62, 0),
    [224] = {.count = 1}, SHIFT(63, 0),
    [226] = {.count = 1}, SHIFT(25, 0),
    [228] = {.count = 1}, SHIFT(26, 0),
    [230] = {.count = 1}, SHIFT(27, 0),
    [232] = {.count = 1}, SHIFT(28, 0),
    [234] = {.count = 1}, SHIFT(29, 0),
    [236] = {.count = 1}, SHIFT(30, 0),
    [238] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [240] = {.count = 1}, SHIFT(31, 0),
    [242] = {.count = 1}, SHIFT(32, 0),
    [244] = {.count = 1}, SHIFT(33, 0),
    [246] = {.count = 1}, SHIFT(34, 0),
    [248] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [250] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [252] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [254] = {.count = 1}, SHIFT(801, 0),
    [256] = {.count = 1}, SHIFT(802, 0),
    [258] = {.count = 1}, SHIFT(791, 0),
    [260] = {.count = 1}, SHIFT(792, 0),
    [262] = {.count = 1}, SHIFT(793, 0),
    [264] = {.count = 1}, SHIFT(36, 0),
    [266] = {.count = 1}, SHIFT(48, 0),
    [268] = {.count = 1}, SHIFT(35, 0),
    [270] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [272] = {.count = 1}, SHIFT(67, 0),
    [274] = {.count = 1}, SHIFT(788, 0),
    [276] = {.count = 1}, SHIFT(789, 0),
    [278] = {.count = 1}, SHIFT(70, 0),
    [280] = {.count = 1}, SHIFT(71, 0),
    [282] = {.count = 1}, SHIFT(72, 0),
    [284] = {.count = 1}, SHIFT(73, 0),
    [286] = {.count = 1}, SHIFT(779, 0),
    [288] = {.count = 1}, SHIFT(769, 0),
    [290] = {.count = 1}, SHIFT(770, 0),
    [292] = {.count = 1}, SHIFT(771, 0),
    [294] = {.count = 1}, SHIFT(768, 0),
    [296] = {.count = 1}, SHIFT(767, 0),
    [298] = {.count = 1}, SHIFT(765, 0),
    [300] = {.count = 1}, SHIFT(747, 0),
    [302] = {.count = 1}, SHIFT(742, 0),
    [304] = {.count = 1}, SHIFT(743, 0),
    [306] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [308] = {.count = 1}, SHIFT(723, 0),
    [310] = {.count = 1}, SHIFT(722, 0),
    [312] = {.count = 1}, SHIFT(715, 0),
    [314] = {.count = 1}, SHIFT(713, 0),
    [316] = {.count = 1}, SHIFT(711, 0),
    [318] = {.count = 1}, SHIFT(702, 0),
    [320] = {.count = 1}, SHIFT(696, 0),
    [322] = {.count = 1}, SHIFT(60, 0),
    [324] = {.count = 1}, SHIFT(686, 0),
    [326] = {.count = 1}, SHIFT(687, 0),
    [328] = {.count = 1}, SHIFT(688, 0),
    [330] = {.count = 1}, SHIFT(83, 0),
    [332] = {.count = 1}, SHIFT(65, 0),
    [334] = {.count = 1}, SHIFT(66, 0),
    [336] = {.count = 1}, SHIFT(64, 0),
    [338] = {.count = 1}, SHIFT(68, 0),
    [340] = {.count = 1}, SHIFT(69, 0),
    [342] = {.count = 1}, SHIFT(81, 0),
    [344] = {.count = 1}, SHIFT(80, 0),
    [346] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [348] = {.count = 1}, SHIFT(79, 0),
    [350] = {.count = 1}, SHIFT(78, 0),
    [352] = {.count = 1}, SHIFT(77, 0),
    [354] = {.count = 1}, SHIFT(76, 0),
    [356] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [358] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [360] = {.count = 1}, REDUCE(sym_unless_modifier, 3, 0),
    [362] = {.count = 1}, REDUCE(sym_if_modifier, 3, 0),
    [364] = {.count = 1}, REDUCE(sym_until_modifier, 3, 0),
    [366] = {.count = 1}, REDUCE(sym_while_modifier, 3, 0),
    [368] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [370] = {.count = 1}, SHIFT(82, 0),
    [372] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [374] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [376] = {.count = 1}, SHIFT(84, 0),
    [378] = {.count = 1}, SHIFT(133, 0),
    [380] = {.count = 1}, SHIFT(134, 0),
    [382] = {.count = 1}, SHIFT(135, 0),
    [384] = {.count = 1}, SHIFT(136, 0),
    [386] = {.count = 1}, SHIFT(137, 0),
    [388] = {.count = 1}, SHIFT(138, 0),
    [390] = {.count = 1}, SHIFT(98, 0),
    [392] = {.count = 1}, SHIFT(99, 0),
    [394] = {.count = 1}, SHIFT(100, 0),
    [396] = {.count = 1}, SHIFT(93, 0),
    [398] = {.count = 1}, SHIFT(94, 0),
    [400] = {.count = 1}, SHIFT(92, 0),
    [402] = {.count = 1}, SHIFT(95, 0),
    [404] = {.count = 1}, SHIFT(96, 0),
    [406] = {.count = 1}, SHIFT(97, 0),
    [408] = {.count = 1}, SHIFT(132, 0),
    [410] = {.count = 1}, SHIFT(102, 0),
    [412] = {.count = 1}, SHIFT(103, 0),
    [414] = {.count = 1}, SHIFT(104, 0),
    [416] = {.count = 1}, SHIFT(105, 0),
    [418] = {.count = 1}, SHIFT(106, 0),
    [420] = {.count = 1}, SHIFT(107, 0),
    [422] = {.count = 1}, SHIFT(108, 0),
    [424] = {.count = 1}, SHIFT(109, 0),
    [426] = {.count = 1}, SHIFT(101, 0),
    [428] = {.count = 1}, REDUCE(sym_member_access, 3, 0),
    [430] = {.count = 1}, SHIFT(129, 0),
    [432] = {.count = 1}, SHIFT(123, 0),
    [434] = {.count = 1}, SHIFT(130, 0),
    [436] = {.count = 1}, SHIFT(116, 0),
    [438] = {.count = 1}, SHIFT(117, 0),
    [440] = {.count = 1}, SHIFT(118, 0),
    [442] = {.count = 1}, SHIFT(111, 0),
    [444] = {.count = 1}, SHIFT(112, 0),
    [446] = {.count = 1}, SHIFT(110, 0),
    [448] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [450] = {.count = 1}, SHIFT(113, 0),
    [452] = {.count = 1}, SHIFT(114, 0),
    [454] = {.count = 1}, SHIFT(115, 0),
    [456] = {.count = 1}, SHIFT(128, 0),
    [458] = {.count = 1}, SHIFT(120, 0),
    [460] = {.count = 1}, SHIFT(121, 0),
    [462] = {.count = 1}, SHIFT(119, 0),
    [464] = {.count = 1}, SHIFT(122, 0),
    [466] = {.count = 1}, SHIFT(124, 0),
    [468] = {.count = 1}, SHIFT(127, 0),
    [470] = {.count = 1}, SHIFT(125, 0),
    [472] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [474] = {.count = 1}, SHIFT(126, 0),
    [476] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [478] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [480] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [482] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [484] = {.count = 1}, SHIFT(131, 0),
    [486] = {.count = 1}, REDUCE(sym_for_statement, 5, 0),
    [488] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [490] = {.count = 1}, SHIFT(681, 0),
    [492] = {.count = 1}, SHIFT(140, 0),
    [494] = {.count = 1}, SHIFT(141, 0),
    [496] = {.count = 1}, SHIFT(142, 0),
    [498] = {.count = 1}, SHIFT(143, 0),
    [500] = {.count = 1}, SHIFT(144, 0),
    [502] = {.count = 1}, SHIFT(145, 0),
    [504] = {.count = 1}, SHIFT(146, 0),
    [506] = {.count = 1}, SHIFT(682, 0),
    [508] = {.count = 1}, SHIFT(148, 0),
    [510] = {.count = 1}, SHIFT(149, 0),
    [512] = {.count = 1}, SHIFT(150, 0),
    [514] = {.count = 1}, SHIFT(151, 0),
    [516] = {.count = 1}, SHIFT(152, 0),
    [518] = {.count = 1}, SHIFT(153, 0),
    [520] = {.count = 1}, SHIFT(154, 0),
    [522] = {.count = 1}, SHIFT(155, 0),
    [524] = {.count = 1}, SHIFT(156, 0),
    [526] = {.count = 1}, SHIFT(157, 0),
    [528] = {.count = 1}, SHIFT(158, 0),
    [530] = {.count = 1}, SHIFT(159, 0),
    [532] = {.count = 1}, SHIFT(160, 0),
    [534] = {.count = 1}, SHIFT(139, 0),
    [536] = {.count = 1}, SHIFT(147, 0),
    [538] = {.count = 1}, SHIFT(170, 0),
    [540] = {.count = 1}, SHIFT(678, 0),
    [542] = {.count = 1}, SHIFT(679, 0),
    [544] = {.count = 1}, SHIFT(173, 0),
    [546] = {.count = 1}, SHIFT(174, 0),
    [548] = {.count = 1}, SHIFT(175, 0),
    [550] = {.count = 1}, SHIFT(176, 0),
    [552] = {.count = 1}, SHIFT(669, 0),
    [554] = {.count = 1}, SHIFT(659, 0),
    [556] = {.count = 1}, SHIFT(660, 0),
    [558] = {.count = 1}, SHIFT(661, 0),
    [560] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [562] = {.count = 1}, SHIFT(658, 0),
    [564] = {.count = 1}, SHIFT(657, 0),
    [566] = {.count = 1}, SHIFT(655, 0),
    [568] = {.count = 1}, SHIFT(637, 0),
    [570] = {.count = 1}, SHIFT(632, 0),
    [572] = {.count = 1}, SHIFT(633, 0),
    [574] = {.count = 1}, SHIFT(613, 0),
    [576] = {.count = 1}, SHIFT(612, 0),
    [578] = {.count = 1}, SHIFT(605, 0),
    [580] = {.count = 1}, SHIFT(603, 0),
    [582] = {.count = 1}, SHIFT(601, 0),
    [584] = {.count = 1}, SHIFT(592, 0),
    [586] = {.count = 1}, SHIFT(189, 0),
    [588] = {.count = 1}, SHIFT(161, 0),
    [590] = {.count = 1}, SHIFT(162, 0),
    [592] = {.count = 1}, SHIFT(163, 0),
    [594] = {.count = 1}, SHIFT(164, 0),
    [596] = {.count = 1}, SHIFT(165, 0),
    [598] = {.count = 1}, SHIFT(166, 0),
    [600] = {.count = 1}, SHIFT(167, 0),
    [602] = {.count = 1}, SHIFT(184, 0),
    [604] = {.count = 1}, SHIFT(185, 0),
    [606] = {.count = 1}, SHIFT(168, 0),
    [608] = {.count = 1}, SHIFT(169, 0),
    [610] = {.count = 1}, SHIFT(171, 0),
    [612] = {.count = 1}, SHIFT(172, 0),
    [614] = {.count = 1}, SHIFT(182, 0),
    [616] = {.count = 1}, SHIFT(181, 0),
    [618] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [620] = {.count = 1}, SHIFT(180, 0),
    [622] = {.count = 1}, SHIFT(179, 0),
    [624] = {.count = 1}, SHIFT(178, 0),
    [626] = {.count = 1}, SHIFT(177, 0),
    [628] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [630] = {.count = 1}, SHIFT(183, 0),
    [632] = {.count = 1}, SHIFT(186, 0),
    [634] = {.count = 1}, SHIFT(187, 0),
    [636] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [638] = {.count = 1}, SHIFT(188, 0),
    [640] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [642] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [644] = {.count = 1}, SHIFT(214, 0),
    [646] = {.count = 1}, SHIFT(215, 0),
    [648] = {.count = 1}, SHIFT(216, 0),
    [650] = {.count = 1}, SHIFT(217, 0),
    [652] = {.count = 1}, SHIFT(218, 0),
    [654] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [656] = {.count = 1}, SHIFT(204, 0),
    [658] = {.count = 1}, SHIFT(205, 0),
    [660] = {.count = 1}, SHIFT(206, 0),
    [662] = {.count = 1}, SHIFT(199, 0),
    [664] = {.count = 1}, SHIFT(200, 0),
    [666] = {.count = 1}, SHIFT(198, 0),
    [668] = {.count = 1}, SHIFT(201, 0),
    [670] = {.count = 1}, SHIFT(202, 0),
    [672] = {.count = 1}, SHIFT(203, 0),
    [674] = {.count = 1}, SHIFT(213, 0),
    [676] = {.count = 1}, SHIFT(208, 0),
    [678] = {.count = 1}, SHIFT(209, 0),
    [680] = {.count = 1}, SHIFT(207, 0),
    [682] = {.count = 1}, SHIFT(210, 0),
    [684] = {.count = 1}, SHIFT(211, 0),
    [686] = {.count = 1}, SHIFT(212, 0),
    [688] = {.count = 1}, SHIFT(589, 0),
    [690] = {.count = 1}, SHIFT(590, 0),
    [692] = {.count = 1}, SHIFT(262, 0),
    [694] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [696] = {.count = 1}, SHIFT(219, 0),
    [698] = {.count = 1}, SHIFT(220, 0),
    [700] = {.count = 1}, SHIFT(221, 0),
    [702] = {.count = 1}, REDUCE(sym_then_block, 1, 0),
    [704] = {.count = 1}, SHIFT(222, 0),
    [706] = {.count = 1}, SHIFT(223, 0),
    [708] = {.count = 1}, SHIFT(224, 0),
    [710] = {.count = 1}, SHIFT(225, 0),
    [712] = {.count = 1}, SHIFT(226, 0),
    [714] = {.count = 1}, SHIFT(227, 0),
    [716] = {.count = 1}, SHIFT(228, 0),
    [718] = {.count = 1}, SHIFT(229, 0),
    [720] = {.count = 1}, SHIFT(230, 0),
    [722] = {.count = 1}, SHIFT(231, 0),
    [724] = {.count = 1}, SHIFT(232, 0),
    [726] = {.count = 1}, SHIFT(233, 0),
    [728] = {.count = 1}, SHIFT(234, 0),
    [730] = {.count = 1}, SHIFT(235, 0),
    [732] = {.count = 1}, SHIFT(236, 0),
    [734] = {.count = 1}, SHIFT(237, 0),
    [736] = {.count = 1}, SHIFT(238, 0),
    [738] = {.count = 1}, SHIFT(239, 0),
    [740] = {.count = 1}, REDUCE(sym_then_block, 2, 0),
    [742] = {.count = 1}, SHIFT(577, 0),
    [744] = {.count = 1}, SHIFT(578, 0),
    [746] = {.count = 1}, SHIFT(579, 0),
    [748] = {.count = 1}, SHIFT(580, 0),
    [750] = {.count = 1}, SHIFT(581, 0),
    [752] = {.count = 1}, SHIFT(582, 0),
    [754] = {.count = 1}, SHIFT(568, 0),
    [756] = {.count = 1}, SHIFT(558, 0),
    [758] = {.count = 1}, SHIFT(559, 0),
    [760] = {.count = 1}, SHIFT(560, 0),
    [762] = {.count = 1}, SHIFT(557, 0),
    [764] = {.count = 1}, SHIFT(556, 0),
    [766] = {.count = 1}, SHIFT(554, 0),
    [768] = {.count = 1}, SHIFT(536, 0),
    [770] = {.count = 1}, SHIFT(531, 0),
    [772] = {.count = 1}, SHIFT(532, 0),
    [774] = {.count = 1}, SHIFT(512, 0),
    [776] = {.count = 1}, SHIFT(511, 0),
    [778] = {.count = 1}, SHIFT(504, 0),
    [780] = {.count = 1}, SHIFT(502, 0),
    [782] = {.count = 1}, SHIFT(500, 0),
    [784] = {.count = 1}, SHIFT(266, 0),
    [786] = {.count = 1}, SHIFT(257, 0),
    [788] = {.count = 1}, SHIFT(240, 0),
    [790] = {.count = 1}, SHIFT(241, 0),
    [792] = {.count = 1}, SHIFT(242, 0),
    [794] = {.count = 1}, SHIFT(243, 0),
    [796] = {.count = 1}, SHIFT(244, 0),
    [798] = {.count = 1}, SHIFT(245, 0),
    [800] = {.count = 1}, SHIFT(246, 0),
    [802] = {.count = 1}, SHIFT(252, 0),
    [804] = {.count = 1}, SHIFT(253, 0),
    [806] = {.count = 1}, SHIFT(247, 0),
    [808] = {.count = 1}, SHIFT(248, 0),
    [810] = {.count = 1}, SHIFT(249, 0),
    [812] = {.count = 1}, SHIFT(250, 0),
    [814] = {.count = 1}, SHIFT(251, 0),
    [816] = {.count = 1}, SHIFT(254, 0),
    [818] = {.count = 1}, SHIFT(255, 0),
    [820] = {.count = 1}, SHIFT(256, 0),
    [822] = {.count = 1}, SHIFT(258, 0),
    [824] = {.count = 1}, SHIFT(259, 0),
    [826] = {.count = 1}, SHIFT(260, 0),
    [828] = {.count = 1}, SHIFT(261, 0),
    [830] = {.count = 1}, SHIFT(265, 0),
    [832] = {.count = 1}, REDUCE(sym__then_else_block, 2, 0),
    [834] = {.count = 1}, SHIFT(263, 0),
    [836] = {.count = 1}, REDUCE(sym_else_block, 1, 0),
    [838] = {.count = 1}, SHIFT(264, 0),
    [840] = {.count = 1}, REDUCE(sym_else_block, 2, 0),
    [842] = {.count = 1}, REDUCE(sym_else_block, 3, 0),
    [844] = {.count = 1}, REDUCE(sym__then_else_block, 3, 0),
    [846] = {.count = 1}, SHIFT(291, 0),
    [848] = {.count = 1}, SHIFT(292, 0),
    [850] = {.count = 1}, SHIFT(293, 0),
    [852] = {.count = 1}, SHIFT(294, 0),
    [854] = {.count = 1}, SHIFT(295, 0),
    [856] = {.count = 1}, SHIFT(281, 0),
    [858] = {.count = 1}, SHIFT(282, 0),
    [860] = {.count = 1}, SHIFT(283, 0),
    [862] = {.count = 1}, SHIFT(276, 0),
    [864] = {.count = 1}, SHIFT(277, 0),
    [866] = {.count = 1}, SHIFT(275, 0),
    [868] = {.count = 1}, SHIFT(278, 0),
    [870] = {.count = 1}, SHIFT(279, 0),
    [872] = {.count = 1}, SHIFT(280, 0),
    [874] = {.count = 1}, SHIFT(290, 0),
    [876] = {.count = 1}, SHIFT(285, 0),
    [878] = {.count = 1}, SHIFT(286, 0),
    [880] = {.count = 1}, SHIFT(284, 0),
    [882] = {.count = 1}, SHIFT(287, 0),
    [884] = {.count = 1}, SHIFT(288, 0),
    [886] = {.count = 1}, SHIFT(289, 0),
    [888] = {.count = 1}, SHIFT(494, 0),
    [890] = {.count = 1}, SHIFT(495, 0),
    [892] = {.count = 1}, SHIFT(496, 0),
    [894] = {.count = 1}, SHIFT(346, 0),
    [896] = {.count = 1}, REDUCE(sym_if_statement, 3, 0),
    [898] = {.count = 1}, SHIFT(296, 0),
    [900] = {.count = 1}, SHIFT(297, 0),
    [902] = {.count = 1}, SHIFT(298, 0),
    [904] = {.count = 1}, SHIFT(299, 0),
    [906] = {.count = 1}, SHIFT(300, 0),
    [908] = {.count = 1}, SHIFT(301, 0),
    [910] = {.count = 1}, SHIFT(302, 0),
    [912] = {.count = 1}, SHIFT(303, 0),
    [914] = {.count = 1}, SHIFT(304, 0),
    [916] = {.count = 1}, SHIFT(305, 0),
    [918] = {.count = 1}, SHIFT(306, 0),
    [920] = {.count = 1}, SHIFT(307, 0),
    [922] = {.count = 1}, SHIFT(308, 0),
    [924] = {.count = 1}, SHIFT(309, 0),
    [926] = {.count = 1}, SHIFT(310, 0),
    [928] = {.count = 1}, SHIFT(311, 0),
    [930] = {.count = 1}, SHIFT(312, 0),
    [932] = {.count = 1}, SHIFT(313, 0),
    [934] = {.count = 1}, SHIFT(314, 0),
    [936] = {.count = 1}, SHIFT(315, 0),
    [938] = {.count = 1}, SHIFT(316, 0),
    [940] = {.count = 1}, SHIFT(482, 0),
    [942] = {.count = 1}, SHIFT(483, 0),
    [944] = {.count = 1}, SHIFT(484, 0),
    [946] = {.count = 1}, SHIFT(485, 0),
    [948] = {.count = 1}, SHIFT(486, 0),
    [950] = {.count = 1}, SHIFT(487, 0),
    [952] = {.count = 1}, SHIFT(473, 0),
    [954] = {.count = 1}, SHIFT(463, 0),
    [956] = {.count = 1}, SHIFT(464, 0),
    [958] = {.count = 1}, SHIFT(465, 0),
    [960] = {.count = 1}, SHIFT(462, 0),
    [962] = {.count = 1}, SHIFT(461, 0),
    [964] = {.count = 1}, SHIFT(458, 0),
    [966] = {.count = 1}, SHIFT(417, 0),
    [968] = {.count = 1}, SHIFT(412, 0),
    [970] = {.count = 1}, SHIFT(413, 0),
    [972] = {.count = 1}, SHIFT(390, 0),
    [974] = {.count = 1}, SHIFT(389, 0),
    [976] = {.count = 1}, SHIFT(382, 0),
    [978] = {.count = 1}, SHIFT(380, 0),
    [980] = {.count = 1}, SHIFT(377, 0),
    [982] = {.count = 1}, SHIFT(340, 0),
    [984] = {.count = 1}, SHIFT(334, 0),
    [986] = {.count = 1}, SHIFT(317, 0),
    [988] = {.count = 1}, SHIFT(318, 0),
    [990] = {.count = 1}, SHIFT(319, 0),
    [992] = {.count = 1}, SHIFT(320, 0),
    [994] = {.count = 1}, SHIFT(321, 0),
    [996] = {.count = 1}, SHIFT(322, 0),
    [998] = {.count = 1}, SHIFT(323, 0),
    [1000] = {.count = 1}, SHIFT(329, 0),
    [1002] = {.count = 1}, SHIFT(330, 0),
    [1004] = {.count = 1}, SHIFT(324, 0),
    [1006] = {.count = 1}, SHIFT(325, 0),
    [1008] = {.count = 1}, SHIFT(326, 0),
    [1010] = {.count = 1}, SHIFT(327, 0),
    [1012] = {.count = 1}, SHIFT(328, 0),
    [1014] = {.count = 1}, SHIFT(331, 0),
    [1016] = {.count = 1}, SHIFT(332, 0),
    [1018] = {.count = 1}, SHIFT(333, 0),
    [1020] = {.count = 1}, SHIFT(335, 0),
    [1022] = {.count = 1}, SHIFT(336, 0),
    [1024] = {.count = 1}, SHIFT(337, 0),
    [1026] = {.count = 1}, SHIFT(338, 0),
    [1028] = {.count = 1}, SHIFT(339, 0),
    [1030] = {.count = 1}, SHIFT(341, 0),
    [1032] = {.count = 1}, SHIFT(342, 0),
    [1034] = {.count = 1}, SHIFT(343, 0),
    [1036] = {.count = 1}, SHIFT(344, 0),
    [1038] = {.count = 1}, SHIFT(345, 0),
    [1040] = {.count = 1}, SHIFT(375, 0),
    [1042] = {.count = 1}, SHIFT(374, 0),
    [1044] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 2, 0),
    [1046] = {.count = 1}, SHIFT(347, 0),
    [1048] = {.count = 1}, SHIFT(348, 0),
    [1050] = {.count = 1}, SHIFT(349, 0),
    [1052] = {.count = 1}, SHIFT(350, 0),
    [1054] = {.count = 1}, SHIFT(351, 0),
    [1056] = {.count = 1}, SHIFT(352, 0),
    [1058] = {.count = 1}, SHIFT(353, 0),
    [1060] = {.count = 1}, SHIFT(354, 0),
    [1062] = {.count = 1}, SHIFT(355, 0),
    [1064] = {.count = 1}, SHIFT(372, 0),
    [1066] = {.count = 1}, SHIFT(362, 0),
    [1068] = {.count = 1}, SHIFT(363, 0),
    [1070] = {.count = 1}, SHIFT(364, 0),
    [1072] = {.count = 1}, SHIFT(357, 0),
    [1074] = {.count = 1}, SHIFT(358, 0),
    [1076] = {.count = 1}, SHIFT(356, 0),
    [1078] = {.count = 1}, SHIFT(359, 0),
    [1080] = {.count = 1}, SHIFT(360, 0),
    [1082] = {.count = 1}, SHIFT(361, 0),
    [1084] = {.count = 1}, SHIFT(371, 0),
    [1086] = {.count = 1}, SHIFT(366, 0),
    [1088] = {.count = 1}, SHIFT(367, 0),
    [1090] = {.count = 1}, SHIFT(365, 0),
    [1092] = {.count = 1}, SHIFT(368, 0),
    [1094] = {.count = 1}, SHIFT(369, 0),
    [1096] = {.count = 1}, SHIFT(370, 0),
    [1098] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 3, 0),
    [1100] = {.count = 1}, SHIFT(373, 0),
    [1102] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 4, 0),
    [1104] = {.count = 1}, SHIFT(376, 0),
    [1106] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 3, 0),
    [1108] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 4, 0),
    [1110] = {.count = 1}, SHIFT(379, 0),
    [1112] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [1114] = {.count = 1}, SHIFT(381, 0),
    [1116] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [1118] = {.count = 1}, SHIFT(383, 0),
    [1120] = {.count = 1}, SHIFT(384, 0),
    [1122] = {.count = 1}, SHIFT(385, 0),
    [1124] = {.count = 1}, SHIFT(386, 0),
    [1126] = {.count = 1}, SHIFT(387, 0),
    [1128] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [1130] = {.count = 1}, SHIFT(388, 0),
    [1132] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [1134] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [1136] = {.count = 1}, SHIFT(391, 0),
    [1138] = {.count = 1}, SHIFT(392, 0),
    [1140] = {.count = 1}, SHIFT(408, 0),
    [1142] = {.count = 1}, SHIFT(409, 0),
    [1144] = {.count = 1}, SHIFT(393, 0),
    [1146] = {.count = 1}, SHIFT(394, 0),
    [1148] = {.count = 1}, SHIFT(395, 0),
    [1150] = {.count = 1}, SHIFT(396, 0),
    [1152] = {.count = 1}, SHIFT(405, 0),
    [1154] = {.count = 1}, SHIFT(406, 0),
    [1156] = {.count = 1}, SHIFT(399, 0),
    [1158] = {.count = 1}, SHIFT(397, 0),
    [1160] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [1162] = {.count = 1}, SHIFT(398, 0),
    [1164] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [1166] = {.count = 1}, SHIFT(400, 0),
    [1168] = {.count = 1}, SHIFT(401, 0),
    [1170] = {.count = 1}, SHIFT(402, 0),
    [1172] = {.count = 1}, SHIFT(403, 0),
    [1174] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [1176] = {.count = 1}, SHIFT(404, 0),
    [1178] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [1180] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [1182] = {.count = 1}, SHIFT(407, 0),
    [1184] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [1186] = {.count = 1}, SHIFT(410, 0),
    [1188] = {.count = 1}, SHIFT(411, 0),
    [1190] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [1192] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [1194] = {.count = 1}, SHIFT(414, 0),
    [1196] = {.count = 1}, SHIFT(415, 0),
    [1198] = {.count = 1}, SHIFT(416, 0),
    [1200] = {.count = 1}, SHIFT(419, 0),
    [1202] = {.count = 1}, SHIFT(420, 0),
    [1204] = {.count = 1}, SHIFT(421, 0),
    [1206] = {.count = 1}, SHIFT(422, 0),
    [1208] = {.count = 1}, SHIFT(423, 0),
    [1210] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [1212] = {.count = 1}, SHIFT(434, 0),
    [1214] = {.count = 1}, SHIFT(455, 0),
    [1216] = {.count = 1}, SHIFT(456, 0),
    [1218] = {.count = 1}, SHIFT(433, 0),
    [1220] = {.count = 1}, SHIFT(435, 0),
    [1222] = {.count = 1}, SHIFT(436, 0),
    [1224] = {.count = 1}, SHIFT(431, 0),
    [1226] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [1228] = {.count = 1}, SHIFT(424, 0),
    [1230] = {.count = 1}, SHIFT(425, 0),
    [1232] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [1234] = {.count = 1}, SHIFT(426, 0),
    [1236] = {.count = 1}, SHIFT(427, 0),
    [1238] = {.count = 1}, SHIFT(429, 0),
    [1240] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [1242] = {.count = 1}, SHIFT(428, 0),
    [1244] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [1246] = {.count = 1}, SHIFT(430, 0),
    [1248] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [1250] = {.count = 1}, SHIFT(432, 0),
    [1252] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [1254] = {.count = 1}, SHIFT(451, 0),
    [1256] = {.count = 1}, SHIFT(446, 0),
    [1258] = {.count = 1}, SHIFT(447, 0),
    [1260] = {.count = 1}, SHIFT(444, 0),
    [1262] = {.count = 1}, SHIFT(437, 0),
    [1264] = {.count = 1}, SHIFT(438, 0),
    [1266] = {.count = 1}, SHIFT(439, 0),
    [1268] = {.count = 1}, SHIFT(440, 0),
    [1270] = {.count = 1}, SHIFT(442, 0),
    [1272] = {.count = 1}, SHIFT(441, 0),
    [1274] = {.count = 1}, SHIFT(443, 0),
    [1276] = {.count = 1}, SHIFT(445, 0),
    [1278] = {.count = 1}, SHIFT(448, 0),
    [1280] = {.count = 1}, SHIFT(449, 0),
    [1282] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1284] = {.count = 1}, SHIFT(450, 0),
    [1286] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1288] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [1290] = {.count = 1}, SHIFT(452, 0),
    [1292] = {.count = 1}, SHIFT(453, 0),
    [1294] = {.count = 1}, SHIFT(454, 0),
    [1296] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [1298] = {.count = 1}, SHIFT(457, 0),
    [1300] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1302] = {.count = 1}, SHIFT(460, 0),
    [1304] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [1306] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [1308] = {.count = 1}, SHIFT(472, 0),
    [1310] = {.count = 1}, SHIFT(467, 0),
    [1312] = {.count = 1}, SHIFT(468, 0),
    [1314] = {.count = 1}, SHIFT(466, 0),
    [1316] = {.count = 1}, SHIFT(469, 0),
    [1318] = {.count = 1}, SHIFT(470, 0),
    [1320] = {.count = 1}, SHIFT(471, 0),
    [1322] = {.count = 1}, SHIFT(474, 0),
    [1324] = {.count = 1}, SHIFT(475, 0),
    [1326] = {.count = 1}, SHIFT(481, 0),
    [1328] = {.count = 1}, SHIFT(477, 0),
    [1330] = {.count = 1}, SHIFT(476, 0),
    [1332] = {.count = 1}, SHIFT(478, 0),
    [1334] = {.count = 1}, SHIFT(479, 0),
    [1336] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [1338] = {.count = 1}, SHIFT(480, 0),
    [1340] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [1342] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [1344] = {.count = 1}, SHIFT(492, 0),
    [1346] = {.count = 1}, REDUCE(sym_then_block, 3, 0),
    [1348] = {.count = 1}, SHIFT(491, 0),
    [1350] = {.count = 1}, SHIFT(490, 0),
    [1352] = {.count = 1}, SHIFT(489, 0),
    [1354] = {.count = 1}, SHIFT(488, 0),
    [1356] = {.count = 1}, SHIFT(493, 0),
    [1358] = {.count = 1}, SHIFT(498, 0),
    [1360] = {.count = 1}, SHIFT(497, 0),
    [1362] = {.count = 1}, SHIFT(499, 0),
    [1364] = {.count = 1}, SHIFT(501, 0),
    [1366] = {.count = 1}, SHIFT(503, 0),
    [1368] = {.count = 1}, SHIFT(505, 0),
    [1370] = {.count = 1}, SHIFT(506, 0),
    [1372] = {.count = 1}, SHIFT(507, 0),
    [1374] = {.count = 1}, SHIFT(508, 0),
    [1376] = {.count = 1}, SHIFT(509, 0),
    [1378] = {.count = 1}, SHIFT(510, 0),
    [1380] = {.count = 1}, SHIFT(513, 0),
    [1382] = {.count = 1}, SHIFT(514, 0),
    [1384] = {.count = 1}, SHIFT(527, 0),
    [1386] = {.count = 1}, SHIFT(528, 0),
    [1388] = {.count = 1}, SHIFT(515, 0),
    [1390] = {.count = 1}, SHIFT(516, 0),
    [1392] = {.count = 1}, SHIFT(517, 0),
    [1394] = {.count = 1}, SHIFT(524, 0),
    [1396] = {.count = 1}, SHIFT(525, 0),
    [1398] = {.count = 1}, SHIFT(518, 0),
    [1400] = {.count = 1}, SHIFT(519, 0),
    [1402] = {.count = 1}, SHIFT(520, 0),
    [1404] = {.count = 1}, SHIFT(521, 0),
    [1406] = {.count = 1}, SHIFT(522, 0),
    [1408] = {.count = 1}, SHIFT(523, 0),
    [1410] = {.count = 1}, SHIFT(526, 0),
    [1412] = {.count = 1}, SHIFT(529, 0),
    [1414] = {.count = 1}, SHIFT(530, 0),
    [1416] = {.count = 1}, SHIFT(533, 0),
    [1418] = {.count = 1}, SHIFT(534, 0),
    [1420] = {.count = 1}, SHIFT(535, 0),
    [1422] = {.count = 1}, SHIFT(537, 0),
    [1424] = {.count = 1}, SHIFT(538, 0),
    [1426] = {.count = 1}, SHIFT(539, 0),
    [1428] = {.count = 1}, SHIFT(541, 0),
    [1430] = {.count = 1}, SHIFT(551, 0),
    [1432] = {.count = 1}, SHIFT(552, 0),
    [1434] = {.count = 1}, SHIFT(540, 0),
    [1436] = {.count = 1}, SHIFT(547, 0),
    [1438] = {.count = 1}, SHIFT(542, 0),
    [1440] = {.count = 1}, SHIFT(543, 0),
    [1442] = {.count = 1}, SHIFT(544, 0),
    [1444] = {.count = 1}, SHIFT(545, 0),
    [1446] = {.count = 1}, SHIFT(546, 0),
    [1448] = {.count = 1}, SHIFT(548, 0),
    [1450] = {.count = 1}, SHIFT(549, 0),
    [1452] = {.count = 1}, SHIFT(550, 0),
    [1454] = {.count = 1}, SHIFT(553, 0),
    [1456] = {.count = 1}, SHIFT(555, 0),
    [1458] = {.count = 1}, SHIFT(567, 0),
    [1460] = {.count = 1}, SHIFT(562, 0),
    [1462] = {.count = 1}, SHIFT(563, 0),
    [1464] = {.count = 1}, SHIFT(561, 0),
    [1466] = {.count = 1}, SHIFT(564, 0),
    [1468] = {.count = 1}, SHIFT(565, 0),
    [1470] = {.count = 1}, SHIFT(566, 0),
    [1472] = {.count = 1}, SHIFT(569, 0),
    [1474] = {.count = 1}, SHIFT(570, 0),
    [1476] = {.count = 1}, SHIFT(576, 0),
    [1478] = {.count = 1}, SHIFT(572, 0),
    [1480] = {.count = 1}, SHIFT(571, 0),
    [1482] = {.count = 1}, SHIFT(573, 0),
    [1484] = {.count = 1}, SHIFT(574, 0),
    [1486] = {.count = 1}, SHIFT(575, 0),
    [1488] = {.count = 1}, SHIFT(587, 0),
    [1490] = {.count = 1}, SHIFT(586, 0),
    [1492] = {.count = 1}, SHIFT(585, 0),
    [1494] = {.count = 1}, SHIFT(584, 0),
    [1496] = {.count = 1}, SHIFT(583, 0),
    [1498] = {.count = 1}, SHIFT(588, 0),
    [1500] = {.count = 1}, SHIFT(591, 0),
    [1502] = {.count = 1}, SHIFT(593, 0),
    [1504] = {.count = 1}, SHIFT(594, 0),
    [1506] = {.count = 1}, SHIFT(595, 0),
    [1508] = {.count = 1}, SHIFT(596, 0),
    [1510] = {.count = 1}, SHIFT(597, 0),
    [1512] = {.count = 1}, SHIFT(599, 0),
    [1514] = {.count = 1}, SHIFT(598, 0),
    [1516] = {.count = 1}, SHIFT(600, 0),
    [1518] = {.count = 1}, SHIFT(602, 0),
    [1520] = {.count = 1}, SHIFT(604, 0),
    [1522] = {.count = 1}, SHIFT(606, 0),
    [1524] = {.count = 1}, SHIFT(607, 0),
    [1526] = {.count = 1}, SHIFT(608, 0),
    [1528] = {.count = 1}, SHIFT(609, 0),
    [1530] = {.count = 1}, SHIFT(610, 0),
    [1532] = {.count = 1}, SHIFT(611, 0),
    [1534] = {.count = 1}, SHIFT(614, 0),
    [1536] = {.count = 1}, SHIFT(615, 0),
    [1538] = {.count = 1}, SHIFT(628, 0),
    [1540] = {.count = 1}, SHIFT(629, 0),
    [1542] = {.count = 1}, SHIFT(616, 0),
    [1544] = {.count = 1}, SHIFT(617, 0),
    [1546] = {.count = 1}, SHIFT(618, 0),
    [1548] = {.count = 1}, SHIFT(625, 0),
    [1550] = {.count = 1}, SHIFT(626, 0),
    [1552] = {.count = 1}, SHIFT(619, 0),
    [1554] = {.count = 1}, SHIFT(620, 0),
    [1556] = {.count = 1}, SHIFT(621, 0),
    [1558] = {.count = 1}, SHIFT(622, 0),
    [1560] = {.count = 1}, SHIFT(623, 0),
    [1562] = {.count = 1}, SHIFT(624, 0),
    [1564] = {.count = 1}, SHIFT(627, 0),
    [1566] = {.count = 1}, SHIFT(630, 0),
    [1568] = {.count = 1}, SHIFT(631, 0),
    [1570] = {.count = 1}, SHIFT(634, 0),
    [1572] = {.count = 1}, SHIFT(635, 0),
    [1574] = {.count = 1}, SHIFT(636, 0),
    [1576] = {.count = 1}, SHIFT(638, 0),
    [1578] = {.count = 1}, SHIFT(639, 0),
    [1580] = {.count = 1}, SHIFT(640, 0),
    [1582] = {.count = 1}, SHIFT(642, 0),
    [1584] = {.count = 1}, SHIFT(652, 0),
    [1586] = {.count = 1}, SHIFT(653, 0),
    [1588] = {.count = 1}, SHIFT(641, 0),
    [1590] = {.count = 1}, SHIFT(648, 0),
    [1592] = {.count = 1}, SHIFT(643, 0),
    [1594] = {.count = 1}, SHIFT(644, 0),
    [1596] = {.count = 1}, SHIFT(645, 0),
    [1598] = {.count = 1}, SHIFT(646, 0),
    [1600] = {.count = 1}, SHIFT(647, 0),
    [1602] = {.count = 1}, SHIFT(649, 0),
    [1604] = {.count = 1}, SHIFT(650, 0),
    [1606] = {.count = 1}, SHIFT(651, 0),
    [1608] = {.count = 1}, SHIFT(654, 0),
    [1610] = {.count = 1}, SHIFT(656, 0),
    [1612] = {.count = 1}, SHIFT(668, 0),
    [1614] = {.count = 1}, SHIFT(663, 0),
    [1616] = {.count = 1}, SHIFT(664, 0),
    [1618] = {.count = 1}, SHIFT(662, 0),
    [1620] = {.count = 1}, SHIFT(665, 0),
    [1622] = {.count = 1}, SHIFT(666, 0),
    [1624] = {.count = 1}, SHIFT(667, 0),
    [1626] = {.count = 1}, SHIFT(670, 0),
    [1628] = {.count = 1}, SHIFT(671, 0),
    [1630] = {.count = 1}, SHIFT(677, 0),
    [1632] = {.count = 1}, SHIFT(673, 0),
    [1634] = {.count = 1}, SHIFT(672, 0),
    [1636] = {.count = 1}, SHIFT(674, 0),
    [1638] = {.count = 1}, SHIFT(675, 0),
    [1640] = {.count = 1}, SHIFT(676, 0),
    [1642] = {.count = 1}, SHIFT(680, 0),
    [1644] = {.count = 1}, SHIFT(683, 0),
    [1646] = {.count = 1}, SHIFT(684, 0),
    [1648] = {.count = 1}, SHIFT(685, 0),
    [1650] = {.count = 1}, SHIFT(695, 0),
    [1652] = {.count = 1}, SHIFT(690, 0),
    [1654] = {.count = 1}, SHIFT(691, 0),
    [1656] = {.count = 1}, SHIFT(689, 0),
    [1658] = {.count = 1}, SHIFT(692, 0),
    [1660] = {.count = 1}, SHIFT(693, 0),
    [1662] = {.count = 1}, SHIFT(694, 0),
    [1664] = {.count = 1}, SHIFT(697, 0),
    [1666] = {.count = 1}, SHIFT(698, 0),
    [1668] = {.count = 1}, SHIFT(699, 0),
    [1670] = {.count = 1}, SHIFT(700, 0),
    [1672] = {.count = 1}, SHIFT(701, 0),
    [1674] = {.count = 1}, SHIFT(703, 0),
    [1676] = {.count = 1}, SHIFT(704, 0),
    [1678] = {.count = 1}, SHIFT(705, 0),
    [1680] = {.count = 1}, SHIFT(706, 0),
    [1682] = {.count = 1}, SHIFT(707, 0),
    [1684] = {.count = 1}, SHIFT(709, 0),
    [1686] = {.count = 1}, SHIFT(708, 0),
    [1688] = {.count = 1}, SHIFT(710, 0),
    [1690] = {.count = 1}, SHIFT(712, 0),
    [1692] = {.count = 1}, SHIFT(714, 0),
    [1694] = {.count = 1}, SHIFT(716, 0),
    [1696] = {.count = 1}, SHIFT(717, 0),
    [1698] = {.count = 1}, SHIFT(718, 0),
    [1700] = {.count = 1}, SHIFT(719, 0),
    [1702] = {.count = 1}, SHIFT(720, 0),
    [1704] = {.count = 1}, SHIFT(721, 0),
    [1706] = {.count = 1}, SHIFT(724, 0),
    [1708] = {.count = 1}, SHIFT(725, 0),
    [1710] = {.count = 1}, SHIFT(738, 0),
    [1712] = {.count = 1}, SHIFT(739, 0),
    [1714] = {.count = 1}, SHIFT(726, 0),
    [1716] = {.count = 1}, SHIFT(727, 0),
    [1718] = {.count = 1}, SHIFT(728, 0),
    [1720] = {.count = 1}, SHIFT(735, 0),
    [1722] = {.count = 1}, SHIFT(736, 0),
    [1724] = {.count = 1}, SHIFT(729, 0),
    [1726] = {.count = 1}, SHIFT(730, 0),
    [1728] = {.count = 1}, SHIFT(731, 0),
    [1730] = {.count = 1}, SHIFT(732, 0),
    [1732] = {.count = 1}, SHIFT(733, 0),
    [1734] = {.count = 1}, SHIFT(734, 0),
    [1736] = {.count = 1}, SHIFT(737, 0),
    [1738] = {.count = 1}, SHIFT(740, 0),
    [1740] = {.count = 1}, SHIFT(741, 0),
    [1742] = {.count = 1}, SHIFT(744, 0),
    [1744] = {.count = 1}, SHIFT(745, 0),
    [1746] = {.count = 1}, SHIFT(746, 0),
    [1748] = {.count = 1}, SHIFT(748, 0),
    [1750] = {.count = 1}, SHIFT(749, 0),
    [1752] = {.count = 1}, SHIFT(750, 0),
    [1754] = {.count = 1}, SHIFT(752, 0),
    [1756] = {.count = 1}, SHIFT(762, 0),
    [1758] = {.count = 1}, SHIFT(763, 0),
    [1760] = {.count = 1}, SHIFT(751, 0),
    [1762] = {.count = 1}, SHIFT(758, 0),
    [1764] = {.count = 1}, SHIFT(753, 0),
    [1766] = {.count = 1}, SHIFT(754, 0),
    [1768] = {.count = 1}, SHIFT(755, 0),
    [1770] = {.count = 1}, SHIFT(756, 0),
    [1772] = {.count = 1}, SHIFT(757, 0),
    [1774] = {.count = 1}, SHIFT(759, 0),
    [1776] = {.count = 1}, SHIFT(760, 0),
    [1778] = {.count = 1}, SHIFT(761, 0),
    [1780] = {.count = 1}, SHIFT(764, 0),
    [1782] = {.count = 1}, SHIFT(766, 0),
    [1784] = {.count = 1}, SHIFT(778, 0),
    [1786] = {.count = 1}, SHIFT(773, 0),
    [1788] = {.count = 1}, SHIFT(774, 0),
    [1790] = {.count = 1}, SHIFT(772, 0),
    [1792] = {.count = 1}, SHIFT(775, 0),
    [1794] = {.count = 1}, SHIFT(776, 0),
    [1796] = {.count = 1}, SHIFT(777, 0),
    [1798] = {.count = 1}, SHIFT(780, 0),
    [1800] = {.count = 1}, SHIFT(781, 0),
    [1802] = {.count = 1}, SHIFT(787, 0),
    [1804] = {.count = 1}, SHIFT(783, 0),
    [1806] = {.count = 1}, SHIFT(782, 0),
    [1808] = {.count = 1}, SHIFT(784, 0),
    [1810] = {.count = 1}, SHIFT(785, 0),
    [1812] = {.count = 1}, SHIFT(786, 0),
    [1814] = {.count = 1}, SHIFT(790, 0),
    [1816] = {.count = 1}, SHIFT(800, 0),
    [1818] = {.count = 1}, SHIFT(795, 0),
    [1820] = {.count = 1}, SHIFT(796, 0),
    [1822] = {.count = 1}, SHIFT(794, 0),
    [1824] = {.count = 1}, SHIFT(797, 0),
    [1826] = {.count = 1}, SHIFT(798, 0),
    [1828] = {.count = 1}, SHIFT(799, 0),
    [1830] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [1832] = {.count = 1}, SHIFT(803, 0),
    [1834] = {.count = 1}, SHIFT(804, 0),
    [1836] = {.count = 1}, SHIFT(806, 0),
    [1838] = {.count = 1}, SHIFT(807, 0),
    [1840] = {.count = 1}, SHIFT(808, 0),
    [1842] = {.count = 1}, SHIFT(809, 0),
    [1844] = {.count = 1}, SHIFT(810, 0),
    [1846] = {.count = 1}, SHIFT(811, 0),
    [1848] = {.count = 1}, SHIFT(817, 0),
    [1850] = {.count = 1}, SHIFT(818, 0),
    [1852] = {.count = 1}, SHIFT(812, 0),
    [1854] = {.count = 1}, SHIFT(813, 0),
    [1856] = {.count = 1}, SHIFT(814, 0),
    [1858] = {.count = 1}, SHIFT(815, 0),
    [1860] = {.count = 1}, SHIFT(816, 0),
    [1862] = {.count = 1}, SHIFT(819, 0),
    [1864] = {.count = 1}, SHIFT(820, 0),
    [1866] = {.count = 1}, SHIFT(821, 0),
    [1868] = {.count = 1}, SHIFT(823, 0),
    [1870] = {.count = 1}, SHIFT(824, 0),
    [1872] = {.count = 1}, SHIFT(825, 0),
    [1874] = {.count = 1}, SHIFT(826, 0),
    [1876] = {.count = 1}, SHIFT(827, 0),
    [1878] = {.count = 1}, SHIFT(829, 0),
    [1880] = {.count = 1}, SHIFT(830, 0),
    [1882] = {.count = 1}, SHIFT(831, 0),
    [1884] = {.count = 1}, SHIFT(832, 0),
    [1886] = {.count = 1}, SHIFT(833, 0),
    [1888] = {.count = 1}, SHIFT(835, 0),
    [1890] = {.count = 1}, SHIFT(834, 0),
    [1892] = {.count = 1}, SHIFT(836, 0),
    [1894] = {.count = 1}, SHIFT(838, 0),
    [1896] = {.count = 1}, SHIFT(840, 0),
    [1898] = {.count = 1}, SHIFT(842, 0),
    [1900] = {.count = 1}, SHIFT(843, 0),
    [1902] = {.count = 1}, SHIFT(844, 0),
    [1904] = {.count = 1}, SHIFT(845, 0),
    [1906] = {.count = 1}, SHIFT(846, 0),
    [1908] = {.count = 1}, SHIFT(847, 0),
    [1910] = {.count = 1}, SHIFT(850, 0),
    [1912] = {.count = 1}, SHIFT(851, 0),
    [1914] = {.count = 1}, SHIFT(864, 0),
    [1916] = {.count = 1}, SHIFT(865, 0),
    [1918] = {.count = 1}, SHIFT(852, 0),
    [1920] = {.count = 1}, SHIFT(853, 0),
    [1922] = {.count = 1}, SHIFT(854, 0),
    [1924] = {.count = 1}, SHIFT(861, 0),
    [1926] = {.count = 1}, SHIFT(862, 0),
    [1928] = {.count = 1}, SHIFT(855, 0),
    [1930] = {.count = 1}, SHIFT(856, 0),
    [1932] = {.count = 1}, SHIFT(857, 0),
    [1934] = {.count = 1}, SHIFT(858, 0),
    [1936] = {.count = 1}, SHIFT(859, 0),
    [1938] = {.count = 1}, SHIFT(860, 0),
    [1940] = {.count = 1}, SHIFT(863, 0),
    [1942] = {.count = 1}, SHIFT(866, 0),
    [1944] = {.count = 1}, SHIFT(867, 0),
    [1946] = {.count = 1}, SHIFT(870, 0),
    [1948] = {.count = 1}, SHIFT(871, 0),
    [1950] = {.count = 1}, SHIFT(872, 0),
    [1952] = {.count = 1}, SHIFT(874, 0),
    [1954] = {.count = 1}, SHIFT(875, 0),
    [1956] = {.count = 1}, SHIFT(876, 0),
    [1958] = {.count = 1}, SHIFT(878, 0),
    [1960] = {.count = 1}, SHIFT(888, 0),
    [1962] = {.count = 1}, SHIFT(889, 0),
    [1964] = {.count = 1}, SHIFT(877, 0),
    [1966] = {.count = 1}, SHIFT(884, 0),
    [1968] = {.count = 1}, SHIFT(879, 0),
    [1970] = {.count = 1}, SHIFT(880, 0),
    [1972] = {.count = 1}, SHIFT(881, 0),
    [1974] = {.count = 1}, SHIFT(882, 0),
    [1976] = {.count = 1}, SHIFT(883, 0),
    [1978] = {.count = 1}, SHIFT(885, 0),
    [1980] = {.count = 1}, SHIFT(886, 0),
    [1982] = {.count = 1}, SHIFT(887, 0),
    [1984] = {.count = 1}, SHIFT(890, 0),
    [1986] = {.count = 1}, SHIFT(892, 0),
    [1988] = {.count = 1}, SHIFT(904, 0),
    [1990] = {.count = 1}, SHIFT(899, 0),
    [1992] = {.count = 1}, SHIFT(900, 0),
    [1994] = {.count = 1}, SHIFT(898, 0),
    [1996] = {.count = 1}, SHIFT(901, 0),
    [1998] = {.count = 1}, SHIFT(902, 0),
    [2000] = {.count = 1}, SHIFT(903, 0),
    [2002] = {.count = 1}, SHIFT(906, 0),
    [2004] = {.count = 1}, SHIFT(907, 0),
    [2006] = {.count = 1}, SHIFT(913, 0),
    [2008] = {.count = 1}, SHIFT(909, 0),
    [2010] = {.count = 1}, SHIFT(908, 0),
    [2012] = {.count = 1}, SHIFT(910, 0),
    [2014] = {.count = 1}, SHIFT(911, 0),
    [2016] = {.count = 1}, SHIFT(912, 0),
    [2018] = {.count = 1}, SHIFT(924, 0),
    [2020] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [2022] = {.count = 1}, SHIFT(923, 0),
    [2024] = {.count = 1}, SHIFT(922, 0),
    [2026] = {.count = 1}, SHIFT(921, 0),
    [2028] = {.count = 1}, SHIFT(920, 0),
    [2030] = {.count = 1}, SHIFT(925, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
