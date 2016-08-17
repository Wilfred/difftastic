#include "tree_sitter/parser.h"

#define STATE_COUNT 308
#define SYMBOL_COUNT 87

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
    sym_struct_type,
    sym_field_declaration,
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
    aux_sym_struct_type_repeat1,
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
    anon_sym_struct,
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
    [sym_struct_type] = "struct_type",
    [sym_field_declaration] = "field_declaration",
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
    [aux_sym_struct_type_repeat1] = "struct_type_repeat1",
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
    [anon_sym_struct] = "struct",
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
    [sym_struct_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_field_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_struct_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '>')
                ADVANCE(31);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'p')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(62);
            if (lookahead == 't')
                ADVANCE(68);
            if (lookahead == 'v')
                ADVANCE(72);
            if (lookahead == '{')
                ADVANCE(75);
            if (lookahead == '|')
                ADVANCE(76);
            if (lookahead == '}')
                ADVANCE(78);
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
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(sym_interpreted_string_literal);
        case 7:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 8:
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '^')
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 9:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 10:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 11:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 12:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 13:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 14:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 15:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 16:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 17:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 18:
            if (lookahead == '/')
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 19:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_comment);
        case 20:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(21);
            if (lookahead == 'X')
                ADVANCE(22);
            if (lookahead == 'x')
                ADVANCE(22);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 21:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(21);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 22:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(23);
            LEX_ERROR();
        case 23:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(23);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 25:
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 26:
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '=')
                ADVANCE(28);
            ACCEPT_TOKEN(anon_sym_LT);
        case 27:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 28:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 29:
            if (lookahead == '=')
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 30:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 31:
            if (lookahead == '=')
                ADVANCE(32);
            if (lookahead == '>')
                ADVANCE(33);
            ACCEPT_TOKEN(anon_sym_GT);
        case 32:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 33:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 35:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 36:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 37:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 38:
            if (lookahead == '`')
                ADVANCE(39);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(38);
            LEX_ERROR();
        case 39:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_const);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_func);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_import);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'k')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'g')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_package);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_struct);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'y')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_type);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_var);
        case 75:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 76:
            if (lookahead == '|')
                ADVANCE(77);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 77:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 78:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'p')
                ADVANCE(81);
            LEX_ERROR();
        case 80:
            if (lookahead == '/')
                ADVANCE(19);
            LEX_ERROR();
        case 81:
            if (lookahead == 'a')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 'c')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            if (lookahead == 'k')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            if (lookahead == 'a')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'g')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 'e')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            ACCEPT_TOKEN(anon_sym_package);
        case 88:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '/')
                ADVANCE(80);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            LEX_ERROR();
        case 90:
            if (lookahead == 'o')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 'n')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 's')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 't')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            ACCEPT_TOKEN(anon_sym_const);
        case 95:
            if (lookahead == 'u')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'n')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'c')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            ACCEPT_TOKEN(anon_sym_func);
        case 99:
            if (lookahead == 'm')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'p')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'o')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'r')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 't')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            ACCEPT_TOKEN(anon_sym_import);
        case 105:
            if (lookahead == 'y')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'p')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'e')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_type);
        case 109:
            if (lookahead == 'a')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'r')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_var);
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 113:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(113);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            LEX_ERROR();
        case 114:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            LEX_ERROR();
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 124:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(129);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(76);
            LEX_ERROR();
        case 129:
            if (lookahead == '=')
                ADVANCE(30);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(80);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(80);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(62);
            if (lookahead == 't')
                ADVANCE(68);
            if (lookahead == 'v')
                ADVANCE(72);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(80);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
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
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            if (lookahead == '{')
                ADVANCE(75);
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
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(62);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(141);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(141);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(129);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(76);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            LEX_ERROR();
        case 148:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(129);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'v')
                ADVANCE(109);
            if (lookahead == '|')
                ADVANCE(76);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            LEX_ERROR();
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(141);
            LEX_ERROR();
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(80);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 79,
    [1] = 88,
    [2] = 89,
    [3] = 112,
    [4] = 89,
    [5] = 89,
    [6] = 113,
    [7] = 113,
    [8] = 113,
    [9] = 113,
    [10] = 88,
    [11] = 114,
    [12] = 115,
    [13] = 115,
    [14] = 115,
    [15] = 115,
    [16] = 113,
    [17] = 116,
    [18] = 117,
    [19] = 113,
    [20] = 113,
    [21] = 118,
    [22] = 119,
    [23] = 120,
    [24] = 112,
    [25] = 113,
    [26] = 121,
    [27] = 117,
    [28] = 122,
    [29] = 123,
    [30] = 113,
    [31] = 112,
    [32] = 124,
    [33] = 122,
    [34] = 117,
    [35] = 112,
    [36] = 122,
    [37] = 125,
    [38] = 117,
    [39] = 126,
    [40] = 122,
    [41] = 113,
    [42] = 121,
    [43] = 123,
    [44] = 126,
    [45] = 118,
    [46] = 119,
    [47] = 127,
    [48] = 112,
    [49] = 126,
    [50] = 121,
    [51] = 123,
    [52] = 126,
    [53] = 126,
    [54] = 128,
    [55] = 128,
    [56] = 128,
    [57] = 117,
    [58] = 128,
    [59] = 128,
    [60] = 126,
    [61] = 117,
    [62] = 130,
    [63] = 130,
    [64] = 130,
    [65] = 130,
    [66] = 130,
    [67] = 128,
    [68] = 128,
    [69] = 128,
    [70] = 128,
    [71] = 128,
    [72] = 126,
    [73] = 128,
    [74] = 117,
    [75] = 113,
    [76] = 117,
    [77] = 113,
    [78] = 122,
    [79] = 131,
    [80] = 113,
    [81] = 117,
    [82] = 122,
    [83] = 122,
    [84] = 118,
    [85] = 119,
    [86] = 132,
    [87] = 112,
    [88] = 122,
    [89] = 121,
    [90] = 123,
    [91] = 122,
    [92] = 122,
    [93] = 128,
    [94] = 117,
    [95] = 122,
    [96] = 117,
    [97] = 122,
    [98] = 113,
    [99] = 116,
    [100] = 131,
    [101] = 112,
    [102] = 116,
    [103] = 133,
    [104] = 134,
    [105] = 116,
    [106] = 135,
    [107] = 135,
    [108] = 134,
    [109] = 136,
    [110] = 135,
    [111] = 135,
    [112] = 118,
    [113] = 119,
    [114] = 137,
    [115] = 112,
    [116] = 135,
    [117] = 121,
    [118] = 123,
    [119] = 135,
    [120] = 135,
    [121] = 128,
    [122] = 117,
    [123] = 135,
    [124] = 117,
    [125] = 135,
    [126] = 134,
    [127] = 112,
    [128] = 135,
    [129] = 136,
    [130] = 138,
    [131] = 113,
    [132] = 138,
    [133] = 116,
    [134] = 123,
    [135] = 118,
    [136] = 119,
    [137] = 139,
    [138] = 112,
    [139] = 138,
    [140] = 121,
    [141] = 123,
    [142] = 138,
    [143] = 138,
    [144] = 128,
    [145] = 117,
    [146] = 138,
    [147] = 117,
    [148] = 138,
    [149] = 113,
    [150] = 135,
    [151] = 138,
    [152] = 138,
    [153] = 113,
    [154] = 135,
    [155] = 112,
    [156] = 112,
    [157] = 133,
    [158] = 134,
    [159] = 138,
    [160] = 113,
    [161] = 113,
    [162] = 113,
    [163] = 140,
    [164] = 116,
    [165] = 142,
    [166] = 140,
    [167] = 112,
    [168] = 142,
    [169] = 140,
    [170] = 122,
    [171] = 140,
    [172] = 131,
    [173] = 113,
    [174] = 113,
    [175] = 143,
    [176] = 143,
    [177] = 130,
    [178] = 118,
    [179] = 119,
    [180] = 144,
    [181] = 112,
    [182] = 143,
    [183] = 121,
    [184] = 123,
    [185] = 143,
    [186] = 143,
    [187] = 128,
    [188] = 117,
    [189] = 143,
    [190] = 117,
    [191] = 143,
    [192] = 122,
    [193] = 145,
    [194] = 145,
    [195] = 145,
    [196] = 145,
    [197] = 145,
    [198] = 122,
    [199] = 130,
    [200] = 130,
    [201] = 130,
    [202] = 130,
    [203] = 130,
    [204] = 130,
    [205] = 145,
    [206] = 145,
    [207] = 145,
    [208] = 145,
    [209] = 145,
    [210] = 145,
    [211] = 122,
    [212] = 130,
    [213] = 122,
    [214] = 116,
    [215] = 131,
    [216] = 146,
    [217] = 146,
    [218] = 130,
    [219] = 118,
    [220] = 119,
    [221] = 147,
    [222] = 112,
    [223] = 146,
    [224] = 121,
    [225] = 123,
    [226] = 146,
    [227] = 146,
    [228] = 128,
    [229] = 117,
    [230] = 146,
    [231] = 117,
    [232] = 146,
    [233] = 113,
    [234] = 148,
    [235] = 148,
    [236] = 148,
    [237] = 148,
    [238] = 148,
    [239] = 113,
    [240] = 130,
    [241] = 130,
    [242] = 130,
    [243] = 130,
    [244] = 130,
    [245] = 130,
    [246] = 148,
    [247] = 148,
    [248] = 148,
    [249] = 148,
    [250] = 148,
    [251] = 148,
    [252] = 113,
    [253] = 130,
    [254] = 113,
    [255] = 113,
    [256] = 140,
    [257] = 116,
    [258] = 122,
    [259] = 140,
    [260] = 131,
    [261] = 113,
    [262] = 113,
    [263] = 149,
    [264] = 149,
    [265] = 130,
    [266] = 118,
    [267] = 119,
    [268] = 150,
    [269] = 112,
    [270] = 149,
    [271] = 121,
    [272] = 123,
    [273] = 149,
    [274] = 149,
    [275] = 128,
    [276] = 117,
    [277] = 149,
    [278] = 117,
    [279] = 149,
    [280] = 122,
    [281] = 130,
    [282] = 122,
    [283] = 116,
    [284] = 131,
    [285] = 149,
    [286] = 130,
    [287] = 113,
    [288] = 130,
    [289] = 113,
    [290] = 89,
    [291] = 89,
    [292] = 151,
    [293] = 152,
    [294] = 89,
    [295] = 89,
    [296] = 122,
    [297] = 122,
    [298] = 131,
    [299] = 89,
    [300] = 152,
    [301] = 122,
    [302] = 89,
    [303] = 151,
    [304] = 131,
    [305] = 88,
    [306] = 88,
    [307] = 113,
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
        [sym_struct_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [sym_identifier] = 110,
        [sym_comment] = 8,
    },
    [19] = {
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
    [20] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_const] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__expression] = 116,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 122,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [22] = {
        [anon_sym_LBRACE] = 128,
        [sym_comment] = 8,
    },
    [23] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_DOT] = 130,
        [anon_sym_const] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [24] = {
        [sym_identifier] = 132,
        [sym_comment] = 8,
    },
    [25] = {
        [sym__top_level_declaration] = 134,
        [sym__declaration] = 134,
        [sym_const_declaration] = 134,
        [sym_var_declaration] = 134,
        [sym_function_declaration] = 134,
        [sym_method_declaration] = 134,
        [sym_type_declaration] = 134,
        [aux_sym_source_file_repeat2] = 134,
        [ts_builtin_sym_end] = 134,
        [anon_sym_const] = 134,
        [anon_sym_var] = 134,
        [anon_sym_func] = 134,
        [anon_sym_type] = 134,
        [sym_comment] = 8,
    },
    [26] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 140,
        [anon_sym_RBRACE] = 142,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 148,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_LBRACK] = 152,
        [anon_sym_struct] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [28] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 158,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_RBRACE] = 160,
        [sym_comment] = 8,
    },
    [30] = {
        [sym__top_level_declaration] = 162,
        [sym__declaration] = 162,
        [sym_const_declaration] = 162,
        [sym_var_declaration] = 162,
        [sym_function_declaration] = 162,
        [sym_method_declaration] = 162,
        [sym_type_declaration] = 162,
        [aux_sym_source_file_repeat2] = 162,
        [ts_builtin_sym_end] = 162,
        [anon_sym_const] = 162,
        [anon_sym_var] = 162,
        [anon_sym_func] = 162,
        [anon_sym_type] = 162,
        [sym_comment] = 8,
    },
    [31] = {
        [sym_identifier] = 148,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 164,
        [sym_array_type] = 164,
        [sym_slice_type] = 164,
        [sym_struct_type] = 164,
        [sym_qualified_identifier] = 164,
        [sym__string_literal] = 166,
        [aux_sym_identifier_list_repeat1] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 170,
        [anon_sym_COMMA] = 172,
        [anon_sym_LBRACK] = 164,
        [anon_sym_struct] = 164,
        [sym_identifier] = 164,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [33] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 176,
        [sym_comment] = 8,
    },
    [34] = {
        [sym__type] = 178,
        [sym_array_type] = 178,
        [sym_slice_type] = 178,
        [sym_struct_type] = 178,
        [sym_qualified_identifier] = 178,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 8,
    },
    [35] = {
        [sym_identifier] = 180,
        [sym_comment] = 8,
    },
    [36] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 182,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_qualified_identifier] = 184,
        [aux_sym_identifier_list_repeat1] = 186,
        [anon_sym_COMMA] = 172,
        [anon_sym_LBRACK] = 184,
        [anon_sym_struct] = 184,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [38] = {
        [sym__type] = 188,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 188,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [39] = {
        [sym__string_literal] = 190,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 176,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [40] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 192,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__top_level_declaration] = 194,
        [sym__declaration] = 194,
        [sym_const_declaration] = 194,
        [sym_var_declaration] = 194,
        [sym_function_declaration] = 194,
        [sym_method_declaration] = 194,
        [sym_type_declaration] = 194,
        [aux_sym_source_file_repeat2] = 194,
        [ts_builtin_sym_end] = 194,
        [anon_sym_const] = 194,
        [anon_sym_var] = 194,
        [anon_sym_func] = 194,
        [anon_sym_type] = 194,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 196,
        [anon_sym_RBRACE] = 198,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_RBRACE] = 200,
        [sym_comment] = 8,
    },
    [44] = {
        [sym__string_literal] = 114,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [sym_raw_string_literal] = 114,
        [sym_interpreted_string_literal] = 114,
        [sym_comment] = 8,
    },
    [45] = {
        [sym__expression] = 202,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 204,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [46] = {
        [anon_sym_LBRACE] = 206,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__string_literal] = 114,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [anon_sym_DOT] = 208,
        [sym_raw_string_literal] = 114,
        [sym_interpreted_string_literal] = 114,
        [sym_comment] = 8,
    },
    [48] = {
        [sym_identifier] = 210,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__string_literal] = 134,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 134,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [sym_comment] = 8,
    },
    [50] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 212,
        [anon_sym_RBRACE] = 214,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [51] = {
        [anon_sym_RBRACE] = 216,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__string_literal] = 162,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_raw_string_literal] = 162,
        [sym_interpreted_string_literal] = 162,
        [sym_comment] = 8,
    },
    [53] = {
        [sym__string_literal] = 194,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [sym_raw_string_literal] = 194,
        [sym_interpreted_string_literal] = 194,
        [sym_comment] = 8,
    },
    [54] = {
        [anon_sym_RBRACK] = 218,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 230,
        [anon_sym_STAR] = 230,
        [anon_sym_SLASH] = 230,
        [anon_sym_PERCENT] = 230,
        [anon_sym_LT_LT] = 230,
        [anon_sym_GT_GT] = 230,
        [anon_sym_AMP] = 230,
        [anon_sym_AMP_CARET] = 230,
        [anon_sym_PLUS] = 230,
        [anon_sym_DASH] = 230,
        [anon_sym_PIPE] = 230,
        [anon_sym_CARET] = 230,
        [anon_sym_EQ_EQ] = 230,
        [anon_sym_BANG_EQ] = 230,
        [anon_sym_LT] = 230,
        [anon_sym_LT_EQ] = 230,
        [anon_sym_GT] = 230,
        [anon_sym_GT_EQ] = 230,
        [anon_sym_AMP_AMP] = 230,
        [anon_sym_PIPE_PIPE] = 230,
        [sym_comment] = 8,
    },
    [56] = {
        [anon_sym_RBRACK] = 232,
        [anon_sym_STAR] = 232,
        [anon_sym_SLASH] = 232,
        [anon_sym_PERCENT] = 232,
        [anon_sym_LT_LT] = 232,
        [anon_sym_GT_GT] = 232,
        [anon_sym_AMP] = 232,
        [anon_sym_AMP_CARET] = 232,
        [anon_sym_PLUS] = 232,
        [anon_sym_DASH] = 232,
        [anon_sym_PIPE] = 232,
        [anon_sym_CARET] = 232,
        [anon_sym_EQ_EQ] = 232,
        [anon_sym_BANG_EQ] = 232,
        [anon_sym_LT] = 232,
        [anon_sym_LT_EQ] = 232,
        [anon_sym_GT] = 232,
        [anon_sym_GT_EQ] = 232,
        [anon_sym_AMP_AMP] = 232,
        [anon_sym_PIPE_PIPE] = 232,
        [sym_comment] = 8,
    },
    [57] = {
        [sym__type] = 234,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_LBRACK] = 152,
        [anon_sym_struct] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [58] = {
        [anon_sym_RBRACK] = 182,
        [anon_sym_STAR] = 182,
        [anon_sym_SLASH] = 182,
        [anon_sym_PERCENT] = 182,
        [anon_sym_LT_LT] = 182,
        [anon_sym_GT_GT] = 182,
        [anon_sym_AMP] = 182,
        [anon_sym_AMP_CARET] = 182,
        [anon_sym_PLUS] = 182,
        [anon_sym_DASH] = 182,
        [anon_sym_PIPE] = 182,
        [anon_sym_CARET] = 182,
        [anon_sym_EQ_EQ] = 182,
        [anon_sym_BANG_EQ] = 182,
        [anon_sym_LT] = 182,
        [anon_sym_LT_EQ] = 182,
        [anon_sym_GT] = 182,
        [anon_sym_GT_EQ] = 182,
        [anon_sym_AMP_AMP] = 182,
        [anon_sym_PIPE_PIPE] = 182,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_RBRACK] = 236,
        [anon_sym_STAR] = 236,
        [anon_sym_SLASH] = 236,
        [anon_sym_PERCENT] = 236,
        [anon_sym_LT_LT] = 236,
        [anon_sym_GT_GT] = 236,
        [anon_sym_AMP] = 236,
        [anon_sym_AMP_CARET] = 236,
        [anon_sym_PLUS] = 236,
        [anon_sym_DASH] = 236,
        [anon_sym_PIPE] = 236,
        [anon_sym_CARET] = 236,
        [anon_sym_EQ_EQ] = 236,
        [anon_sym_BANG_EQ] = 236,
        [anon_sym_LT] = 236,
        [anon_sym_LT_EQ] = 236,
        [anon_sym_GT] = 236,
        [anon_sym_GT_EQ] = 236,
        [anon_sym_AMP_AMP] = 236,
        [anon_sym_PIPE_PIPE] = 236,
        [sym_comment] = 8,
    },
    [60] = {
        [sym__string_literal] = 238,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 238,
        [sym_raw_string_literal] = 238,
        [sym_interpreted_string_literal] = 238,
        [sym_comment] = 8,
    },
    [61] = {
        [sym__type] = 240,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_LBRACK] = 152,
        [anon_sym_struct] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [62] = {
        [sym__expression] = 242,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [63] = {
        [sym__expression] = 244,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [64] = {
        [sym__expression] = 246,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [65] = {
        [sym__expression] = 248,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [66] = {
        [sym__expression] = 250,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_RBRACK] = 252,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RBRACK] = 252,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RBRACK] = 252,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [70] = {
        [anon_sym_RBRACK] = 252,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 252,
        [anon_sym_DASH] = 252,
        [anon_sym_PIPE] = 252,
        [anon_sym_CARET] = 252,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [71] = {
        [anon_sym_RBRACK] = 254,
        [anon_sym_STAR] = 254,
        [anon_sym_SLASH] = 254,
        [anon_sym_PERCENT] = 254,
        [anon_sym_LT_LT] = 254,
        [anon_sym_GT_GT] = 254,
        [anon_sym_AMP] = 254,
        [anon_sym_AMP_CARET] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_PIPE] = 254,
        [anon_sym_CARET] = 254,
        [anon_sym_EQ_EQ] = 254,
        [anon_sym_BANG_EQ] = 254,
        [anon_sym_LT] = 254,
        [anon_sym_LT_EQ] = 254,
        [anon_sym_GT] = 254,
        [anon_sym_GT_EQ] = 254,
        [anon_sym_AMP_AMP] = 254,
        [anon_sym_PIPE_PIPE] = 254,
        [sym_comment] = 8,
    },
    [72] = {
        [sym__string_literal] = 256,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 256,
        [sym_raw_string_literal] = 256,
        [sym_interpreted_string_literal] = 256,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RBRACK] = 258,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [74] = {
        [sym__type] = 260,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [sym_identifier] = 110,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__top_level_declaration] = 238,
        [sym__declaration] = 238,
        [sym_const_declaration] = 238,
        [sym_var_declaration] = 238,
        [sym_function_declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_type_declaration] = 238,
        [aux_sym_source_file_repeat2] = 238,
        [ts_builtin_sym_end] = 238,
        [anon_sym_const] = 238,
        [anon_sym_var] = 238,
        [anon_sym_func] = 238,
        [anon_sym_type] = 238,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 262,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [sym_identifier] = 110,
        [sym_comment] = 8,
    },
    [77] = {
        [sym__top_level_declaration] = 256,
        [sym__declaration] = 256,
        [sym_const_declaration] = 256,
        [sym_var_declaration] = 256,
        [sym_function_declaration] = 256,
        [sym_method_declaration] = 256,
        [sym_type_declaration] = 256,
        [aux_sym_source_file_repeat2] = 256,
        [ts_builtin_sym_end] = 256,
        [anon_sym_const] = 256,
        [anon_sym_var] = 256,
        [anon_sym_func] = 256,
        [anon_sym_type] = 256,
        [sym_comment] = 8,
    },
    [78] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 264,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_RPAREN] = 266,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__top_level_declaration] = 268,
        [sym__declaration] = 268,
        [sym_const_declaration] = 268,
        [sym_var_declaration] = 268,
        [sym_function_declaration] = 268,
        [sym_method_declaration] = 268,
        [sym_type_declaration] = 268,
        [aux_sym_source_file_repeat2] = 268,
        [ts_builtin_sym_end] = 268,
        [anon_sym_const] = 268,
        [anon_sym_var] = 268,
        [anon_sym_func] = 268,
        [anon_sym_type] = 268,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__type] = 270,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LBRACK] = 274,
        [anon_sym_struct] = 276,
        [sym_identifier] = 278,
        [sym_comment] = 8,
    },
    [82] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 112,
        [sym_comment] = 8,
    },
    [83] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [sym_comment] = 8,
    },
    [84] = {
        [sym__expression] = 280,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 282,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [85] = {
        [anon_sym_LBRACE] = 284,
        [sym_comment] = 8,
    },
    [86] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [anon_sym_DOT] = 286,
        [sym_comment] = 8,
    },
    [87] = {
        [sym_identifier] = 288,
        [sym_comment] = 8,
    },
    [88] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 134,
        [sym_comment] = 8,
    },
    [89] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 290,
        [anon_sym_RBRACE] = 292,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RBRACE] = 294,
        [sym_comment] = 8,
    },
    [91] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_comment] = 8,
    },
    [92] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [sym_comment] = 8,
    },
    [93] = {
        [anon_sym_RBRACK] = 296,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [94] = {
        [sym__type] = 298,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LBRACK] = 274,
        [anon_sym_struct] = 276,
        [sym_identifier] = 278,
        [sym_comment] = 8,
    },
    [95] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 238,
        [sym_comment] = 8,
    },
    [96] = {
        [sym__type] = 300,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LBRACK] = 274,
        [anon_sym_struct] = 276,
        [sym_identifier] = 278,
        [sym_comment] = 8,
    },
    [97] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 256,
        [sym_comment] = 8,
    },
    [98] = {
        [sym__top_level_declaration] = 302,
        [sym__declaration] = 302,
        [sym_const_declaration] = 302,
        [sym_var_declaration] = 302,
        [sym_function_declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_type_declaration] = 302,
        [aux_sym_source_file_repeat2] = 302,
        [ts_builtin_sym_end] = 302,
        [anon_sym_const] = 302,
        [anon_sym_var] = 302,
        [anon_sym_func] = 302,
        [anon_sym_type] = 302,
        [sym_comment] = 8,
    },
    [99] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 304,
        [anon_sym_RPAREN] = 306,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [100] = {
        [anon_sym_RPAREN] = 308,
        [sym_comment] = 8,
    },
    [101] = {
        [sym_identifier] = 310,
        [sym_comment] = 8,
    },
    [102] = {
        [sym__parameter_list] = 312,
        [sym_parameter_declaration] = 314,
        [anon_sym_RPAREN] = 316,
        [sym_identifier] = 318,
        [sym_comment] = 8,
    },
    [103] = {
        [sym_parameters] = 320,
        [anon_sym_LPAREN] = 322,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__top_level_declaration] = 324,
        [sym__declaration] = 324,
        [sym_const_declaration] = 324,
        [sym_var_declaration] = 324,
        [sym_function_declaration] = 324,
        [sym_method_declaration] = 324,
        [sym_parameters] = 326,
        [sym_block] = 328,
        [sym_type_declaration] = 324,
        [sym__type] = 326,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_qualified_identifier] = 330,
        [aux_sym_source_file_repeat2] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_LPAREN] = 332,
        [anon_sym_const] = 324,
        [anon_sym_var] = 324,
        [anon_sym_func] = 324,
        [anon_sym_LBRACE] = 334,
        [anon_sym_type] = 324,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__parameter_list] = 342,
        [sym_parameter_declaration] = 314,
        [anon_sym_RPAREN] = 344,
        [sym_identifier] = 318,
        [sym_comment] = 8,
    },
    [106] = {
        [anon_sym_RPAREN] = 346,
        [anon_sym_COMMA] = 348,
        [sym_comment] = 8,
    },
    [107] = {
        [anon_sym_RPAREN] = 350,
        [anon_sym_COMMA] = 350,
        [sym_comment] = 8,
    },
    [108] = {
        [sym__top_level_declaration] = 352,
        [sym__declaration] = 352,
        [sym_const_declaration] = 352,
        [sym_var_declaration] = 352,
        [sym_function_declaration] = 352,
        [sym_method_declaration] = 352,
        [sym_parameters] = 352,
        [sym_block] = 352,
        [sym_type_declaration] = 352,
        [sym__type] = 352,
        [sym_array_type] = 352,
        [sym_slice_type] = 352,
        [sym_struct_type] = 352,
        [sym_qualified_identifier] = 352,
        [aux_sym_source_file_repeat2] = 352,
        [ts_builtin_sym_end] = 352,
        [anon_sym_LPAREN] = 352,
        [anon_sym_const] = 352,
        [anon_sym_var] = 352,
        [anon_sym_func] = 352,
        [anon_sym_LBRACE] = 352,
        [anon_sym_type] = 352,
        [anon_sym_LBRACK] = 352,
        [anon_sym_struct] = 352,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__type] = 354,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_RPAREN] = 350,
        [anon_sym_COMMA] = 350,
        [anon_sym_LBRACK] = 358,
        [anon_sym_struct] = 360,
        [sym_identifier] = 362,
        [sym_comment] = 8,
    },
    [110] = {
        [anon_sym_RPAREN] = 364,
        [anon_sym_COMMA] = 364,
        [sym_comment] = 8,
    },
    [111] = {
        [anon_sym_RPAREN] = 114,
        [anon_sym_COMMA] = 114,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__expression] = 366,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 368,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_LBRACE] = 370,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_RPAREN] = 114,
        [anon_sym_DOT] = 372,
        [anon_sym_COMMA] = 114,
        [sym_comment] = 8,
    },
    [115] = {
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_RPAREN] = 134,
        [anon_sym_COMMA] = 134,
        [sym_comment] = 8,
    },
    [117] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 376,
        [anon_sym_RBRACE] = 378,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [118] = {
        [anon_sym_RBRACE] = 380,
        [sym_comment] = 8,
    },
    [119] = {
        [anon_sym_RPAREN] = 162,
        [anon_sym_COMMA] = 162,
        [sym_comment] = 8,
    },
    [120] = {
        [anon_sym_RPAREN] = 194,
        [anon_sym_COMMA] = 194,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_RBRACK] = 382,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__type] = 384,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_LBRACK] = 358,
        [anon_sym_struct] = 360,
        [sym_identifier] = 362,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_RPAREN] = 238,
        [anon_sym_COMMA] = 238,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__type] = 386,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_LBRACK] = 358,
        [anon_sym_struct] = 360,
        [sym_identifier] = 362,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_RPAREN] = 256,
        [anon_sym_COMMA] = 256,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__top_level_declaration] = 388,
        [sym__declaration] = 388,
        [sym_const_declaration] = 388,
        [sym_var_declaration] = 388,
        [sym_function_declaration] = 388,
        [sym_method_declaration] = 388,
        [sym_parameters] = 388,
        [sym_block] = 388,
        [sym_type_declaration] = 388,
        [sym__type] = 388,
        [sym_array_type] = 388,
        [sym_slice_type] = 388,
        [sym_struct_type] = 388,
        [sym_qualified_identifier] = 388,
        [aux_sym_source_file_repeat2] = 388,
        [ts_builtin_sym_end] = 388,
        [anon_sym_LPAREN] = 388,
        [anon_sym_const] = 388,
        [anon_sym_var] = 388,
        [anon_sym_func] = 388,
        [anon_sym_LBRACE] = 388,
        [anon_sym_type] = 388,
        [anon_sym_LBRACK] = 388,
        [anon_sym_struct] = 388,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [127] = {
        [sym_parameter_declaration] = 390,
        [sym_identifier] = 392,
        [sym_comment] = 8,
    },
    [128] = {
        [anon_sym_RPAREN] = 394,
        [anon_sym_COMMA] = 394,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__type] = 354,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_RPAREN] = 394,
        [anon_sym_COMMA] = 394,
        [anon_sym_LBRACK] = 358,
        [anon_sym_struct] = 360,
        [sym_identifier] = 362,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__top_level_declaration] = 396,
        [sym__declaration] = 396,
        [sym_const_declaration] = 396,
        [sym_var_declaration] = 396,
        [sym_function_declaration] = 396,
        [sym_method_declaration] = 396,
        [sym_block] = 398,
        [sym_type_declaration] = 396,
        [aux_sym_source_file_repeat2] = 396,
        [ts_builtin_sym_end] = 396,
        [anon_sym_const] = 396,
        [anon_sym_var] = 396,
        [anon_sym_func] = 396,
        [anon_sym_LBRACE] = 334,
        [anon_sym_type] = 396,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__top_level_declaration] = 396,
        [sym__declaration] = 396,
        [sym_const_declaration] = 396,
        [sym_var_declaration] = 396,
        [sym_function_declaration] = 396,
        [sym_method_declaration] = 396,
        [sym_type_declaration] = 396,
        [aux_sym_source_file_repeat2] = 396,
        [ts_builtin_sym_end] = 396,
        [anon_sym_const] = 396,
        [anon_sym_var] = 396,
        [anon_sym_func] = 396,
        [anon_sym_type] = 396,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_block] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_const] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_LBRACE] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__parameter_list] = 400,
        [sym_parameter_declaration] = 314,
        [anon_sym_RPAREN] = 402,
        [sym_identifier] = 318,
        [sym_comment] = 8,
    },
    [134] = {
        [anon_sym_RBRACE] = 404,
        [sym_comment] = 8,
    },
    [135] = {
        [sym__expression] = 406,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 408,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [136] = {
        [anon_sym_LBRACE] = 410,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_block] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_DOT] = 412,
        [anon_sym_const] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_LBRACE] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [139] = {
        [sym__top_level_declaration] = 134,
        [sym__declaration] = 134,
        [sym_const_declaration] = 134,
        [sym_var_declaration] = 134,
        [sym_function_declaration] = 134,
        [sym_method_declaration] = 134,
        [sym_block] = 134,
        [sym_type_declaration] = 134,
        [aux_sym_source_file_repeat2] = 134,
        [ts_builtin_sym_end] = 134,
        [anon_sym_const] = 134,
        [anon_sym_var] = 134,
        [anon_sym_func] = 134,
        [anon_sym_LBRACE] = 134,
        [anon_sym_type] = 134,
        [sym_comment] = 8,
    },
    [140] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 416,
        [anon_sym_RBRACE] = 418,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [141] = {
        [anon_sym_RBRACE] = 420,
        [sym_comment] = 8,
    },
    [142] = {
        [sym__top_level_declaration] = 162,
        [sym__declaration] = 162,
        [sym_const_declaration] = 162,
        [sym_var_declaration] = 162,
        [sym_function_declaration] = 162,
        [sym_method_declaration] = 162,
        [sym_block] = 162,
        [sym_type_declaration] = 162,
        [aux_sym_source_file_repeat2] = 162,
        [ts_builtin_sym_end] = 162,
        [anon_sym_const] = 162,
        [anon_sym_var] = 162,
        [anon_sym_func] = 162,
        [anon_sym_LBRACE] = 162,
        [anon_sym_type] = 162,
        [sym_comment] = 8,
    },
    [143] = {
        [sym__top_level_declaration] = 194,
        [sym__declaration] = 194,
        [sym_const_declaration] = 194,
        [sym_var_declaration] = 194,
        [sym_function_declaration] = 194,
        [sym_method_declaration] = 194,
        [sym_block] = 194,
        [sym_type_declaration] = 194,
        [aux_sym_source_file_repeat2] = 194,
        [ts_builtin_sym_end] = 194,
        [anon_sym_const] = 194,
        [anon_sym_var] = 194,
        [anon_sym_func] = 194,
        [anon_sym_LBRACE] = 194,
        [anon_sym_type] = 194,
        [sym_comment] = 8,
    },
    [144] = {
        [anon_sym_RBRACK] = 422,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__type] = 424,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_qualified_identifier] = 330,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [146] = {
        [sym__top_level_declaration] = 238,
        [sym__declaration] = 238,
        [sym_const_declaration] = 238,
        [sym_var_declaration] = 238,
        [sym_function_declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_block] = 238,
        [sym_type_declaration] = 238,
        [aux_sym_source_file_repeat2] = 238,
        [ts_builtin_sym_end] = 238,
        [anon_sym_const] = 238,
        [anon_sym_var] = 238,
        [anon_sym_func] = 238,
        [anon_sym_LBRACE] = 238,
        [anon_sym_type] = 238,
        [sym_comment] = 8,
    },
    [147] = {
        [sym__type] = 426,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_qualified_identifier] = 330,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__top_level_declaration] = 256,
        [sym__declaration] = 256,
        [sym_const_declaration] = 256,
        [sym_var_declaration] = 256,
        [sym_function_declaration] = 256,
        [sym_method_declaration] = 256,
        [sym_block] = 256,
        [sym_type_declaration] = 256,
        [aux_sym_source_file_repeat2] = 256,
        [ts_builtin_sym_end] = 256,
        [anon_sym_const] = 256,
        [anon_sym_var] = 256,
        [anon_sym_func] = 256,
        [anon_sym_LBRACE] = 256,
        [anon_sym_type] = 256,
        [sym_comment] = 8,
    },
    [149] = {
        [sym__top_level_declaration] = 428,
        [sym__declaration] = 428,
        [sym_const_declaration] = 428,
        [sym_var_declaration] = 428,
        [sym_function_declaration] = 428,
        [sym_method_declaration] = 428,
        [sym_type_declaration] = 428,
        [aux_sym_source_file_repeat2] = 428,
        [ts_builtin_sym_end] = 428,
        [anon_sym_const] = 428,
        [anon_sym_var] = 428,
        [anon_sym_func] = 428,
        [anon_sym_type] = 428,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_RPAREN] = 430,
        [anon_sym_COMMA] = 348,
        [sym_comment] = 8,
    },
    [151] = {
        [sym__top_level_declaration] = 352,
        [sym__declaration] = 352,
        [sym_const_declaration] = 352,
        [sym_var_declaration] = 352,
        [sym_function_declaration] = 352,
        [sym_method_declaration] = 352,
        [sym_block] = 352,
        [sym_type_declaration] = 352,
        [aux_sym_source_file_repeat2] = 352,
        [ts_builtin_sym_end] = 352,
        [anon_sym_const] = 352,
        [anon_sym_var] = 352,
        [anon_sym_func] = 352,
        [anon_sym_LBRACE] = 352,
        [anon_sym_type] = 352,
        [sym_comment] = 8,
    },
    [152] = {
        [sym__top_level_declaration] = 388,
        [sym__declaration] = 388,
        [sym_const_declaration] = 388,
        [sym_var_declaration] = 388,
        [sym_function_declaration] = 388,
        [sym_method_declaration] = 388,
        [sym_block] = 388,
        [sym_type_declaration] = 388,
        [aux_sym_source_file_repeat2] = 388,
        [ts_builtin_sym_end] = 388,
        [anon_sym_const] = 388,
        [anon_sym_var] = 388,
        [anon_sym_func] = 388,
        [anon_sym_LBRACE] = 388,
        [anon_sym_type] = 388,
        [sym_comment] = 8,
    },
    [153] = {
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
    [154] = {
        [anon_sym_RPAREN] = 434,
        [anon_sym_COMMA] = 348,
        [sym_comment] = 8,
    },
    [155] = {
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [156] = {
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [157] = {
        [sym_parameters] = 436,
        [anon_sym_LPAREN] = 322,
        [sym_comment] = 8,
    },
    [158] = {
        [sym__top_level_declaration] = 438,
        [sym__declaration] = 438,
        [sym_const_declaration] = 438,
        [sym_var_declaration] = 438,
        [sym_function_declaration] = 438,
        [sym_method_declaration] = 438,
        [sym_parameters] = 440,
        [sym_block] = 442,
        [sym_type_declaration] = 438,
        [sym__type] = 440,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_qualified_identifier] = 330,
        [aux_sym_source_file_repeat2] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_LPAREN] = 332,
        [anon_sym_const] = 438,
        [anon_sym_var] = 438,
        [anon_sym_func] = 438,
        [anon_sym_LBRACE] = 334,
        [anon_sym_type] = 438,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [159] = {
        [sym__top_level_declaration] = 444,
        [sym__declaration] = 444,
        [sym_const_declaration] = 444,
        [sym_var_declaration] = 444,
        [sym_function_declaration] = 444,
        [sym_method_declaration] = 444,
        [sym_block] = 446,
        [sym_type_declaration] = 444,
        [aux_sym_source_file_repeat2] = 444,
        [ts_builtin_sym_end] = 444,
        [anon_sym_const] = 444,
        [anon_sym_var] = 444,
        [anon_sym_func] = 444,
        [anon_sym_LBRACE] = 334,
        [anon_sym_type] = 444,
        [sym_comment] = 8,
    },
    [160] = {
        [sym__top_level_declaration] = 444,
        [sym__declaration] = 444,
        [sym_const_declaration] = 444,
        [sym_var_declaration] = 444,
        [sym_function_declaration] = 444,
        [sym_method_declaration] = 444,
        [sym_type_declaration] = 444,
        [aux_sym_source_file_repeat2] = 444,
        [ts_builtin_sym_end] = 444,
        [anon_sym_const] = 444,
        [anon_sym_var] = 444,
        [anon_sym_func] = 444,
        [anon_sym_type] = 444,
        [sym_comment] = 8,
    },
    [161] = {
        [sym__top_level_declaration] = 448,
        [sym__declaration] = 448,
        [sym_const_declaration] = 448,
        [sym_var_declaration] = 448,
        [sym_function_declaration] = 448,
        [sym_method_declaration] = 448,
        [sym_type_declaration] = 448,
        [aux_sym_source_file_repeat2] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_const] = 448,
        [anon_sym_var] = 448,
        [anon_sym_func] = 448,
        [anon_sym_type] = 448,
        [sym_comment] = 8,
    },
    [162] = {
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
    [163] = {
        [sym__type] = 452,
        [sym_array_type] = 454,
        [sym_slice_type] = 454,
        [sym_struct_type] = 454,
        [sym_qualified_identifier] = 454,
        [anon_sym_EQ] = 456,
        [anon_sym_LBRACK] = 458,
        [anon_sym_struct] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 8,
    },
    [164] = {
        [sym_var_spec] = 464,
        [sym_identifier_list] = 466,
        [aux_sym_var_declaration_repeat1] = 468,
        [anon_sym_RPAREN] = 470,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [165] = {
        [sym__type] = 164,
        [sym_array_type] = 164,
        [sym_slice_type] = 164,
        [sym_struct_type] = 164,
        [sym_qualified_identifier] = 164,
        [aux_sym_identifier_list_repeat1] = 472,
        [anon_sym_EQ] = 164,
        [anon_sym_COMMA] = 474,
        [anon_sym_LBRACK] = 164,
        [anon_sym_struct] = 164,
        [sym_identifier] = 164,
        [sym_comment] = 8,
    },
    [166] = {
        [sym__type] = 178,
        [sym_array_type] = 178,
        [sym_slice_type] = 178,
        [sym_struct_type] = 178,
        [sym_qualified_identifier] = 178,
        [anon_sym_EQ] = 178,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 178,
        [sym_identifier] = 178,
        [sym_comment] = 8,
    },
    [167] = {
        [sym_identifier] = 476,
        [sym_comment] = 8,
    },
    [168] = {
        [sym__type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_qualified_identifier] = 184,
        [aux_sym_identifier_list_repeat1] = 478,
        [anon_sym_EQ] = 184,
        [anon_sym_COMMA] = 474,
        [anon_sym_LBRACK] = 184,
        [anon_sym_struct] = 184,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [169] = {
        [sym__type] = 188,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_EQ] = 188,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 188,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [170] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 480,
        [sym_comment] = 8,
    },
    [171] = {
        [sym__type] = 482,
        [sym_array_type] = 484,
        [sym_slice_type] = 484,
        [sym_struct_type] = 484,
        [sym_qualified_identifier] = 484,
        [anon_sym_EQ] = 486,
        [anon_sym_LBRACK] = 488,
        [anon_sym_struct] = 490,
        [sym_identifier] = 492,
        [sym_comment] = 8,
    },
    [172] = {
        [anon_sym_RPAREN] = 494,
        [sym_comment] = 8,
    },
    [173] = {
        [sym__top_level_declaration] = 496,
        [sym__declaration] = 496,
        [sym_const_declaration] = 496,
        [sym_var_declaration] = 496,
        [sym_function_declaration] = 496,
        [sym_method_declaration] = 496,
        [sym_type_declaration] = 496,
        [aux_sym_source_file_repeat2] = 496,
        [ts_builtin_sym_end] = 496,
        [anon_sym_const] = 496,
        [anon_sym_var] = 496,
        [anon_sym_func] = 496,
        [anon_sym_type] = 496,
        [sym_comment] = 8,
    },
    [174] = {
        [sym__top_level_declaration] = 498,
        [sym__declaration] = 498,
        [sym_const_declaration] = 498,
        [sym_var_declaration] = 498,
        [sym_function_declaration] = 498,
        [sym_method_declaration] = 498,
        [sym_type_declaration] = 498,
        [aux_sym_source_file_repeat2] = 498,
        [ts_builtin_sym_end] = 498,
        [anon_sym_const] = 498,
        [anon_sym_var] = 498,
        [anon_sym_func] = 498,
        [anon_sym_type] = 498,
        [sym_comment] = 8,
    },
    [175] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 500,
        [anon_sym_EQ] = 502,
        [sym_comment] = 8,
    },
    [176] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [anon_sym_EQ] = 114,
        [sym_comment] = 8,
    },
    [177] = {
        [sym_expression_list] = 504,
        [sym__expression] = 506,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [178] = {
        [sym__expression] = 516,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 518,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [179] = {
        [anon_sym_LBRACE] = 520,
        [sym_comment] = 8,
    },
    [180] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [anon_sym_DOT] = 522,
        [anon_sym_EQ] = 114,
        [sym_comment] = 8,
    },
    [181] = {
        [sym_identifier] = 524,
        [sym_comment] = 8,
    },
    [182] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 134,
        [anon_sym_EQ] = 134,
        [sym_comment] = 8,
    },
    [183] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 526,
        [anon_sym_RBRACE] = 528,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [184] = {
        [anon_sym_RBRACE] = 530,
        [sym_comment] = 8,
    },
    [185] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [186] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [anon_sym_EQ] = 194,
        [sym_comment] = 8,
    },
    [187] = {
        [anon_sym_RBRACK] = 532,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [188] = {
        [sym__type] = 534,
        [sym_array_type] = 484,
        [sym_slice_type] = 484,
        [sym_struct_type] = 484,
        [sym_qualified_identifier] = 484,
        [anon_sym_LBRACK] = 488,
        [anon_sym_struct] = 490,
        [sym_identifier] = 492,
        [sym_comment] = 8,
    },
    [189] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 238,
        [anon_sym_EQ] = 238,
        [sym_comment] = 8,
    },
    [190] = {
        [sym__type] = 536,
        [sym_array_type] = 484,
        [sym_slice_type] = 484,
        [sym_struct_type] = 484,
        [sym_qualified_identifier] = 484,
        [anon_sym_LBRACK] = 488,
        [anon_sym_struct] = 490,
        [sym_identifier] = 492,
        [sym_comment] = 8,
    },
    [191] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 256,
        [anon_sym_EQ] = 256,
        [sym_comment] = 8,
    },
    [192] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 538,
        [sym_comment] = 8,
    },
    [193] = {
        [aux_sym_expression_list_repeat1] = 540,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 542,
        [anon_sym_COMMA] = 544,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 548,
        [anon_sym_DASH] = 548,
        [anon_sym_PIPE] = 548,
        [anon_sym_CARET] = 548,
        [anon_sym_EQ_EQ] = 550,
        [anon_sym_BANG_EQ] = 550,
        [anon_sym_LT] = 550,
        [anon_sym_LT_EQ] = 550,
        [anon_sym_GT] = 550,
        [anon_sym_GT_EQ] = 550,
        [anon_sym_AMP_AMP] = 552,
        [anon_sym_PIPE_PIPE] = 554,
        [sym_comment] = 8,
    },
    [194] = {
        [aux_sym_expression_list_repeat1] = 230,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [anon_sym_COMMA] = 230,
        [anon_sym_STAR] = 230,
        [anon_sym_SLASH] = 230,
        [anon_sym_PERCENT] = 230,
        [anon_sym_LT_LT] = 230,
        [anon_sym_GT_GT] = 230,
        [anon_sym_AMP] = 230,
        [anon_sym_AMP_CARET] = 230,
        [anon_sym_PLUS] = 230,
        [anon_sym_DASH] = 230,
        [anon_sym_PIPE] = 230,
        [anon_sym_CARET] = 230,
        [anon_sym_EQ_EQ] = 230,
        [anon_sym_BANG_EQ] = 230,
        [anon_sym_LT] = 230,
        [anon_sym_LT_EQ] = 230,
        [anon_sym_GT] = 230,
        [anon_sym_GT_EQ] = 230,
        [anon_sym_AMP_AMP] = 230,
        [anon_sym_PIPE_PIPE] = 230,
        [sym_comment] = 8,
    },
    [195] = {
        [aux_sym_expression_list_repeat1] = 232,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 232,
        [anon_sym_COMMA] = 232,
        [anon_sym_STAR] = 232,
        [anon_sym_SLASH] = 232,
        [anon_sym_PERCENT] = 232,
        [anon_sym_LT_LT] = 232,
        [anon_sym_GT_GT] = 232,
        [anon_sym_AMP] = 232,
        [anon_sym_AMP_CARET] = 232,
        [anon_sym_PLUS] = 232,
        [anon_sym_DASH] = 232,
        [anon_sym_PIPE] = 232,
        [anon_sym_CARET] = 232,
        [anon_sym_EQ_EQ] = 232,
        [anon_sym_BANG_EQ] = 232,
        [anon_sym_LT] = 232,
        [anon_sym_LT_EQ] = 232,
        [anon_sym_GT] = 232,
        [anon_sym_GT_EQ] = 232,
        [anon_sym_AMP_AMP] = 232,
        [anon_sym_PIPE_PIPE] = 232,
        [sym_comment] = 8,
    },
    [196] = {
        [aux_sym_expression_list_repeat1] = 182,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 182,
        [anon_sym_COMMA] = 182,
        [anon_sym_STAR] = 182,
        [anon_sym_SLASH] = 182,
        [anon_sym_PERCENT] = 182,
        [anon_sym_LT_LT] = 182,
        [anon_sym_GT_GT] = 182,
        [anon_sym_AMP] = 182,
        [anon_sym_AMP_CARET] = 182,
        [anon_sym_PLUS] = 182,
        [anon_sym_DASH] = 182,
        [anon_sym_PIPE] = 182,
        [anon_sym_CARET] = 182,
        [anon_sym_EQ_EQ] = 182,
        [anon_sym_BANG_EQ] = 182,
        [anon_sym_LT] = 182,
        [anon_sym_LT_EQ] = 182,
        [anon_sym_GT] = 182,
        [anon_sym_GT_EQ] = 182,
        [anon_sym_AMP_AMP] = 182,
        [anon_sym_PIPE_PIPE] = 182,
        [sym_comment] = 8,
    },
    [197] = {
        [aux_sym_expression_list_repeat1] = 236,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 236,
        [anon_sym_COMMA] = 236,
        [anon_sym_STAR] = 236,
        [anon_sym_SLASH] = 236,
        [anon_sym_PERCENT] = 236,
        [anon_sym_LT_LT] = 236,
        [anon_sym_GT_GT] = 236,
        [anon_sym_AMP] = 236,
        [anon_sym_AMP_CARET] = 236,
        [anon_sym_PLUS] = 236,
        [anon_sym_DASH] = 236,
        [anon_sym_PIPE] = 236,
        [anon_sym_CARET] = 236,
        [anon_sym_EQ_EQ] = 236,
        [anon_sym_BANG_EQ] = 236,
        [anon_sym_LT] = 236,
        [anon_sym_LT_EQ] = 236,
        [anon_sym_GT] = 236,
        [anon_sym_GT_EQ] = 236,
        [anon_sym_AMP_AMP] = 236,
        [anon_sym_PIPE_PIPE] = 236,
        [sym_comment] = 8,
    },
    [198] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 556,
        [sym_comment] = 8,
    },
    [199] = {
        [sym__expression] = 558,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [200] = {
        [sym__expression] = 560,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [201] = {
        [sym__expression] = 562,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__expression] = 564,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [203] = {
        [sym__expression] = 566,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [204] = {
        [sym__expression] = 568,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [205] = {
        [aux_sym_expression_list_repeat1] = 252,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 548,
        [anon_sym_DASH] = 548,
        [anon_sym_PIPE] = 548,
        [anon_sym_CARET] = 548,
        [anon_sym_EQ_EQ] = 550,
        [anon_sym_BANG_EQ] = 550,
        [anon_sym_LT] = 550,
        [anon_sym_LT_EQ] = 550,
        [anon_sym_GT] = 550,
        [anon_sym_GT_EQ] = 550,
        [anon_sym_AMP_AMP] = 552,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [206] = {
        [aux_sym_expression_list_repeat1] = 252,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 548,
        [anon_sym_DASH] = 548,
        [anon_sym_PIPE] = 548,
        [anon_sym_CARET] = 548,
        [anon_sym_EQ_EQ] = 550,
        [anon_sym_BANG_EQ] = 550,
        [anon_sym_LT] = 550,
        [anon_sym_LT_EQ] = 550,
        [anon_sym_GT] = 550,
        [anon_sym_GT_EQ] = 550,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [207] = {
        [aux_sym_expression_list_repeat1] = 252,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 548,
        [anon_sym_DASH] = 548,
        [anon_sym_PIPE] = 548,
        [anon_sym_CARET] = 548,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [208] = {
        [aux_sym_expression_list_repeat1] = 252,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 252,
        [anon_sym_DASH] = 252,
        [anon_sym_PIPE] = 252,
        [anon_sym_CARET] = 252,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [209] = {
        [aux_sym_expression_list_repeat1] = 254,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_STAR] = 254,
        [anon_sym_SLASH] = 254,
        [anon_sym_PERCENT] = 254,
        [anon_sym_LT_LT] = 254,
        [anon_sym_GT_GT] = 254,
        [anon_sym_AMP] = 254,
        [anon_sym_AMP_CARET] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_PIPE] = 254,
        [anon_sym_CARET] = 254,
        [anon_sym_EQ_EQ] = 254,
        [anon_sym_BANG_EQ] = 254,
        [anon_sym_LT] = 254,
        [anon_sym_LT_EQ] = 254,
        [anon_sym_GT] = 254,
        [anon_sym_GT_EQ] = 254,
        [anon_sym_AMP_AMP] = 254,
        [anon_sym_PIPE_PIPE] = 254,
        [sym_comment] = 8,
    },
    [210] = {
        [aux_sym_expression_list_repeat1] = 570,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 572,
        [anon_sym_COMMA] = 544,
        [anon_sym_STAR] = 546,
        [anon_sym_SLASH] = 546,
        [anon_sym_PERCENT] = 546,
        [anon_sym_LT_LT] = 546,
        [anon_sym_GT_GT] = 546,
        [anon_sym_AMP] = 546,
        [anon_sym_AMP_CARET] = 546,
        [anon_sym_PLUS] = 548,
        [anon_sym_DASH] = 548,
        [anon_sym_PIPE] = 548,
        [anon_sym_CARET] = 548,
        [anon_sym_EQ_EQ] = 550,
        [anon_sym_BANG_EQ] = 550,
        [anon_sym_LT] = 550,
        [anon_sym_LT_EQ] = 550,
        [anon_sym_GT] = 550,
        [anon_sym_GT_EQ] = 550,
        [anon_sym_AMP_AMP] = 552,
        [anon_sym_PIPE_PIPE] = 554,
        [sym_comment] = 8,
    },
    [211] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 574,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_expression_list] = 576,
        [sym__expression] = 506,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [213] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 578,
        [sym_comment] = 8,
    },
    [214] = {
        [sym_var_spec] = 464,
        [sym_identifier_list] = 466,
        [aux_sym_var_declaration_repeat1] = 580,
        [anon_sym_RPAREN] = 582,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [215] = {
        [anon_sym_RPAREN] = 584,
        [sym_comment] = 8,
    },
    [216] = {
        [sym__top_level_declaration] = 500,
        [sym__declaration] = 500,
        [sym_const_declaration] = 500,
        [sym_var_declaration] = 500,
        [sym_function_declaration] = 500,
        [sym_method_declaration] = 500,
        [sym_type_declaration] = 500,
        [aux_sym_source_file_repeat2] = 500,
        [ts_builtin_sym_end] = 500,
        [anon_sym_const] = 500,
        [anon_sym_EQ] = 586,
        [anon_sym_var] = 500,
        [anon_sym_func] = 500,
        [anon_sym_type] = 500,
        [sym_comment] = 8,
    },
    [217] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_const] = 114,
        [anon_sym_EQ] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [218] = {
        [sym_expression_list] = 588,
        [sym__expression] = 590,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [219] = {
        [sym__expression] = 600,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 602,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [220] = {
        [anon_sym_LBRACE] = 604,
        [sym_comment] = 8,
    },
    [221] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_DOT] = 606,
        [anon_sym_const] = 114,
        [anon_sym_EQ] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [222] = {
        [sym_identifier] = 608,
        [sym_comment] = 8,
    },
    [223] = {
        [sym__top_level_declaration] = 134,
        [sym__declaration] = 134,
        [sym_const_declaration] = 134,
        [sym_var_declaration] = 134,
        [sym_function_declaration] = 134,
        [sym_method_declaration] = 134,
        [sym_type_declaration] = 134,
        [aux_sym_source_file_repeat2] = 134,
        [ts_builtin_sym_end] = 134,
        [anon_sym_const] = 134,
        [anon_sym_EQ] = 134,
        [anon_sym_var] = 134,
        [anon_sym_func] = 134,
        [anon_sym_type] = 134,
        [sym_comment] = 8,
    },
    [224] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 610,
        [anon_sym_RBRACE] = 612,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [225] = {
        [anon_sym_RBRACE] = 614,
        [sym_comment] = 8,
    },
    [226] = {
        [sym__top_level_declaration] = 162,
        [sym__declaration] = 162,
        [sym_const_declaration] = 162,
        [sym_var_declaration] = 162,
        [sym_function_declaration] = 162,
        [sym_method_declaration] = 162,
        [sym_type_declaration] = 162,
        [aux_sym_source_file_repeat2] = 162,
        [ts_builtin_sym_end] = 162,
        [anon_sym_const] = 162,
        [anon_sym_EQ] = 162,
        [anon_sym_var] = 162,
        [anon_sym_func] = 162,
        [anon_sym_type] = 162,
        [sym_comment] = 8,
    },
    [227] = {
        [sym__top_level_declaration] = 194,
        [sym__declaration] = 194,
        [sym_const_declaration] = 194,
        [sym_var_declaration] = 194,
        [sym_function_declaration] = 194,
        [sym_method_declaration] = 194,
        [sym_type_declaration] = 194,
        [aux_sym_source_file_repeat2] = 194,
        [ts_builtin_sym_end] = 194,
        [anon_sym_const] = 194,
        [anon_sym_EQ] = 194,
        [anon_sym_var] = 194,
        [anon_sym_func] = 194,
        [anon_sym_type] = 194,
        [sym_comment] = 8,
    },
    [228] = {
        [anon_sym_RBRACK] = 616,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [229] = {
        [sym__type] = 618,
        [sym_array_type] = 454,
        [sym_slice_type] = 454,
        [sym_struct_type] = 454,
        [sym_qualified_identifier] = 454,
        [anon_sym_LBRACK] = 458,
        [anon_sym_struct] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 8,
    },
    [230] = {
        [sym__top_level_declaration] = 238,
        [sym__declaration] = 238,
        [sym_const_declaration] = 238,
        [sym_var_declaration] = 238,
        [sym_function_declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_type_declaration] = 238,
        [aux_sym_source_file_repeat2] = 238,
        [ts_builtin_sym_end] = 238,
        [anon_sym_const] = 238,
        [anon_sym_EQ] = 238,
        [anon_sym_var] = 238,
        [anon_sym_func] = 238,
        [anon_sym_type] = 238,
        [sym_comment] = 8,
    },
    [231] = {
        [sym__type] = 620,
        [sym_array_type] = 454,
        [sym_slice_type] = 454,
        [sym_struct_type] = 454,
        [sym_qualified_identifier] = 454,
        [anon_sym_LBRACK] = 458,
        [anon_sym_struct] = 460,
        [sym_identifier] = 462,
        [sym_comment] = 8,
    },
    [232] = {
        [sym__top_level_declaration] = 256,
        [sym__declaration] = 256,
        [sym_const_declaration] = 256,
        [sym_var_declaration] = 256,
        [sym_function_declaration] = 256,
        [sym_method_declaration] = 256,
        [sym_type_declaration] = 256,
        [aux_sym_source_file_repeat2] = 256,
        [ts_builtin_sym_end] = 256,
        [anon_sym_const] = 256,
        [anon_sym_EQ] = 256,
        [anon_sym_var] = 256,
        [anon_sym_func] = 256,
        [anon_sym_type] = 256,
        [sym_comment] = 8,
    },
    [233] = {
        [sym__top_level_declaration] = 538,
        [sym__declaration] = 538,
        [sym_const_declaration] = 538,
        [sym_var_declaration] = 538,
        [sym_function_declaration] = 538,
        [sym_method_declaration] = 538,
        [sym_type_declaration] = 538,
        [aux_sym_source_file_repeat2] = 538,
        [ts_builtin_sym_end] = 538,
        [anon_sym_const] = 538,
        [anon_sym_var] = 538,
        [anon_sym_func] = 538,
        [anon_sym_type] = 538,
        [sym_comment] = 8,
    },
    [234] = {
        [sym__top_level_declaration] = 542,
        [sym__declaration] = 542,
        [sym_const_declaration] = 542,
        [sym_var_declaration] = 542,
        [sym_function_declaration] = 542,
        [sym_method_declaration] = 542,
        [sym_type_declaration] = 542,
        [aux_sym_source_file_repeat2] = 542,
        [aux_sym_expression_list_repeat1] = 622,
        [ts_builtin_sym_end] = 542,
        [anon_sym_const] = 542,
        [anon_sym_var] = 542,
        [anon_sym_func] = 542,
        [anon_sym_COMMA] = 624,
        [anon_sym_type] = 542,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 632,
        [anon_sym_PIPE_PIPE] = 634,
        [sym_comment] = 8,
    },
    [235] = {
        [sym__top_level_declaration] = 230,
        [sym__declaration] = 230,
        [sym_const_declaration] = 230,
        [sym_var_declaration] = 230,
        [sym_function_declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_type_declaration] = 230,
        [aux_sym_source_file_repeat2] = 230,
        [aux_sym_expression_list_repeat1] = 230,
        [ts_builtin_sym_end] = 230,
        [anon_sym_const] = 230,
        [anon_sym_var] = 230,
        [anon_sym_func] = 230,
        [anon_sym_COMMA] = 230,
        [anon_sym_type] = 230,
        [anon_sym_STAR] = 230,
        [anon_sym_SLASH] = 230,
        [anon_sym_PERCENT] = 230,
        [anon_sym_LT_LT] = 230,
        [anon_sym_GT_GT] = 230,
        [anon_sym_AMP] = 230,
        [anon_sym_AMP_CARET] = 230,
        [anon_sym_PLUS] = 230,
        [anon_sym_DASH] = 230,
        [anon_sym_PIPE] = 230,
        [anon_sym_CARET] = 230,
        [anon_sym_EQ_EQ] = 230,
        [anon_sym_BANG_EQ] = 230,
        [anon_sym_LT] = 230,
        [anon_sym_LT_EQ] = 230,
        [anon_sym_GT] = 230,
        [anon_sym_GT_EQ] = 230,
        [anon_sym_AMP_AMP] = 230,
        [anon_sym_PIPE_PIPE] = 230,
        [sym_comment] = 8,
    },
    [236] = {
        [sym__top_level_declaration] = 232,
        [sym__declaration] = 232,
        [sym_const_declaration] = 232,
        [sym_var_declaration] = 232,
        [sym_function_declaration] = 232,
        [sym_method_declaration] = 232,
        [sym_type_declaration] = 232,
        [aux_sym_source_file_repeat2] = 232,
        [aux_sym_expression_list_repeat1] = 232,
        [ts_builtin_sym_end] = 232,
        [anon_sym_const] = 232,
        [anon_sym_var] = 232,
        [anon_sym_func] = 232,
        [anon_sym_COMMA] = 232,
        [anon_sym_type] = 232,
        [anon_sym_STAR] = 232,
        [anon_sym_SLASH] = 232,
        [anon_sym_PERCENT] = 232,
        [anon_sym_LT_LT] = 232,
        [anon_sym_GT_GT] = 232,
        [anon_sym_AMP] = 232,
        [anon_sym_AMP_CARET] = 232,
        [anon_sym_PLUS] = 232,
        [anon_sym_DASH] = 232,
        [anon_sym_PIPE] = 232,
        [anon_sym_CARET] = 232,
        [anon_sym_EQ_EQ] = 232,
        [anon_sym_BANG_EQ] = 232,
        [anon_sym_LT] = 232,
        [anon_sym_LT_EQ] = 232,
        [anon_sym_GT] = 232,
        [anon_sym_GT_EQ] = 232,
        [anon_sym_AMP_AMP] = 232,
        [anon_sym_PIPE_PIPE] = 232,
        [sym_comment] = 8,
    },
    [237] = {
        [sym__top_level_declaration] = 182,
        [sym__declaration] = 182,
        [sym_const_declaration] = 182,
        [sym_var_declaration] = 182,
        [sym_function_declaration] = 182,
        [sym_method_declaration] = 182,
        [sym_type_declaration] = 182,
        [aux_sym_source_file_repeat2] = 182,
        [aux_sym_expression_list_repeat1] = 182,
        [ts_builtin_sym_end] = 182,
        [anon_sym_const] = 182,
        [anon_sym_var] = 182,
        [anon_sym_func] = 182,
        [anon_sym_COMMA] = 182,
        [anon_sym_type] = 182,
        [anon_sym_STAR] = 182,
        [anon_sym_SLASH] = 182,
        [anon_sym_PERCENT] = 182,
        [anon_sym_LT_LT] = 182,
        [anon_sym_GT_GT] = 182,
        [anon_sym_AMP] = 182,
        [anon_sym_AMP_CARET] = 182,
        [anon_sym_PLUS] = 182,
        [anon_sym_DASH] = 182,
        [anon_sym_PIPE] = 182,
        [anon_sym_CARET] = 182,
        [anon_sym_EQ_EQ] = 182,
        [anon_sym_BANG_EQ] = 182,
        [anon_sym_LT] = 182,
        [anon_sym_LT_EQ] = 182,
        [anon_sym_GT] = 182,
        [anon_sym_GT_EQ] = 182,
        [anon_sym_AMP_AMP] = 182,
        [anon_sym_PIPE_PIPE] = 182,
        [sym_comment] = 8,
    },
    [238] = {
        [sym__top_level_declaration] = 236,
        [sym__declaration] = 236,
        [sym_const_declaration] = 236,
        [sym_var_declaration] = 236,
        [sym_function_declaration] = 236,
        [sym_method_declaration] = 236,
        [sym_type_declaration] = 236,
        [aux_sym_source_file_repeat2] = 236,
        [aux_sym_expression_list_repeat1] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_const] = 236,
        [anon_sym_var] = 236,
        [anon_sym_func] = 236,
        [anon_sym_COMMA] = 236,
        [anon_sym_type] = 236,
        [anon_sym_STAR] = 236,
        [anon_sym_SLASH] = 236,
        [anon_sym_PERCENT] = 236,
        [anon_sym_LT_LT] = 236,
        [anon_sym_GT_GT] = 236,
        [anon_sym_AMP] = 236,
        [anon_sym_AMP_CARET] = 236,
        [anon_sym_PLUS] = 236,
        [anon_sym_DASH] = 236,
        [anon_sym_PIPE] = 236,
        [anon_sym_CARET] = 236,
        [anon_sym_EQ_EQ] = 236,
        [anon_sym_BANG_EQ] = 236,
        [anon_sym_LT] = 236,
        [anon_sym_LT_EQ] = 236,
        [anon_sym_GT] = 236,
        [anon_sym_GT_EQ] = 236,
        [anon_sym_AMP_AMP] = 236,
        [anon_sym_PIPE_PIPE] = 236,
        [sym_comment] = 8,
    },
    [239] = {
        [sym__top_level_declaration] = 556,
        [sym__declaration] = 556,
        [sym_const_declaration] = 556,
        [sym_var_declaration] = 556,
        [sym_function_declaration] = 556,
        [sym_method_declaration] = 556,
        [sym_type_declaration] = 556,
        [aux_sym_source_file_repeat2] = 556,
        [ts_builtin_sym_end] = 556,
        [anon_sym_const] = 556,
        [anon_sym_var] = 556,
        [anon_sym_func] = 556,
        [anon_sym_type] = 556,
        [sym_comment] = 8,
    },
    [240] = {
        [sym__expression] = 636,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [241] = {
        [sym__expression] = 638,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [242] = {
        [sym__expression] = 640,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [243] = {
        [sym__expression] = 642,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [244] = {
        [sym__expression] = 644,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [245] = {
        [sym__expression] = 646,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [246] = {
        [sym__top_level_declaration] = 252,
        [sym__declaration] = 252,
        [sym_const_declaration] = 252,
        [sym_var_declaration] = 252,
        [sym_function_declaration] = 252,
        [sym_method_declaration] = 252,
        [sym_type_declaration] = 252,
        [aux_sym_source_file_repeat2] = 252,
        [aux_sym_expression_list_repeat1] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_const] = 252,
        [anon_sym_var] = 252,
        [anon_sym_func] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_type] = 252,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 632,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__top_level_declaration] = 252,
        [sym__declaration] = 252,
        [sym_const_declaration] = 252,
        [sym_var_declaration] = 252,
        [sym_function_declaration] = 252,
        [sym_method_declaration] = 252,
        [sym_type_declaration] = 252,
        [aux_sym_source_file_repeat2] = 252,
        [aux_sym_expression_list_repeat1] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_const] = 252,
        [anon_sym_var] = 252,
        [anon_sym_func] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_type] = 252,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [248] = {
        [sym__top_level_declaration] = 252,
        [sym__declaration] = 252,
        [sym_const_declaration] = 252,
        [sym_var_declaration] = 252,
        [sym_function_declaration] = 252,
        [sym_method_declaration] = 252,
        [sym_type_declaration] = 252,
        [aux_sym_source_file_repeat2] = 252,
        [aux_sym_expression_list_repeat1] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_const] = 252,
        [anon_sym_var] = 252,
        [anon_sym_func] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_type] = 252,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [249] = {
        [sym__top_level_declaration] = 252,
        [sym__declaration] = 252,
        [sym_const_declaration] = 252,
        [sym_var_declaration] = 252,
        [sym_function_declaration] = 252,
        [sym_method_declaration] = 252,
        [sym_type_declaration] = 252,
        [aux_sym_source_file_repeat2] = 252,
        [aux_sym_expression_list_repeat1] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_const] = 252,
        [anon_sym_var] = 252,
        [anon_sym_func] = 252,
        [anon_sym_COMMA] = 252,
        [anon_sym_type] = 252,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 252,
        [anon_sym_DASH] = 252,
        [anon_sym_PIPE] = 252,
        [anon_sym_CARET] = 252,
        [anon_sym_EQ_EQ] = 252,
        [anon_sym_BANG_EQ] = 252,
        [anon_sym_LT] = 252,
        [anon_sym_LT_EQ] = 252,
        [anon_sym_GT] = 252,
        [anon_sym_GT_EQ] = 252,
        [anon_sym_AMP_AMP] = 252,
        [anon_sym_PIPE_PIPE] = 252,
        [sym_comment] = 8,
    },
    [250] = {
        [sym__top_level_declaration] = 254,
        [sym__declaration] = 254,
        [sym_const_declaration] = 254,
        [sym_var_declaration] = 254,
        [sym_function_declaration] = 254,
        [sym_method_declaration] = 254,
        [sym_type_declaration] = 254,
        [aux_sym_source_file_repeat2] = 254,
        [aux_sym_expression_list_repeat1] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_const] = 254,
        [anon_sym_var] = 254,
        [anon_sym_func] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_type] = 254,
        [anon_sym_STAR] = 254,
        [anon_sym_SLASH] = 254,
        [anon_sym_PERCENT] = 254,
        [anon_sym_LT_LT] = 254,
        [anon_sym_GT_GT] = 254,
        [anon_sym_AMP] = 254,
        [anon_sym_AMP_CARET] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_PIPE] = 254,
        [anon_sym_CARET] = 254,
        [anon_sym_EQ_EQ] = 254,
        [anon_sym_BANG_EQ] = 254,
        [anon_sym_LT] = 254,
        [anon_sym_LT_EQ] = 254,
        [anon_sym_GT] = 254,
        [anon_sym_GT_EQ] = 254,
        [anon_sym_AMP_AMP] = 254,
        [anon_sym_PIPE_PIPE] = 254,
        [sym_comment] = 8,
    },
    [251] = {
        [sym__top_level_declaration] = 572,
        [sym__declaration] = 572,
        [sym_const_declaration] = 572,
        [sym_var_declaration] = 572,
        [sym_function_declaration] = 572,
        [sym_method_declaration] = 572,
        [sym_type_declaration] = 572,
        [aux_sym_source_file_repeat2] = 572,
        [aux_sym_expression_list_repeat1] = 648,
        [ts_builtin_sym_end] = 572,
        [anon_sym_const] = 572,
        [anon_sym_var] = 572,
        [anon_sym_func] = 572,
        [anon_sym_COMMA] = 624,
        [anon_sym_type] = 572,
        [anon_sym_STAR] = 626,
        [anon_sym_SLASH] = 626,
        [anon_sym_PERCENT] = 626,
        [anon_sym_LT_LT] = 626,
        [anon_sym_GT_GT] = 626,
        [anon_sym_AMP] = 626,
        [anon_sym_AMP_CARET] = 626,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 632,
        [anon_sym_PIPE_PIPE] = 634,
        [sym_comment] = 8,
    },
    [252] = {
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
    [253] = {
        [sym_expression_list] = 650,
        [sym__expression] = 590,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [254] = {
        [sym__top_level_declaration] = 578,
        [sym__declaration] = 578,
        [sym_const_declaration] = 578,
        [sym_var_declaration] = 578,
        [sym_function_declaration] = 578,
        [sym_method_declaration] = 578,
        [sym_type_declaration] = 578,
        [aux_sym_source_file_repeat2] = 578,
        [ts_builtin_sym_end] = 578,
        [anon_sym_const] = 578,
        [anon_sym_var] = 578,
        [anon_sym_func] = 578,
        [anon_sym_type] = 578,
        [sym_comment] = 8,
    },
    [255] = {
        [sym__top_level_declaration] = 652,
        [sym__declaration] = 652,
        [sym_const_declaration] = 652,
        [sym_var_declaration] = 652,
        [sym_function_declaration] = 652,
        [sym_method_declaration] = 652,
        [sym_type_declaration] = 652,
        [aux_sym_source_file_repeat2] = 652,
        [ts_builtin_sym_end] = 652,
        [anon_sym_const] = 652,
        [anon_sym_var] = 652,
        [anon_sym_func] = 652,
        [anon_sym_type] = 652,
        [sym_comment] = 8,
    },
    [256] = {
        [sym__type] = 654,
        [sym_array_type] = 656,
        [sym_slice_type] = 656,
        [sym_struct_type] = 656,
        [sym_qualified_identifier] = 656,
        [anon_sym_EQ] = 658,
        [anon_sym_LBRACK] = 660,
        [anon_sym_struct] = 662,
        [sym_identifier] = 664,
        [sym_comment] = 8,
    },
    [257] = {
        [sym_const_spec] = 666,
        [sym_identifier_list] = 668,
        [aux_sym_const_declaration_repeat1] = 670,
        [anon_sym_RPAREN] = 672,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [258] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 674,
        [sym_comment] = 8,
    },
    [259] = {
        [sym__type] = 676,
        [sym_array_type] = 656,
        [sym_slice_type] = 656,
        [sym_struct_type] = 656,
        [sym_qualified_identifier] = 656,
        [anon_sym_EQ] = 678,
        [anon_sym_LBRACK] = 660,
        [anon_sym_struct] = 662,
        [sym_identifier] = 664,
        [sym_comment] = 8,
    },
    [260] = {
        [anon_sym_RPAREN] = 680,
        [sym_comment] = 8,
    },
    [261] = {
        [sym__top_level_declaration] = 682,
        [sym__declaration] = 682,
        [sym_const_declaration] = 682,
        [sym_var_declaration] = 682,
        [sym_function_declaration] = 682,
        [sym_method_declaration] = 682,
        [sym_type_declaration] = 682,
        [aux_sym_source_file_repeat2] = 682,
        [ts_builtin_sym_end] = 682,
        [anon_sym_const] = 682,
        [anon_sym_var] = 682,
        [anon_sym_func] = 682,
        [anon_sym_type] = 682,
        [sym_comment] = 8,
    },
    [262] = {
        [sym__top_level_declaration] = 684,
        [sym__declaration] = 684,
        [sym_const_declaration] = 684,
        [sym_var_declaration] = 684,
        [sym_function_declaration] = 684,
        [sym_method_declaration] = 684,
        [sym_type_declaration] = 684,
        [aux_sym_source_file_repeat2] = 684,
        [ts_builtin_sym_end] = 684,
        [anon_sym_const] = 684,
        [anon_sym_var] = 684,
        [anon_sym_func] = 684,
        [anon_sym_type] = 684,
        [sym_comment] = 8,
    },
    [263] = {
        [anon_sym_EQ] = 686,
        [sym_comment] = 8,
    },
    [264] = {
        [anon_sym_EQ] = 114,
        [sym_comment] = 8,
    },
    [265] = {
        [sym_expression_list] = 688,
        [sym__expression] = 506,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [266] = {
        [sym__expression] = 690,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [anon_sym_RBRACK] = 692,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 126,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 8,
    },
    [267] = {
        [anon_sym_LBRACE] = 694,
        [sym_comment] = 8,
    },
    [268] = {
        [anon_sym_DOT] = 696,
        [anon_sym_EQ] = 114,
        [sym_comment] = 8,
    },
    [269] = {
        [sym_identifier] = 698,
        [sym_comment] = 8,
    },
    [270] = {
        [anon_sym_EQ] = 134,
        [sym_comment] = 8,
    },
    [271] = {
        [sym_identifier_list] = 136,
        [sym_field_declaration] = 138,
        [aux_sym_struct_type_repeat1] = 700,
        [anon_sym_RBRACE] = 702,
        [anon_sym_STAR] = 144,
        [sym_identifier] = 146,
        [sym_comment] = 8,
    },
    [272] = {
        [anon_sym_RBRACE] = 704,
        [sym_comment] = 8,
    },
    [273] = {
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [274] = {
        [anon_sym_EQ] = 194,
        [sym_comment] = 8,
    },
    [275] = {
        [anon_sym_RBRACK] = 706,
        [anon_sym_STAR] = 220,
        [anon_sym_SLASH] = 220,
        [anon_sym_PERCENT] = 220,
        [anon_sym_LT_LT] = 220,
        [anon_sym_GT_GT] = 220,
        [anon_sym_AMP] = 220,
        [anon_sym_AMP_CARET] = 220,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 224,
        [anon_sym_BANG_EQ] = 224,
        [anon_sym_LT] = 224,
        [anon_sym_LT_EQ] = 224,
        [anon_sym_GT] = 224,
        [anon_sym_GT_EQ] = 224,
        [anon_sym_AMP_AMP] = 226,
        [anon_sym_PIPE_PIPE] = 228,
        [sym_comment] = 8,
    },
    [276] = {
        [sym__type] = 708,
        [sym_array_type] = 656,
        [sym_slice_type] = 656,
        [sym_struct_type] = 656,
        [sym_qualified_identifier] = 656,
        [anon_sym_LBRACK] = 660,
        [anon_sym_struct] = 662,
        [sym_identifier] = 664,
        [sym_comment] = 8,
    },
    [277] = {
        [anon_sym_EQ] = 238,
        [sym_comment] = 8,
    },
    [278] = {
        [sym__type] = 710,
        [sym_array_type] = 656,
        [sym_slice_type] = 656,
        [sym_struct_type] = 656,
        [sym_qualified_identifier] = 656,
        [anon_sym_LBRACK] = 660,
        [anon_sym_struct] = 662,
        [sym_identifier] = 664,
        [sym_comment] = 8,
    },
    [279] = {
        [anon_sym_EQ] = 256,
        [sym_comment] = 8,
    },
    [280] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 712,
        [sym_comment] = 8,
    },
    [281] = {
        [sym_expression_list] = 714,
        [sym__expression] = 506,
        [sym_unary_expression] = 508,
        [sym_binary_expression] = 508,
        [sym__primary_expression] = 508,
        [sym__string_literal] = 510,
        [sym_int_literal] = 510,
        [sym_float_literal] = 510,
        [sym_identifier] = 510,
        [sym_raw_string_literal] = 512,
        [sym_interpreted_string_literal] = 512,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 514,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 514,
        [sym_comment] = 8,
    },
    [282] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 716,
        [sym_comment] = 8,
    },
    [283] = {
        [sym_const_spec] = 666,
        [sym_identifier_list] = 668,
        [aux_sym_const_declaration_repeat1] = 718,
        [anon_sym_RPAREN] = 720,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [284] = {
        [anon_sym_RPAREN] = 722,
        [sym_comment] = 8,
    },
    [285] = {
        [anon_sym_EQ] = 724,
        [sym_comment] = 8,
    },
    [286] = {
        [sym_expression_list] = 726,
        [sym__expression] = 590,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__top_level_declaration] = 712,
        [sym__declaration] = 712,
        [sym_const_declaration] = 712,
        [sym_var_declaration] = 712,
        [sym_function_declaration] = 712,
        [sym_method_declaration] = 712,
        [sym_type_declaration] = 712,
        [aux_sym_source_file_repeat2] = 712,
        [ts_builtin_sym_end] = 712,
        [anon_sym_const] = 712,
        [anon_sym_var] = 712,
        [anon_sym_func] = 712,
        [anon_sym_type] = 712,
        [sym_comment] = 8,
    },
    [288] = {
        [sym_expression_list] = 728,
        [sym__expression] = 590,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 594,
        [sym_int_literal] = 594,
        [sym_float_literal] = 594,
        [sym_identifier] = 594,
        [sym_raw_string_literal] = 596,
        [sym_interpreted_string_literal] = 596,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 598,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 598,
        [sym_comment] = 8,
    },
    [289] = {
        [sym__top_level_declaration] = 716,
        [sym__declaration] = 716,
        [sym_const_declaration] = 716,
        [sym_var_declaration] = 716,
        [sym_function_declaration] = 716,
        [sym_method_declaration] = 716,
        [sym_type_declaration] = 716,
        [aux_sym_source_file_repeat2] = 716,
        [ts_builtin_sym_end] = 716,
        [anon_sym_const] = 716,
        [anon_sym_var] = 716,
        [anon_sym_func] = 716,
        [anon_sym_type] = 716,
        [sym_comment] = 8,
    },
    [290] = {
        [sym_import_declaration] = 730,
        [sym__top_level_declaration] = 730,
        [sym__declaration] = 730,
        [sym_const_declaration] = 730,
        [sym_var_declaration] = 730,
        [sym_function_declaration] = 730,
        [sym_method_declaration] = 730,
        [sym_type_declaration] = 730,
        [aux_sym_source_file_repeat1] = 730,
        [aux_sym_source_file_repeat2] = 730,
        [ts_builtin_sym_end] = 730,
        [anon_sym_import] = 730,
        [anon_sym_const] = 730,
        [anon_sym_var] = 730,
        [anon_sym_func] = 730,
        [anon_sym_type] = 730,
        [sym_comment] = 8,
    },
    [291] = {
        [sym_import_declaration] = 732,
        [sym__top_level_declaration] = 732,
        [sym__declaration] = 732,
        [sym_const_declaration] = 732,
        [sym_var_declaration] = 732,
        [sym_function_declaration] = 732,
        [sym_method_declaration] = 732,
        [sym_type_declaration] = 732,
        [aux_sym_source_file_repeat1] = 732,
        [aux_sym_source_file_repeat2] = 732,
        [ts_builtin_sym_end] = 732,
        [anon_sym_import] = 732,
        [anon_sym_const] = 732,
        [anon_sym_var] = 732,
        [anon_sym_func] = 732,
        [anon_sym_type] = 732,
        [sym_comment] = 8,
    },
    [292] = {
        [sym_import_spec] = 734,
        [sym__string_literal] = 736,
        [aux_sym_import_declaration_repeat1] = 738,
        [anon_sym_RPAREN] = 740,
        [anon_sym_DOT] = 742,
        [sym_identifier] = 742,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [293] = {
        [sym__string_literal] = 744,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [294] = {
        [sym_import_declaration] = 182,
        [sym__top_level_declaration] = 182,
        [sym__declaration] = 182,
        [sym_const_declaration] = 182,
        [sym_var_declaration] = 182,
        [sym_function_declaration] = 182,
        [sym_method_declaration] = 182,
        [sym_type_declaration] = 182,
        [aux_sym_source_file_repeat1] = 182,
        [aux_sym_source_file_repeat2] = 182,
        [ts_builtin_sym_end] = 182,
        [anon_sym_import] = 182,
        [anon_sym_const] = 182,
        [anon_sym_var] = 182,
        [anon_sym_func] = 182,
        [anon_sym_type] = 182,
        [sym_comment] = 8,
    },
    [295] = {
        [sym_import_declaration] = 746,
        [sym__top_level_declaration] = 746,
        [sym__declaration] = 746,
        [sym_const_declaration] = 746,
        [sym_var_declaration] = 746,
        [sym_function_declaration] = 746,
        [sym_method_declaration] = 746,
        [sym_type_declaration] = 746,
        [aux_sym_source_file_repeat1] = 746,
        [aux_sym_source_file_repeat2] = 746,
        [ts_builtin_sym_end] = 746,
        [anon_sym_import] = 746,
        [anon_sym_const] = 746,
        [anon_sym_var] = 746,
        [anon_sym_func] = 746,
        [anon_sym_type] = 746,
        [sym_comment] = 8,
    },
    [296] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 748,
        [sym_comment] = 8,
    },
    [297] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 732,
        [sym_comment] = 8,
    },
    [298] = {
        [anon_sym_RPAREN] = 750,
        [sym_comment] = 8,
    },
    [299] = {
        [sym_import_declaration] = 752,
        [sym__top_level_declaration] = 752,
        [sym__declaration] = 752,
        [sym_const_declaration] = 752,
        [sym_var_declaration] = 752,
        [sym_function_declaration] = 752,
        [sym_method_declaration] = 752,
        [sym_type_declaration] = 752,
        [aux_sym_source_file_repeat1] = 752,
        [aux_sym_source_file_repeat2] = 752,
        [ts_builtin_sym_end] = 752,
        [anon_sym_import] = 752,
        [anon_sym_const] = 752,
        [anon_sym_var] = 752,
        [anon_sym_func] = 752,
        [anon_sym_type] = 752,
        [sym_comment] = 8,
    },
    [300] = {
        [sym__string_literal] = 754,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [301] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 746,
        [sym_comment] = 8,
    },
    [302] = {
        [sym_import_declaration] = 756,
        [sym__top_level_declaration] = 756,
        [sym__declaration] = 756,
        [sym_const_declaration] = 756,
        [sym_var_declaration] = 756,
        [sym_function_declaration] = 756,
        [sym_method_declaration] = 756,
        [sym_type_declaration] = 756,
        [aux_sym_source_file_repeat1] = 756,
        [aux_sym_source_file_repeat2] = 756,
        [ts_builtin_sym_end] = 756,
        [anon_sym_import] = 756,
        [anon_sym_const] = 756,
        [anon_sym_var] = 756,
        [anon_sym_func] = 756,
        [anon_sym_type] = 756,
        [sym_comment] = 8,
    },
    [303] = {
        [sym_import_spec] = 734,
        [sym__string_literal] = 736,
        [aux_sym_import_declaration_repeat1] = 758,
        [anon_sym_RPAREN] = 760,
        [anon_sym_DOT] = 742,
        [sym_identifier] = 742,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [304] = {
        [anon_sym_RPAREN] = 762,
        [sym_comment] = 8,
    },
    [305] = {
        [ts_builtin_sym_end] = 764,
        [sym_comment] = 8,
    },
    [306] = {
        [ts_builtin_sym_end] = 766,
        [sym_comment] = 8,
    },
    [307] = {
        [sym__top_level_declaration] = 768,
        [sym__declaration] = 768,
        [sym_const_declaration] = 768,
        [sym_var_declaration] = 768,
        [sym_function_declaration] = 768,
        [sym_method_declaration] = 768,
        [sym_type_declaration] = 768,
        [aux_sym_source_file_repeat2] = 768,
        [ts_builtin_sym_end] = 768,
        [anon_sym_const] = 768,
        [anon_sym_var] = 768,
        [anon_sym_func] = 768,
        [anon_sym_type] = 768,
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
    [42] = {.count = 1}, SHIFT(307, 0),
    [44] = {.count = 1}, SHIFT(306, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(305, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(290, 0),
    [58] = {.count = 1}, SHIFT(291, 0),
    [60] = {.count = 1}, SHIFT(292, 0),
    [62] = {.count = 1}, SHIFT(293, 0),
    [64] = {.count = 1}, SHIFT(294, 0),
    [66] = {.count = 1}, SHIFT(255, 0),
    [68] = {.count = 1}, SHIFT(256, 0),
    [70] = {.count = 1}, SHIFT(257, 0),
    [72] = {.count = 1}, SHIFT(165, 0),
    [74] = {.count = 1}, SHIFT(162, 0),
    [76] = {.count = 1}, SHIFT(163, 0),
    [78] = {.count = 1}, SHIFT(164, 0),
    [80] = {.count = 1}, SHIFT(101, 0),
    [82] = {.count = 1}, SHIFT(102, 0),
    [84] = {.count = 1}, SHIFT(103, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(78, 0),
    [96] = {.count = 1}, SHIFT(79, 0),
    [98] = {.count = 1}, SHIFT(80, 0),
    [100] = {.count = 1}, SHIFT(81, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, SHIFT(23, 0),
    [112] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [114] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [116] = {.count = 1}, SHIFT(73, 0),
    [118] = {.count = 1}, SHIFT(55, 0),
    [120] = {.count = 1}, SHIFT(56, 0),
    [122] = {.count = 1}, SHIFT(74, 0),
    [124] = {.count = 1}, SHIFT(58, 0),
    [126] = {.count = 1}, SHIFT(59, 0),
    [128] = {.count = 1}, SHIFT(26, 0),
    [130] = {.count = 1}, SHIFT(24, 0),
    [132] = {.count = 1}, SHIFT(25, 0),
    [134] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [136] = {.count = 1}, SHIFT(27, 0),
    [138] = {.count = 1}, SHIFT(28, 0),
    [140] = {.count = 1}, SHIFT(29, 0),
    [142] = {.count = 1}, SHIFT(30, 0),
    [144] = {.count = 1}, SHIFT(31, 0),
    [146] = {.count = 1}, SHIFT(32, 0),
    [148] = {.count = 1}, SHIFT(39, 0),
    [150] = {.count = 1}, SHIFT(44, 0),
    [152] = {.count = 1}, SHIFT(45, 0),
    [154] = {.count = 1}, SHIFT(46, 0),
    [156] = {.count = 1}, SHIFT(47, 0),
    [158] = {.count = 1}, SHIFT(42, 0),
    [160] = {.count = 1}, SHIFT(41, 0),
    [162] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [164] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [166] = {.count = 1}, SHIFT(33, 0),
    [168] = {.count = 1}, SHIFT(34, 0),
    [170] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [172] = {.count = 1}, SHIFT(35, 0),
    [174] = {.count = 1}, SHIFT(36, 0),
    [176] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [178] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [180] = {.count = 1}, SHIFT(37, 0),
    [182] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [184] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [186] = {.count = 1}, SHIFT(38, 0),
    [188] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [190] = {.count = 1}, SHIFT(40, 0),
    [192] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [194] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [196] = {.count = 1}, SHIFT(43, 0),
    [198] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [200] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [202] = {.count = 1}, SHIFT(54, 0),
    [204] = {.count = 1}, SHIFT(57, 0),
    [206] = {.count = 1}, SHIFT(50, 0),
    [208] = {.count = 1}, SHIFT(48, 0),
    [210] = {.count = 1}, SHIFT(49, 0),
    [212] = {.count = 1}, SHIFT(51, 0),
    [214] = {.count = 1}, SHIFT(52, 0),
    [216] = {.count = 1}, SHIFT(53, 0),
    [218] = {.count = 1}, SHIFT(61, 0),
    [220] = {.count = 1}, SHIFT(62, 0),
    [222] = {.count = 1}, SHIFT(63, 0),
    [224] = {.count = 1}, SHIFT(64, 0),
    [226] = {.count = 1}, SHIFT(65, 0),
    [228] = {.count = 1}, SHIFT(66, 0),
    [230] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [232] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [234] = {.count = 1}, SHIFT(60, 0),
    [236] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [238] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [240] = {.count = 1}, SHIFT(72, 0),
    [242] = {.count = 1}, SHIFT(71, 0),
    [244] = {.count = 1}, SHIFT(70, 0),
    [246] = {.count = 1}, SHIFT(69, 0),
    [248] = {.count = 1}, SHIFT(68, 0),
    [250] = {.count = 1}, SHIFT(67, 0),
    [252] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [254] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [256] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [258] = {.count = 1}, SHIFT(76, 0),
    [260] = {.count = 1}, SHIFT(75, 0),
    [262] = {.count = 1}, SHIFT(77, 0),
    [264] = {.count = 1}, SHIFT(99, 0),
    [266] = {.count = 1}, SHIFT(98, 0),
    [268] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [270] = {.count = 1}, SHIFT(82, 0),
    [272] = {.count = 1}, SHIFT(83, 0),
    [274] = {.count = 1}, SHIFT(84, 0),
    [276] = {.count = 1}, SHIFT(85, 0),
    [278] = {.count = 1}, SHIFT(86, 0),
    [280] = {.count = 1}, SHIFT(93, 0),
    [282] = {.count = 1}, SHIFT(94, 0),
    [284] = {.count = 1}, SHIFT(89, 0),
    [286] = {.count = 1}, SHIFT(87, 0),
    [288] = {.count = 1}, SHIFT(88, 0),
    [290] = {.count = 1}, SHIFT(90, 0),
    [292] = {.count = 1}, SHIFT(91, 0),
    [294] = {.count = 1}, SHIFT(92, 0),
    [296] = {.count = 1}, SHIFT(96, 0),
    [298] = {.count = 1}, SHIFT(95, 0),
    [300] = {.count = 1}, SHIFT(97, 0),
    [302] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [304] = {.count = 1}, SHIFT(100, 0),
    [306] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [308] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [310] = {.count = 1}, SHIFT(157, 0),
    [312] = {.count = 1}, SHIFT(154, 0),
    [314] = {.count = 1}, SHIFT(107, 0),
    [316] = {.count = 1}, SHIFT(155, 0),
    [318] = {.count = 1}, SHIFT(109, 0),
    [320] = {.count = 1}, SHIFT(104, 0),
    [322] = {.count = 1}, SHIFT(105, 0),
    [324] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [326] = {.count = 1}, SHIFT(130, 0),
    [328] = {.count = 1}, SHIFT(131, 0),
    [330] = {.count = 1}, SHIFT(132, 0),
    [332] = {.count = 1}, SHIFT(133, 0),
    [334] = {.count = 1}, SHIFT(134, 0),
    [336] = {.count = 1}, SHIFT(135, 0),
    [338] = {.count = 1}, SHIFT(136, 0),
    [340] = {.count = 1}, SHIFT(137, 0),
    [342] = {.count = 1}, SHIFT(106, 0),
    [344] = {.count = 1}, SHIFT(108, 0),
    [346] = {.count = 1}, SHIFT(126, 0),
    [348] = {.count = 1}, SHIFT(127, 0),
    [350] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [352] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [354] = {.count = 1}, SHIFT(110, 0),
    [356] = {.count = 1}, SHIFT(111, 0),
    [358] = {.count = 1}, SHIFT(112, 0),
    [360] = {.count = 1}, SHIFT(113, 0),
    [362] = {.count = 1}, SHIFT(114, 0),
    [364] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [366] = {.count = 1}, SHIFT(121, 0),
    [368] = {.count = 1}, SHIFT(122, 0),
    [370] = {.count = 1}, SHIFT(117, 0),
    [372] = {.count = 1}, SHIFT(115, 0),
    [374] = {.count = 1}, SHIFT(116, 0),
    [376] = {.count = 1}, SHIFT(118, 0),
    [378] = {.count = 1}, SHIFT(119, 0),
    [380] = {.count = 1}, SHIFT(120, 0),
    [382] = {.count = 1}, SHIFT(124, 0),
    [384] = {.count = 1}, SHIFT(123, 0),
    [386] = {.count = 1}, SHIFT(125, 0),
    [388] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [390] = {.count = 1}, SHIFT(128, 0),
    [392] = {.count = 1}, SHIFT(129, 0),
    [394] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [396] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [398] = {.count = 1}, SHIFT(153, 0),
    [400] = {.count = 1}, SHIFT(150, 0),
    [402] = {.count = 1}, SHIFT(151, 0),
    [404] = {.count = 1}, SHIFT(149, 0),
    [406] = {.count = 1}, SHIFT(144, 0),
    [408] = {.count = 1}, SHIFT(145, 0),
    [410] = {.count = 1}, SHIFT(140, 0),
    [412] = {.count = 1}, SHIFT(138, 0),
    [414] = {.count = 1}, SHIFT(139, 0),
    [416] = {.count = 1}, SHIFT(141, 0),
    [418] = {.count = 1}, SHIFT(142, 0),
    [420] = {.count = 1}, SHIFT(143, 0),
    [422] = {.count = 1}, SHIFT(147, 0),
    [424] = {.count = 1}, SHIFT(146, 0),
    [426] = {.count = 1}, SHIFT(148, 0),
    [428] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [430] = {.count = 1}, SHIFT(152, 0),
    [432] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [434] = {.count = 1}, SHIFT(156, 0),
    [436] = {.count = 1}, SHIFT(158, 0),
    [438] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [440] = {.count = 1}, SHIFT(159, 0),
    [442] = {.count = 1}, SHIFT(160, 0),
    [444] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [446] = {.count = 1}, SHIFT(161, 0),
    [448] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [450] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [452] = {.count = 1}, SHIFT(216, 0),
    [454] = {.count = 1}, SHIFT(217, 0),
    [456] = {.count = 1}, SHIFT(218, 0),
    [458] = {.count = 1}, SHIFT(219, 0),
    [460] = {.count = 1}, SHIFT(220, 0),
    [462] = {.count = 1}, SHIFT(221, 0),
    [464] = {.count = 1}, SHIFT(170, 0),
    [466] = {.count = 1}, SHIFT(171, 0),
    [468] = {.count = 1}, SHIFT(172, 0),
    [470] = {.count = 1}, SHIFT(173, 0),
    [472] = {.count = 1}, SHIFT(166, 0),
    [474] = {.count = 1}, SHIFT(167, 0),
    [476] = {.count = 1}, SHIFT(168, 0),
    [478] = {.count = 1}, SHIFT(169, 0),
    [480] = {.count = 1}, SHIFT(214, 0),
    [482] = {.count = 1}, SHIFT(175, 0),
    [484] = {.count = 1}, SHIFT(176, 0),
    [486] = {.count = 1}, SHIFT(177, 0),
    [488] = {.count = 1}, SHIFT(178, 0),
    [490] = {.count = 1}, SHIFT(179, 0),
    [492] = {.count = 1}, SHIFT(180, 0),
    [494] = {.count = 1}, SHIFT(174, 0),
    [496] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [498] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [500] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [502] = {.count = 1}, SHIFT(212, 0),
    [504] = {.count = 1}, SHIFT(192, 0),
    [506] = {.count = 1}, SHIFT(193, 0),
    [508] = {.count = 1}, SHIFT(194, 0),
    [510] = {.count = 1}, SHIFT(195, 0),
    [512] = {.count = 1}, SHIFT(196, 0),
    [514] = {.count = 1}, SHIFT(197, 0),
    [516] = {.count = 1}, SHIFT(187, 0),
    [518] = {.count = 1}, SHIFT(188, 0),
    [520] = {.count = 1}, SHIFT(183, 0),
    [522] = {.count = 1}, SHIFT(181, 0),
    [524] = {.count = 1}, SHIFT(182, 0),
    [526] = {.count = 1}, SHIFT(184, 0),
    [528] = {.count = 1}, SHIFT(185, 0),
    [530] = {.count = 1}, SHIFT(186, 0),
    [532] = {.count = 1}, SHIFT(190, 0),
    [534] = {.count = 1}, SHIFT(189, 0),
    [536] = {.count = 1}, SHIFT(191, 0),
    [538] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [540] = {.count = 1}, SHIFT(198, 0),
    [542] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [544] = {.count = 1}, SHIFT(199, 0),
    [546] = {.count = 1}, SHIFT(200, 0),
    [548] = {.count = 1}, SHIFT(201, 0),
    [550] = {.count = 1}, SHIFT(202, 0),
    [552] = {.count = 1}, SHIFT(203, 0),
    [554] = {.count = 1}, SHIFT(204, 0),
    [556] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [558] = {.count = 1}, SHIFT(210, 0),
    [560] = {.count = 1}, SHIFT(209, 0),
    [562] = {.count = 1}, SHIFT(208, 0),
    [564] = {.count = 1}, SHIFT(207, 0),
    [566] = {.count = 1}, SHIFT(206, 0),
    [568] = {.count = 1}, SHIFT(205, 0),
    [570] = {.count = 1}, SHIFT(211, 0),
    [572] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [574] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [576] = {.count = 1}, SHIFT(213, 0),
    [578] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [580] = {.count = 1}, SHIFT(215, 0),
    [582] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [584] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [586] = {.count = 1}, SHIFT(253, 0),
    [588] = {.count = 1}, SHIFT(233, 0),
    [590] = {.count = 1}, SHIFT(234, 0),
    [592] = {.count = 1}, SHIFT(235, 0),
    [594] = {.count = 1}, SHIFT(236, 0),
    [596] = {.count = 1}, SHIFT(237, 0),
    [598] = {.count = 1}, SHIFT(238, 0),
    [600] = {.count = 1}, SHIFT(228, 0),
    [602] = {.count = 1}, SHIFT(229, 0),
    [604] = {.count = 1}, SHIFT(224, 0),
    [606] = {.count = 1}, SHIFT(222, 0),
    [608] = {.count = 1}, SHIFT(223, 0),
    [610] = {.count = 1}, SHIFT(225, 0),
    [612] = {.count = 1}, SHIFT(226, 0),
    [614] = {.count = 1}, SHIFT(227, 0),
    [616] = {.count = 1}, SHIFT(231, 0),
    [618] = {.count = 1}, SHIFT(230, 0),
    [620] = {.count = 1}, SHIFT(232, 0),
    [622] = {.count = 1}, SHIFT(239, 0),
    [624] = {.count = 1}, SHIFT(240, 0),
    [626] = {.count = 1}, SHIFT(241, 0),
    [628] = {.count = 1}, SHIFT(242, 0),
    [630] = {.count = 1}, SHIFT(243, 0),
    [632] = {.count = 1}, SHIFT(244, 0),
    [634] = {.count = 1}, SHIFT(245, 0),
    [636] = {.count = 1}, SHIFT(251, 0),
    [638] = {.count = 1}, SHIFT(250, 0),
    [640] = {.count = 1}, SHIFT(249, 0),
    [642] = {.count = 1}, SHIFT(248, 0),
    [644] = {.count = 1}, SHIFT(247, 0),
    [646] = {.count = 1}, SHIFT(246, 0),
    [648] = {.count = 1}, SHIFT(252, 0),
    [650] = {.count = 1}, SHIFT(254, 0),
    [652] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [654] = {.count = 1}, SHIFT(285, 0),
    [656] = {.count = 1}, SHIFT(264, 0),
    [658] = {.count = 1}, SHIFT(286, 0),
    [660] = {.count = 1}, SHIFT(266, 0),
    [662] = {.count = 1}, SHIFT(267, 0),
    [664] = {.count = 1}, SHIFT(268, 0),
    [666] = {.count = 1}, SHIFT(258, 0),
    [668] = {.count = 1}, SHIFT(259, 0),
    [670] = {.count = 1}, SHIFT(260, 0),
    [672] = {.count = 1}, SHIFT(261, 0),
    [674] = {.count = 1}, SHIFT(283, 0),
    [676] = {.count = 1}, SHIFT(263, 0),
    [678] = {.count = 1}, SHIFT(265, 0),
    [680] = {.count = 1}, SHIFT(262, 0),
    [682] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [684] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [686] = {.count = 1}, SHIFT(281, 0),
    [688] = {.count = 1}, SHIFT(280, 0),
    [690] = {.count = 1}, SHIFT(275, 0),
    [692] = {.count = 1}, SHIFT(276, 0),
    [694] = {.count = 1}, SHIFT(271, 0),
    [696] = {.count = 1}, SHIFT(269, 0),
    [698] = {.count = 1}, SHIFT(270, 0),
    [700] = {.count = 1}, SHIFT(272, 0),
    [702] = {.count = 1}, SHIFT(273, 0),
    [704] = {.count = 1}, SHIFT(274, 0),
    [706] = {.count = 1}, SHIFT(278, 0),
    [708] = {.count = 1}, SHIFT(277, 0),
    [710] = {.count = 1}, SHIFT(279, 0),
    [712] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [714] = {.count = 1}, SHIFT(282, 0),
    [716] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [718] = {.count = 1}, SHIFT(284, 0),
    [720] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [722] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [724] = {.count = 1}, SHIFT(288, 0),
    [726] = {.count = 1}, SHIFT(287, 0),
    [728] = {.count = 1}, SHIFT(289, 0),
    [730] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [732] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [734] = {.count = 1}, SHIFT(296, 0),
    [736] = {.count = 1}, SHIFT(297, 0),
    [738] = {.count = 1}, SHIFT(298, 0),
    [740] = {.count = 1}, SHIFT(299, 0),
    [742] = {.count = 1}, SHIFT(300, 0),
    [744] = {.count = 1}, SHIFT(295, 0),
    [746] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [748] = {.count = 1}, SHIFT(303, 0),
    [750] = {.count = 1}, SHIFT(302, 0),
    [752] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [754] = {.count = 1}, SHIFT(301, 0),
    [756] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [758] = {.count = 1}, SHIFT(304, 0),
    [760] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [762] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [764] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [766] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [768] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
