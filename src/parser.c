#include "tree_sitter/parser.h"

#define STATE_COUNT 245
#define SYMBOL_COUNT 83

enum {
    sym_source_file = ts_builtin_sym_start,
    sym_package_clause,
    sym_import_declaration,
    sym_import_spec,
    sym__top_level_declaration,
    sym__declaration,
    sym_const_declaration,
    sym_const_spec,
    sym_var_declaration,
    sym_var_spec,
    sym_function_declaration,
    sym_method_declaration,
    sym_parameters,
    sym__parameter_list,
    sym_parameter_declaration,
    sym_block,
    sym_type_declaration,
    sym_type_spec,
    sym_identifier_list,
    sym_expression_list,
    sym__type,
    sym_array_type,
    sym_slice_type,
    sym_qualified_identifier,
    sym__expression,
    sym_unary_expression,
    sym_binary_expression,
    sym__primary_expression,
    sym__string_literal,
    sym_int_literal,
    sym_float_literal,
    aux_sym_source_file_repeat1,
    aux_sym_source_file_repeat2,
    aux_sym_import_declaration_repeat1,
    aux_sym_const_declaration_repeat1,
    aux_sym_var_declaration_repeat1,
    aux_sym_type_declaration_repeat1,
    aux_sym_identifier_list_repeat1,
    aux_sym_expression_list_repeat1,
    anon_sym_package,
    anon_sym_import,
    anon_sym_LPAREN,
    aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH,
    anon_sym_RPAREN,
    anon_sym_DOT,
    anon_sym_const,
    anon_sym_EQ,
    anon_sym_var,
    anon_sym_func,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_type,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_LT_LT,
    anon_sym_GT_GT,
    anon_sym_AMP,
    anon_sym_AMP_CARET,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_AMP_AMP,
    anon_sym_PIPE_PIPE,
    sym_identifier,
    sym_raw_string_literal,
    sym_interpreted_string_literal,
    aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH,
    sym_comment,
};

static const char *ts_symbol_names[] = {
    [sym_source_file] = "source_file",
    [sym_package_clause] = "package_clause",
    [sym_import_declaration] = "import_declaration",
    [sym_import_spec] = "import_spec",
    [sym__top_level_declaration] = "_top_level_declaration",
    [sym__declaration] = "_declaration",
    [sym_const_declaration] = "const_declaration",
    [sym_const_spec] = "const_spec",
    [sym_var_declaration] = "var_declaration",
    [sym_var_spec] = "var_spec",
    [sym_function_declaration] = "function_declaration",
    [sym_method_declaration] = "method_declaration",
    [sym_parameters] = "parameters",
    [sym__parameter_list] = "_parameter_list",
    [sym_parameter_declaration] = "parameter_declaration",
    [sym_block] = "block",
    [sym_type_declaration] = "type_declaration",
    [sym_type_spec] = "type_spec",
    [sym_identifier_list] = "identifier_list",
    [sym_expression_list] = "expression_list",
    [sym__type] = "_type",
    [sym_array_type] = "array_type",
    [sym_slice_type] = "slice_type",
    [sym_qualified_identifier] = "qualified_identifier",
    [sym__expression] = "_expression",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
    [sym__primary_expression] = "_primary_expression",
    [sym__string_literal] = "_string_literal",
    [sym_int_literal] = "int_literal",
    [sym_float_literal] = "float_literal",
    [aux_sym_source_file_repeat1] = "source_file_repeat1",
    [aux_sym_source_file_repeat2] = "source_file_repeat2",
    [aux_sym_import_declaration_repeat1] = "import_declaration_repeat1",
    [aux_sym_const_declaration_repeat1] = "const_declaration_repeat1",
    [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
    [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
    [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_package] = "package",
    [anon_sym_import] = "import",
    [anon_sym_LPAREN] = "(",
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = "/(\n|;)/",
    [anon_sym_RPAREN] = ")",
    [anon_sym_DOT] = ".",
    [anon_sym_const] = "const",
    [anon_sym_EQ] = "=",
    [anon_sym_var] = "var",
    [anon_sym_func] = "func",
    [anon_sym_COMMA] = ",",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_type] = "type",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_STAR] = "*",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_AMP] = "&",
    [anon_sym_AMP_CARET] = "&^",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_BANG_EQ] = "!=",
    [anon_sym_LT] = "<",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_AMP_AMP] = "&&",
    [anon_sym_PIPE_PIPE] = "||",
    [sym_identifier] = "identifier",
    [sym_raw_string_literal] = "raw_string_literal",
    [sym_interpreted_string_literal] = "interpreted_string_literal",
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/[1-9]([0-9]*|)/",
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/0([0-7]*|)/",
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = "/0(x|X)[0-7]*/",
    [sym_comment] = "comment",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_source_file] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_package_clause] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__top_level_declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_const_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_const_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_function_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_parameters] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__parameter_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_parameter_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_identifier_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_expression_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__type] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_array_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_slice_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_qualified_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__primary_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__string_literal] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_int_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_float_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_source_file_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_source_file_repeat2] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_import_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_const_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_var_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_type_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_expression_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_package] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_import] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_const] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_func] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_type] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PERCENT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_BANG_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_raw_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpreted_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
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
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '%')
                ADVANCE(10);
            if (lookahead == '&')
                ADVANCE(11);
            if (lookahead == '(')
                ADVANCE(14);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == '*')
                ADVANCE(16);
            if (lookahead == '+')
                ADVANCE(17);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (lookahead == ';')
                ADVANCE(28);
            if (lookahead == '<')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(32);
            if (lookahead == '>')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == ']')
                ADVANCE(39);
            if (lookahead == '^')
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == '`')
                ADVANCE(41);
            if (lookahead == 'c')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(58);
            if (lookahead == 't')
                ADVANCE(65);
            if (lookahead == 'v')
                ADVANCE(69);
            if (lookahead == '{')
                ADVANCE(72);
            if (lookahead == '|')
                ADVANCE(73);
            if (lookahead == '}')
                ADVANCE(75);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 3:
            if (lookahead == '=')
                ADVANCE(4);
            LEX_ERROR();
        case 4:
            ACCEPT_TOKEN(anon_sym_BANG_EQ);
        case 5:
            if (lookahead == '\"')
                ADVANCE(6);
            if (lookahead == '\\')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            if (lookahead == '\"')
                ADVANCE(6);
            if (lookahead == '\\')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(5);
            ACCEPT_TOKEN(sym_interpreted_string_literal);
        case 7:
            if (lookahead == '\"')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(8);
            if (lookahead == '\\')
                ADVANCE(7);
            if (lookahead == 'x')
                ADVANCE(8);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\') ||
                (lookahead == 'x')))
                ADVANCE(5);
            LEX_ERROR();
        case 8:
            if (lookahead == '\"')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(9);
            if (lookahead == '\\')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\')))
                ADVANCE(5);
            LEX_ERROR();
        case 9:
            if (lookahead == '\"')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(5);
            if (lookahead == '\\')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\')))
                ADVANCE(5);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 11:
            if (lookahead == '&')
                ADVANCE(12);
            if (lookahead == '^')
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 12:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 13:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 14:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 15:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 16:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 17:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 18:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 19:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 20:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 21:
            if (lookahead == '/')
                ADVANCE(22);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 22:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_comment);
        case 23:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            if (lookahead == 'X')
                ADVANCE(25);
            if (lookahead == 'x')
                ADVANCE(25);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 24:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 25:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 28:
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 29:
            if (lookahead == '<')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_LT);
        case 30:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 31:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 32:
            if (lookahead == '=')
                ADVANCE(33);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 33:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 34:
            if (lookahead == '=')
                ADVANCE(35);
            if (lookahead == '>')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_GT);
        case 35:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 36:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 38:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 39:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 40:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 41:
            if (lookahead == '\n')
                ADVANCE(41);
            if (lookahead == '`')
                ADVANCE(42);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(41);
            LEX_ERROR();
        case 42:
            if (lookahead == '\n')
                ADVANCE(41);
            if (lookahead == '`')
                ADVANCE(42);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(41);
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'n')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 's')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 't')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_const);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'u')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'n')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_func);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'm')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(54);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'o')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'r')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_import);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'a')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'k')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'a')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'g')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'e')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_package);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'y')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'e')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_type);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'a')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'r')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_var);
        case 72:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 73:
            if (lookahead == '|')
                ADVANCE(74);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 74:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 75:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 76:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'p')
                ADVANCE(78);
            LEX_ERROR();
        case 77:
            if (lookahead == '/')
                ADVANCE(22);
            LEX_ERROR();
        case 78:
            if (lookahead == 'a')
                ADVANCE(79);
            LEX_ERROR();
        case 79:
            if (lookahead == 'c')
                ADVANCE(80);
            LEX_ERROR();
        case 80:
            if (lookahead == 'k')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'a')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 'g')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            if (lookahead == 'e')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            ACCEPT_TOKEN(anon_sym_package);
        case 85:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '/')
                ADVANCE(77);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            LEX_ERROR();
        case 87:
            if (lookahead == 'o')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'n')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 's')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 't')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            ACCEPT_TOKEN(anon_sym_const);
        case 92:
            if (lookahead == 'u')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'n')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'c')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(anon_sym_func);
        case 96:
            if (lookahead == 'm')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'p')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 'o')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'r')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 't')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            ACCEPT_TOKEN(anon_sym_import);
        case 102:
            if (lookahead == 'y')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'p')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'e')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            ACCEPT_TOKEN(anon_sym_type);
        case 106:
            if (lookahead == 'a')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'r')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_var);
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 110:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(110);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            LEX_ERROR();
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(14);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == '`')
                ADVANCE(41);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
            if (lookahead == '(')
                ADVANCE(14);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 113:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(113);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 114:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == ']')
                ADVANCE(39);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == '`')
                ADVANCE(41);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(10);
            if (lookahead == '&')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(16);
            if (lookahead == '+')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '<')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '>')
                ADVANCE(34);
            if (lookahead == ']')
                ADVANCE(39);
            if (lookahead == '^')
                ADVANCE(40);
            if (lookahead == '|')
                ADVANCE(73);
            LEX_ERROR();
        case 118:
            if (lookahead == '=')
                ADVANCE(33);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == '`')
                ADVANCE(41);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(28);
            LEX_ERROR();
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(77);
            LEX_ERROR();
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(28);
            LEX_ERROR();
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '(')
                ADVANCE(14);
            if (lookahead == '/')
                ADVANCE(77);
            LEX_ERROR();
        case 124:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '(')
                ADVANCE(14);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(48);
            if (lookahead == 't')
                ADVANCE(65);
            if (lookahead == 'v')
                ADVANCE(69);
            if (lookahead == '{')
                ADVANCE(72);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(77);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            if (lookahead == '{')
                ADVANCE(72);
            LEX_ERROR();
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '}')
                ADVANCE(75);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            if (lookahead == '{')
                ADVANCE(72);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '[')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(37);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(28);
            if (lookahead == '=')
                ADVANCE(132);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(28);
            if (lookahead == '=')
                ADVANCE(132);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(10);
            if (lookahead == '&')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(16);
            if (lookahead == '+')
                ADVANCE(17);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(28);
            if (lookahead == '<')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '>')
                ADVANCE(34);
            if (lookahead == '^')
                ADVANCE(40);
            if (lookahead == '|')
                ADVANCE(73);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(10);
            if (lookahead == '&')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(16);
            if (lookahead == '+')
                ADVANCE(17);
            if (lookahead == ',')
                ADVANCE(18);
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '<')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(118);
            if (lookahead == '>')
                ADVANCE(34);
            if (lookahead == '^')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(87);
            if (lookahead == 'f')
                ADVANCE(92);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'v')
                ADVANCE(106);
            if (lookahead == '|')
                ADVANCE(73);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '=')
                ADVANCE(132);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(37);
            if (lookahead == '`')
                ADVANCE(41);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(77);
            if (lookahead == '`')
                ADVANCE(41);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 76,
    [1] = 85,
    [2] = 86,
    [3] = 109,
    [4] = 86,
    [5] = 86,
    [6] = 110,
    [7] = 110,
    [8] = 110,
    [9] = 110,
    [10] = 85,
    [11] = 111,
    [12] = 112,
    [13] = 112,
    [14] = 112,
    [15] = 112,
    [16] = 110,
    [17] = 113,
    [18] = 114,
    [19] = 110,
    [20] = 110,
    [21] = 115,
    [22] = 116,
    [23] = 109,
    [24] = 110,
    [25] = 117,
    [26] = 117,
    [27] = 117,
    [28] = 114,
    [29] = 117,
    [30] = 117,
    [31] = 110,
    [32] = 114,
    [33] = 119,
    [34] = 119,
    [35] = 119,
    [36] = 119,
    [37] = 119,
    [38] = 117,
    [39] = 117,
    [40] = 117,
    [41] = 117,
    [42] = 117,
    [43] = 110,
    [44] = 120,
    [45] = 121,
    [46] = 110,
    [47] = 114,
    [48] = 120,
    [49] = 120,
    [50] = 115,
    [51] = 122,
    [52] = 109,
    [53] = 120,
    [54] = 117,
    [55] = 114,
    [56] = 120,
    [57] = 114,
    [58] = 120,
    [59] = 110,
    [60] = 113,
    [61] = 121,
    [62] = 109,
    [63] = 113,
    [64] = 123,
    [65] = 124,
    [66] = 113,
    [67] = 125,
    [68] = 125,
    [69] = 124,
    [70] = 126,
    [71] = 125,
    [72] = 125,
    [73] = 115,
    [74] = 127,
    [75] = 109,
    [76] = 125,
    [77] = 117,
    [78] = 114,
    [79] = 125,
    [80] = 114,
    [81] = 125,
    [82] = 124,
    [83] = 109,
    [84] = 125,
    [85] = 126,
    [86] = 128,
    [87] = 110,
    [88] = 128,
    [89] = 113,
    [90] = 129,
    [91] = 115,
    [92] = 130,
    [93] = 109,
    [94] = 128,
    [95] = 117,
    [96] = 114,
    [97] = 128,
    [98] = 114,
    [99] = 128,
    [100] = 110,
    [101] = 125,
    [102] = 128,
    [103] = 128,
    [104] = 110,
    [105] = 125,
    [106] = 109,
    [107] = 109,
    [108] = 123,
    [109] = 124,
    [110] = 128,
    [111] = 110,
    [112] = 110,
    [113] = 110,
    [114] = 131,
    [115] = 113,
    [116] = 133,
    [117] = 131,
    [118] = 109,
    [119] = 133,
    [120] = 131,
    [121] = 120,
    [122] = 131,
    [123] = 121,
    [124] = 110,
    [125] = 110,
    [126] = 134,
    [127] = 134,
    [128] = 119,
    [129] = 115,
    [130] = 135,
    [131] = 109,
    [132] = 134,
    [133] = 117,
    [134] = 114,
    [135] = 134,
    [136] = 114,
    [137] = 134,
    [138] = 120,
    [139] = 136,
    [140] = 136,
    [141] = 136,
    [142] = 136,
    [143] = 136,
    [144] = 120,
    [145] = 119,
    [146] = 119,
    [147] = 119,
    [148] = 119,
    [149] = 119,
    [150] = 119,
    [151] = 136,
    [152] = 136,
    [153] = 136,
    [154] = 136,
    [155] = 136,
    [156] = 136,
    [157] = 120,
    [158] = 119,
    [159] = 120,
    [160] = 113,
    [161] = 121,
    [162] = 137,
    [163] = 137,
    [164] = 119,
    [165] = 115,
    [166] = 138,
    [167] = 109,
    [168] = 137,
    [169] = 117,
    [170] = 114,
    [171] = 137,
    [172] = 114,
    [173] = 137,
    [174] = 110,
    [175] = 139,
    [176] = 139,
    [177] = 139,
    [178] = 139,
    [179] = 139,
    [180] = 110,
    [181] = 119,
    [182] = 119,
    [183] = 119,
    [184] = 119,
    [185] = 119,
    [186] = 119,
    [187] = 139,
    [188] = 139,
    [189] = 139,
    [190] = 139,
    [191] = 139,
    [192] = 139,
    [193] = 110,
    [194] = 119,
    [195] = 110,
    [196] = 110,
    [197] = 131,
    [198] = 113,
    [199] = 120,
    [200] = 131,
    [201] = 121,
    [202] = 110,
    [203] = 110,
    [204] = 140,
    [205] = 140,
    [206] = 119,
    [207] = 115,
    [208] = 141,
    [209] = 109,
    [210] = 140,
    [211] = 117,
    [212] = 114,
    [213] = 140,
    [214] = 114,
    [215] = 140,
    [216] = 120,
    [217] = 119,
    [218] = 120,
    [219] = 113,
    [220] = 121,
    [221] = 140,
    [222] = 119,
    [223] = 110,
    [224] = 119,
    [225] = 110,
    [226] = 86,
    [227] = 86,
    [228] = 142,
    [229] = 143,
    [230] = 86,
    [231] = 86,
    [232] = 120,
    [233] = 120,
    [234] = 121,
    [235] = 86,
    [236] = 143,
    [237] = 120,
    [238] = 120,
    [239] = 86,
    [240] = 142,
    [241] = 121,
    [242] = 85,
    [243] = 85,
    [244] = 110,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_source_file] = 2,
        [sym_package_clause] = 4,
        [anon_sym_package] = 6,
        [sym_comment] = 8,
    },
    [1] = {
        [ts_builtin_sym_end] = 10,
        [sym_comment] = 8,
    },
    [2] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat1] = 20,
        [aux_sym_source_file_repeat2] = 22,
        [ts_builtin_sym_end] = 24,
        [anon_sym_import] = 26,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 36,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 38,
        [sym__top_level_declaration] = 38,
        [sym__declaration] = 38,
        [sym_const_declaration] = 38,
        [sym_var_declaration] = 38,
        [sym_function_declaration] = 38,
        [sym_method_declaration] = 38,
        [sym_type_declaration] = 38,
        [aux_sym_source_file_repeat1] = 38,
        [aux_sym_source_file_repeat2] = 38,
        [ts_builtin_sym_end] = 38,
        [anon_sym_import] = 38,
        [anon_sym_const] = 38,
        [anon_sym_var] = 38,
        [anon_sym_func] = 38,
        [anon_sym_type] = 38,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 40,
        [sym__declaration] = 40,
        [sym_const_declaration] = 40,
        [sym_var_declaration] = 40,
        [sym_function_declaration] = 40,
        [sym_method_declaration] = 40,
        [sym_type_declaration] = 40,
        [aux_sym_source_file_repeat1] = 42,
        [aux_sym_source_file_repeat2] = 40,
        [ts_builtin_sym_end] = 40,
        [anon_sym_import] = 26,
        [anon_sym_const] = 40,
        [anon_sym_var] = 40,
        [anon_sym_func] = 40,
        [anon_sym_type] = 40,
        [sym_comment] = 8,
    },
    [6] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 44,
        [ts_builtin_sym_end] = 46,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [7] = {
        [sym__top_level_declaration] = 48,
        [sym__declaration] = 48,
        [sym_const_declaration] = 48,
        [sym_var_declaration] = 48,
        [sym_function_declaration] = 48,
        [sym_method_declaration] = 48,
        [sym_type_declaration] = 48,
        [aux_sym_source_file_repeat2] = 48,
        [ts_builtin_sym_end] = 48,
        [anon_sym_const] = 48,
        [anon_sym_var] = 48,
        [anon_sym_func] = 48,
        [anon_sym_type] = 48,
        [sym_comment] = 8,
    },
    [8] = {
        [sym__top_level_declaration] = 50,
        [sym__declaration] = 50,
        [sym_const_declaration] = 50,
        [sym_var_declaration] = 50,
        [sym_function_declaration] = 50,
        [sym_method_declaration] = 50,
        [sym_type_declaration] = 50,
        [aux_sym_source_file_repeat2] = 50,
        [ts_builtin_sym_end] = 50,
        [anon_sym_const] = 50,
        [anon_sym_var] = 50,
        [anon_sym_func] = 50,
        [anon_sym_type] = 50,
        [sym_comment] = 8,
    },
    [9] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 52,
        [ts_builtin_sym_end] = 54,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 54,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 56,
        [sym__string_literal] = 58,
        [anon_sym_LPAREN] = 60,
        [anon_sym_DOT] = 62,
        [sym_identifier] = 62,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 66,
        [sym_identifier_list] = 68,
        [anon_sym_LPAREN] = 70,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 74,
        [sym_identifier_list] = 76,
        [anon_sym_LPAREN] = 78,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [14] = {
        [sym_parameters] = 80,
        [anon_sym_LPAREN] = 82,
        [sym_identifier] = 84,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_type_spec] = 86,
        [anon_sym_LPAREN] = 88,
        [sym_identifier] = 90,
        [sym_comment] = 8,
    },
    [16] = {
        [sym__top_level_declaration] = 92,
        [sym__declaration] = 92,
        [sym_const_declaration] = 92,
        [sym_var_declaration] = 92,
        [sym_function_declaration] = 92,
        [sym_method_declaration] = 92,
        [sym_type_declaration] = 92,
        [aux_sym_source_file_repeat2] = 92,
        [ts_builtin_sym_end] = 92,
        [anon_sym_const] = 92,
        [anon_sym_var] = 92,
        [anon_sym_func] = 92,
        [anon_sym_type] = 92,
        [sym_comment] = 8,
    },
    [17] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 96,
        [anon_sym_RPAREN] = 98,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 102,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [sym_identifier] = 108,
        [sym_comment] = 8,
    },
    [19] = {
        [sym__top_level_declaration] = 110,
        [sym__declaration] = 110,
        [sym_const_declaration] = 110,
        [sym_var_declaration] = 110,
        [sym_function_declaration] = 110,
        [sym_method_declaration] = 110,
        [sym_type_declaration] = 110,
        [aux_sym_source_file_repeat2] = 110,
        [ts_builtin_sym_end] = 110,
        [anon_sym_const] = 110,
        [anon_sym_var] = 110,
        [anon_sym_func] = 110,
        [anon_sym_type] = 110,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_const] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__expression] = 114,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 120,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_DOT] = 126,
        [anon_sym_const] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [23] = {
        [sym_identifier] = 128,
        [sym_comment] = 8,
    },
    [24] = {
        [sym__top_level_declaration] = 130,
        [sym__declaration] = 130,
        [sym_const_declaration] = 130,
        [sym_var_declaration] = 130,
        [sym_function_declaration] = 130,
        [sym_method_declaration] = 130,
        [sym_type_declaration] = 130,
        [aux_sym_source_file_repeat2] = 130,
        [ts_builtin_sym_end] = 130,
        [anon_sym_const] = 130,
        [anon_sym_var] = 130,
        [anon_sym_func] = 130,
        [anon_sym_type] = 130,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_RBRACK] = 132,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_RBRACK] = 144,
        [anon_sym_STAR] = 144,
        [anon_sym_SLASH] = 144,
        [anon_sym_PERCENT] = 144,
        [anon_sym_LT_LT] = 144,
        [anon_sym_GT_GT] = 144,
        [anon_sym_AMP] = 144,
        [anon_sym_AMP_CARET] = 144,
        [anon_sym_PLUS] = 144,
        [anon_sym_DASH] = 144,
        [anon_sym_PIPE] = 144,
        [anon_sym_CARET] = 144,
        [anon_sym_EQ_EQ] = 144,
        [anon_sym_BANG_EQ] = 144,
        [anon_sym_LT] = 144,
        [anon_sym_LT_EQ] = 144,
        [anon_sym_GT] = 144,
        [anon_sym_GT_EQ] = 144,
        [anon_sym_AMP_AMP] = 144,
        [anon_sym_PIPE_PIPE] = 144,
        [sym_comment] = 8,
    },
    [27] = {
        [anon_sym_RBRACK] = 146,
        [anon_sym_STAR] = 146,
        [anon_sym_SLASH] = 146,
        [anon_sym_PERCENT] = 146,
        [anon_sym_LT_LT] = 146,
        [anon_sym_GT_GT] = 146,
        [anon_sym_AMP] = 146,
        [anon_sym_AMP_CARET] = 146,
        [anon_sym_PLUS] = 146,
        [anon_sym_DASH] = 146,
        [anon_sym_PIPE] = 146,
        [anon_sym_CARET] = 146,
        [anon_sym_EQ_EQ] = 146,
        [anon_sym_BANG_EQ] = 146,
        [anon_sym_LT] = 146,
        [anon_sym_LT_EQ] = 146,
        [anon_sym_GT] = 146,
        [anon_sym_GT_EQ] = 146,
        [anon_sym_AMP_AMP] = 146,
        [anon_sym_PIPE_PIPE] = 146,
        [sym_comment] = 8,
    },
    [28] = {
        [sym__type] = 148,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [sym_identifier] = 108,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_RBRACK] = 150,
        [anon_sym_STAR] = 150,
        [anon_sym_SLASH] = 150,
        [anon_sym_PERCENT] = 150,
        [anon_sym_LT_LT] = 150,
        [anon_sym_GT_GT] = 150,
        [anon_sym_AMP] = 150,
        [anon_sym_AMP_CARET] = 150,
        [anon_sym_PLUS] = 150,
        [anon_sym_DASH] = 150,
        [anon_sym_PIPE] = 150,
        [anon_sym_CARET] = 150,
        [anon_sym_EQ_EQ] = 150,
        [anon_sym_BANG_EQ] = 150,
        [anon_sym_LT] = 150,
        [anon_sym_LT_EQ] = 150,
        [anon_sym_GT] = 150,
        [anon_sym_GT_EQ] = 150,
        [anon_sym_AMP_AMP] = 150,
        [anon_sym_PIPE_PIPE] = 150,
        [sym_comment] = 8,
    },
    [30] = {
        [anon_sym_RBRACK] = 152,
        [anon_sym_STAR] = 152,
        [anon_sym_SLASH] = 152,
        [anon_sym_PERCENT] = 152,
        [anon_sym_LT_LT] = 152,
        [anon_sym_GT_GT] = 152,
        [anon_sym_AMP] = 152,
        [anon_sym_AMP_CARET] = 152,
        [anon_sym_PLUS] = 152,
        [anon_sym_DASH] = 152,
        [anon_sym_PIPE] = 152,
        [anon_sym_CARET] = 152,
        [anon_sym_EQ_EQ] = 152,
        [anon_sym_BANG_EQ] = 152,
        [anon_sym_LT] = 152,
        [anon_sym_LT_EQ] = 152,
        [anon_sym_GT] = 152,
        [anon_sym_GT_EQ] = 152,
        [anon_sym_AMP_AMP] = 152,
        [anon_sym_PIPE_PIPE] = 152,
        [sym_comment] = 8,
    },
    [31] = {
        [sym__top_level_declaration] = 154,
        [sym__declaration] = 154,
        [sym_const_declaration] = 154,
        [sym_var_declaration] = 154,
        [sym_function_declaration] = 154,
        [sym_method_declaration] = 154,
        [sym_type_declaration] = 154,
        [aux_sym_source_file_repeat2] = 154,
        [ts_builtin_sym_end] = 154,
        [anon_sym_const] = 154,
        [anon_sym_var] = 154,
        [anon_sym_func] = 154,
        [anon_sym_type] = 154,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 156,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [sym_identifier] = 108,
        [sym_comment] = 8,
    },
    [33] = {
        [sym__expression] = 158,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [34] = {
        [sym__expression] = 160,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__expression] = 162,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [36] = {
        [sym__expression] = 164,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__expression] = 166,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 168,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 168,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [40] = {
        [anon_sym_RBRACK] = 168,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [41] = {
        [anon_sym_RBRACK] = 168,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 168,
        [anon_sym_DASH] = 168,
        [anon_sym_PIPE] = 168,
        [anon_sym_CARET] = 168,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [42] = {
        [anon_sym_RBRACK] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_SLASH] = 170,
        [anon_sym_PERCENT] = 170,
        [anon_sym_LT_LT] = 170,
        [anon_sym_GT_GT] = 170,
        [anon_sym_AMP] = 170,
        [anon_sym_AMP_CARET] = 170,
        [anon_sym_PLUS] = 170,
        [anon_sym_DASH] = 170,
        [anon_sym_PIPE] = 170,
        [anon_sym_CARET] = 170,
        [anon_sym_EQ_EQ] = 170,
        [anon_sym_BANG_EQ] = 170,
        [anon_sym_LT] = 170,
        [anon_sym_LT_EQ] = 170,
        [anon_sym_GT] = 170,
        [anon_sym_GT_EQ] = 170,
        [anon_sym_AMP_AMP] = 170,
        [anon_sym_PIPE_PIPE] = 170,
        [sym_comment] = 8,
    },
    [43] = {
        [sym__top_level_declaration] = 172,
        [sym__declaration] = 172,
        [sym_const_declaration] = 172,
        [sym_var_declaration] = 172,
        [sym_function_declaration] = 172,
        [sym_method_declaration] = 172,
        [sym_type_declaration] = 172,
        [aux_sym_source_file_repeat2] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_const] = 172,
        [anon_sym_var] = 172,
        [anon_sym_func] = 172,
        [anon_sym_type] = 172,
        [sym_comment] = 8,
    },
    [44] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 174,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_RPAREN] = 176,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__top_level_declaration] = 178,
        [sym__declaration] = 178,
        [sym_const_declaration] = 178,
        [sym_var_declaration] = 178,
        [sym_function_declaration] = 178,
        [sym_method_declaration] = 178,
        [sym_type_declaration] = 178,
        [aux_sym_source_file_repeat2] = 178,
        [ts_builtin_sym_end] = 178,
        [anon_sym_const] = 178,
        [anon_sym_var] = 178,
        [anon_sym_func] = 178,
        [anon_sym_type] = 178,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__type] = 180,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_LBRACK] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [48] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 110,
        [sym_comment] = 8,
    },
    [49] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 112,
        [sym_comment] = 8,
    },
    [50] = {
        [sym__expression] = 188,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 190,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [51] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 112,
        [anon_sym_DOT] = 192,
        [sym_comment] = 8,
    },
    [52] = {
        [sym_identifier] = 194,
        [sym_comment] = 8,
    },
    [53] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 130,
        [sym_comment] = 8,
    },
    [54] = {
        [anon_sym_RBRACK] = 196,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [55] = {
        [sym__type] = 198,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_LBRACK] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [56] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 154,
        [sym_comment] = 8,
    },
    [57] = {
        [sym__type] = 200,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_LBRACK] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [58] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 172,
        [sym_comment] = 8,
    },
    [59] = {
        [sym__top_level_declaration] = 202,
        [sym__declaration] = 202,
        [sym_const_declaration] = 202,
        [sym_var_declaration] = 202,
        [sym_function_declaration] = 202,
        [sym_method_declaration] = 202,
        [sym_type_declaration] = 202,
        [aux_sym_source_file_repeat2] = 202,
        [ts_builtin_sym_end] = 202,
        [anon_sym_const] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [60] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 204,
        [anon_sym_RPAREN] = 206,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_RPAREN] = 208,
        [sym_comment] = 8,
    },
    [62] = {
        [sym_identifier] = 210,
        [sym_comment] = 8,
    },
    [63] = {
        [sym__parameter_list] = 212,
        [sym_parameter_declaration] = 214,
        [anon_sym_RPAREN] = 216,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_parameters] = 220,
        [anon_sym_LPAREN] = 222,
        [sym_comment] = 8,
    },
    [65] = {
        [sym__top_level_declaration] = 224,
        [sym__declaration] = 224,
        [sym_const_declaration] = 224,
        [sym_var_declaration] = 224,
        [sym_function_declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_parameters] = 226,
        [sym_block] = 228,
        [sym_type_declaration] = 224,
        [sym__type] = 226,
        [sym_array_type] = 230,
        [sym_slice_type] = 230,
        [sym_qualified_identifier] = 230,
        [aux_sym_source_file_repeat2] = 224,
        [ts_builtin_sym_end] = 224,
        [anon_sym_LPAREN] = 232,
        [anon_sym_const] = 224,
        [anon_sym_var] = 224,
        [anon_sym_func] = 224,
        [anon_sym_LBRACE] = 234,
        [anon_sym_type] = 224,
        [anon_sym_LBRACK] = 236,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [66] = {
        [sym__parameter_list] = 240,
        [sym_parameter_declaration] = 214,
        [anon_sym_RPAREN] = 242,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_RPAREN] = 244,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 248,
        [anon_sym_COMMA] = 248,
        [sym_comment] = 8,
    },
    [69] = {
        [sym__top_level_declaration] = 250,
        [sym__declaration] = 250,
        [sym_const_declaration] = 250,
        [sym_var_declaration] = 250,
        [sym_function_declaration] = 250,
        [sym_method_declaration] = 250,
        [sym_parameters] = 250,
        [sym_block] = 250,
        [sym_type_declaration] = 250,
        [sym__type] = 250,
        [sym_array_type] = 250,
        [sym_slice_type] = 250,
        [sym_qualified_identifier] = 250,
        [aux_sym_source_file_repeat2] = 250,
        [ts_builtin_sym_end] = 250,
        [anon_sym_LPAREN] = 250,
        [anon_sym_const] = 250,
        [anon_sym_var] = 250,
        [anon_sym_func] = 250,
        [anon_sym_LBRACE] = 250,
        [anon_sym_type] = 250,
        [anon_sym_LBRACK] = 250,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [70] = {
        [sym__type] = 252,
        [sym_array_type] = 254,
        [sym_slice_type] = 254,
        [sym_qualified_identifier] = 254,
        [anon_sym_RPAREN] = 248,
        [anon_sym_COMMA] = 248,
        [anon_sym_LBRACK] = 256,
        [sym_identifier] = 258,
        [sym_comment] = 8,
    },
    [71] = {
        [anon_sym_RPAREN] = 260,
        [anon_sym_COMMA] = 260,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 112,
        [anon_sym_COMMA] = 112,
        [sym_comment] = 8,
    },
    [73] = {
        [sym__expression] = 262,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 264,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [74] = {
        [anon_sym_RPAREN] = 112,
        [anon_sym_DOT] = 266,
        [anon_sym_COMMA] = 112,
        [sym_comment] = 8,
    },
    [75] = {
        [sym_identifier] = 268,
        [sym_comment] = 8,
    },
    [76] = {
        [anon_sym_RPAREN] = 130,
        [anon_sym_COMMA] = 130,
        [sym_comment] = 8,
    },
    [77] = {
        [anon_sym_RBRACK] = 270,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [78] = {
        [sym__type] = 272,
        [sym_array_type] = 254,
        [sym_slice_type] = 254,
        [sym_qualified_identifier] = 254,
        [anon_sym_LBRACK] = 256,
        [sym_identifier] = 258,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_RPAREN] = 154,
        [anon_sym_COMMA] = 154,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__type] = 274,
        [sym_array_type] = 254,
        [sym_slice_type] = 254,
        [sym_qualified_identifier] = 254,
        [anon_sym_LBRACK] = 256,
        [sym_identifier] = 258,
        [sym_comment] = 8,
    },
    [81] = {
        [anon_sym_RPAREN] = 172,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 8,
    },
    [82] = {
        [sym__top_level_declaration] = 276,
        [sym__declaration] = 276,
        [sym_const_declaration] = 276,
        [sym_var_declaration] = 276,
        [sym_function_declaration] = 276,
        [sym_method_declaration] = 276,
        [sym_parameters] = 276,
        [sym_block] = 276,
        [sym_type_declaration] = 276,
        [sym__type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_qualified_identifier] = 276,
        [aux_sym_source_file_repeat2] = 276,
        [ts_builtin_sym_end] = 276,
        [anon_sym_LPAREN] = 276,
        [anon_sym_const] = 276,
        [anon_sym_var] = 276,
        [anon_sym_func] = 276,
        [anon_sym_LBRACE] = 276,
        [anon_sym_type] = 276,
        [anon_sym_LBRACK] = 276,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [83] = {
        [sym_parameter_declaration] = 278,
        [sym_identifier] = 280,
        [sym_comment] = 8,
    },
    [84] = {
        [anon_sym_RPAREN] = 282,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [85] = {
        [sym__type] = 252,
        [sym_array_type] = 254,
        [sym_slice_type] = 254,
        [sym_qualified_identifier] = 254,
        [anon_sym_RPAREN] = 282,
        [anon_sym_COMMA] = 282,
        [anon_sym_LBRACK] = 256,
        [sym_identifier] = 258,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__top_level_declaration] = 284,
        [sym__declaration] = 284,
        [sym_const_declaration] = 284,
        [sym_var_declaration] = 284,
        [sym_function_declaration] = 284,
        [sym_method_declaration] = 284,
        [sym_block] = 286,
        [sym_type_declaration] = 284,
        [aux_sym_source_file_repeat2] = 284,
        [ts_builtin_sym_end] = 284,
        [anon_sym_const] = 284,
        [anon_sym_var] = 284,
        [anon_sym_func] = 284,
        [anon_sym_LBRACE] = 234,
        [anon_sym_type] = 284,
        [sym_comment] = 8,
    },
    [87] = {
        [sym__top_level_declaration] = 284,
        [sym__declaration] = 284,
        [sym_const_declaration] = 284,
        [sym_var_declaration] = 284,
        [sym_function_declaration] = 284,
        [sym_method_declaration] = 284,
        [sym_type_declaration] = 284,
        [aux_sym_source_file_repeat2] = 284,
        [ts_builtin_sym_end] = 284,
        [anon_sym_const] = 284,
        [anon_sym_var] = 284,
        [anon_sym_func] = 284,
        [anon_sym_type] = 284,
        [sym_comment] = 8,
    },
    [88] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_block] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_const] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_LBRACE] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [89] = {
        [sym__parameter_list] = 288,
        [sym_parameter_declaration] = 214,
        [anon_sym_RPAREN] = 290,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RBRACE] = 292,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__expression] = 294,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 296,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [92] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_block] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_DOT] = 298,
        [anon_sym_const] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_LBRACE] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [93] = {
        [sym_identifier] = 300,
        [sym_comment] = 8,
    },
    [94] = {
        [sym__top_level_declaration] = 130,
        [sym__declaration] = 130,
        [sym_const_declaration] = 130,
        [sym_var_declaration] = 130,
        [sym_function_declaration] = 130,
        [sym_method_declaration] = 130,
        [sym_block] = 130,
        [sym_type_declaration] = 130,
        [aux_sym_source_file_repeat2] = 130,
        [ts_builtin_sym_end] = 130,
        [anon_sym_const] = 130,
        [anon_sym_var] = 130,
        [anon_sym_func] = 130,
        [anon_sym_LBRACE] = 130,
        [anon_sym_type] = 130,
        [sym_comment] = 8,
    },
    [95] = {
        [anon_sym_RBRACK] = 302,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [96] = {
        [sym__type] = 304,
        [sym_array_type] = 230,
        [sym_slice_type] = 230,
        [sym_qualified_identifier] = 230,
        [anon_sym_LBRACK] = 236,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [97] = {
        [sym__top_level_declaration] = 154,
        [sym__declaration] = 154,
        [sym_const_declaration] = 154,
        [sym_var_declaration] = 154,
        [sym_function_declaration] = 154,
        [sym_method_declaration] = 154,
        [sym_block] = 154,
        [sym_type_declaration] = 154,
        [aux_sym_source_file_repeat2] = 154,
        [ts_builtin_sym_end] = 154,
        [anon_sym_const] = 154,
        [anon_sym_var] = 154,
        [anon_sym_func] = 154,
        [anon_sym_LBRACE] = 154,
        [anon_sym_type] = 154,
        [sym_comment] = 8,
    },
    [98] = {
        [sym__type] = 306,
        [sym_array_type] = 230,
        [sym_slice_type] = 230,
        [sym_qualified_identifier] = 230,
        [anon_sym_LBRACK] = 236,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [99] = {
        [sym__top_level_declaration] = 172,
        [sym__declaration] = 172,
        [sym_const_declaration] = 172,
        [sym_var_declaration] = 172,
        [sym_function_declaration] = 172,
        [sym_method_declaration] = 172,
        [sym_block] = 172,
        [sym_type_declaration] = 172,
        [aux_sym_source_file_repeat2] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_const] = 172,
        [anon_sym_var] = 172,
        [anon_sym_func] = 172,
        [anon_sym_LBRACE] = 172,
        [anon_sym_type] = 172,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__top_level_declaration] = 308,
        [sym__declaration] = 308,
        [sym_const_declaration] = 308,
        [sym_var_declaration] = 308,
        [sym_function_declaration] = 308,
        [sym_method_declaration] = 308,
        [sym_type_declaration] = 308,
        [aux_sym_source_file_repeat2] = 308,
        [ts_builtin_sym_end] = 308,
        [anon_sym_const] = 308,
        [anon_sym_var] = 308,
        [anon_sym_func] = 308,
        [anon_sym_type] = 308,
        [sym_comment] = 8,
    },
    [101] = {
        [anon_sym_RPAREN] = 310,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 8,
    },
    [102] = {
        [sym__top_level_declaration] = 250,
        [sym__declaration] = 250,
        [sym_const_declaration] = 250,
        [sym_var_declaration] = 250,
        [sym_function_declaration] = 250,
        [sym_method_declaration] = 250,
        [sym_block] = 250,
        [sym_type_declaration] = 250,
        [aux_sym_source_file_repeat2] = 250,
        [ts_builtin_sym_end] = 250,
        [anon_sym_const] = 250,
        [anon_sym_var] = 250,
        [anon_sym_func] = 250,
        [anon_sym_LBRACE] = 250,
        [anon_sym_type] = 250,
        [sym_comment] = 8,
    },
    [103] = {
        [sym__top_level_declaration] = 276,
        [sym__declaration] = 276,
        [sym_const_declaration] = 276,
        [sym_var_declaration] = 276,
        [sym_function_declaration] = 276,
        [sym_method_declaration] = 276,
        [sym_block] = 276,
        [sym_type_declaration] = 276,
        [aux_sym_source_file_repeat2] = 276,
        [ts_builtin_sym_end] = 276,
        [anon_sym_const] = 276,
        [anon_sym_var] = 276,
        [anon_sym_func] = 276,
        [anon_sym_LBRACE] = 276,
        [anon_sym_type] = 276,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__top_level_declaration] = 312,
        [sym__declaration] = 312,
        [sym_const_declaration] = 312,
        [sym_var_declaration] = 312,
        [sym_function_declaration] = 312,
        [sym_method_declaration] = 312,
        [sym_type_declaration] = 312,
        [aux_sym_source_file_repeat2] = 312,
        [ts_builtin_sym_end] = 312,
        [anon_sym_const] = 312,
        [anon_sym_var] = 312,
        [anon_sym_func] = 312,
        [anon_sym_type] = 312,
        [sym_comment] = 8,
    },
    [105] = {
        [anon_sym_RPAREN] = 314,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 8,
    },
    [106] = {
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [107] = {
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [108] = {
        [sym_parameters] = 316,
        [anon_sym_LPAREN] = 222,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__top_level_declaration] = 318,
        [sym__declaration] = 318,
        [sym_const_declaration] = 318,
        [sym_var_declaration] = 318,
        [sym_function_declaration] = 318,
        [sym_method_declaration] = 318,
        [sym_parameters] = 320,
        [sym_block] = 322,
        [sym_type_declaration] = 318,
        [sym__type] = 320,
        [sym_array_type] = 230,
        [sym_slice_type] = 230,
        [sym_qualified_identifier] = 230,
        [aux_sym_source_file_repeat2] = 318,
        [ts_builtin_sym_end] = 318,
        [anon_sym_LPAREN] = 232,
        [anon_sym_const] = 318,
        [anon_sym_var] = 318,
        [anon_sym_func] = 318,
        [anon_sym_LBRACE] = 234,
        [anon_sym_type] = 318,
        [anon_sym_LBRACK] = 236,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [110] = {
        [sym__top_level_declaration] = 324,
        [sym__declaration] = 324,
        [sym_const_declaration] = 324,
        [sym_var_declaration] = 324,
        [sym_function_declaration] = 324,
        [sym_method_declaration] = 324,
        [sym_block] = 326,
        [sym_type_declaration] = 324,
        [aux_sym_source_file_repeat2] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_const] = 324,
        [anon_sym_var] = 324,
        [anon_sym_func] = 324,
        [anon_sym_LBRACE] = 234,
        [anon_sym_type] = 324,
        [sym_comment] = 8,
    },
    [111] = {
        [sym__top_level_declaration] = 324,
        [sym__declaration] = 324,
        [sym_const_declaration] = 324,
        [sym_var_declaration] = 324,
        [sym_function_declaration] = 324,
        [sym_method_declaration] = 324,
        [sym_type_declaration] = 324,
        [aux_sym_source_file_repeat2] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_const] = 324,
        [anon_sym_var] = 324,
        [anon_sym_func] = 324,
        [anon_sym_type] = 324,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__top_level_declaration] = 328,
        [sym__declaration] = 328,
        [sym_const_declaration] = 328,
        [sym_var_declaration] = 328,
        [sym_function_declaration] = 328,
        [sym_method_declaration] = 328,
        [sym_type_declaration] = 328,
        [aux_sym_source_file_repeat2] = 328,
        [ts_builtin_sym_end] = 328,
        [anon_sym_const] = 328,
        [anon_sym_var] = 328,
        [anon_sym_func] = 328,
        [anon_sym_type] = 328,
        [sym_comment] = 8,
    },
    [113] = {
        [sym__top_level_declaration] = 330,
        [sym__declaration] = 330,
        [sym_const_declaration] = 330,
        [sym_var_declaration] = 330,
        [sym_function_declaration] = 330,
        [sym_method_declaration] = 330,
        [sym_type_declaration] = 330,
        [aux_sym_source_file_repeat2] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_const] = 330,
        [anon_sym_var] = 330,
        [anon_sym_func] = 330,
        [anon_sym_type] = 330,
        [sym_comment] = 8,
    },
    [114] = {
        [sym__type] = 332,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_EQ] = 336,
        [anon_sym_LBRACK] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [115] = {
        [sym_var_spec] = 342,
        [sym_identifier_list] = 344,
        [aux_sym_var_declaration_repeat1] = 346,
        [anon_sym_RPAREN] = 348,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [116] = {
        [sym__type] = 350,
        [sym_array_type] = 350,
        [sym_slice_type] = 350,
        [sym_qualified_identifier] = 350,
        [aux_sym_identifier_list_repeat1] = 352,
        [anon_sym_EQ] = 350,
        [anon_sym_COMMA] = 354,
        [anon_sym_LBRACK] = 350,
        [sym_identifier] = 350,
        [sym_comment] = 8,
    },
    [117] = {
        [sym__type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_EQ] = 356,
        [anon_sym_LBRACK] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 8,
    },
    [118] = {
        [sym_identifier] = 358,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__type] = 360,
        [sym_array_type] = 360,
        [sym_slice_type] = 360,
        [sym_qualified_identifier] = 360,
        [aux_sym_identifier_list_repeat1] = 362,
        [anon_sym_EQ] = 360,
        [anon_sym_COMMA] = 354,
        [anon_sym_LBRACK] = 360,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [120] = {
        [sym__type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_EQ] = 364,
        [anon_sym_LBRACK] = 364,
        [sym_identifier] = 364,
        [sym_comment] = 8,
    },
    [121] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 366,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__type] = 368,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_EQ] = 372,
        [anon_sym_LBRACK] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__top_level_declaration] = 380,
        [sym__declaration] = 380,
        [sym_const_declaration] = 380,
        [sym_var_declaration] = 380,
        [sym_function_declaration] = 380,
        [sym_method_declaration] = 380,
        [sym_type_declaration] = 380,
        [aux_sym_source_file_repeat2] = 380,
        [ts_builtin_sym_end] = 380,
        [anon_sym_const] = 380,
        [anon_sym_var] = 380,
        [anon_sym_func] = 380,
        [anon_sym_type] = 380,
        [sym_comment] = 8,
    },
    [125] = {
        [sym__top_level_declaration] = 382,
        [sym__declaration] = 382,
        [sym_const_declaration] = 382,
        [sym_var_declaration] = 382,
        [sym_function_declaration] = 382,
        [sym_method_declaration] = 382,
        [sym_type_declaration] = 382,
        [aux_sym_source_file_repeat2] = 382,
        [ts_builtin_sym_end] = 382,
        [anon_sym_const] = 382,
        [anon_sym_var] = 382,
        [anon_sym_func] = 382,
        [anon_sym_type] = 382,
        [sym_comment] = 8,
    },
    [126] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 384,
        [anon_sym_EQ] = 386,
        [sym_comment] = 8,
    },
    [127] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 112,
        [anon_sym_EQ] = 112,
        [sym_comment] = 8,
    },
    [128] = {
        [sym_expression_list] = 388,
        [sym__expression] = 390,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__expression] = 400,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 402,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [130] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 112,
        [anon_sym_DOT] = 404,
        [anon_sym_EQ] = 112,
        [sym_comment] = 8,
    },
    [131] = {
        [sym_identifier] = 406,
        [sym_comment] = 8,
    },
    [132] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 130,
        [anon_sym_EQ] = 130,
        [sym_comment] = 8,
    },
    [133] = {
        [anon_sym_RBRACK] = 408,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [134] = {
        [sym__type] = 410,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_LBRACK] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 8,
    },
    [135] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 154,
        [anon_sym_EQ] = 154,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__type] = 412,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_LBRACK] = 374,
        [sym_identifier] = 376,
        [sym_comment] = 8,
    },
    [137] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 172,
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [138] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 414,
        [sym_comment] = 8,
    },
    [139] = {
        [aux_sym_expression_list_repeat1] = 416,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 418,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 424,
        [anon_sym_DASH] = 424,
        [anon_sym_PIPE] = 424,
        [anon_sym_CARET] = 424,
        [anon_sym_EQ_EQ] = 426,
        [anon_sym_BANG_EQ] = 426,
        [anon_sym_LT] = 426,
        [anon_sym_LT_EQ] = 426,
        [anon_sym_GT] = 426,
        [anon_sym_GT_EQ] = 426,
        [anon_sym_AMP_AMP] = 428,
        [anon_sym_PIPE_PIPE] = 430,
        [sym_comment] = 8,
    },
    [140] = {
        [aux_sym_expression_list_repeat1] = 144,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 144,
        [anon_sym_COMMA] = 144,
        [anon_sym_STAR] = 144,
        [anon_sym_SLASH] = 144,
        [anon_sym_PERCENT] = 144,
        [anon_sym_LT_LT] = 144,
        [anon_sym_GT_GT] = 144,
        [anon_sym_AMP] = 144,
        [anon_sym_AMP_CARET] = 144,
        [anon_sym_PLUS] = 144,
        [anon_sym_DASH] = 144,
        [anon_sym_PIPE] = 144,
        [anon_sym_CARET] = 144,
        [anon_sym_EQ_EQ] = 144,
        [anon_sym_BANG_EQ] = 144,
        [anon_sym_LT] = 144,
        [anon_sym_LT_EQ] = 144,
        [anon_sym_GT] = 144,
        [anon_sym_GT_EQ] = 144,
        [anon_sym_AMP_AMP] = 144,
        [anon_sym_PIPE_PIPE] = 144,
        [sym_comment] = 8,
    },
    [141] = {
        [aux_sym_expression_list_repeat1] = 146,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 146,
        [anon_sym_COMMA] = 146,
        [anon_sym_STAR] = 146,
        [anon_sym_SLASH] = 146,
        [anon_sym_PERCENT] = 146,
        [anon_sym_LT_LT] = 146,
        [anon_sym_GT_GT] = 146,
        [anon_sym_AMP] = 146,
        [anon_sym_AMP_CARET] = 146,
        [anon_sym_PLUS] = 146,
        [anon_sym_DASH] = 146,
        [anon_sym_PIPE] = 146,
        [anon_sym_CARET] = 146,
        [anon_sym_EQ_EQ] = 146,
        [anon_sym_BANG_EQ] = 146,
        [anon_sym_LT] = 146,
        [anon_sym_LT_EQ] = 146,
        [anon_sym_GT] = 146,
        [anon_sym_GT_EQ] = 146,
        [anon_sym_AMP_AMP] = 146,
        [anon_sym_PIPE_PIPE] = 146,
        [sym_comment] = 8,
    },
    [142] = {
        [aux_sym_expression_list_repeat1] = 150,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 150,
        [anon_sym_COMMA] = 150,
        [anon_sym_STAR] = 150,
        [anon_sym_SLASH] = 150,
        [anon_sym_PERCENT] = 150,
        [anon_sym_LT_LT] = 150,
        [anon_sym_GT_GT] = 150,
        [anon_sym_AMP] = 150,
        [anon_sym_AMP_CARET] = 150,
        [anon_sym_PLUS] = 150,
        [anon_sym_DASH] = 150,
        [anon_sym_PIPE] = 150,
        [anon_sym_CARET] = 150,
        [anon_sym_EQ_EQ] = 150,
        [anon_sym_BANG_EQ] = 150,
        [anon_sym_LT] = 150,
        [anon_sym_LT_EQ] = 150,
        [anon_sym_GT] = 150,
        [anon_sym_GT_EQ] = 150,
        [anon_sym_AMP_AMP] = 150,
        [anon_sym_PIPE_PIPE] = 150,
        [sym_comment] = 8,
    },
    [143] = {
        [aux_sym_expression_list_repeat1] = 152,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 152,
        [anon_sym_COMMA] = 152,
        [anon_sym_STAR] = 152,
        [anon_sym_SLASH] = 152,
        [anon_sym_PERCENT] = 152,
        [anon_sym_LT_LT] = 152,
        [anon_sym_GT_GT] = 152,
        [anon_sym_AMP] = 152,
        [anon_sym_AMP_CARET] = 152,
        [anon_sym_PLUS] = 152,
        [anon_sym_DASH] = 152,
        [anon_sym_PIPE] = 152,
        [anon_sym_CARET] = 152,
        [anon_sym_EQ_EQ] = 152,
        [anon_sym_BANG_EQ] = 152,
        [anon_sym_LT] = 152,
        [anon_sym_LT_EQ] = 152,
        [anon_sym_GT] = 152,
        [anon_sym_GT_EQ] = 152,
        [anon_sym_AMP_AMP] = 152,
        [anon_sym_PIPE_PIPE] = 152,
        [sym_comment] = 8,
    },
    [144] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 432,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__expression] = 434,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [146] = {
        [sym__expression] = 436,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [147] = {
        [sym__expression] = 438,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__expression] = 440,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [149] = {
        [sym__expression] = 442,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [150] = {
        [sym__expression] = 444,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [151] = {
        [aux_sym_expression_list_repeat1] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 424,
        [anon_sym_DASH] = 424,
        [anon_sym_PIPE] = 424,
        [anon_sym_CARET] = 424,
        [anon_sym_EQ_EQ] = 426,
        [anon_sym_BANG_EQ] = 426,
        [anon_sym_LT] = 426,
        [anon_sym_LT_EQ] = 426,
        [anon_sym_GT] = 426,
        [anon_sym_GT_EQ] = 426,
        [anon_sym_AMP_AMP] = 428,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [152] = {
        [aux_sym_expression_list_repeat1] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 424,
        [anon_sym_DASH] = 424,
        [anon_sym_PIPE] = 424,
        [anon_sym_CARET] = 424,
        [anon_sym_EQ_EQ] = 426,
        [anon_sym_BANG_EQ] = 426,
        [anon_sym_LT] = 426,
        [anon_sym_LT_EQ] = 426,
        [anon_sym_GT] = 426,
        [anon_sym_GT_EQ] = 426,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [153] = {
        [aux_sym_expression_list_repeat1] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 424,
        [anon_sym_DASH] = 424,
        [anon_sym_PIPE] = 424,
        [anon_sym_CARET] = 424,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [154] = {
        [aux_sym_expression_list_repeat1] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 168,
        [anon_sym_DASH] = 168,
        [anon_sym_PIPE] = 168,
        [anon_sym_CARET] = 168,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [155] = {
        [aux_sym_expression_list_repeat1] = 170,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_SLASH] = 170,
        [anon_sym_PERCENT] = 170,
        [anon_sym_LT_LT] = 170,
        [anon_sym_GT_GT] = 170,
        [anon_sym_AMP] = 170,
        [anon_sym_AMP_CARET] = 170,
        [anon_sym_PLUS] = 170,
        [anon_sym_DASH] = 170,
        [anon_sym_PIPE] = 170,
        [anon_sym_CARET] = 170,
        [anon_sym_EQ_EQ] = 170,
        [anon_sym_BANG_EQ] = 170,
        [anon_sym_LT] = 170,
        [anon_sym_LT_EQ] = 170,
        [anon_sym_GT] = 170,
        [anon_sym_GT_EQ] = 170,
        [anon_sym_AMP_AMP] = 170,
        [anon_sym_PIPE_PIPE] = 170,
        [sym_comment] = 8,
    },
    [156] = {
        [aux_sym_expression_list_repeat1] = 446,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 448,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 424,
        [anon_sym_DASH] = 424,
        [anon_sym_PIPE] = 424,
        [anon_sym_CARET] = 424,
        [anon_sym_EQ_EQ] = 426,
        [anon_sym_BANG_EQ] = 426,
        [anon_sym_LT] = 426,
        [anon_sym_LT_EQ] = 426,
        [anon_sym_GT] = 426,
        [anon_sym_GT_EQ] = 426,
        [anon_sym_AMP_AMP] = 428,
        [anon_sym_PIPE_PIPE] = 430,
        [sym_comment] = 8,
    },
    [157] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 450,
        [sym_comment] = 8,
    },
    [158] = {
        [sym_expression_list] = 452,
        [sym__expression] = 390,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [159] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 454,
        [sym_comment] = 8,
    },
    [160] = {
        [sym_var_spec] = 342,
        [sym_identifier_list] = 344,
        [aux_sym_var_declaration_repeat1] = 456,
        [anon_sym_RPAREN] = 458,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_RPAREN] = 460,
        [sym_comment] = 8,
    },
    [162] = {
        [sym__top_level_declaration] = 384,
        [sym__declaration] = 384,
        [sym_const_declaration] = 384,
        [sym_var_declaration] = 384,
        [sym_function_declaration] = 384,
        [sym_method_declaration] = 384,
        [sym_type_declaration] = 384,
        [aux_sym_source_file_repeat2] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_const] = 384,
        [anon_sym_EQ] = 462,
        [anon_sym_var] = 384,
        [anon_sym_func] = 384,
        [anon_sym_type] = 384,
        [sym_comment] = 8,
    },
    [163] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_const] = 112,
        [anon_sym_EQ] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [164] = {
        [sym_expression_list] = 464,
        [sym__expression] = 466,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [165] = {
        [sym__expression] = 476,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 478,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [166] = {
        [sym__top_level_declaration] = 112,
        [sym__declaration] = 112,
        [sym_const_declaration] = 112,
        [sym_var_declaration] = 112,
        [sym_function_declaration] = 112,
        [sym_method_declaration] = 112,
        [sym_type_declaration] = 112,
        [aux_sym_source_file_repeat2] = 112,
        [ts_builtin_sym_end] = 112,
        [anon_sym_DOT] = 480,
        [anon_sym_const] = 112,
        [anon_sym_EQ] = 112,
        [anon_sym_var] = 112,
        [anon_sym_func] = 112,
        [anon_sym_type] = 112,
        [sym_comment] = 8,
    },
    [167] = {
        [sym_identifier] = 482,
        [sym_comment] = 8,
    },
    [168] = {
        [sym__top_level_declaration] = 130,
        [sym__declaration] = 130,
        [sym_const_declaration] = 130,
        [sym_var_declaration] = 130,
        [sym_function_declaration] = 130,
        [sym_method_declaration] = 130,
        [sym_type_declaration] = 130,
        [aux_sym_source_file_repeat2] = 130,
        [ts_builtin_sym_end] = 130,
        [anon_sym_const] = 130,
        [anon_sym_EQ] = 130,
        [anon_sym_var] = 130,
        [anon_sym_func] = 130,
        [anon_sym_type] = 130,
        [sym_comment] = 8,
    },
    [169] = {
        [anon_sym_RBRACK] = 484,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [170] = {
        [sym__type] = 486,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [171] = {
        [sym__top_level_declaration] = 154,
        [sym__declaration] = 154,
        [sym_const_declaration] = 154,
        [sym_var_declaration] = 154,
        [sym_function_declaration] = 154,
        [sym_method_declaration] = 154,
        [sym_type_declaration] = 154,
        [aux_sym_source_file_repeat2] = 154,
        [ts_builtin_sym_end] = 154,
        [anon_sym_const] = 154,
        [anon_sym_EQ] = 154,
        [anon_sym_var] = 154,
        [anon_sym_func] = 154,
        [anon_sym_type] = 154,
        [sym_comment] = 8,
    },
    [172] = {
        [sym__type] = 488,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [173] = {
        [sym__top_level_declaration] = 172,
        [sym__declaration] = 172,
        [sym_const_declaration] = 172,
        [sym_var_declaration] = 172,
        [sym_function_declaration] = 172,
        [sym_method_declaration] = 172,
        [sym_type_declaration] = 172,
        [aux_sym_source_file_repeat2] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_const] = 172,
        [anon_sym_EQ] = 172,
        [anon_sym_var] = 172,
        [anon_sym_func] = 172,
        [anon_sym_type] = 172,
        [sym_comment] = 8,
    },
    [174] = {
        [sym__top_level_declaration] = 414,
        [sym__declaration] = 414,
        [sym_const_declaration] = 414,
        [sym_var_declaration] = 414,
        [sym_function_declaration] = 414,
        [sym_method_declaration] = 414,
        [sym_type_declaration] = 414,
        [aux_sym_source_file_repeat2] = 414,
        [ts_builtin_sym_end] = 414,
        [anon_sym_const] = 414,
        [anon_sym_var] = 414,
        [anon_sym_func] = 414,
        [anon_sym_type] = 414,
        [sym_comment] = 8,
    },
    [175] = {
        [sym__top_level_declaration] = 418,
        [sym__declaration] = 418,
        [sym_const_declaration] = 418,
        [sym_var_declaration] = 418,
        [sym_function_declaration] = 418,
        [sym_method_declaration] = 418,
        [sym_type_declaration] = 418,
        [aux_sym_source_file_repeat2] = 418,
        [aux_sym_expression_list_repeat1] = 490,
        [ts_builtin_sym_end] = 418,
        [anon_sym_const] = 418,
        [anon_sym_var] = 418,
        [anon_sym_func] = 418,
        [anon_sym_COMMA] = 492,
        [anon_sym_type] = 418,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 496,
        [anon_sym_DASH] = 496,
        [anon_sym_PIPE] = 496,
        [anon_sym_CARET] = 496,
        [anon_sym_EQ_EQ] = 498,
        [anon_sym_BANG_EQ] = 498,
        [anon_sym_LT] = 498,
        [anon_sym_LT_EQ] = 498,
        [anon_sym_GT] = 498,
        [anon_sym_GT_EQ] = 498,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [176] = {
        [sym__top_level_declaration] = 144,
        [sym__declaration] = 144,
        [sym_const_declaration] = 144,
        [sym_var_declaration] = 144,
        [sym_function_declaration] = 144,
        [sym_method_declaration] = 144,
        [sym_type_declaration] = 144,
        [aux_sym_source_file_repeat2] = 144,
        [aux_sym_expression_list_repeat1] = 144,
        [ts_builtin_sym_end] = 144,
        [anon_sym_const] = 144,
        [anon_sym_var] = 144,
        [anon_sym_func] = 144,
        [anon_sym_COMMA] = 144,
        [anon_sym_type] = 144,
        [anon_sym_STAR] = 144,
        [anon_sym_SLASH] = 144,
        [anon_sym_PERCENT] = 144,
        [anon_sym_LT_LT] = 144,
        [anon_sym_GT_GT] = 144,
        [anon_sym_AMP] = 144,
        [anon_sym_AMP_CARET] = 144,
        [anon_sym_PLUS] = 144,
        [anon_sym_DASH] = 144,
        [anon_sym_PIPE] = 144,
        [anon_sym_CARET] = 144,
        [anon_sym_EQ_EQ] = 144,
        [anon_sym_BANG_EQ] = 144,
        [anon_sym_LT] = 144,
        [anon_sym_LT_EQ] = 144,
        [anon_sym_GT] = 144,
        [anon_sym_GT_EQ] = 144,
        [anon_sym_AMP_AMP] = 144,
        [anon_sym_PIPE_PIPE] = 144,
        [sym_comment] = 8,
    },
    [177] = {
        [sym__top_level_declaration] = 146,
        [sym__declaration] = 146,
        [sym_const_declaration] = 146,
        [sym_var_declaration] = 146,
        [sym_function_declaration] = 146,
        [sym_method_declaration] = 146,
        [sym_type_declaration] = 146,
        [aux_sym_source_file_repeat2] = 146,
        [aux_sym_expression_list_repeat1] = 146,
        [ts_builtin_sym_end] = 146,
        [anon_sym_const] = 146,
        [anon_sym_var] = 146,
        [anon_sym_func] = 146,
        [anon_sym_COMMA] = 146,
        [anon_sym_type] = 146,
        [anon_sym_STAR] = 146,
        [anon_sym_SLASH] = 146,
        [anon_sym_PERCENT] = 146,
        [anon_sym_LT_LT] = 146,
        [anon_sym_GT_GT] = 146,
        [anon_sym_AMP] = 146,
        [anon_sym_AMP_CARET] = 146,
        [anon_sym_PLUS] = 146,
        [anon_sym_DASH] = 146,
        [anon_sym_PIPE] = 146,
        [anon_sym_CARET] = 146,
        [anon_sym_EQ_EQ] = 146,
        [anon_sym_BANG_EQ] = 146,
        [anon_sym_LT] = 146,
        [anon_sym_LT_EQ] = 146,
        [anon_sym_GT] = 146,
        [anon_sym_GT_EQ] = 146,
        [anon_sym_AMP_AMP] = 146,
        [anon_sym_PIPE_PIPE] = 146,
        [sym_comment] = 8,
    },
    [178] = {
        [sym__top_level_declaration] = 150,
        [sym__declaration] = 150,
        [sym_const_declaration] = 150,
        [sym_var_declaration] = 150,
        [sym_function_declaration] = 150,
        [sym_method_declaration] = 150,
        [sym_type_declaration] = 150,
        [aux_sym_source_file_repeat2] = 150,
        [aux_sym_expression_list_repeat1] = 150,
        [ts_builtin_sym_end] = 150,
        [anon_sym_const] = 150,
        [anon_sym_var] = 150,
        [anon_sym_func] = 150,
        [anon_sym_COMMA] = 150,
        [anon_sym_type] = 150,
        [anon_sym_STAR] = 150,
        [anon_sym_SLASH] = 150,
        [anon_sym_PERCENT] = 150,
        [anon_sym_LT_LT] = 150,
        [anon_sym_GT_GT] = 150,
        [anon_sym_AMP] = 150,
        [anon_sym_AMP_CARET] = 150,
        [anon_sym_PLUS] = 150,
        [anon_sym_DASH] = 150,
        [anon_sym_PIPE] = 150,
        [anon_sym_CARET] = 150,
        [anon_sym_EQ_EQ] = 150,
        [anon_sym_BANG_EQ] = 150,
        [anon_sym_LT] = 150,
        [anon_sym_LT_EQ] = 150,
        [anon_sym_GT] = 150,
        [anon_sym_GT_EQ] = 150,
        [anon_sym_AMP_AMP] = 150,
        [anon_sym_PIPE_PIPE] = 150,
        [sym_comment] = 8,
    },
    [179] = {
        [sym__top_level_declaration] = 152,
        [sym__declaration] = 152,
        [sym_const_declaration] = 152,
        [sym_var_declaration] = 152,
        [sym_function_declaration] = 152,
        [sym_method_declaration] = 152,
        [sym_type_declaration] = 152,
        [aux_sym_source_file_repeat2] = 152,
        [aux_sym_expression_list_repeat1] = 152,
        [ts_builtin_sym_end] = 152,
        [anon_sym_const] = 152,
        [anon_sym_var] = 152,
        [anon_sym_func] = 152,
        [anon_sym_COMMA] = 152,
        [anon_sym_type] = 152,
        [anon_sym_STAR] = 152,
        [anon_sym_SLASH] = 152,
        [anon_sym_PERCENT] = 152,
        [anon_sym_LT_LT] = 152,
        [anon_sym_GT_GT] = 152,
        [anon_sym_AMP] = 152,
        [anon_sym_AMP_CARET] = 152,
        [anon_sym_PLUS] = 152,
        [anon_sym_DASH] = 152,
        [anon_sym_PIPE] = 152,
        [anon_sym_CARET] = 152,
        [anon_sym_EQ_EQ] = 152,
        [anon_sym_BANG_EQ] = 152,
        [anon_sym_LT] = 152,
        [anon_sym_LT_EQ] = 152,
        [anon_sym_GT] = 152,
        [anon_sym_GT_EQ] = 152,
        [anon_sym_AMP_AMP] = 152,
        [anon_sym_PIPE_PIPE] = 152,
        [sym_comment] = 8,
    },
    [180] = {
        [sym__top_level_declaration] = 432,
        [sym__declaration] = 432,
        [sym_const_declaration] = 432,
        [sym_var_declaration] = 432,
        [sym_function_declaration] = 432,
        [sym_method_declaration] = 432,
        [sym_type_declaration] = 432,
        [aux_sym_source_file_repeat2] = 432,
        [ts_builtin_sym_end] = 432,
        [anon_sym_const] = 432,
        [anon_sym_var] = 432,
        [anon_sym_func] = 432,
        [anon_sym_type] = 432,
        [sym_comment] = 8,
    },
    [181] = {
        [sym__expression] = 504,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [182] = {
        [sym__expression] = 506,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [183] = {
        [sym__expression] = 508,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [184] = {
        [sym__expression] = 510,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [185] = {
        [sym__expression] = 512,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [186] = {
        [sym__expression] = 514,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [187] = {
        [sym__top_level_declaration] = 168,
        [sym__declaration] = 168,
        [sym_const_declaration] = 168,
        [sym_var_declaration] = 168,
        [sym_function_declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_type_declaration] = 168,
        [aux_sym_source_file_repeat2] = 168,
        [aux_sym_expression_list_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_const] = 168,
        [anon_sym_var] = 168,
        [anon_sym_func] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_type] = 168,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 496,
        [anon_sym_DASH] = 496,
        [anon_sym_PIPE] = 496,
        [anon_sym_CARET] = 496,
        [anon_sym_EQ_EQ] = 498,
        [anon_sym_BANG_EQ] = 498,
        [anon_sym_LT] = 498,
        [anon_sym_LT_EQ] = 498,
        [anon_sym_GT] = 498,
        [anon_sym_GT_EQ] = 498,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [188] = {
        [sym__top_level_declaration] = 168,
        [sym__declaration] = 168,
        [sym_const_declaration] = 168,
        [sym_var_declaration] = 168,
        [sym_function_declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_type_declaration] = 168,
        [aux_sym_source_file_repeat2] = 168,
        [aux_sym_expression_list_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_const] = 168,
        [anon_sym_var] = 168,
        [anon_sym_func] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_type] = 168,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 496,
        [anon_sym_DASH] = 496,
        [anon_sym_PIPE] = 496,
        [anon_sym_CARET] = 496,
        [anon_sym_EQ_EQ] = 498,
        [anon_sym_BANG_EQ] = 498,
        [anon_sym_LT] = 498,
        [anon_sym_LT_EQ] = 498,
        [anon_sym_GT] = 498,
        [anon_sym_GT_EQ] = 498,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [189] = {
        [sym__top_level_declaration] = 168,
        [sym__declaration] = 168,
        [sym_const_declaration] = 168,
        [sym_var_declaration] = 168,
        [sym_function_declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_type_declaration] = 168,
        [aux_sym_source_file_repeat2] = 168,
        [aux_sym_expression_list_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_const] = 168,
        [anon_sym_var] = 168,
        [anon_sym_func] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_type] = 168,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 496,
        [anon_sym_DASH] = 496,
        [anon_sym_PIPE] = 496,
        [anon_sym_CARET] = 496,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [190] = {
        [sym__top_level_declaration] = 168,
        [sym__declaration] = 168,
        [sym_const_declaration] = 168,
        [sym_var_declaration] = 168,
        [sym_function_declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_type_declaration] = 168,
        [aux_sym_source_file_repeat2] = 168,
        [aux_sym_expression_list_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_const] = 168,
        [anon_sym_var] = 168,
        [anon_sym_func] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_type] = 168,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 168,
        [anon_sym_DASH] = 168,
        [anon_sym_PIPE] = 168,
        [anon_sym_CARET] = 168,
        [anon_sym_EQ_EQ] = 168,
        [anon_sym_BANG_EQ] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_LT_EQ] = 168,
        [anon_sym_GT] = 168,
        [anon_sym_GT_EQ] = 168,
        [anon_sym_AMP_AMP] = 168,
        [anon_sym_PIPE_PIPE] = 168,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__top_level_declaration] = 170,
        [sym__declaration] = 170,
        [sym_const_declaration] = 170,
        [sym_var_declaration] = 170,
        [sym_function_declaration] = 170,
        [sym_method_declaration] = 170,
        [sym_type_declaration] = 170,
        [aux_sym_source_file_repeat2] = 170,
        [aux_sym_expression_list_repeat1] = 170,
        [ts_builtin_sym_end] = 170,
        [anon_sym_const] = 170,
        [anon_sym_var] = 170,
        [anon_sym_func] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_type] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_SLASH] = 170,
        [anon_sym_PERCENT] = 170,
        [anon_sym_LT_LT] = 170,
        [anon_sym_GT_GT] = 170,
        [anon_sym_AMP] = 170,
        [anon_sym_AMP_CARET] = 170,
        [anon_sym_PLUS] = 170,
        [anon_sym_DASH] = 170,
        [anon_sym_PIPE] = 170,
        [anon_sym_CARET] = 170,
        [anon_sym_EQ_EQ] = 170,
        [anon_sym_BANG_EQ] = 170,
        [anon_sym_LT] = 170,
        [anon_sym_LT_EQ] = 170,
        [anon_sym_GT] = 170,
        [anon_sym_GT_EQ] = 170,
        [anon_sym_AMP_AMP] = 170,
        [anon_sym_PIPE_PIPE] = 170,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__top_level_declaration] = 448,
        [sym__declaration] = 448,
        [sym_const_declaration] = 448,
        [sym_var_declaration] = 448,
        [sym_function_declaration] = 448,
        [sym_method_declaration] = 448,
        [sym_type_declaration] = 448,
        [aux_sym_source_file_repeat2] = 448,
        [aux_sym_expression_list_repeat1] = 516,
        [ts_builtin_sym_end] = 448,
        [anon_sym_const] = 448,
        [anon_sym_var] = 448,
        [anon_sym_func] = 448,
        [anon_sym_COMMA] = 492,
        [anon_sym_type] = 448,
        [anon_sym_STAR] = 494,
        [anon_sym_SLASH] = 494,
        [anon_sym_PERCENT] = 494,
        [anon_sym_LT_LT] = 494,
        [anon_sym_GT_GT] = 494,
        [anon_sym_AMP] = 494,
        [anon_sym_AMP_CARET] = 494,
        [anon_sym_PLUS] = 496,
        [anon_sym_DASH] = 496,
        [anon_sym_PIPE] = 496,
        [anon_sym_CARET] = 496,
        [anon_sym_EQ_EQ] = 498,
        [anon_sym_BANG_EQ] = 498,
        [anon_sym_LT] = 498,
        [anon_sym_LT_EQ] = 498,
        [anon_sym_GT] = 498,
        [anon_sym_GT_EQ] = 498,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [193] = {
        [sym__top_level_declaration] = 450,
        [sym__declaration] = 450,
        [sym_const_declaration] = 450,
        [sym_var_declaration] = 450,
        [sym_function_declaration] = 450,
        [sym_method_declaration] = 450,
        [sym_type_declaration] = 450,
        [aux_sym_source_file_repeat2] = 450,
        [ts_builtin_sym_end] = 450,
        [anon_sym_const] = 450,
        [anon_sym_var] = 450,
        [anon_sym_func] = 450,
        [anon_sym_type] = 450,
        [sym_comment] = 8,
    },
    [194] = {
        [sym_expression_list] = 518,
        [sym__expression] = 466,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [195] = {
        [sym__top_level_declaration] = 454,
        [sym__declaration] = 454,
        [sym_const_declaration] = 454,
        [sym_var_declaration] = 454,
        [sym_function_declaration] = 454,
        [sym_method_declaration] = 454,
        [sym_type_declaration] = 454,
        [aux_sym_source_file_repeat2] = 454,
        [ts_builtin_sym_end] = 454,
        [anon_sym_const] = 454,
        [anon_sym_var] = 454,
        [anon_sym_func] = 454,
        [anon_sym_type] = 454,
        [sym_comment] = 8,
    },
    [196] = {
        [sym__top_level_declaration] = 520,
        [sym__declaration] = 520,
        [sym_const_declaration] = 520,
        [sym_var_declaration] = 520,
        [sym_function_declaration] = 520,
        [sym_method_declaration] = 520,
        [sym_type_declaration] = 520,
        [aux_sym_source_file_repeat2] = 520,
        [ts_builtin_sym_end] = 520,
        [anon_sym_const] = 520,
        [anon_sym_var] = 520,
        [anon_sym_func] = 520,
        [anon_sym_type] = 520,
        [sym_comment] = 8,
    },
    [197] = {
        [sym__type] = 522,
        [sym_array_type] = 524,
        [sym_slice_type] = 524,
        [sym_qualified_identifier] = 524,
        [anon_sym_EQ] = 526,
        [anon_sym_LBRACK] = 528,
        [sym_identifier] = 530,
        [sym_comment] = 8,
    },
    [198] = {
        [sym_const_spec] = 532,
        [sym_identifier_list] = 534,
        [aux_sym_const_declaration_repeat1] = 536,
        [anon_sym_RPAREN] = 538,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [199] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 540,
        [sym_comment] = 8,
    },
    [200] = {
        [sym__type] = 542,
        [sym_array_type] = 524,
        [sym_slice_type] = 524,
        [sym_qualified_identifier] = 524,
        [anon_sym_EQ] = 544,
        [anon_sym_LBRACK] = 528,
        [sym_identifier] = 530,
        [sym_comment] = 8,
    },
    [201] = {
        [anon_sym_RPAREN] = 546,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__top_level_declaration] = 548,
        [sym__declaration] = 548,
        [sym_const_declaration] = 548,
        [sym_var_declaration] = 548,
        [sym_function_declaration] = 548,
        [sym_method_declaration] = 548,
        [sym_type_declaration] = 548,
        [aux_sym_source_file_repeat2] = 548,
        [ts_builtin_sym_end] = 548,
        [anon_sym_const] = 548,
        [anon_sym_var] = 548,
        [anon_sym_func] = 548,
        [anon_sym_type] = 548,
        [sym_comment] = 8,
    },
    [203] = {
        [sym__top_level_declaration] = 550,
        [sym__declaration] = 550,
        [sym_const_declaration] = 550,
        [sym_var_declaration] = 550,
        [sym_function_declaration] = 550,
        [sym_method_declaration] = 550,
        [sym_type_declaration] = 550,
        [aux_sym_source_file_repeat2] = 550,
        [ts_builtin_sym_end] = 550,
        [anon_sym_const] = 550,
        [anon_sym_var] = 550,
        [anon_sym_func] = 550,
        [anon_sym_type] = 550,
        [sym_comment] = 8,
    },
    [204] = {
        [anon_sym_EQ] = 552,
        [sym_comment] = 8,
    },
    [205] = {
        [anon_sym_EQ] = 112,
        [sym_comment] = 8,
    },
    [206] = {
        [sym_expression_list] = 554,
        [sym__expression] = 390,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [207] = {
        [sym__expression] = 556,
        [sym_unary_expression] = 116,
        [sym_binary_expression] = 116,
        [sym__primary_expression] = 116,
        [sym__string_literal] = 118,
        [sym_int_literal] = 118,
        [sym_float_literal] = 118,
        [anon_sym_RBRACK] = 558,
        [sym_identifier] = 118,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [208] = {
        [anon_sym_DOT] = 560,
        [anon_sym_EQ] = 112,
        [sym_comment] = 8,
    },
    [209] = {
        [sym_identifier] = 562,
        [sym_comment] = 8,
    },
    [210] = {
        [anon_sym_EQ] = 130,
        [sym_comment] = 8,
    },
    [211] = {
        [anon_sym_RBRACK] = 564,
        [anon_sym_STAR] = 134,
        [anon_sym_SLASH] = 134,
        [anon_sym_PERCENT] = 134,
        [anon_sym_LT_LT] = 134,
        [anon_sym_GT_GT] = 134,
        [anon_sym_AMP] = 134,
        [anon_sym_AMP_CARET] = 134,
        [anon_sym_PLUS] = 136,
        [anon_sym_DASH] = 136,
        [anon_sym_PIPE] = 136,
        [anon_sym_CARET] = 136,
        [anon_sym_EQ_EQ] = 138,
        [anon_sym_BANG_EQ] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_EQ] = 138,
        [anon_sym_GT] = 138,
        [anon_sym_GT_EQ] = 138,
        [anon_sym_AMP_AMP] = 140,
        [anon_sym_PIPE_PIPE] = 142,
        [sym_comment] = 8,
    },
    [212] = {
        [sym__type] = 566,
        [sym_array_type] = 524,
        [sym_slice_type] = 524,
        [sym_qualified_identifier] = 524,
        [anon_sym_LBRACK] = 528,
        [sym_identifier] = 530,
        [sym_comment] = 8,
    },
    [213] = {
        [anon_sym_EQ] = 154,
        [sym_comment] = 8,
    },
    [214] = {
        [sym__type] = 568,
        [sym_array_type] = 524,
        [sym_slice_type] = 524,
        [sym_qualified_identifier] = 524,
        [anon_sym_LBRACK] = 528,
        [sym_identifier] = 530,
        [sym_comment] = 8,
    },
    [215] = {
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [216] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 570,
        [sym_comment] = 8,
    },
    [217] = {
        [sym_expression_list] = 572,
        [sym__expression] = 390,
        [sym_unary_expression] = 392,
        [sym_binary_expression] = 392,
        [sym__primary_expression] = 392,
        [sym__string_literal] = 394,
        [sym_int_literal] = 394,
        [sym_float_literal] = 394,
        [sym_identifier] = 394,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 398,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 8,
    },
    [218] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 574,
        [sym_comment] = 8,
    },
    [219] = {
        [sym_const_spec] = 532,
        [sym_identifier_list] = 534,
        [aux_sym_const_declaration_repeat1] = 576,
        [anon_sym_RPAREN] = 578,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [220] = {
        [anon_sym_RPAREN] = 580,
        [sym_comment] = 8,
    },
    [221] = {
        [anon_sym_EQ] = 582,
        [sym_comment] = 8,
    },
    [222] = {
        [sym_expression_list] = 584,
        [sym__expression] = 466,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [223] = {
        [sym__top_level_declaration] = 570,
        [sym__declaration] = 570,
        [sym_const_declaration] = 570,
        [sym_var_declaration] = 570,
        [sym_function_declaration] = 570,
        [sym_method_declaration] = 570,
        [sym_type_declaration] = 570,
        [aux_sym_source_file_repeat2] = 570,
        [ts_builtin_sym_end] = 570,
        [anon_sym_const] = 570,
        [anon_sym_var] = 570,
        [anon_sym_func] = 570,
        [anon_sym_type] = 570,
        [sym_comment] = 8,
    },
    [224] = {
        [sym_expression_list] = 586,
        [sym__expression] = 466,
        [sym_unary_expression] = 468,
        [sym_binary_expression] = 468,
        [sym__primary_expression] = 468,
        [sym__string_literal] = 470,
        [sym_int_literal] = 470,
        [sym_float_literal] = 470,
        [sym_identifier] = 470,
        [sym_raw_string_literal] = 472,
        [sym_interpreted_string_literal] = 472,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 474,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 474,
        [sym_comment] = 8,
    },
    [225] = {
        [sym__top_level_declaration] = 574,
        [sym__declaration] = 574,
        [sym_const_declaration] = 574,
        [sym_var_declaration] = 574,
        [sym_function_declaration] = 574,
        [sym_method_declaration] = 574,
        [sym_type_declaration] = 574,
        [aux_sym_source_file_repeat2] = 574,
        [ts_builtin_sym_end] = 574,
        [anon_sym_const] = 574,
        [anon_sym_var] = 574,
        [anon_sym_func] = 574,
        [anon_sym_type] = 574,
        [sym_comment] = 8,
    },
    [226] = {
        [sym_import_declaration] = 588,
        [sym__top_level_declaration] = 588,
        [sym__declaration] = 588,
        [sym_const_declaration] = 588,
        [sym_var_declaration] = 588,
        [sym_function_declaration] = 588,
        [sym_method_declaration] = 588,
        [sym_type_declaration] = 588,
        [aux_sym_source_file_repeat1] = 588,
        [aux_sym_source_file_repeat2] = 588,
        [ts_builtin_sym_end] = 588,
        [anon_sym_import] = 588,
        [anon_sym_const] = 588,
        [anon_sym_var] = 588,
        [anon_sym_func] = 588,
        [anon_sym_type] = 588,
        [sym_comment] = 8,
    },
    [227] = {
        [sym_import_declaration] = 590,
        [sym__top_level_declaration] = 590,
        [sym__declaration] = 590,
        [sym_const_declaration] = 590,
        [sym_var_declaration] = 590,
        [sym_function_declaration] = 590,
        [sym_method_declaration] = 590,
        [sym_type_declaration] = 590,
        [aux_sym_source_file_repeat1] = 590,
        [aux_sym_source_file_repeat2] = 590,
        [ts_builtin_sym_end] = 590,
        [anon_sym_import] = 590,
        [anon_sym_const] = 590,
        [anon_sym_var] = 590,
        [anon_sym_func] = 590,
        [anon_sym_type] = 590,
        [sym_comment] = 8,
    },
    [228] = {
        [sym_import_spec] = 592,
        [sym__string_literal] = 594,
        [aux_sym_import_declaration_repeat1] = 596,
        [anon_sym_RPAREN] = 598,
        [anon_sym_DOT] = 600,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [sym_comment] = 8,
    },
    [229] = {
        [sym__string_literal] = 604,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [230] = {
        [sym_import_declaration] = 150,
        [sym__top_level_declaration] = 150,
        [sym__declaration] = 150,
        [sym_const_declaration] = 150,
        [sym_var_declaration] = 150,
        [sym_function_declaration] = 150,
        [sym_method_declaration] = 150,
        [sym_type_declaration] = 150,
        [aux_sym_source_file_repeat1] = 150,
        [aux_sym_source_file_repeat2] = 150,
        [ts_builtin_sym_end] = 150,
        [anon_sym_import] = 150,
        [anon_sym_const] = 150,
        [anon_sym_var] = 150,
        [anon_sym_func] = 150,
        [anon_sym_type] = 150,
        [sym_comment] = 8,
    },
    [231] = {
        [sym_import_declaration] = 606,
        [sym__top_level_declaration] = 606,
        [sym__declaration] = 606,
        [sym_const_declaration] = 606,
        [sym_var_declaration] = 606,
        [sym_function_declaration] = 606,
        [sym_method_declaration] = 606,
        [sym_type_declaration] = 606,
        [aux_sym_source_file_repeat1] = 606,
        [aux_sym_source_file_repeat2] = 606,
        [ts_builtin_sym_end] = 606,
        [anon_sym_import] = 606,
        [anon_sym_const] = 606,
        [anon_sym_var] = 606,
        [anon_sym_func] = 606,
        [anon_sym_type] = 606,
        [sym_comment] = 8,
    },
    [232] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 608,
        [sym_comment] = 8,
    },
    [233] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 590,
        [sym_comment] = 8,
    },
    [234] = {
        [anon_sym_RPAREN] = 610,
        [sym_comment] = 8,
    },
    [235] = {
        [sym_import_declaration] = 612,
        [sym__top_level_declaration] = 612,
        [sym__declaration] = 612,
        [sym_const_declaration] = 612,
        [sym_var_declaration] = 612,
        [sym_function_declaration] = 612,
        [sym_method_declaration] = 612,
        [sym_type_declaration] = 612,
        [aux_sym_source_file_repeat1] = 612,
        [aux_sym_source_file_repeat2] = 612,
        [ts_builtin_sym_end] = 612,
        [anon_sym_import] = 612,
        [anon_sym_const] = 612,
        [anon_sym_var] = 612,
        [anon_sym_func] = 612,
        [anon_sym_type] = 612,
        [sym_comment] = 8,
    },
    [236] = {
        [sym__string_literal] = 614,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [sym_comment] = 8,
    },
    [237] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 150,
        [sym_comment] = 8,
    },
    [238] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 606,
        [sym_comment] = 8,
    },
    [239] = {
        [sym_import_declaration] = 616,
        [sym__top_level_declaration] = 616,
        [sym__declaration] = 616,
        [sym_const_declaration] = 616,
        [sym_var_declaration] = 616,
        [sym_function_declaration] = 616,
        [sym_method_declaration] = 616,
        [sym_type_declaration] = 616,
        [aux_sym_source_file_repeat1] = 616,
        [aux_sym_source_file_repeat2] = 616,
        [ts_builtin_sym_end] = 616,
        [anon_sym_import] = 616,
        [anon_sym_const] = 616,
        [anon_sym_var] = 616,
        [anon_sym_func] = 616,
        [anon_sym_type] = 616,
        [sym_comment] = 8,
    },
    [240] = {
        [sym_import_spec] = 592,
        [sym__string_literal] = 594,
        [aux_sym_import_declaration_repeat1] = 618,
        [anon_sym_RPAREN] = 620,
        [anon_sym_DOT] = 600,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [sym_comment] = 8,
    },
    [241] = {
        [anon_sym_RPAREN] = 622,
        [sym_comment] = 8,
    },
    [242] = {
        [ts_builtin_sym_end] = 624,
        [sym_comment] = 8,
    },
    [243] = {
        [ts_builtin_sym_end] = 626,
        [sym_comment] = 8,
    },
    [244] = {
        [sym__top_level_declaration] = 628,
        [sym__declaration] = 628,
        [sym_const_declaration] = 628,
        [sym_var_declaration] = 628,
        [sym_function_declaration] = 628,
        [sym_method_declaration] = 628,
        [sym_type_declaration] = 628,
        [aux_sym_source_file_repeat2] = 628,
        [ts_builtin_sym_end] = 628,
        [anon_sym_const] = 628,
        [anon_sym_var] = 628,
        [anon_sym_func] = 628,
        [anon_sym_type] = 628,
        [sym_comment] = 8,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT_EXTRA(),
    [10] = {.count = 1}, ACCEPT_INPUT(),
    [12] = {.count = 1}, SHIFT(5, 0),
    [14] = {.count = 1}, SHIFT(6, 0),
    [16] = {.count = 1}, SHIFT(7, 0),
    [18] = {.count = 1}, SHIFT(8, 0),
    [20] = {.count = 1}, SHIFT(9, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, REDUCE(sym_source_file, 1, 0),
    [26] = {.count = 1}, SHIFT(11, 0),
    [28] = {.count = 1}, SHIFT(12, 0),
    [30] = {.count = 1}, SHIFT(13, 0),
    [32] = {.count = 1}, SHIFT(14, 0),
    [34] = {.count = 1}, SHIFT(15, 0),
    [36] = {.count = 1}, SHIFT(4, 0),
    [38] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [40] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [42] = {.count = 1}, SHIFT(244, 0),
    [44] = {.count = 1}, SHIFT(243, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(242, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(226, 0),
    [58] = {.count = 1}, SHIFT(227, 0),
    [60] = {.count = 1}, SHIFT(228, 0),
    [62] = {.count = 1}, SHIFT(229, 0),
    [64] = {.count = 1}, SHIFT(230, 0),
    [66] = {.count = 1}, SHIFT(196, 0),
    [68] = {.count = 1}, SHIFT(197, 0),
    [70] = {.count = 1}, SHIFT(198, 0),
    [72] = {.count = 1}, SHIFT(116, 0),
    [74] = {.count = 1}, SHIFT(113, 0),
    [76] = {.count = 1}, SHIFT(114, 0),
    [78] = {.count = 1}, SHIFT(115, 0),
    [80] = {.count = 1}, SHIFT(62, 0),
    [82] = {.count = 1}, SHIFT(63, 0),
    [84] = {.count = 1}, SHIFT(64, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(44, 0),
    [96] = {.count = 1}, SHIFT(45, 0),
    [98] = {.count = 1}, SHIFT(46, 0),
    [100] = {.count = 1}, SHIFT(47, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [112] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [114] = {.count = 1}, SHIFT(25, 0),
    [116] = {.count = 1}, SHIFT(26, 0),
    [118] = {.count = 1}, SHIFT(27, 0),
    [120] = {.count = 1}, SHIFT(28, 0),
    [122] = {.count = 1}, SHIFT(29, 0),
    [124] = {.count = 1}, SHIFT(30, 0),
    [126] = {.count = 1}, SHIFT(23, 0),
    [128] = {.count = 1}, SHIFT(24, 0),
    [130] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [132] = {.count = 1}, SHIFT(32, 0),
    [134] = {.count = 1}, SHIFT(33, 0),
    [136] = {.count = 1}, SHIFT(34, 0),
    [138] = {.count = 1}, SHIFT(35, 0),
    [140] = {.count = 1}, SHIFT(36, 0),
    [142] = {.count = 1}, SHIFT(37, 0),
    [144] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [146] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [148] = {.count = 1}, SHIFT(31, 0),
    [150] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [152] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [154] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [156] = {.count = 1}, SHIFT(43, 0),
    [158] = {.count = 1}, SHIFT(42, 0),
    [160] = {.count = 1}, SHIFT(41, 0),
    [162] = {.count = 1}, SHIFT(40, 0),
    [164] = {.count = 1}, SHIFT(39, 0),
    [166] = {.count = 1}, SHIFT(38, 0),
    [168] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [170] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [172] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [174] = {.count = 1}, SHIFT(60, 0),
    [176] = {.count = 1}, SHIFT(59, 0),
    [178] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [180] = {.count = 1}, SHIFT(48, 0),
    [182] = {.count = 1}, SHIFT(49, 0),
    [184] = {.count = 1}, SHIFT(50, 0),
    [186] = {.count = 1}, SHIFT(51, 0),
    [188] = {.count = 1}, SHIFT(54, 0),
    [190] = {.count = 1}, SHIFT(55, 0),
    [192] = {.count = 1}, SHIFT(52, 0),
    [194] = {.count = 1}, SHIFT(53, 0),
    [196] = {.count = 1}, SHIFT(57, 0),
    [198] = {.count = 1}, SHIFT(56, 0),
    [200] = {.count = 1}, SHIFT(58, 0),
    [202] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [204] = {.count = 1}, SHIFT(61, 0),
    [206] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [208] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [210] = {.count = 1}, SHIFT(108, 0),
    [212] = {.count = 1}, SHIFT(105, 0),
    [214] = {.count = 1}, SHIFT(68, 0),
    [216] = {.count = 1}, SHIFT(106, 0),
    [218] = {.count = 1}, SHIFT(70, 0),
    [220] = {.count = 1}, SHIFT(65, 0),
    [222] = {.count = 1}, SHIFT(66, 0),
    [224] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [226] = {.count = 1}, SHIFT(86, 0),
    [228] = {.count = 1}, SHIFT(87, 0),
    [230] = {.count = 1}, SHIFT(88, 0),
    [232] = {.count = 1}, SHIFT(89, 0),
    [234] = {.count = 1}, SHIFT(90, 0),
    [236] = {.count = 1}, SHIFT(91, 0),
    [238] = {.count = 1}, SHIFT(92, 0),
    [240] = {.count = 1}, SHIFT(67, 0),
    [242] = {.count = 1}, SHIFT(69, 0),
    [244] = {.count = 1}, SHIFT(82, 0),
    [246] = {.count = 1}, SHIFT(83, 0),
    [248] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [250] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [252] = {.count = 1}, SHIFT(71, 0),
    [254] = {.count = 1}, SHIFT(72, 0),
    [256] = {.count = 1}, SHIFT(73, 0),
    [258] = {.count = 1}, SHIFT(74, 0),
    [260] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [262] = {.count = 1}, SHIFT(77, 0),
    [264] = {.count = 1}, SHIFT(78, 0),
    [266] = {.count = 1}, SHIFT(75, 0),
    [268] = {.count = 1}, SHIFT(76, 0),
    [270] = {.count = 1}, SHIFT(80, 0),
    [272] = {.count = 1}, SHIFT(79, 0),
    [274] = {.count = 1}, SHIFT(81, 0),
    [276] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [278] = {.count = 1}, SHIFT(84, 0),
    [280] = {.count = 1}, SHIFT(85, 0),
    [282] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [284] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [286] = {.count = 1}, SHIFT(104, 0),
    [288] = {.count = 1}, SHIFT(101, 0),
    [290] = {.count = 1}, SHIFT(102, 0),
    [292] = {.count = 1}, SHIFT(100, 0),
    [294] = {.count = 1}, SHIFT(95, 0),
    [296] = {.count = 1}, SHIFT(96, 0),
    [298] = {.count = 1}, SHIFT(93, 0),
    [300] = {.count = 1}, SHIFT(94, 0),
    [302] = {.count = 1}, SHIFT(98, 0),
    [304] = {.count = 1}, SHIFT(97, 0),
    [306] = {.count = 1}, SHIFT(99, 0),
    [308] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [310] = {.count = 1}, SHIFT(103, 0),
    [312] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [314] = {.count = 1}, SHIFT(107, 0),
    [316] = {.count = 1}, SHIFT(109, 0),
    [318] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [320] = {.count = 1}, SHIFT(110, 0),
    [322] = {.count = 1}, SHIFT(111, 0),
    [324] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [326] = {.count = 1}, SHIFT(112, 0),
    [328] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [330] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [332] = {.count = 1}, SHIFT(162, 0),
    [334] = {.count = 1}, SHIFT(163, 0),
    [336] = {.count = 1}, SHIFT(164, 0),
    [338] = {.count = 1}, SHIFT(165, 0),
    [340] = {.count = 1}, SHIFT(166, 0),
    [342] = {.count = 1}, SHIFT(121, 0),
    [344] = {.count = 1}, SHIFT(122, 0),
    [346] = {.count = 1}, SHIFT(123, 0),
    [348] = {.count = 1}, SHIFT(124, 0),
    [350] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [352] = {.count = 1}, SHIFT(117, 0),
    [354] = {.count = 1}, SHIFT(118, 0),
    [356] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [358] = {.count = 1}, SHIFT(119, 0),
    [360] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [362] = {.count = 1}, SHIFT(120, 0),
    [364] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [366] = {.count = 1}, SHIFT(160, 0),
    [368] = {.count = 1}, SHIFT(126, 0),
    [370] = {.count = 1}, SHIFT(127, 0),
    [372] = {.count = 1}, SHIFT(128, 0),
    [374] = {.count = 1}, SHIFT(129, 0),
    [376] = {.count = 1}, SHIFT(130, 0),
    [378] = {.count = 1}, SHIFT(125, 0),
    [380] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [382] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [384] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [386] = {.count = 1}, SHIFT(158, 0),
    [388] = {.count = 1}, SHIFT(138, 0),
    [390] = {.count = 1}, SHIFT(139, 0),
    [392] = {.count = 1}, SHIFT(140, 0),
    [394] = {.count = 1}, SHIFT(141, 0),
    [396] = {.count = 1}, SHIFT(142, 0),
    [398] = {.count = 1}, SHIFT(143, 0),
    [400] = {.count = 1}, SHIFT(133, 0),
    [402] = {.count = 1}, SHIFT(134, 0),
    [404] = {.count = 1}, SHIFT(131, 0),
    [406] = {.count = 1}, SHIFT(132, 0),
    [408] = {.count = 1}, SHIFT(136, 0),
    [410] = {.count = 1}, SHIFT(135, 0),
    [412] = {.count = 1}, SHIFT(137, 0),
    [414] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [416] = {.count = 1}, SHIFT(144, 0),
    [418] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [420] = {.count = 1}, SHIFT(145, 0),
    [422] = {.count = 1}, SHIFT(146, 0),
    [424] = {.count = 1}, SHIFT(147, 0),
    [426] = {.count = 1}, SHIFT(148, 0),
    [428] = {.count = 1}, SHIFT(149, 0),
    [430] = {.count = 1}, SHIFT(150, 0),
    [432] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [434] = {.count = 1}, SHIFT(156, 0),
    [436] = {.count = 1}, SHIFT(155, 0),
    [438] = {.count = 1}, SHIFT(154, 0),
    [440] = {.count = 1}, SHIFT(153, 0),
    [442] = {.count = 1}, SHIFT(152, 0),
    [444] = {.count = 1}, SHIFT(151, 0),
    [446] = {.count = 1}, SHIFT(157, 0),
    [448] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [450] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [452] = {.count = 1}, SHIFT(159, 0),
    [454] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [456] = {.count = 1}, SHIFT(161, 0),
    [458] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [460] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [462] = {.count = 1}, SHIFT(194, 0),
    [464] = {.count = 1}, SHIFT(174, 0),
    [466] = {.count = 1}, SHIFT(175, 0),
    [468] = {.count = 1}, SHIFT(176, 0),
    [470] = {.count = 1}, SHIFT(177, 0),
    [472] = {.count = 1}, SHIFT(178, 0),
    [474] = {.count = 1}, SHIFT(179, 0),
    [476] = {.count = 1}, SHIFT(169, 0),
    [478] = {.count = 1}, SHIFT(170, 0),
    [480] = {.count = 1}, SHIFT(167, 0),
    [482] = {.count = 1}, SHIFT(168, 0),
    [484] = {.count = 1}, SHIFT(172, 0),
    [486] = {.count = 1}, SHIFT(171, 0),
    [488] = {.count = 1}, SHIFT(173, 0),
    [490] = {.count = 1}, SHIFT(180, 0),
    [492] = {.count = 1}, SHIFT(181, 0),
    [494] = {.count = 1}, SHIFT(182, 0),
    [496] = {.count = 1}, SHIFT(183, 0),
    [498] = {.count = 1}, SHIFT(184, 0),
    [500] = {.count = 1}, SHIFT(185, 0),
    [502] = {.count = 1}, SHIFT(186, 0),
    [504] = {.count = 1}, SHIFT(192, 0),
    [506] = {.count = 1}, SHIFT(191, 0),
    [508] = {.count = 1}, SHIFT(190, 0),
    [510] = {.count = 1}, SHIFT(189, 0),
    [512] = {.count = 1}, SHIFT(188, 0),
    [514] = {.count = 1}, SHIFT(187, 0),
    [516] = {.count = 1}, SHIFT(193, 0),
    [518] = {.count = 1}, SHIFT(195, 0),
    [520] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [522] = {.count = 1}, SHIFT(221, 0),
    [524] = {.count = 1}, SHIFT(205, 0),
    [526] = {.count = 1}, SHIFT(222, 0),
    [528] = {.count = 1}, SHIFT(207, 0),
    [530] = {.count = 1}, SHIFT(208, 0),
    [532] = {.count = 1}, SHIFT(199, 0),
    [534] = {.count = 1}, SHIFT(200, 0),
    [536] = {.count = 1}, SHIFT(201, 0),
    [538] = {.count = 1}, SHIFT(202, 0),
    [540] = {.count = 1}, SHIFT(219, 0),
    [542] = {.count = 1}, SHIFT(204, 0),
    [544] = {.count = 1}, SHIFT(206, 0),
    [546] = {.count = 1}, SHIFT(203, 0),
    [548] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [550] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [552] = {.count = 1}, SHIFT(217, 0),
    [554] = {.count = 1}, SHIFT(216, 0),
    [556] = {.count = 1}, SHIFT(211, 0),
    [558] = {.count = 1}, SHIFT(212, 0),
    [560] = {.count = 1}, SHIFT(209, 0),
    [562] = {.count = 1}, SHIFT(210, 0),
    [564] = {.count = 1}, SHIFT(214, 0),
    [566] = {.count = 1}, SHIFT(213, 0),
    [568] = {.count = 1}, SHIFT(215, 0),
    [570] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [572] = {.count = 1}, SHIFT(218, 0),
    [574] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [576] = {.count = 1}, SHIFT(220, 0),
    [578] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [580] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [582] = {.count = 1}, SHIFT(224, 0),
    [584] = {.count = 1}, SHIFT(223, 0),
    [586] = {.count = 1}, SHIFT(225, 0),
    [588] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [590] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [592] = {.count = 1}, SHIFT(232, 0),
    [594] = {.count = 1}, SHIFT(233, 0),
    [596] = {.count = 1}, SHIFT(234, 0),
    [598] = {.count = 1}, SHIFT(235, 0),
    [600] = {.count = 1}, SHIFT(236, 0),
    [602] = {.count = 1}, SHIFT(237, 0),
    [604] = {.count = 1}, SHIFT(231, 0),
    [606] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [608] = {.count = 1}, SHIFT(240, 0),
    [610] = {.count = 1}, SHIFT(239, 0),
    [612] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [614] = {.count = 1}, SHIFT(238, 0),
    [616] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [618] = {.count = 1}, SHIFT(241, 0),
    [620] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [622] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [624] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [626] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [628] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
