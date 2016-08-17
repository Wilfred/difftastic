#include "tree_sitter/parser.h"

#define STATE_COUNT 368
#define SYMBOL_COUNT 89

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
    sym_map_type,
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
    anon_sym_map,
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
    [sym_map_type] = "map_type",
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
    [anon_sym_map] = "map",
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
    [sym_map_type] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ('j' <= lookahead && lookahead <= 'l') ||
                (lookahead == 'n') ||
                (lookahead == 'o') ||
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
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 'p')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(65);
            if (lookahead == 't')
                ADVANCE(71);
            if (lookahead == 'v')
                ADVANCE(75);
            if (lookahead == '{')
                ADVANCE(78);
            if (lookahead == '|')
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(81);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_map);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'k')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'g')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_package);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
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
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_struct);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'y')
                ADVANCE(72);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
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
            ACCEPT_TOKEN(anon_sym_type);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_var);
        case 78:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 79:
            if (lookahead == '|')
                ADVANCE(80);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 80:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 81:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 82:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(82);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(84);
            LEX_ERROR();
        case 83:
            if (lookahead == '/')
                ADVANCE(19);
            LEX_ERROR();
        case 84:
            if (lookahead == 'a')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'c')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 'k')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            if (lookahead == 'a')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'g')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'e')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            ACCEPT_TOKEN(anon_sym_package);
        case 91:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == '/')
                ADVANCE(83);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            LEX_ERROR();
        case 93:
            if (lookahead == 'o')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'n')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 's')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 't')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            ACCEPT_TOKEN(anon_sym_const);
        case 98:
            if (lookahead == 'u')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'n')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'c')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            ACCEPT_TOKEN(anon_sym_func);
        case 102:
            if (lookahead == 'm')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'p')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'o')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'r')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 't')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_import);
        case 108:
            if (lookahead == 'y')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'p')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'e')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_type);
        case 112:
            if (lookahead == 'a')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'r')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            ACCEPT_TOKEN(anon_sym_var);
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
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
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(83);
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
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(78);
            LEX_ERROR();
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '[')
                ADVANCE(35);
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
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(81);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '}')
                ADVANCE(81);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
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
                ADVANCE(135);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(79);
            LEX_ERROR();
        case 135:
            if (lookahead == '=')
                ADVANCE(30);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(83);
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
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(83);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(83);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
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
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            if (lookahead == 't')
                ADVANCE(71);
            if (lookahead == 'v')
                ADVANCE(75);
            if (lookahead == '{')
                ADVANCE(78);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(83);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            if (lookahead == '{')
                ADVANCE(78);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            if (lookahead == '{')
                ADVANCE(78);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(65);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(147);
            LEX_ERROR();
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(147);
            LEX_ERROR();
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
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
                ADVANCE(135);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(79);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
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
                ADVANCE(135);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(93);
            if (lookahead == 'f')
                ADVANCE(98);
            if (lookahead == 't')
                ADVANCE(108);
            if (lookahead == 'v')
                ADVANCE(112);
            if (lookahead == '|')
                ADVANCE(79);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(147);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(83);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 82,
    [1] = 91,
    [2] = 92,
    [3] = 115,
    [4] = 92,
    [5] = 92,
    [6] = 116,
    [7] = 116,
    [8] = 116,
    [9] = 116,
    [10] = 91,
    [11] = 117,
    [12] = 118,
    [13] = 118,
    [14] = 118,
    [15] = 118,
    [16] = 116,
    [17] = 119,
    [18] = 120,
    [19] = 116,
    [20] = 116,
    [21] = 121,
    [22] = 122,
    [23] = 123,
    [24] = 124,
    [25] = 115,
    [26] = 116,
    [27] = 120,
    [28] = 125,
    [29] = 125,
    [30] = 121,
    [31] = 122,
    [32] = 123,
    [33] = 126,
    [34] = 115,
    [35] = 125,
    [36] = 120,
    [37] = 125,
    [38] = 120,
    [39] = 125,
    [40] = 127,
    [41] = 120,
    [42] = 128,
    [43] = 129,
    [44] = 125,
    [45] = 115,
    [46] = 130,
    [47] = 128,
    [48] = 120,
    [49] = 115,
    [50] = 128,
    [51] = 131,
    [52] = 120,
    [53] = 132,
    [54] = 128,
    [55] = 125,
    [56] = 127,
    [57] = 129,
    [58] = 132,
    [59] = 121,
    [60] = 122,
    [61] = 123,
    [62] = 133,
    [63] = 115,
    [64] = 132,
    [65] = 120,
    [66] = 125,
    [67] = 120,
    [68] = 132,
    [69] = 127,
    [70] = 129,
    [71] = 132,
    [72] = 132,
    [73] = 134,
    [74] = 134,
    [75] = 134,
    [76] = 120,
    [77] = 134,
    [78] = 134,
    [79] = 132,
    [80] = 120,
    [81] = 136,
    [82] = 136,
    [83] = 136,
    [84] = 136,
    [85] = 136,
    [86] = 134,
    [87] = 134,
    [88] = 134,
    [89] = 134,
    [90] = 134,
    [91] = 132,
    [92] = 134,
    [93] = 120,
    [94] = 125,
    [95] = 120,
    [96] = 125,
    [97] = 120,
    [98] = 116,
    [99] = 127,
    [100] = 129,
    [101] = 116,
    [102] = 116,
    [103] = 134,
    [104] = 120,
    [105] = 116,
    [106] = 120,
    [107] = 116,
    [108] = 128,
    [109] = 137,
    [110] = 116,
    [111] = 120,
    [112] = 128,
    [113] = 128,
    [114] = 121,
    [115] = 122,
    [116] = 123,
    [117] = 138,
    [118] = 115,
    [119] = 128,
    [120] = 120,
    [121] = 125,
    [122] = 120,
    [123] = 128,
    [124] = 127,
    [125] = 129,
    [126] = 128,
    [127] = 128,
    [128] = 134,
    [129] = 120,
    [130] = 128,
    [131] = 120,
    [132] = 128,
    [133] = 116,
    [134] = 119,
    [135] = 137,
    [136] = 115,
    [137] = 119,
    [138] = 139,
    [139] = 140,
    [140] = 119,
    [141] = 141,
    [142] = 141,
    [143] = 140,
    [144] = 142,
    [145] = 141,
    [146] = 141,
    [147] = 121,
    [148] = 122,
    [149] = 123,
    [150] = 143,
    [151] = 115,
    [152] = 141,
    [153] = 120,
    [154] = 125,
    [155] = 120,
    [156] = 141,
    [157] = 127,
    [158] = 129,
    [159] = 141,
    [160] = 141,
    [161] = 134,
    [162] = 120,
    [163] = 141,
    [164] = 120,
    [165] = 141,
    [166] = 140,
    [167] = 115,
    [168] = 141,
    [169] = 142,
    [170] = 144,
    [171] = 116,
    [172] = 144,
    [173] = 119,
    [174] = 129,
    [175] = 121,
    [176] = 122,
    [177] = 123,
    [178] = 145,
    [179] = 115,
    [180] = 144,
    [181] = 120,
    [182] = 125,
    [183] = 120,
    [184] = 144,
    [185] = 127,
    [186] = 129,
    [187] = 144,
    [188] = 144,
    [189] = 134,
    [190] = 120,
    [191] = 144,
    [192] = 120,
    [193] = 144,
    [194] = 116,
    [195] = 141,
    [196] = 144,
    [197] = 144,
    [198] = 116,
    [199] = 141,
    [200] = 115,
    [201] = 115,
    [202] = 139,
    [203] = 140,
    [204] = 144,
    [205] = 116,
    [206] = 116,
    [207] = 116,
    [208] = 146,
    [209] = 119,
    [210] = 148,
    [211] = 146,
    [212] = 115,
    [213] = 148,
    [214] = 146,
    [215] = 128,
    [216] = 146,
    [217] = 137,
    [218] = 116,
    [219] = 116,
    [220] = 149,
    [221] = 149,
    [222] = 136,
    [223] = 121,
    [224] = 122,
    [225] = 123,
    [226] = 150,
    [227] = 115,
    [228] = 149,
    [229] = 120,
    [230] = 125,
    [231] = 120,
    [232] = 149,
    [233] = 127,
    [234] = 129,
    [235] = 149,
    [236] = 149,
    [237] = 134,
    [238] = 120,
    [239] = 149,
    [240] = 120,
    [241] = 149,
    [242] = 128,
    [243] = 151,
    [244] = 151,
    [245] = 151,
    [246] = 151,
    [247] = 151,
    [248] = 128,
    [249] = 136,
    [250] = 136,
    [251] = 136,
    [252] = 136,
    [253] = 136,
    [254] = 136,
    [255] = 151,
    [256] = 151,
    [257] = 151,
    [258] = 151,
    [259] = 151,
    [260] = 151,
    [261] = 128,
    [262] = 136,
    [263] = 128,
    [264] = 119,
    [265] = 137,
    [266] = 152,
    [267] = 152,
    [268] = 136,
    [269] = 121,
    [270] = 122,
    [271] = 123,
    [272] = 153,
    [273] = 115,
    [274] = 152,
    [275] = 120,
    [276] = 125,
    [277] = 120,
    [278] = 152,
    [279] = 127,
    [280] = 129,
    [281] = 152,
    [282] = 152,
    [283] = 134,
    [284] = 120,
    [285] = 152,
    [286] = 120,
    [287] = 152,
    [288] = 116,
    [289] = 154,
    [290] = 154,
    [291] = 154,
    [292] = 154,
    [293] = 154,
    [294] = 116,
    [295] = 136,
    [296] = 136,
    [297] = 136,
    [298] = 136,
    [299] = 136,
    [300] = 136,
    [301] = 154,
    [302] = 154,
    [303] = 154,
    [304] = 154,
    [305] = 154,
    [306] = 154,
    [307] = 116,
    [308] = 136,
    [309] = 116,
    [310] = 116,
    [311] = 146,
    [312] = 119,
    [313] = 128,
    [314] = 146,
    [315] = 137,
    [316] = 116,
    [317] = 116,
    [318] = 155,
    [319] = 155,
    [320] = 136,
    [321] = 121,
    [322] = 122,
    [323] = 123,
    [324] = 156,
    [325] = 115,
    [326] = 155,
    [327] = 120,
    [328] = 125,
    [329] = 120,
    [330] = 155,
    [331] = 127,
    [332] = 129,
    [333] = 155,
    [334] = 155,
    [335] = 134,
    [336] = 120,
    [337] = 155,
    [338] = 120,
    [339] = 155,
    [340] = 128,
    [341] = 136,
    [342] = 128,
    [343] = 119,
    [344] = 137,
    [345] = 155,
    [346] = 136,
    [347] = 116,
    [348] = 136,
    [349] = 116,
    [350] = 92,
    [351] = 92,
    [352] = 157,
    [353] = 158,
    [354] = 92,
    [355] = 92,
    [356] = 128,
    [357] = 128,
    [358] = 137,
    [359] = 92,
    [360] = 158,
    [361] = 128,
    [362] = 92,
    [363] = 157,
    [364] = 137,
    [365] = 91,
    [366] = 91,
    [367] = 116,
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
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_map] = 110,
        [sym_identifier] = 112,
        [sym_comment] = 8,
    },
    [19] = {
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
    [20] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_const] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__expression] = 118,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 124,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [22] = {
        [anon_sym_LBRACE] = 130,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_LBRACK] = 132,
        [sym_comment] = 8,
    },
    [24] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_DOT] = 134,
        [anon_sym_const] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [25] = {
        [sym_identifier] = 136,
        [sym_comment] = 8,
    },
    [26] = {
        [sym__top_level_declaration] = 138,
        [sym__declaration] = 138,
        [sym_const_declaration] = 138,
        [sym_var_declaration] = 138,
        [sym_function_declaration] = 138,
        [sym_method_declaration] = 138,
        [sym_type_declaration] = 138,
        [aux_sym_source_file_repeat2] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_const] = 138,
        [anon_sym_var] = 138,
        [anon_sym_func] = 138,
        [anon_sym_type] = 138,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 140,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_RBRACK] = 152,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_RBRACK] = 116,
        [sym_comment] = 8,
    },
    [30] = {
        [sym__expression] = 154,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 156,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_LBRACE] = 158,
        [sym_comment] = 8,
    },
    [32] = {
        [anon_sym_LBRACK] = 160,
        [sym_comment] = 8,
    },
    [33] = {
        [anon_sym_DOT] = 162,
        [anon_sym_RBRACK] = 116,
        [sym_comment] = 8,
    },
    [34] = {
        [sym_identifier] = 164,
        [sym_comment] = 8,
    },
    [35] = {
        [anon_sym_RBRACK] = 138,
        [sym_comment] = 8,
    },
    [36] = {
        [sym__type] = 166,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [37] = {
        [anon_sym_RBRACK] = 168,
        [sym_comment] = 8,
    },
    [38] = {
        [sym__type] = 170,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 172,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 178,
        [anon_sym_RBRACE] = 180,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 186,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_map_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_map] = 194,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [42] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 198,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_RBRACE] = 200,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_RBRACK] = 202,
        [sym_comment] = 8,
    },
    [45] = {
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__type] = 204,
        [sym_array_type] = 204,
        [sym_slice_type] = 204,
        [sym_struct_type] = 204,
        [sym_map_type] = 204,
        [sym_qualified_identifier] = 204,
        [sym__string_literal] = 206,
        [aux_sym_identifier_list_repeat1] = 208,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 210,
        [anon_sym_COMMA] = 212,
        [anon_sym_LBRACK] = 204,
        [anon_sym_struct] = 204,
        [anon_sym_map] = 204,
        [sym_identifier] = 204,
        [sym_raw_string_literal] = 214,
        [sym_interpreted_string_literal] = 214,
        [sym_comment] = 8,
    },
    [47] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 216,
        [sym_comment] = 8,
    },
    [48] = {
        [sym__type] = 218,
        [sym_array_type] = 218,
        [sym_slice_type] = 218,
        [sym_struct_type] = 218,
        [sym_map_type] = 218,
        [sym_qualified_identifier] = 218,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 218,
        [anon_sym_map] = 218,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_identifier] = 220,
        [sym_comment] = 8,
    },
    [50] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__type] = 224,
        [sym_array_type] = 224,
        [sym_slice_type] = 224,
        [sym_struct_type] = 224,
        [sym_map_type] = 224,
        [sym_qualified_identifier] = 224,
        [aux_sym_identifier_list_repeat1] = 226,
        [anon_sym_COMMA] = 212,
        [anon_sym_LBRACK] = 224,
        [anon_sym_struct] = 224,
        [anon_sym_map] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__type] = 228,
        [sym_array_type] = 228,
        [sym_slice_type] = 228,
        [sym_struct_type] = 228,
        [sym_map_type] = 228,
        [sym_qualified_identifier] = 228,
        [anon_sym_LBRACK] = 228,
        [anon_sym_struct] = 228,
        [anon_sym_map] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 8,
    },
    [53] = {
        [sym__string_literal] = 230,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 216,
        [sym_raw_string_literal] = 214,
        [sym_interpreted_string_literal] = 214,
        [sym_comment] = 8,
    },
    [54] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 232,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 234,
        [sym_comment] = 8,
    },
    [56] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 236,
        [anon_sym_RBRACE] = 238,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACE] = 240,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__string_literal] = 116,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [sym_raw_string_literal] = 116,
        [sym_interpreted_string_literal] = 116,
        [sym_comment] = 8,
    },
    [59] = {
        [sym__expression] = 242,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 244,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [60] = {
        [anon_sym_LBRACE] = 246,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_LBRACK] = 248,
        [sym_comment] = 8,
    },
    [62] = {
        [sym__string_literal] = 116,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [anon_sym_DOT] = 250,
        [sym_raw_string_literal] = 116,
        [sym_interpreted_string_literal] = 116,
        [sym_comment] = 8,
    },
    [63] = {
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [64] = {
        [sym__string_literal] = 138,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 138,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [sym_comment] = 8,
    },
    [65] = {
        [sym__type] = 254,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [66] = {
        [anon_sym_RBRACK] = 256,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__type] = 258,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_map_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_map] = 194,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [68] = {
        [sym__string_literal] = 172,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 172,
        [sym_raw_string_literal] = 172,
        [sym_interpreted_string_literal] = 172,
        [sym_comment] = 8,
    },
    [69] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 260,
        [anon_sym_RBRACE] = 262,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [70] = {
        [anon_sym_RBRACE] = 264,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__string_literal] = 202,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [sym_comment] = 8,
    },
    [72] = {
        [sym__string_literal] = 234,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 234,
        [sym_raw_string_literal] = 234,
        [sym_interpreted_string_literal] = 234,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RBRACK] = 266,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [74] = {
        [anon_sym_RBRACK] = 278,
        [anon_sym_STAR] = 278,
        [anon_sym_SLASH] = 278,
        [anon_sym_PERCENT] = 278,
        [anon_sym_LT_LT] = 278,
        [anon_sym_GT_GT] = 278,
        [anon_sym_AMP] = 278,
        [anon_sym_AMP_CARET] = 278,
        [anon_sym_PLUS] = 278,
        [anon_sym_DASH] = 278,
        [anon_sym_PIPE] = 278,
        [anon_sym_CARET] = 278,
        [anon_sym_EQ_EQ] = 278,
        [anon_sym_BANG_EQ] = 278,
        [anon_sym_LT] = 278,
        [anon_sym_LT_EQ] = 278,
        [anon_sym_GT] = 278,
        [anon_sym_GT_EQ] = 278,
        [anon_sym_AMP_AMP] = 278,
        [anon_sym_PIPE_PIPE] = 278,
        [sym_comment] = 8,
    },
    [75] = {
        [anon_sym_RBRACK] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_SLASH] = 280,
        [anon_sym_PERCENT] = 280,
        [anon_sym_LT_LT] = 280,
        [anon_sym_GT_GT] = 280,
        [anon_sym_AMP] = 280,
        [anon_sym_AMP_CARET] = 280,
        [anon_sym_PLUS] = 280,
        [anon_sym_DASH] = 280,
        [anon_sym_PIPE] = 280,
        [anon_sym_CARET] = 280,
        [anon_sym_EQ_EQ] = 280,
        [anon_sym_BANG_EQ] = 280,
        [anon_sym_LT] = 280,
        [anon_sym_LT_EQ] = 280,
        [anon_sym_GT] = 280,
        [anon_sym_GT_EQ] = 280,
        [anon_sym_AMP_AMP] = 280,
        [anon_sym_PIPE_PIPE] = 280,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 282,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_map_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_map] = 194,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [77] = {
        [anon_sym_RBRACK] = 222,
        [anon_sym_STAR] = 222,
        [anon_sym_SLASH] = 222,
        [anon_sym_PERCENT] = 222,
        [anon_sym_LT_LT] = 222,
        [anon_sym_GT_GT] = 222,
        [anon_sym_AMP] = 222,
        [anon_sym_AMP_CARET] = 222,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 222,
        [anon_sym_BANG_EQ] = 222,
        [anon_sym_LT] = 222,
        [anon_sym_LT_EQ] = 222,
        [anon_sym_GT] = 222,
        [anon_sym_GT_EQ] = 222,
        [anon_sym_AMP_AMP] = 222,
        [anon_sym_PIPE_PIPE] = 222,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_RBRACK] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_SLASH] = 284,
        [anon_sym_PERCENT] = 284,
        [anon_sym_LT_LT] = 284,
        [anon_sym_GT_GT] = 284,
        [anon_sym_AMP] = 284,
        [anon_sym_AMP_CARET] = 284,
        [anon_sym_PLUS] = 284,
        [anon_sym_DASH] = 284,
        [anon_sym_PIPE] = 284,
        [anon_sym_CARET] = 284,
        [anon_sym_EQ_EQ] = 284,
        [anon_sym_BANG_EQ] = 284,
        [anon_sym_LT] = 284,
        [anon_sym_LT_EQ] = 284,
        [anon_sym_GT] = 284,
        [anon_sym_GT_EQ] = 284,
        [anon_sym_AMP_AMP] = 284,
        [anon_sym_PIPE_PIPE] = 284,
        [sym_comment] = 8,
    },
    [79] = {
        [sym__string_literal] = 286,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [sym_raw_string_literal] = 286,
        [sym_interpreted_string_literal] = 286,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__type] = 288,
        [sym_array_type] = 188,
        [sym_slice_type] = 188,
        [sym_struct_type] = 188,
        [sym_map_type] = 188,
        [sym_qualified_identifier] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_map] = 194,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__expression] = 290,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [82] = {
        [sym__expression] = 292,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__expression] = 294,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [84] = {
        [sym__expression] = 296,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [85] = {
        [sym__expression] = 298,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [86] = {
        [anon_sym_RBRACK] = 300,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RBRACK] = 300,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RBRACK] = 300,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [89] = {
        [anon_sym_RBRACK] = 300,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 300,
        [anon_sym_DASH] = 300,
        [anon_sym_PIPE] = 300,
        [anon_sym_CARET] = 300,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RBRACK] = 302,
        [anon_sym_STAR] = 302,
        [anon_sym_SLASH] = 302,
        [anon_sym_PERCENT] = 302,
        [anon_sym_LT_LT] = 302,
        [anon_sym_GT_GT] = 302,
        [anon_sym_AMP] = 302,
        [anon_sym_AMP_CARET] = 302,
        [anon_sym_PLUS] = 302,
        [anon_sym_DASH] = 302,
        [anon_sym_PIPE] = 302,
        [anon_sym_CARET] = 302,
        [anon_sym_EQ_EQ] = 302,
        [anon_sym_BANG_EQ] = 302,
        [anon_sym_LT] = 302,
        [anon_sym_LT_EQ] = 302,
        [anon_sym_GT] = 302,
        [anon_sym_GT_EQ] = 302,
        [anon_sym_AMP_AMP] = 302,
        [anon_sym_PIPE_PIPE] = 302,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__string_literal] = 304,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 304,
        [sym_raw_string_literal] = 304,
        [sym_interpreted_string_literal] = 304,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RBRACK] = 306,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__type] = 308,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [94] = {
        [anon_sym_RBRACK] = 286,
        [sym_comment] = 8,
    },
    [95] = {
        [sym__type] = 310,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_RBRACK] = 304,
        [sym_comment] = 8,
    },
    [97] = {
        [sym__type] = 312,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_map] = 110,
        [sym_identifier] = 112,
        [sym_comment] = 8,
    },
    [98] = {
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
    [99] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 314,
        [anon_sym_RBRACE] = 316,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [100] = {
        [anon_sym_RBRACE] = 318,
        [sym_comment] = 8,
    },
    [101] = {
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
    [102] = {
        [sym__top_level_declaration] = 234,
        [sym__declaration] = 234,
        [sym_const_declaration] = 234,
        [sym_var_declaration] = 234,
        [sym_function_declaration] = 234,
        [sym_method_declaration] = 234,
        [sym_type_declaration] = 234,
        [aux_sym_source_file_repeat2] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_const] = 234,
        [anon_sym_var] = 234,
        [anon_sym_func] = 234,
        [anon_sym_type] = 234,
        [sym_comment] = 8,
    },
    [103] = {
        [anon_sym_RBRACK] = 320,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__type] = 322,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_map] = 110,
        [sym_identifier] = 112,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_type_declaration] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_const] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_type] = 286,
        [sym_comment] = 8,
    },
    [106] = {
        [sym__type] = 324,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_map] = 110,
        [sym_identifier] = 112,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__top_level_declaration] = 304,
        [sym__declaration] = 304,
        [sym_const_declaration] = 304,
        [sym_var_declaration] = 304,
        [sym_function_declaration] = 304,
        [sym_method_declaration] = 304,
        [sym_type_declaration] = 304,
        [aux_sym_source_file_repeat2] = 304,
        [ts_builtin_sym_end] = 304,
        [anon_sym_const] = 304,
        [anon_sym_var] = 304,
        [anon_sym_func] = 304,
        [anon_sym_type] = 304,
        [sym_comment] = 8,
    },
    [108] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 326,
        [sym_comment] = 8,
    },
    [109] = {
        [anon_sym_RPAREN] = 328,
        [sym_comment] = 8,
    },
    [110] = {
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
    [111] = {
        [sym__type] = 332,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_struct_type] = 334,
        [sym_map_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [anon_sym_map] = 340,
        [sym_identifier] = 342,
        [sym_comment] = 8,
    },
    [112] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 114,
        [sym_comment] = 8,
    },
    [113] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [sym_comment] = 8,
    },
    [114] = {
        [sym__expression] = 344,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 346,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [115] = {
        [anon_sym_LBRACE] = 348,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_LBRACK] = 350,
        [sym_comment] = 8,
    },
    [117] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [anon_sym_DOT] = 352,
        [sym_comment] = 8,
    },
    [118] = {
        [sym_identifier] = 354,
        [sym_comment] = 8,
    },
    [119] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 138,
        [sym_comment] = 8,
    },
    [120] = {
        [sym__type] = 356,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_RBRACK] = 358,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__type] = 360,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_struct_type] = 334,
        [sym_map_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [anon_sym_map] = 340,
        [sym_identifier] = 342,
        [sym_comment] = 8,
    },
    [123] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 172,
        [sym_comment] = 8,
    },
    [124] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 362,
        [anon_sym_RBRACE] = 364,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_RBRACE] = 366,
        [sym_comment] = 8,
    },
    [126] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [sym_comment] = 8,
    },
    [127] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 234,
        [sym_comment] = 8,
    },
    [128] = {
        [anon_sym_RBRACK] = 368,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__type] = 370,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_struct_type] = 334,
        [sym_map_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [anon_sym_map] = 340,
        [sym_identifier] = 342,
        [sym_comment] = 8,
    },
    [130] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__type] = 372,
        [sym_array_type] = 334,
        [sym_slice_type] = 334,
        [sym_struct_type] = 334,
        [sym_map_type] = 334,
        [sym_qualified_identifier] = 334,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 338,
        [anon_sym_map] = 340,
        [sym_identifier] = 342,
        [sym_comment] = 8,
    },
    [132] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 304,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__top_level_declaration] = 374,
        [sym__declaration] = 374,
        [sym_const_declaration] = 374,
        [sym_var_declaration] = 374,
        [sym_function_declaration] = 374,
        [sym_method_declaration] = 374,
        [sym_type_declaration] = 374,
        [aux_sym_source_file_repeat2] = 374,
        [ts_builtin_sym_end] = 374,
        [anon_sym_const] = 374,
        [anon_sym_var] = 374,
        [anon_sym_func] = 374,
        [anon_sym_type] = 374,
        [sym_comment] = 8,
    },
    [134] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 376,
        [anon_sym_RPAREN] = 378,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [135] = {
        [anon_sym_RPAREN] = 380,
        [sym_comment] = 8,
    },
    [136] = {
        [sym_identifier] = 382,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__parameter_list] = 384,
        [sym_parameter_declaration] = 386,
        [anon_sym_RPAREN] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_parameters] = 392,
        [anon_sym_LPAREN] = 394,
        [sym_comment] = 8,
    },
    [139] = {
        [sym__top_level_declaration] = 396,
        [sym__declaration] = 396,
        [sym_const_declaration] = 396,
        [sym_var_declaration] = 396,
        [sym_function_declaration] = 396,
        [sym_method_declaration] = 396,
        [sym_parameters] = 398,
        [sym_block] = 400,
        [sym_type_declaration] = 396,
        [sym__type] = 398,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_map_type] = 402,
        [sym_qualified_identifier] = 402,
        [aux_sym_source_file_repeat2] = 396,
        [ts_builtin_sym_end] = 396,
        [anon_sym_LPAREN] = 404,
        [anon_sym_const] = 396,
        [anon_sym_var] = 396,
        [anon_sym_func] = 396,
        [anon_sym_LBRACE] = 406,
        [anon_sym_type] = 396,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 410,
        [anon_sym_map] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__parameter_list] = 416,
        [sym_parameter_declaration] = 386,
        [anon_sym_RPAREN] = 418,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [141] = {
        [anon_sym_RPAREN] = 420,
        [anon_sym_COMMA] = 422,
        [sym_comment] = 8,
    },
    [142] = {
        [anon_sym_RPAREN] = 424,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 8,
    },
    [143] = {
        [sym__top_level_declaration] = 426,
        [sym__declaration] = 426,
        [sym_const_declaration] = 426,
        [sym_var_declaration] = 426,
        [sym_function_declaration] = 426,
        [sym_method_declaration] = 426,
        [sym_parameters] = 426,
        [sym_block] = 426,
        [sym_type_declaration] = 426,
        [sym__type] = 426,
        [sym_array_type] = 426,
        [sym_slice_type] = 426,
        [sym_struct_type] = 426,
        [sym_map_type] = 426,
        [sym_qualified_identifier] = 426,
        [aux_sym_source_file_repeat2] = 426,
        [ts_builtin_sym_end] = 426,
        [anon_sym_LPAREN] = 426,
        [anon_sym_const] = 426,
        [anon_sym_var] = 426,
        [anon_sym_func] = 426,
        [anon_sym_LBRACE] = 426,
        [anon_sym_type] = 426,
        [anon_sym_LBRACK] = 426,
        [anon_sym_struct] = 426,
        [anon_sym_map] = 426,
        [sym_identifier] = 426,
        [sym_comment] = 8,
    },
    [144] = {
        [sym__type] = 428,
        [sym_array_type] = 430,
        [sym_slice_type] = 430,
        [sym_struct_type] = 430,
        [sym_map_type] = 430,
        [sym_qualified_identifier] = 430,
        [anon_sym_RPAREN] = 424,
        [anon_sym_COMMA] = 424,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 434,
        [anon_sym_map] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 8,
    },
    [145] = {
        [anon_sym_RPAREN] = 440,
        [anon_sym_COMMA] = 440,
        [sym_comment] = 8,
    },
    [146] = {
        [anon_sym_RPAREN] = 116,
        [anon_sym_COMMA] = 116,
        [sym_comment] = 8,
    },
    [147] = {
        [sym__expression] = 442,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 444,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [148] = {
        [anon_sym_LBRACE] = 446,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_RPAREN] = 116,
        [anon_sym_DOT] = 450,
        [anon_sym_COMMA] = 116,
        [sym_comment] = 8,
    },
    [151] = {
        [sym_identifier] = 452,
        [sym_comment] = 8,
    },
    [152] = {
        [anon_sym_RPAREN] = 138,
        [anon_sym_COMMA] = 138,
        [sym_comment] = 8,
    },
    [153] = {
        [sym__type] = 454,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [154] = {
        [anon_sym_RBRACK] = 456,
        [sym_comment] = 8,
    },
    [155] = {
        [sym__type] = 458,
        [sym_array_type] = 430,
        [sym_slice_type] = 430,
        [sym_struct_type] = 430,
        [sym_map_type] = 430,
        [sym_qualified_identifier] = 430,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 434,
        [anon_sym_map] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 8,
    },
    [156] = {
        [anon_sym_RPAREN] = 172,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 8,
    },
    [157] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 460,
        [anon_sym_RBRACE] = 462,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [158] = {
        [anon_sym_RBRACE] = 464,
        [sym_comment] = 8,
    },
    [159] = {
        [anon_sym_RPAREN] = 202,
        [anon_sym_COMMA] = 202,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_RPAREN] = 234,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_RBRACK] = 466,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [162] = {
        [sym__type] = 468,
        [sym_array_type] = 430,
        [sym_slice_type] = 430,
        [sym_struct_type] = 430,
        [sym_map_type] = 430,
        [sym_qualified_identifier] = 430,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 434,
        [anon_sym_map] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 8,
    },
    [163] = {
        [anon_sym_RPAREN] = 286,
        [anon_sym_COMMA] = 286,
        [sym_comment] = 8,
    },
    [164] = {
        [sym__type] = 470,
        [sym_array_type] = 430,
        [sym_slice_type] = 430,
        [sym_struct_type] = 430,
        [sym_map_type] = 430,
        [sym_qualified_identifier] = 430,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 434,
        [anon_sym_map] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 8,
    },
    [165] = {
        [anon_sym_RPAREN] = 304,
        [anon_sym_COMMA] = 304,
        [sym_comment] = 8,
    },
    [166] = {
        [sym__top_level_declaration] = 472,
        [sym__declaration] = 472,
        [sym_const_declaration] = 472,
        [sym_var_declaration] = 472,
        [sym_function_declaration] = 472,
        [sym_method_declaration] = 472,
        [sym_parameters] = 472,
        [sym_block] = 472,
        [sym_type_declaration] = 472,
        [sym__type] = 472,
        [sym_array_type] = 472,
        [sym_slice_type] = 472,
        [sym_struct_type] = 472,
        [sym_map_type] = 472,
        [sym_qualified_identifier] = 472,
        [aux_sym_source_file_repeat2] = 472,
        [ts_builtin_sym_end] = 472,
        [anon_sym_LPAREN] = 472,
        [anon_sym_const] = 472,
        [anon_sym_var] = 472,
        [anon_sym_func] = 472,
        [anon_sym_LBRACE] = 472,
        [anon_sym_type] = 472,
        [anon_sym_LBRACK] = 472,
        [anon_sym_struct] = 472,
        [anon_sym_map] = 472,
        [sym_identifier] = 472,
        [sym_comment] = 8,
    },
    [167] = {
        [sym_parameter_declaration] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 8,
    },
    [168] = {
        [anon_sym_RPAREN] = 478,
        [anon_sym_COMMA] = 478,
        [sym_comment] = 8,
    },
    [169] = {
        [sym__type] = 428,
        [sym_array_type] = 430,
        [sym_slice_type] = 430,
        [sym_struct_type] = 430,
        [sym_map_type] = 430,
        [sym_qualified_identifier] = 430,
        [anon_sym_RPAREN] = 478,
        [anon_sym_COMMA] = 478,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 434,
        [anon_sym_map] = 436,
        [sym_identifier] = 438,
        [sym_comment] = 8,
    },
    [170] = {
        [sym__top_level_declaration] = 480,
        [sym__declaration] = 480,
        [sym_const_declaration] = 480,
        [sym_var_declaration] = 480,
        [sym_function_declaration] = 480,
        [sym_method_declaration] = 480,
        [sym_block] = 482,
        [sym_type_declaration] = 480,
        [aux_sym_source_file_repeat2] = 480,
        [ts_builtin_sym_end] = 480,
        [anon_sym_const] = 480,
        [anon_sym_var] = 480,
        [anon_sym_func] = 480,
        [anon_sym_LBRACE] = 406,
        [anon_sym_type] = 480,
        [sym_comment] = 8,
    },
    [171] = {
        [sym__top_level_declaration] = 480,
        [sym__declaration] = 480,
        [sym_const_declaration] = 480,
        [sym_var_declaration] = 480,
        [sym_function_declaration] = 480,
        [sym_method_declaration] = 480,
        [sym_type_declaration] = 480,
        [aux_sym_source_file_repeat2] = 480,
        [ts_builtin_sym_end] = 480,
        [anon_sym_const] = 480,
        [anon_sym_var] = 480,
        [anon_sym_func] = 480,
        [anon_sym_type] = 480,
        [sym_comment] = 8,
    },
    [172] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_block] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_const] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_LBRACE] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [173] = {
        [sym__parameter_list] = 484,
        [sym_parameter_declaration] = 386,
        [anon_sym_RPAREN] = 486,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [174] = {
        [anon_sym_RBRACE] = 488,
        [sym_comment] = 8,
    },
    [175] = {
        [sym__expression] = 490,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 492,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [176] = {
        [anon_sym_LBRACE] = 494,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_LBRACK] = 496,
        [sym_comment] = 8,
    },
    [178] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_block] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_DOT] = 498,
        [anon_sym_const] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_LBRACE] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [179] = {
        [sym_identifier] = 500,
        [sym_comment] = 8,
    },
    [180] = {
        [sym__top_level_declaration] = 138,
        [sym__declaration] = 138,
        [sym_const_declaration] = 138,
        [sym_var_declaration] = 138,
        [sym_function_declaration] = 138,
        [sym_method_declaration] = 138,
        [sym_block] = 138,
        [sym_type_declaration] = 138,
        [aux_sym_source_file_repeat2] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_const] = 138,
        [anon_sym_var] = 138,
        [anon_sym_func] = 138,
        [anon_sym_LBRACE] = 138,
        [anon_sym_type] = 138,
        [sym_comment] = 8,
    },
    [181] = {
        [sym__type] = 502,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [182] = {
        [anon_sym_RBRACK] = 504,
        [sym_comment] = 8,
    },
    [183] = {
        [sym__type] = 506,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_map_type] = 402,
        [sym_qualified_identifier] = 402,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 410,
        [anon_sym_map] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [184] = {
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
    [185] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 508,
        [anon_sym_RBRACE] = 510,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [186] = {
        [anon_sym_RBRACE] = 512,
        [sym_comment] = 8,
    },
    [187] = {
        [sym__top_level_declaration] = 202,
        [sym__declaration] = 202,
        [sym_const_declaration] = 202,
        [sym_var_declaration] = 202,
        [sym_function_declaration] = 202,
        [sym_method_declaration] = 202,
        [sym_block] = 202,
        [sym_type_declaration] = 202,
        [aux_sym_source_file_repeat2] = 202,
        [ts_builtin_sym_end] = 202,
        [anon_sym_const] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_LBRACE] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [188] = {
        [sym__top_level_declaration] = 234,
        [sym__declaration] = 234,
        [sym_const_declaration] = 234,
        [sym_var_declaration] = 234,
        [sym_function_declaration] = 234,
        [sym_method_declaration] = 234,
        [sym_block] = 234,
        [sym_type_declaration] = 234,
        [aux_sym_source_file_repeat2] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_const] = 234,
        [anon_sym_var] = 234,
        [anon_sym_func] = 234,
        [anon_sym_LBRACE] = 234,
        [anon_sym_type] = 234,
        [sym_comment] = 8,
    },
    [189] = {
        [anon_sym_RBRACK] = 514,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [190] = {
        [sym__type] = 516,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_map_type] = 402,
        [sym_qualified_identifier] = 402,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 410,
        [anon_sym_map] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_block] = 286,
        [sym_type_declaration] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_const] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_LBRACE] = 286,
        [anon_sym_type] = 286,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__type] = 518,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_map_type] = 402,
        [sym_qualified_identifier] = 402,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 410,
        [anon_sym_map] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [193] = {
        [sym__top_level_declaration] = 304,
        [sym__declaration] = 304,
        [sym_const_declaration] = 304,
        [sym_var_declaration] = 304,
        [sym_function_declaration] = 304,
        [sym_method_declaration] = 304,
        [sym_block] = 304,
        [sym_type_declaration] = 304,
        [aux_sym_source_file_repeat2] = 304,
        [ts_builtin_sym_end] = 304,
        [anon_sym_const] = 304,
        [anon_sym_var] = 304,
        [anon_sym_func] = 304,
        [anon_sym_LBRACE] = 304,
        [anon_sym_type] = 304,
        [sym_comment] = 8,
    },
    [194] = {
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
    [195] = {
        [anon_sym_RPAREN] = 522,
        [anon_sym_COMMA] = 422,
        [sym_comment] = 8,
    },
    [196] = {
        [sym__top_level_declaration] = 426,
        [sym__declaration] = 426,
        [sym_const_declaration] = 426,
        [sym_var_declaration] = 426,
        [sym_function_declaration] = 426,
        [sym_method_declaration] = 426,
        [sym_block] = 426,
        [sym_type_declaration] = 426,
        [aux_sym_source_file_repeat2] = 426,
        [ts_builtin_sym_end] = 426,
        [anon_sym_const] = 426,
        [anon_sym_var] = 426,
        [anon_sym_func] = 426,
        [anon_sym_LBRACE] = 426,
        [anon_sym_type] = 426,
        [sym_comment] = 8,
    },
    [197] = {
        [sym__top_level_declaration] = 472,
        [sym__declaration] = 472,
        [sym_const_declaration] = 472,
        [sym_var_declaration] = 472,
        [sym_function_declaration] = 472,
        [sym_method_declaration] = 472,
        [sym_block] = 472,
        [sym_type_declaration] = 472,
        [aux_sym_source_file_repeat2] = 472,
        [ts_builtin_sym_end] = 472,
        [anon_sym_const] = 472,
        [anon_sym_var] = 472,
        [anon_sym_func] = 472,
        [anon_sym_LBRACE] = 472,
        [anon_sym_type] = 472,
        [sym_comment] = 8,
    },
    [198] = {
        [sym__top_level_declaration] = 524,
        [sym__declaration] = 524,
        [sym_const_declaration] = 524,
        [sym_var_declaration] = 524,
        [sym_function_declaration] = 524,
        [sym_method_declaration] = 524,
        [sym_type_declaration] = 524,
        [aux_sym_source_file_repeat2] = 524,
        [ts_builtin_sym_end] = 524,
        [anon_sym_const] = 524,
        [anon_sym_var] = 524,
        [anon_sym_func] = 524,
        [anon_sym_type] = 524,
        [sym_comment] = 8,
    },
    [199] = {
        [anon_sym_RPAREN] = 526,
        [anon_sym_COMMA] = 422,
        [sym_comment] = 8,
    },
    [200] = {
        [sym_identifier] = 426,
        [sym_comment] = 8,
    },
    [201] = {
        [sym_identifier] = 472,
        [sym_comment] = 8,
    },
    [202] = {
        [sym_parameters] = 528,
        [anon_sym_LPAREN] = 394,
        [sym_comment] = 8,
    },
    [203] = {
        [sym__top_level_declaration] = 530,
        [sym__declaration] = 530,
        [sym_const_declaration] = 530,
        [sym_var_declaration] = 530,
        [sym_function_declaration] = 530,
        [sym_method_declaration] = 530,
        [sym_parameters] = 532,
        [sym_block] = 534,
        [sym_type_declaration] = 530,
        [sym__type] = 532,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_map_type] = 402,
        [sym_qualified_identifier] = 402,
        [aux_sym_source_file_repeat2] = 530,
        [ts_builtin_sym_end] = 530,
        [anon_sym_LPAREN] = 404,
        [anon_sym_const] = 530,
        [anon_sym_var] = 530,
        [anon_sym_func] = 530,
        [anon_sym_LBRACE] = 406,
        [anon_sym_type] = 530,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 410,
        [anon_sym_map] = 412,
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [204] = {
        [sym__top_level_declaration] = 536,
        [sym__declaration] = 536,
        [sym_const_declaration] = 536,
        [sym_var_declaration] = 536,
        [sym_function_declaration] = 536,
        [sym_method_declaration] = 536,
        [sym_block] = 538,
        [sym_type_declaration] = 536,
        [aux_sym_source_file_repeat2] = 536,
        [ts_builtin_sym_end] = 536,
        [anon_sym_const] = 536,
        [anon_sym_var] = 536,
        [anon_sym_func] = 536,
        [anon_sym_LBRACE] = 406,
        [anon_sym_type] = 536,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__top_level_declaration] = 536,
        [sym__declaration] = 536,
        [sym_const_declaration] = 536,
        [sym_var_declaration] = 536,
        [sym_function_declaration] = 536,
        [sym_method_declaration] = 536,
        [sym_type_declaration] = 536,
        [aux_sym_source_file_repeat2] = 536,
        [ts_builtin_sym_end] = 536,
        [anon_sym_const] = 536,
        [anon_sym_var] = 536,
        [anon_sym_func] = 536,
        [anon_sym_type] = 536,
        [sym_comment] = 8,
    },
    [206] = {
        [sym__top_level_declaration] = 540,
        [sym__declaration] = 540,
        [sym_const_declaration] = 540,
        [sym_var_declaration] = 540,
        [sym_function_declaration] = 540,
        [sym_method_declaration] = 540,
        [sym_type_declaration] = 540,
        [aux_sym_source_file_repeat2] = 540,
        [ts_builtin_sym_end] = 540,
        [anon_sym_const] = 540,
        [anon_sym_var] = 540,
        [anon_sym_func] = 540,
        [anon_sym_type] = 540,
        [sym_comment] = 8,
    },
    [207] = {
        [sym__top_level_declaration] = 542,
        [sym__declaration] = 542,
        [sym_const_declaration] = 542,
        [sym_var_declaration] = 542,
        [sym_function_declaration] = 542,
        [sym_method_declaration] = 542,
        [sym_type_declaration] = 542,
        [aux_sym_source_file_repeat2] = 542,
        [ts_builtin_sym_end] = 542,
        [anon_sym_const] = 542,
        [anon_sym_var] = 542,
        [anon_sym_func] = 542,
        [anon_sym_type] = 542,
        [sym_comment] = 8,
    },
    [208] = {
        [sym__type] = 544,
        [sym_array_type] = 546,
        [sym_slice_type] = 546,
        [sym_struct_type] = 546,
        [sym_map_type] = 546,
        [sym_qualified_identifier] = 546,
        [anon_sym_EQ] = 548,
        [anon_sym_LBRACK] = 550,
        [anon_sym_struct] = 552,
        [anon_sym_map] = 554,
        [sym_identifier] = 556,
        [sym_comment] = 8,
    },
    [209] = {
        [sym_var_spec] = 558,
        [sym_identifier_list] = 560,
        [aux_sym_var_declaration_repeat1] = 562,
        [anon_sym_RPAREN] = 564,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [210] = {
        [sym__type] = 204,
        [sym_array_type] = 204,
        [sym_slice_type] = 204,
        [sym_struct_type] = 204,
        [sym_map_type] = 204,
        [sym_qualified_identifier] = 204,
        [aux_sym_identifier_list_repeat1] = 566,
        [anon_sym_EQ] = 204,
        [anon_sym_COMMA] = 568,
        [anon_sym_LBRACK] = 204,
        [anon_sym_struct] = 204,
        [anon_sym_map] = 204,
        [sym_identifier] = 204,
        [sym_comment] = 8,
    },
    [211] = {
        [sym__type] = 218,
        [sym_array_type] = 218,
        [sym_slice_type] = 218,
        [sym_struct_type] = 218,
        [sym_map_type] = 218,
        [sym_qualified_identifier] = 218,
        [anon_sym_EQ] = 218,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 218,
        [anon_sym_map] = 218,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_identifier] = 570,
        [sym_comment] = 8,
    },
    [213] = {
        [sym__type] = 224,
        [sym_array_type] = 224,
        [sym_slice_type] = 224,
        [sym_struct_type] = 224,
        [sym_map_type] = 224,
        [sym_qualified_identifier] = 224,
        [aux_sym_identifier_list_repeat1] = 572,
        [anon_sym_EQ] = 224,
        [anon_sym_COMMA] = 568,
        [anon_sym_LBRACK] = 224,
        [anon_sym_struct] = 224,
        [anon_sym_map] = 224,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [214] = {
        [sym__type] = 228,
        [sym_array_type] = 228,
        [sym_slice_type] = 228,
        [sym_struct_type] = 228,
        [sym_map_type] = 228,
        [sym_qualified_identifier] = 228,
        [anon_sym_EQ] = 228,
        [anon_sym_LBRACK] = 228,
        [anon_sym_struct] = 228,
        [anon_sym_map] = 228,
        [sym_identifier] = 228,
        [sym_comment] = 8,
    },
    [215] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 574,
        [sym_comment] = 8,
    },
    [216] = {
        [sym__type] = 576,
        [sym_array_type] = 578,
        [sym_slice_type] = 578,
        [sym_struct_type] = 578,
        [sym_map_type] = 578,
        [sym_qualified_identifier] = 578,
        [anon_sym_EQ] = 580,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [217] = {
        [anon_sym_RPAREN] = 590,
        [sym_comment] = 8,
    },
    [218] = {
        [sym__top_level_declaration] = 592,
        [sym__declaration] = 592,
        [sym_const_declaration] = 592,
        [sym_var_declaration] = 592,
        [sym_function_declaration] = 592,
        [sym_method_declaration] = 592,
        [sym_type_declaration] = 592,
        [aux_sym_source_file_repeat2] = 592,
        [ts_builtin_sym_end] = 592,
        [anon_sym_const] = 592,
        [anon_sym_var] = 592,
        [anon_sym_func] = 592,
        [anon_sym_type] = 592,
        [sym_comment] = 8,
    },
    [219] = {
        [sym__top_level_declaration] = 594,
        [sym__declaration] = 594,
        [sym_const_declaration] = 594,
        [sym_var_declaration] = 594,
        [sym_function_declaration] = 594,
        [sym_method_declaration] = 594,
        [sym_type_declaration] = 594,
        [aux_sym_source_file_repeat2] = 594,
        [ts_builtin_sym_end] = 594,
        [anon_sym_const] = 594,
        [anon_sym_var] = 594,
        [anon_sym_func] = 594,
        [anon_sym_type] = 594,
        [sym_comment] = 8,
    },
    [220] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 596,
        [anon_sym_EQ] = 598,
        [sym_comment] = 8,
    },
    [221] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [anon_sym_EQ] = 116,
        [sym_comment] = 8,
    },
    [222] = {
        [sym_expression_list] = 600,
        [sym__expression] = 602,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [223] = {
        [sym__expression] = 612,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 614,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [224] = {
        [anon_sym_LBRACE] = 616,
        [sym_comment] = 8,
    },
    [225] = {
        [anon_sym_LBRACK] = 618,
        [sym_comment] = 8,
    },
    [226] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [anon_sym_DOT] = 620,
        [anon_sym_EQ] = 116,
        [sym_comment] = 8,
    },
    [227] = {
        [sym_identifier] = 622,
        [sym_comment] = 8,
    },
    [228] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 138,
        [anon_sym_EQ] = 138,
        [sym_comment] = 8,
    },
    [229] = {
        [sym__type] = 624,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [230] = {
        [anon_sym_RBRACK] = 626,
        [sym_comment] = 8,
    },
    [231] = {
        [sym__type] = 628,
        [sym_array_type] = 578,
        [sym_slice_type] = 578,
        [sym_struct_type] = 578,
        [sym_map_type] = 578,
        [sym_qualified_identifier] = 578,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [232] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 172,
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [233] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 630,
        [anon_sym_RBRACE] = 632,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [234] = {
        [anon_sym_RBRACE] = 634,
        [sym_comment] = 8,
    },
    [235] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [anon_sym_EQ] = 202,
        [sym_comment] = 8,
    },
    [236] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 234,
        [anon_sym_EQ] = 234,
        [sym_comment] = 8,
    },
    [237] = {
        [anon_sym_RBRACK] = 636,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [238] = {
        [sym__type] = 638,
        [sym_array_type] = 578,
        [sym_slice_type] = 578,
        [sym_struct_type] = 578,
        [sym_map_type] = 578,
        [sym_qualified_identifier] = 578,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [239] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [anon_sym_EQ] = 286,
        [sym_comment] = 8,
    },
    [240] = {
        [sym__type] = 640,
        [sym_array_type] = 578,
        [sym_slice_type] = 578,
        [sym_struct_type] = 578,
        [sym_map_type] = 578,
        [sym_qualified_identifier] = 578,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [241] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 304,
        [anon_sym_EQ] = 304,
        [sym_comment] = 8,
    },
    [242] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 642,
        [sym_comment] = 8,
    },
    [243] = {
        [aux_sym_expression_list_repeat1] = 644,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 646,
        [anon_sym_COMMA] = 648,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 652,
        [anon_sym_DASH] = 652,
        [anon_sym_PIPE] = 652,
        [anon_sym_CARET] = 652,
        [anon_sym_EQ_EQ] = 654,
        [anon_sym_BANG_EQ] = 654,
        [anon_sym_LT] = 654,
        [anon_sym_LT_EQ] = 654,
        [anon_sym_GT] = 654,
        [anon_sym_GT_EQ] = 654,
        [anon_sym_AMP_AMP] = 656,
        [anon_sym_PIPE_PIPE] = 658,
        [sym_comment] = 8,
    },
    [244] = {
        [aux_sym_expression_list_repeat1] = 278,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 278,
        [anon_sym_COMMA] = 278,
        [anon_sym_STAR] = 278,
        [anon_sym_SLASH] = 278,
        [anon_sym_PERCENT] = 278,
        [anon_sym_LT_LT] = 278,
        [anon_sym_GT_GT] = 278,
        [anon_sym_AMP] = 278,
        [anon_sym_AMP_CARET] = 278,
        [anon_sym_PLUS] = 278,
        [anon_sym_DASH] = 278,
        [anon_sym_PIPE] = 278,
        [anon_sym_CARET] = 278,
        [anon_sym_EQ_EQ] = 278,
        [anon_sym_BANG_EQ] = 278,
        [anon_sym_LT] = 278,
        [anon_sym_LT_EQ] = 278,
        [anon_sym_GT] = 278,
        [anon_sym_GT_EQ] = 278,
        [anon_sym_AMP_AMP] = 278,
        [anon_sym_PIPE_PIPE] = 278,
        [sym_comment] = 8,
    },
    [245] = {
        [aux_sym_expression_list_repeat1] = 280,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 280,
        [anon_sym_COMMA] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_SLASH] = 280,
        [anon_sym_PERCENT] = 280,
        [anon_sym_LT_LT] = 280,
        [anon_sym_GT_GT] = 280,
        [anon_sym_AMP] = 280,
        [anon_sym_AMP_CARET] = 280,
        [anon_sym_PLUS] = 280,
        [anon_sym_DASH] = 280,
        [anon_sym_PIPE] = 280,
        [anon_sym_CARET] = 280,
        [anon_sym_EQ_EQ] = 280,
        [anon_sym_BANG_EQ] = 280,
        [anon_sym_LT] = 280,
        [anon_sym_LT_EQ] = 280,
        [anon_sym_GT] = 280,
        [anon_sym_GT_EQ] = 280,
        [anon_sym_AMP_AMP] = 280,
        [anon_sym_PIPE_PIPE] = 280,
        [sym_comment] = 8,
    },
    [246] = {
        [aux_sym_expression_list_repeat1] = 222,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [anon_sym_COMMA] = 222,
        [anon_sym_STAR] = 222,
        [anon_sym_SLASH] = 222,
        [anon_sym_PERCENT] = 222,
        [anon_sym_LT_LT] = 222,
        [anon_sym_GT_GT] = 222,
        [anon_sym_AMP] = 222,
        [anon_sym_AMP_CARET] = 222,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 222,
        [anon_sym_BANG_EQ] = 222,
        [anon_sym_LT] = 222,
        [anon_sym_LT_EQ] = 222,
        [anon_sym_GT] = 222,
        [anon_sym_GT_EQ] = 222,
        [anon_sym_AMP_AMP] = 222,
        [anon_sym_PIPE_PIPE] = 222,
        [sym_comment] = 8,
    },
    [247] = {
        [aux_sym_expression_list_repeat1] = 284,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 284,
        [anon_sym_COMMA] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_SLASH] = 284,
        [anon_sym_PERCENT] = 284,
        [anon_sym_LT_LT] = 284,
        [anon_sym_GT_GT] = 284,
        [anon_sym_AMP] = 284,
        [anon_sym_AMP_CARET] = 284,
        [anon_sym_PLUS] = 284,
        [anon_sym_DASH] = 284,
        [anon_sym_PIPE] = 284,
        [anon_sym_CARET] = 284,
        [anon_sym_EQ_EQ] = 284,
        [anon_sym_BANG_EQ] = 284,
        [anon_sym_LT] = 284,
        [anon_sym_LT_EQ] = 284,
        [anon_sym_GT] = 284,
        [anon_sym_GT_EQ] = 284,
        [anon_sym_AMP_AMP] = 284,
        [anon_sym_PIPE_PIPE] = 284,
        [sym_comment] = 8,
    },
    [248] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 660,
        [sym_comment] = 8,
    },
    [249] = {
        [sym__expression] = 662,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [250] = {
        [sym__expression] = 664,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [251] = {
        [sym__expression] = 666,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [252] = {
        [sym__expression] = 668,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [253] = {
        [sym__expression] = 670,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [254] = {
        [sym__expression] = 672,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [255] = {
        [aux_sym_expression_list_repeat1] = 300,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 652,
        [anon_sym_DASH] = 652,
        [anon_sym_PIPE] = 652,
        [anon_sym_CARET] = 652,
        [anon_sym_EQ_EQ] = 654,
        [anon_sym_BANG_EQ] = 654,
        [anon_sym_LT] = 654,
        [anon_sym_LT_EQ] = 654,
        [anon_sym_GT] = 654,
        [anon_sym_GT_EQ] = 654,
        [anon_sym_AMP_AMP] = 656,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [256] = {
        [aux_sym_expression_list_repeat1] = 300,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 652,
        [anon_sym_DASH] = 652,
        [anon_sym_PIPE] = 652,
        [anon_sym_CARET] = 652,
        [anon_sym_EQ_EQ] = 654,
        [anon_sym_BANG_EQ] = 654,
        [anon_sym_LT] = 654,
        [anon_sym_LT_EQ] = 654,
        [anon_sym_GT] = 654,
        [anon_sym_GT_EQ] = 654,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [257] = {
        [aux_sym_expression_list_repeat1] = 300,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 652,
        [anon_sym_DASH] = 652,
        [anon_sym_PIPE] = 652,
        [anon_sym_CARET] = 652,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [258] = {
        [aux_sym_expression_list_repeat1] = 300,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 300,
        [anon_sym_DASH] = 300,
        [anon_sym_PIPE] = 300,
        [anon_sym_CARET] = 300,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [259] = {
        [aux_sym_expression_list_repeat1] = 302,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 302,
        [anon_sym_COMMA] = 302,
        [anon_sym_STAR] = 302,
        [anon_sym_SLASH] = 302,
        [anon_sym_PERCENT] = 302,
        [anon_sym_LT_LT] = 302,
        [anon_sym_GT_GT] = 302,
        [anon_sym_AMP] = 302,
        [anon_sym_AMP_CARET] = 302,
        [anon_sym_PLUS] = 302,
        [anon_sym_DASH] = 302,
        [anon_sym_PIPE] = 302,
        [anon_sym_CARET] = 302,
        [anon_sym_EQ_EQ] = 302,
        [anon_sym_BANG_EQ] = 302,
        [anon_sym_LT] = 302,
        [anon_sym_LT_EQ] = 302,
        [anon_sym_GT] = 302,
        [anon_sym_GT_EQ] = 302,
        [anon_sym_AMP_AMP] = 302,
        [anon_sym_PIPE_PIPE] = 302,
        [sym_comment] = 8,
    },
    [260] = {
        [aux_sym_expression_list_repeat1] = 674,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 676,
        [anon_sym_COMMA] = 648,
        [anon_sym_STAR] = 650,
        [anon_sym_SLASH] = 650,
        [anon_sym_PERCENT] = 650,
        [anon_sym_LT_LT] = 650,
        [anon_sym_GT_GT] = 650,
        [anon_sym_AMP] = 650,
        [anon_sym_AMP_CARET] = 650,
        [anon_sym_PLUS] = 652,
        [anon_sym_DASH] = 652,
        [anon_sym_PIPE] = 652,
        [anon_sym_CARET] = 652,
        [anon_sym_EQ_EQ] = 654,
        [anon_sym_BANG_EQ] = 654,
        [anon_sym_LT] = 654,
        [anon_sym_LT_EQ] = 654,
        [anon_sym_GT] = 654,
        [anon_sym_GT_EQ] = 654,
        [anon_sym_AMP_AMP] = 656,
        [anon_sym_PIPE_PIPE] = 658,
        [sym_comment] = 8,
    },
    [261] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 678,
        [sym_comment] = 8,
    },
    [262] = {
        [sym_expression_list] = 680,
        [sym__expression] = 602,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [263] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 682,
        [sym_comment] = 8,
    },
    [264] = {
        [sym_var_spec] = 558,
        [sym_identifier_list] = 560,
        [aux_sym_var_declaration_repeat1] = 684,
        [anon_sym_RPAREN] = 686,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [265] = {
        [anon_sym_RPAREN] = 688,
        [sym_comment] = 8,
    },
    [266] = {
        [sym__top_level_declaration] = 596,
        [sym__declaration] = 596,
        [sym_const_declaration] = 596,
        [sym_var_declaration] = 596,
        [sym_function_declaration] = 596,
        [sym_method_declaration] = 596,
        [sym_type_declaration] = 596,
        [aux_sym_source_file_repeat2] = 596,
        [ts_builtin_sym_end] = 596,
        [anon_sym_const] = 596,
        [anon_sym_EQ] = 690,
        [anon_sym_var] = 596,
        [anon_sym_func] = 596,
        [anon_sym_type] = 596,
        [sym_comment] = 8,
    },
    [267] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_const] = 116,
        [anon_sym_EQ] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [268] = {
        [sym_expression_list] = 692,
        [sym__expression] = 694,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [269] = {
        [sym__expression] = 704,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 706,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [270] = {
        [anon_sym_LBRACE] = 708,
        [sym_comment] = 8,
    },
    [271] = {
        [anon_sym_LBRACK] = 710,
        [sym_comment] = 8,
    },
    [272] = {
        [sym__top_level_declaration] = 116,
        [sym__declaration] = 116,
        [sym_const_declaration] = 116,
        [sym_var_declaration] = 116,
        [sym_function_declaration] = 116,
        [sym_method_declaration] = 116,
        [sym_type_declaration] = 116,
        [aux_sym_source_file_repeat2] = 116,
        [ts_builtin_sym_end] = 116,
        [anon_sym_DOT] = 712,
        [anon_sym_const] = 116,
        [anon_sym_EQ] = 116,
        [anon_sym_var] = 116,
        [anon_sym_func] = 116,
        [anon_sym_type] = 116,
        [sym_comment] = 8,
    },
    [273] = {
        [sym_identifier] = 714,
        [sym_comment] = 8,
    },
    [274] = {
        [sym__top_level_declaration] = 138,
        [sym__declaration] = 138,
        [sym_const_declaration] = 138,
        [sym_var_declaration] = 138,
        [sym_function_declaration] = 138,
        [sym_method_declaration] = 138,
        [sym_type_declaration] = 138,
        [aux_sym_source_file_repeat2] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_const] = 138,
        [anon_sym_EQ] = 138,
        [anon_sym_var] = 138,
        [anon_sym_func] = 138,
        [anon_sym_type] = 138,
        [sym_comment] = 8,
    },
    [275] = {
        [sym__type] = 716,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [276] = {
        [anon_sym_RBRACK] = 718,
        [sym_comment] = 8,
    },
    [277] = {
        [sym__type] = 720,
        [sym_array_type] = 546,
        [sym_slice_type] = 546,
        [sym_struct_type] = 546,
        [sym_map_type] = 546,
        [sym_qualified_identifier] = 546,
        [anon_sym_LBRACK] = 550,
        [anon_sym_struct] = 552,
        [anon_sym_map] = 554,
        [sym_identifier] = 556,
        [sym_comment] = 8,
    },
    [278] = {
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
    [279] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 722,
        [anon_sym_RBRACE] = 724,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [280] = {
        [anon_sym_RBRACE] = 726,
        [sym_comment] = 8,
    },
    [281] = {
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
        [anon_sym_EQ] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [282] = {
        [sym__top_level_declaration] = 234,
        [sym__declaration] = 234,
        [sym_const_declaration] = 234,
        [sym_var_declaration] = 234,
        [sym_function_declaration] = 234,
        [sym_method_declaration] = 234,
        [sym_type_declaration] = 234,
        [aux_sym_source_file_repeat2] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_const] = 234,
        [anon_sym_EQ] = 234,
        [anon_sym_var] = 234,
        [anon_sym_func] = 234,
        [anon_sym_type] = 234,
        [sym_comment] = 8,
    },
    [283] = {
        [anon_sym_RBRACK] = 728,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [284] = {
        [sym__type] = 730,
        [sym_array_type] = 546,
        [sym_slice_type] = 546,
        [sym_struct_type] = 546,
        [sym_map_type] = 546,
        [sym_qualified_identifier] = 546,
        [anon_sym_LBRACK] = 550,
        [anon_sym_struct] = 552,
        [anon_sym_map] = 554,
        [sym_identifier] = 556,
        [sym_comment] = 8,
    },
    [285] = {
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_type_declaration] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_const] = 286,
        [anon_sym_EQ] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_type] = 286,
        [sym_comment] = 8,
    },
    [286] = {
        [sym__type] = 732,
        [sym_array_type] = 546,
        [sym_slice_type] = 546,
        [sym_struct_type] = 546,
        [sym_map_type] = 546,
        [sym_qualified_identifier] = 546,
        [anon_sym_LBRACK] = 550,
        [anon_sym_struct] = 552,
        [anon_sym_map] = 554,
        [sym_identifier] = 556,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__top_level_declaration] = 304,
        [sym__declaration] = 304,
        [sym_const_declaration] = 304,
        [sym_var_declaration] = 304,
        [sym_function_declaration] = 304,
        [sym_method_declaration] = 304,
        [sym_type_declaration] = 304,
        [aux_sym_source_file_repeat2] = 304,
        [ts_builtin_sym_end] = 304,
        [anon_sym_const] = 304,
        [anon_sym_EQ] = 304,
        [anon_sym_var] = 304,
        [anon_sym_func] = 304,
        [anon_sym_type] = 304,
        [sym_comment] = 8,
    },
    [288] = {
        [sym__top_level_declaration] = 642,
        [sym__declaration] = 642,
        [sym_const_declaration] = 642,
        [sym_var_declaration] = 642,
        [sym_function_declaration] = 642,
        [sym_method_declaration] = 642,
        [sym_type_declaration] = 642,
        [aux_sym_source_file_repeat2] = 642,
        [ts_builtin_sym_end] = 642,
        [anon_sym_const] = 642,
        [anon_sym_var] = 642,
        [anon_sym_func] = 642,
        [anon_sym_type] = 642,
        [sym_comment] = 8,
    },
    [289] = {
        [sym__top_level_declaration] = 646,
        [sym__declaration] = 646,
        [sym_const_declaration] = 646,
        [sym_var_declaration] = 646,
        [sym_function_declaration] = 646,
        [sym_method_declaration] = 646,
        [sym_type_declaration] = 646,
        [aux_sym_source_file_repeat2] = 646,
        [aux_sym_expression_list_repeat1] = 734,
        [ts_builtin_sym_end] = 646,
        [anon_sym_const] = 646,
        [anon_sym_var] = 646,
        [anon_sym_func] = 646,
        [anon_sym_COMMA] = 736,
        [anon_sym_type] = 646,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 740,
        [anon_sym_DASH] = 740,
        [anon_sym_PIPE] = 740,
        [anon_sym_CARET] = 740,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 746,
        [sym_comment] = 8,
    },
    [290] = {
        [sym__top_level_declaration] = 278,
        [sym__declaration] = 278,
        [sym_const_declaration] = 278,
        [sym_var_declaration] = 278,
        [sym_function_declaration] = 278,
        [sym_method_declaration] = 278,
        [sym_type_declaration] = 278,
        [aux_sym_source_file_repeat2] = 278,
        [aux_sym_expression_list_repeat1] = 278,
        [ts_builtin_sym_end] = 278,
        [anon_sym_const] = 278,
        [anon_sym_var] = 278,
        [anon_sym_func] = 278,
        [anon_sym_COMMA] = 278,
        [anon_sym_type] = 278,
        [anon_sym_STAR] = 278,
        [anon_sym_SLASH] = 278,
        [anon_sym_PERCENT] = 278,
        [anon_sym_LT_LT] = 278,
        [anon_sym_GT_GT] = 278,
        [anon_sym_AMP] = 278,
        [anon_sym_AMP_CARET] = 278,
        [anon_sym_PLUS] = 278,
        [anon_sym_DASH] = 278,
        [anon_sym_PIPE] = 278,
        [anon_sym_CARET] = 278,
        [anon_sym_EQ_EQ] = 278,
        [anon_sym_BANG_EQ] = 278,
        [anon_sym_LT] = 278,
        [anon_sym_LT_EQ] = 278,
        [anon_sym_GT] = 278,
        [anon_sym_GT_EQ] = 278,
        [anon_sym_AMP_AMP] = 278,
        [anon_sym_PIPE_PIPE] = 278,
        [sym_comment] = 8,
    },
    [291] = {
        [sym__top_level_declaration] = 280,
        [sym__declaration] = 280,
        [sym_const_declaration] = 280,
        [sym_var_declaration] = 280,
        [sym_function_declaration] = 280,
        [sym_method_declaration] = 280,
        [sym_type_declaration] = 280,
        [aux_sym_source_file_repeat2] = 280,
        [aux_sym_expression_list_repeat1] = 280,
        [ts_builtin_sym_end] = 280,
        [anon_sym_const] = 280,
        [anon_sym_var] = 280,
        [anon_sym_func] = 280,
        [anon_sym_COMMA] = 280,
        [anon_sym_type] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_SLASH] = 280,
        [anon_sym_PERCENT] = 280,
        [anon_sym_LT_LT] = 280,
        [anon_sym_GT_GT] = 280,
        [anon_sym_AMP] = 280,
        [anon_sym_AMP_CARET] = 280,
        [anon_sym_PLUS] = 280,
        [anon_sym_DASH] = 280,
        [anon_sym_PIPE] = 280,
        [anon_sym_CARET] = 280,
        [anon_sym_EQ_EQ] = 280,
        [anon_sym_BANG_EQ] = 280,
        [anon_sym_LT] = 280,
        [anon_sym_LT_EQ] = 280,
        [anon_sym_GT] = 280,
        [anon_sym_GT_EQ] = 280,
        [anon_sym_AMP_AMP] = 280,
        [anon_sym_PIPE_PIPE] = 280,
        [sym_comment] = 8,
    },
    [292] = {
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [aux_sym_expression_list_repeat1] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_const] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [anon_sym_COMMA] = 222,
        [anon_sym_type] = 222,
        [anon_sym_STAR] = 222,
        [anon_sym_SLASH] = 222,
        [anon_sym_PERCENT] = 222,
        [anon_sym_LT_LT] = 222,
        [anon_sym_GT_GT] = 222,
        [anon_sym_AMP] = 222,
        [anon_sym_AMP_CARET] = 222,
        [anon_sym_PLUS] = 222,
        [anon_sym_DASH] = 222,
        [anon_sym_PIPE] = 222,
        [anon_sym_CARET] = 222,
        [anon_sym_EQ_EQ] = 222,
        [anon_sym_BANG_EQ] = 222,
        [anon_sym_LT] = 222,
        [anon_sym_LT_EQ] = 222,
        [anon_sym_GT] = 222,
        [anon_sym_GT_EQ] = 222,
        [anon_sym_AMP_AMP] = 222,
        [anon_sym_PIPE_PIPE] = 222,
        [sym_comment] = 8,
    },
    [293] = {
        [sym__top_level_declaration] = 284,
        [sym__declaration] = 284,
        [sym_const_declaration] = 284,
        [sym_var_declaration] = 284,
        [sym_function_declaration] = 284,
        [sym_method_declaration] = 284,
        [sym_type_declaration] = 284,
        [aux_sym_source_file_repeat2] = 284,
        [aux_sym_expression_list_repeat1] = 284,
        [ts_builtin_sym_end] = 284,
        [anon_sym_const] = 284,
        [anon_sym_var] = 284,
        [anon_sym_func] = 284,
        [anon_sym_COMMA] = 284,
        [anon_sym_type] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_SLASH] = 284,
        [anon_sym_PERCENT] = 284,
        [anon_sym_LT_LT] = 284,
        [anon_sym_GT_GT] = 284,
        [anon_sym_AMP] = 284,
        [anon_sym_AMP_CARET] = 284,
        [anon_sym_PLUS] = 284,
        [anon_sym_DASH] = 284,
        [anon_sym_PIPE] = 284,
        [anon_sym_CARET] = 284,
        [anon_sym_EQ_EQ] = 284,
        [anon_sym_BANG_EQ] = 284,
        [anon_sym_LT] = 284,
        [anon_sym_LT_EQ] = 284,
        [anon_sym_GT] = 284,
        [anon_sym_GT_EQ] = 284,
        [anon_sym_AMP_AMP] = 284,
        [anon_sym_PIPE_PIPE] = 284,
        [sym_comment] = 8,
    },
    [294] = {
        [sym__top_level_declaration] = 660,
        [sym__declaration] = 660,
        [sym_const_declaration] = 660,
        [sym_var_declaration] = 660,
        [sym_function_declaration] = 660,
        [sym_method_declaration] = 660,
        [sym_type_declaration] = 660,
        [aux_sym_source_file_repeat2] = 660,
        [ts_builtin_sym_end] = 660,
        [anon_sym_const] = 660,
        [anon_sym_var] = 660,
        [anon_sym_func] = 660,
        [anon_sym_type] = 660,
        [sym_comment] = 8,
    },
    [295] = {
        [sym__expression] = 748,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [296] = {
        [sym__expression] = 750,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [297] = {
        [sym__expression] = 752,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [298] = {
        [sym__expression] = 754,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [299] = {
        [sym__expression] = 756,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [300] = {
        [sym__expression] = 758,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [301] = {
        [sym__top_level_declaration] = 300,
        [sym__declaration] = 300,
        [sym_const_declaration] = 300,
        [sym_var_declaration] = 300,
        [sym_function_declaration] = 300,
        [sym_method_declaration] = 300,
        [sym_type_declaration] = 300,
        [aux_sym_source_file_repeat2] = 300,
        [aux_sym_expression_list_repeat1] = 300,
        [ts_builtin_sym_end] = 300,
        [anon_sym_const] = 300,
        [anon_sym_var] = 300,
        [anon_sym_func] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_type] = 300,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 740,
        [anon_sym_DASH] = 740,
        [anon_sym_PIPE] = 740,
        [anon_sym_CARET] = 740,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [302] = {
        [sym__top_level_declaration] = 300,
        [sym__declaration] = 300,
        [sym_const_declaration] = 300,
        [sym_var_declaration] = 300,
        [sym_function_declaration] = 300,
        [sym_method_declaration] = 300,
        [sym_type_declaration] = 300,
        [aux_sym_source_file_repeat2] = 300,
        [aux_sym_expression_list_repeat1] = 300,
        [ts_builtin_sym_end] = 300,
        [anon_sym_const] = 300,
        [anon_sym_var] = 300,
        [anon_sym_func] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_type] = 300,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 740,
        [anon_sym_DASH] = 740,
        [anon_sym_PIPE] = 740,
        [anon_sym_CARET] = 740,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [303] = {
        [sym__top_level_declaration] = 300,
        [sym__declaration] = 300,
        [sym_const_declaration] = 300,
        [sym_var_declaration] = 300,
        [sym_function_declaration] = 300,
        [sym_method_declaration] = 300,
        [sym_type_declaration] = 300,
        [aux_sym_source_file_repeat2] = 300,
        [aux_sym_expression_list_repeat1] = 300,
        [ts_builtin_sym_end] = 300,
        [anon_sym_const] = 300,
        [anon_sym_var] = 300,
        [anon_sym_func] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_type] = 300,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 740,
        [anon_sym_DASH] = 740,
        [anon_sym_PIPE] = 740,
        [anon_sym_CARET] = 740,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [304] = {
        [sym__top_level_declaration] = 300,
        [sym__declaration] = 300,
        [sym_const_declaration] = 300,
        [sym_var_declaration] = 300,
        [sym_function_declaration] = 300,
        [sym_method_declaration] = 300,
        [sym_type_declaration] = 300,
        [aux_sym_source_file_repeat2] = 300,
        [aux_sym_expression_list_repeat1] = 300,
        [ts_builtin_sym_end] = 300,
        [anon_sym_const] = 300,
        [anon_sym_var] = 300,
        [anon_sym_func] = 300,
        [anon_sym_COMMA] = 300,
        [anon_sym_type] = 300,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 300,
        [anon_sym_DASH] = 300,
        [anon_sym_PIPE] = 300,
        [anon_sym_CARET] = 300,
        [anon_sym_EQ_EQ] = 300,
        [anon_sym_BANG_EQ] = 300,
        [anon_sym_LT] = 300,
        [anon_sym_LT_EQ] = 300,
        [anon_sym_GT] = 300,
        [anon_sym_GT_EQ] = 300,
        [anon_sym_AMP_AMP] = 300,
        [anon_sym_PIPE_PIPE] = 300,
        [sym_comment] = 8,
    },
    [305] = {
        [sym__top_level_declaration] = 302,
        [sym__declaration] = 302,
        [sym_const_declaration] = 302,
        [sym_var_declaration] = 302,
        [sym_function_declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_type_declaration] = 302,
        [aux_sym_source_file_repeat2] = 302,
        [aux_sym_expression_list_repeat1] = 302,
        [ts_builtin_sym_end] = 302,
        [anon_sym_const] = 302,
        [anon_sym_var] = 302,
        [anon_sym_func] = 302,
        [anon_sym_COMMA] = 302,
        [anon_sym_type] = 302,
        [anon_sym_STAR] = 302,
        [anon_sym_SLASH] = 302,
        [anon_sym_PERCENT] = 302,
        [anon_sym_LT_LT] = 302,
        [anon_sym_GT_GT] = 302,
        [anon_sym_AMP] = 302,
        [anon_sym_AMP_CARET] = 302,
        [anon_sym_PLUS] = 302,
        [anon_sym_DASH] = 302,
        [anon_sym_PIPE] = 302,
        [anon_sym_CARET] = 302,
        [anon_sym_EQ_EQ] = 302,
        [anon_sym_BANG_EQ] = 302,
        [anon_sym_LT] = 302,
        [anon_sym_LT_EQ] = 302,
        [anon_sym_GT] = 302,
        [anon_sym_GT_EQ] = 302,
        [anon_sym_AMP_AMP] = 302,
        [anon_sym_PIPE_PIPE] = 302,
        [sym_comment] = 8,
    },
    [306] = {
        [sym__top_level_declaration] = 676,
        [sym__declaration] = 676,
        [sym_const_declaration] = 676,
        [sym_var_declaration] = 676,
        [sym_function_declaration] = 676,
        [sym_method_declaration] = 676,
        [sym_type_declaration] = 676,
        [aux_sym_source_file_repeat2] = 676,
        [aux_sym_expression_list_repeat1] = 760,
        [ts_builtin_sym_end] = 676,
        [anon_sym_const] = 676,
        [anon_sym_var] = 676,
        [anon_sym_func] = 676,
        [anon_sym_COMMA] = 736,
        [anon_sym_type] = 676,
        [anon_sym_STAR] = 738,
        [anon_sym_SLASH] = 738,
        [anon_sym_PERCENT] = 738,
        [anon_sym_LT_LT] = 738,
        [anon_sym_GT_GT] = 738,
        [anon_sym_AMP] = 738,
        [anon_sym_AMP_CARET] = 738,
        [anon_sym_PLUS] = 740,
        [anon_sym_DASH] = 740,
        [anon_sym_PIPE] = 740,
        [anon_sym_CARET] = 740,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 746,
        [sym_comment] = 8,
    },
    [307] = {
        [sym__top_level_declaration] = 678,
        [sym__declaration] = 678,
        [sym_const_declaration] = 678,
        [sym_var_declaration] = 678,
        [sym_function_declaration] = 678,
        [sym_method_declaration] = 678,
        [sym_type_declaration] = 678,
        [aux_sym_source_file_repeat2] = 678,
        [ts_builtin_sym_end] = 678,
        [anon_sym_const] = 678,
        [anon_sym_var] = 678,
        [anon_sym_func] = 678,
        [anon_sym_type] = 678,
        [sym_comment] = 8,
    },
    [308] = {
        [sym_expression_list] = 762,
        [sym__expression] = 694,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [309] = {
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
    [310] = {
        [sym__top_level_declaration] = 764,
        [sym__declaration] = 764,
        [sym_const_declaration] = 764,
        [sym_var_declaration] = 764,
        [sym_function_declaration] = 764,
        [sym_method_declaration] = 764,
        [sym_type_declaration] = 764,
        [aux_sym_source_file_repeat2] = 764,
        [ts_builtin_sym_end] = 764,
        [anon_sym_const] = 764,
        [anon_sym_var] = 764,
        [anon_sym_func] = 764,
        [anon_sym_type] = 764,
        [sym_comment] = 8,
    },
    [311] = {
        [sym__type] = 766,
        [sym_array_type] = 768,
        [sym_slice_type] = 768,
        [sym_struct_type] = 768,
        [sym_map_type] = 768,
        [sym_qualified_identifier] = 768,
        [anon_sym_EQ] = 770,
        [anon_sym_LBRACK] = 772,
        [anon_sym_struct] = 774,
        [anon_sym_map] = 776,
        [sym_identifier] = 778,
        [sym_comment] = 8,
    },
    [312] = {
        [sym_const_spec] = 780,
        [sym_identifier_list] = 782,
        [aux_sym_const_declaration_repeat1] = 784,
        [anon_sym_RPAREN] = 786,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [313] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 788,
        [sym_comment] = 8,
    },
    [314] = {
        [sym__type] = 790,
        [sym_array_type] = 768,
        [sym_slice_type] = 768,
        [sym_struct_type] = 768,
        [sym_map_type] = 768,
        [sym_qualified_identifier] = 768,
        [anon_sym_EQ] = 792,
        [anon_sym_LBRACK] = 772,
        [anon_sym_struct] = 774,
        [anon_sym_map] = 776,
        [sym_identifier] = 778,
        [sym_comment] = 8,
    },
    [315] = {
        [anon_sym_RPAREN] = 794,
        [sym_comment] = 8,
    },
    [316] = {
        [sym__top_level_declaration] = 796,
        [sym__declaration] = 796,
        [sym_const_declaration] = 796,
        [sym_var_declaration] = 796,
        [sym_function_declaration] = 796,
        [sym_method_declaration] = 796,
        [sym_type_declaration] = 796,
        [aux_sym_source_file_repeat2] = 796,
        [ts_builtin_sym_end] = 796,
        [anon_sym_const] = 796,
        [anon_sym_var] = 796,
        [anon_sym_func] = 796,
        [anon_sym_type] = 796,
        [sym_comment] = 8,
    },
    [317] = {
        [sym__top_level_declaration] = 798,
        [sym__declaration] = 798,
        [sym_const_declaration] = 798,
        [sym_var_declaration] = 798,
        [sym_function_declaration] = 798,
        [sym_method_declaration] = 798,
        [sym_type_declaration] = 798,
        [aux_sym_source_file_repeat2] = 798,
        [ts_builtin_sym_end] = 798,
        [anon_sym_const] = 798,
        [anon_sym_var] = 798,
        [anon_sym_func] = 798,
        [anon_sym_type] = 798,
        [sym_comment] = 8,
    },
    [318] = {
        [anon_sym_EQ] = 800,
        [sym_comment] = 8,
    },
    [319] = {
        [anon_sym_EQ] = 116,
        [sym_comment] = 8,
    },
    [320] = {
        [sym_expression_list] = 802,
        [sym__expression] = 602,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [321] = {
        [sym__expression] = 804,
        [sym_unary_expression] = 120,
        [sym_binary_expression] = 120,
        [sym__primary_expression] = 120,
        [sym__string_literal] = 122,
        [sym_int_literal] = 122,
        [sym_float_literal] = 122,
        [anon_sym_RBRACK] = 806,
        [sym_identifier] = 122,
        [sym_raw_string_literal] = 126,
        [sym_interpreted_string_literal] = 126,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 128,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 8,
    },
    [322] = {
        [anon_sym_LBRACE] = 808,
        [sym_comment] = 8,
    },
    [323] = {
        [anon_sym_LBRACK] = 810,
        [sym_comment] = 8,
    },
    [324] = {
        [anon_sym_DOT] = 812,
        [anon_sym_EQ] = 116,
        [sym_comment] = 8,
    },
    [325] = {
        [sym_identifier] = 814,
        [sym_comment] = 8,
    },
    [326] = {
        [anon_sym_EQ] = 138,
        [sym_comment] = 8,
    },
    [327] = {
        [sym__type] = 816,
        [sym_array_type] = 142,
        [sym_slice_type] = 142,
        [sym_struct_type] = 142,
        [sym_map_type] = 142,
        [sym_qualified_identifier] = 142,
        [anon_sym_LBRACK] = 144,
        [anon_sym_struct] = 146,
        [anon_sym_map] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [328] = {
        [anon_sym_RBRACK] = 818,
        [sym_comment] = 8,
    },
    [329] = {
        [sym__type] = 820,
        [sym_array_type] = 768,
        [sym_slice_type] = 768,
        [sym_struct_type] = 768,
        [sym_map_type] = 768,
        [sym_qualified_identifier] = 768,
        [anon_sym_LBRACK] = 772,
        [anon_sym_struct] = 774,
        [anon_sym_map] = 776,
        [sym_identifier] = 778,
        [sym_comment] = 8,
    },
    [330] = {
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [331] = {
        [sym_identifier_list] = 174,
        [sym_field_declaration] = 176,
        [aux_sym_struct_type_repeat1] = 822,
        [anon_sym_RBRACE] = 824,
        [anon_sym_STAR] = 182,
        [sym_identifier] = 184,
        [sym_comment] = 8,
    },
    [332] = {
        [anon_sym_RBRACE] = 826,
        [sym_comment] = 8,
    },
    [333] = {
        [anon_sym_EQ] = 202,
        [sym_comment] = 8,
    },
    [334] = {
        [anon_sym_EQ] = 234,
        [sym_comment] = 8,
    },
    [335] = {
        [anon_sym_RBRACK] = 828,
        [anon_sym_STAR] = 268,
        [anon_sym_SLASH] = 268,
        [anon_sym_PERCENT] = 268,
        [anon_sym_LT_LT] = 268,
        [anon_sym_GT_GT] = 268,
        [anon_sym_AMP] = 268,
        [anon_sym_AMP_CARET] = 268,
        [anon_sym_PLUS] = 270,
        [anon_sym_DASH] = 270,
        [anon_sym_PIPE] = 270,
        [anon_sym_CARET] = 270,
        [anon_sym_EQ_EQ] = 272,
        [anon_sym_BANG_EQ] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_EQ] = 272,
        [anon_sym_GT] = 272,
        [anon_sym_GT_EQ] = 272,
        [anon_sym_AMP_AMP] = 274,
        [anon_sym_PIPE_PIPE] = 276,
        [sym_comment] = 8,
    },
    [336] = {
        [sym__type] = 830,
        [sym_array_type] = 768,
        [sym_slice_type] = 768,
        [sym_struct_type] = 768,
        [sym_map_type] = 768,
        [sym_qualified_identifier] = 768,
        [anon_sym_LBRACK] = 772,
        [anon_sym_struct] = 774,
        [anon_sym_map] = 776,
        [sym_identifier] = 778,
        [sym_comment] = 8,
    },
    [337] = {
        [anon_sym_EQ] = 286,
        [sym_comment] = 8,
    },
    [338] = {
        [sym__type] = 832,
        [sym_array_type] = 768,
        [sym_slice_type] = 768,
        [sym_struct_type] = 768,
        [sym_map_type] = 768,
        [sym_qualified_identifier] = 768,
        [anon_sym_LBRACK] = 772,
        [anon_sym_struct] = 774,
        [anon_sym_map] = 776,
        [sym_identifier] = 778,
        [sym_comment] = 8,
    },
    [339] = {
        [anon_sym_EQ] = 304,
        [sym_comment] = 8,
    },
    [340] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 834,
        [sym_comment] = 8,
    },
    [341] = {
        [sym_expression_list] = 836,
        [sym__expression] = 602,
        [sym_unary_expression] = 604,
        [sym_binary_expression] = 604,
        [sym__primary_expression] = 604,
        [sym__string_literal] = 606,
        [sym_int_literal] = 606,
        [sym_float_literal] = 606,
        [sym_identifier] = 606,
        [sym_raw_string_literal] = 608,
        [sym_interpreted_string_literal] = 608,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 610,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 610,
        [sym_comment] = 8,
    },
    [342] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 838,
        [sym_comment] = 8,
    },
    [343] = {
        [sym_const_spec] = 780,
        [sym_identifier_list] = 782,
        [aux_sym_const_declaration_repeat1] = 840,
        [anon_sym_RPAREN] = 842,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [344] = {
        [anon_sym_RPAREN] = 844,
        [sym_comment] = 8,
    },
    [345] = {
        [anon_sym_EQ] = 846,
        [sym_comment] = 8,
    },
    [346] = {
        [sym_expression_list] = 848,
        [sym__expression] = 694,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [347] = {
        [sym__top_level_declaration] = 834,
        [sym__declaration] = 834,
        [sym_const_declaration] = 834,
        [sym_var_declaration] = 834,
        [sym_function_declaration] = 834,
        [sym_method_declaration] = 834,
        [sym_type_declaration] = 834,
        [aux_sym_source_file_repeat2] = 834,
        [ts_builtin_sym_end] = 834,
        [anon_sym_const] = 834,
        [anon_sym_var] = 834,
        [anon_sym_func] = 834,
        [anon_sym_type] = 834,
        [sym_comment] = 8,
    },
    [348] = {
        [sym_expression_list] = 850,
        [sym__expression] = 694,
        [sym_unary_expression] = 696,
        [sym_binary_expression] = 696,
        [sym__primary_expression] = 696,
        [sym__string_literal] = 698,
        [sym_int_literal] = 698,
        [sym_float_literal] = 698,
        [sym_identifier] = 698,
        [sym_raw_string_literal] = 700,
        [sym_interpreted_string_literal] = 700,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 702,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 702,
        [sym_comment] = 8,
    },
    [349] = {
        [sym__top_level_declaration] = 838,
        [sym__declaration] = 838,
        [sym_const_declaration] = 838,
        [sym_var_declaration] = 838,
        [sym_function_declaration] = 838,
        [sym_method_declaration] = 838,
        [sym_type_declaration] = 838,
        [aux_sym_source_file_repeat2] = 838,
        [ts_builtin_sym_end] = 838,
        [anon_sym_const] = 838,
        [anon_sym_var] = 838,
        [anon_sym_func] = 838,
        [anon_sym_type] = 838,
        [sym_comment] = 8,
    },
    [350] = {
        [sym_import_declaration] = 852,
        [sym__top_level_declaration] = 852,
        [sym__declaration] = 852,
        [sym_const_declaration] = 852,
        [sym_var_declaration] = 852,
        [sym_function_declaration] = 852,
        [sym_method_declaration] = 852,
        [sym_type_declaration] = 852,
        [aux_sym_source_file_repeat1] = 852,
        [aux_sym_source_file_repeat2] = 852,
        [ts_builtin_sym_end] = 852,
        [anon_sym_import] = 852,
        [anon_sym_const] = 852,
        [anon_sym_var] = 852,
        [anon_sym_func] = 852,
        [anon_sym_type] = 852,
        [sym_comment] = 8,
    },
    [351] = {
        [sym_import_declaration] = 854,
        [sym__top_level_declaration] = 854,
        [sym__declaration] = 854,
        [sym_const_declaration] = 854,
        [sym_var_declaration] = 854,
        [sym_function_declaration] = 854,
        [sym_method_declaration] = 854,
        [sym_type_declaration] = 854,
        [aux_sym_source_file_repeat1] = 854,
        [aux_sym_source_file_repeat2] = 854,
        [ts_builtin_sym_end] = 854,
        [anon_sym_import] = 854,
        [anon_sym_const] = 854,
        [anon_sym_var] = 854,
        [anon_sym_func] = 854,
        [anon_sym_type] = 854,
        [sym_comment] = 8,
    },
    [352] = {
        [sym_import_spec] = 856,
        [sym__string_literal] = 858,
        [aux_sym_import_declaration_repeat1] = 860,
        [anon_sym_RPAREN] = 862,
        [anon_sym_DOT] = 864,
        [sym_identifier] = 864,
        [sym_raw_string_literal] = 214,
        [sym_interpreted_string_literal] = 214,
        [sym_comment] = 8,
    },
    [353] = {
        [sym__string_literal] = 866,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [354] = {
        [sym_import_declaration] = 222,
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat1] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_import] = 222,
        [anon_sym_const] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [anon_sym_type] = 222,
        [sym_comment] = 8,
    },
    [355] = {
        [sym_import_declaration] = 868,
        [sym__top_level_declaration] = 868,
        [sym__declaration] = 868,
        [sym_const_declaration] = 868,
        [sym_var_declaration] = 868,
        [sym_function_declaration] = 868,
        [sym_method_declaration] = 868,
        [sym_type_declaration] = 868,
        [aux_sym_source_file_repeat1] = 868,
        [aux_sym_source_file_repeat2] = 868,
        [ts_builtin_sym_end] = 868,
        [anon_sym_import] = 868,
        [anon_sym_const] = 868,
        [anon_sym_var] = 868,
        [anon_sym_func] = 868,
        [anon_sym_type] = 868,
        [sym_comment] = 8,
    },
    [356] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 870,
        [sym_comment] = 8,
    },
    [357] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 854,
        [sym_comment] = 8,
    },
    [358] = {
        [anon_sym_RPAREN] = 872,
        [sym_comment] = 8,
    },
    [359] = {
        [sym_import_declaration] = 874,
        [sym__top_level_declaration] = 874,
        [sym__declaration] = 874,
        [sym_const_declaration] = 874,
        [sym_var_declaration] = 874,
        [sym_function_declaration] = 874,
        [sym_method_declaration] = 874,
        [sym_type_declaration] = 874,
        [aux_sym_source_file_repeat1] = 874,
        [aux_sym_source_file_repeat2] = 874,
        [ts_builtin_sym_end] = 874,
        [anon_sym_import] = 874,
        [anon_sym_const] = 874,
        [anon_sym_var] = 874,
        [anon_sym_func] = 874,
        [anon_sym_type] = 874,
        [sym_comment] = 8,
    },
    [360] = {
        [sym__string_literal] = 876,
        [sym_raw_string_literal] = 214,
        [sym_interpreted_string_literal] = 214,
        [sym_comment] = 8,
    },
    [361] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 868,
        [sym_comment] = 8,
    },
    [362] = {
        [sym_import_declaration] = 878,
        [sym__top_level_declaration] = 878,
        [sym__declaration] = 878,
        [sym_const_declaration] = 878,
        [sym_var_declaration] = 878,
        [sym_function_declaration] = 878,
        [sym_method_declaration] = 878,
        [sym_type_declaration] = 878,
        [aux_sym_source_file_repeat1] = 878,
        [aux_sym_source_file_repeat2] = 878,
        [ts_builtin_sym_end] = 878,
        [anon_sym_import] = 878,
        [anon_sym_const] = 878,
        [anon_sym_var] = 878,
        [anon_sym_func] = 878,
        [anon_sym_type] = 878,
        [sym_comment] = 8,
    },
    [363] = {
        [sym_import_spec] = 856,
        [sym__string_literal] = 858,
        [aux_sym_import_declaration_repeat1] = 880,
        [anon_sym_RPAREN] = 882,
        [anon_sym_DOT] = 864,
        [sym_identifier] = 864,
        [sym_raw_string_literal] = 214,
        [sym_interpreted_string_literal] = 214,
        [sym_comment] = 8,
    },
    [364] = {
        [anon_sym_RPAREN] = 884,
        [sym_comment] = 8,
    },
    [365] = {
        [ts_builtin_sym_end] = 886,
        [sym_comment] = 8,
    },
    [366] = {
        [ts_builtin_sym_end] = 888,
        [sym_comment] = 8,
    },
    [367] = {
        [sym__top_level_declaration] = 890,
        [sym__declaration] = 890,
        [sym_const_declaration] = 890,
        [sym_var_declaration] = 890,
        [sym_function_declaration] = 890,
        [sym_method_declaration] = 890,
        [sym_type_declaration] = 890,
        [aux_sym_source_file_repeat2] = 890,
        [ts_builtin_sym_end] = 890,
        [anon_sym_const] = 890,
        [anon_sym_var] = 890,
        [anon_sym_func] = 890,
        [anon_sym_type] = 890,
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
    [42] = {.count = 1}, SHIFT(367, 0),
    [44] = {.count = 1}, SHIFT(366, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(365, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(350, 0),
    [58] = {.count = 1}, SHIFT(351, 0),
    [60] = {.count = 1}, SHIFT(352, 0),
    [62] = {.count = 1}, SHIFT(353, 0),
    [64] = {.count = 1}, SHIFT(354, 0),
    [66] = {.count = 1}, SHIFT(310, 0),
    [68] = {.count = 1}, SHIFT(311, 0),
    [70] = {.count = 1}, SHIFT(312, 0),
    [72] = {.count = 1}, SHIFT(210, 0),
    [74] = {.count = 1}, SHIFT(207, 0),
    [76] = {.count = 1}, SHIFT(208, 0),
    [78] = {.count = 1}, SHIFT(209, 0),
    [80] = {.count = 1}, SHIFT(136, 0),
    [82] = {.count = 1}, SHIFT(137, 0),
    [84] = {.count = 1}, SHIFT(138, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(108, 0),
    [96] = {.count = 1}, SHIFT(109, 0),
    [98] = {.count = 1}, SHIFT(110, 0),
    [100] = {.count = 1}, SHIFT(111, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, SHIFT(23, 0),
    [112] = {.count = 1}, SHIFT(24, 0),
    [114] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [116] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [118] = {.count = 1}, SHIFT(103, 0),
    [120] = {.count = 1}, SHIFT(74, 0),
    [122] = {.count = 1}, SHIFT(75, 0),
    [124] = {.count = 1}, SHIFT(104, 0),
    [126] = {.count = 1}, SHIFT(77, 0),
    [128] = {.count = 1}, SHIFT(78, 0),
    [130] = {.count = 1}, SHIFT(99, 0),
    [132] = {.count = 1}, SHIFT(27, 0),
    [134] = {.count = 1}, SHIFT(25, 0),
    [136] = {.count = 1}, SHIFT(26, 0),
    [138] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [140] = {.count = 1}, SHIFT(28, 0),
    [142] = {.count = 1}, SHIFT(29, 0),
    [144] = {.count = 1}, SHIFT(30, 0),
    [146] = {.count = 1}, SHIFT(31, 0),
    [148] = {.count = 1}, SHIFT(32, 0),
    [150] = {.count = 1}, SHIFT(33, 0),
    [152] = {.count = 1}, SHIFT(97, 0),
    [154] = {.count = 1}, SHIFT(92, 0),
    [156] = {.count = 1}, SHIFT(93, 0),
    [158] = {.count = 1}, SHIFT(40, 0),
    [160] = {.count = 1}, SHIFT(36, 0),
    [162] = {.count = 1}, SHIFT(34, 0),
    [164] = {.count = 1}, SHIFT(35, 0),
    [166] = {.count = 1}, SHIFT(37, 0),
    [168] = {.count = 1}, SHIFT(38, 0),
    [170] = {.count = 1}, SHIFT(39, 0),
    [172] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [174] = {.count = 1}, SHIFT(41, 0),
    [176] = {.count = 1}, SHIFT(42, 0),
    [178] = {.count = 1}, SHIFT(43, 0),
    [180] = {.count = 1}, SHIFT(44, 0),
    [182] = {.count = 1}, SHIFT(45, 0),
    [184] = {.count = 1}, SHIFT(46, 0),
    [186] = {.count = 1}, SHIFT(53, 0),
    [188] = {.count = 1}, SHIFT(58, 0),
    [190] = {.count = 1}, SHIFT(59, 0),
    [192] = {.count = 1}, SHIFT(60, 0),
    [194] = {.count = 1}, SHIFT(61, 0),
    [196] = {.count = 1}, SHIFT(62, 0),
    [198] = {.count = 1}, SHIFT(56, 0),
    [200] = {.count = 1}, SHIFT(55, 0),
    [202] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [204] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [206] = {.count = 1}, SHIFT(47, 0),
    [208] = {.count = 1}, SHIFT(48, 0),
    [210] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [212] = {.count = 1}, SHIFT(49, 0),
    [214] = {.count = 1}, SHIFT(50, 0),
    [216] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [218] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [220] = {.count = 1}, SHIFT(51, 0),
    [222] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [224] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [226] = {.count = 1}, SHIFT(52, 0),
    [228] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [230] = {.count = 1}, SHIFT(54, 0),
    [232] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [234] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [236] = {.count = 1}, SHIFT(57, 0),
    [238] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [240] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [242] = {.count = 1}, SHIFT(73, 0),
    [244] = {.count = 1}, SHIFT(76, 0),
    [246] = {.count = 1}, SHIFT(69, 0),
    [248] = {.count = 1}, SHIFT(65, 0),
    [250] = {.count = 1}, SHIFT(63, 0),
    [252] = {.count = 1}, SHIFT(64, 0),
    [254] = {.count = 1}, SHIFT(66, 0),
    [256] = {.count = 1}, SHIFT(67, 0),
    [258] = {.count = 1}, SHIFT(68, 0),
    [260] = {.count = 1}, SHIFT(70, 0),
    [262] = {.count = 1}, SHIFT(71, 0),
    [264] = {.count = 1}, SHIFT(72, 0),
    [266] = {.count = 1}, SHIFT(80, 0),
    [268] = {.count = 1}, SHIFT(81, 0),
    [270] = {.count = 1}, SHIFT(82, 0),
    [272] = {.count = 1}, SHIFT(83, 0),
    [274] = {.count = 1}, SHIFT(84, 0),
    [276] = {.count = 1}, SHIFT(85, 0),
    [278] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [280] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [282] = {.count = 1}, SHIFT(79, 0),
    [284] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [286] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [288] = {.count = 1}, SHIFT(91, 0),
    [290] = {.count = 1}, SHIFT(90, 0),
    [292] = {.count = 1}, SHIFT(89, 0),
    [294] = {.count = 1}, SHIFT(88, 0),
    [296] = {.count = 1}, SHIFT(87, 0),
    [298] = {.count = 1}, SHIFT(86, 0),
    [300] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [302] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [304] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [306] = {.count = 1}, SHIFT(95, 0),
    [308] = {.count = 1}, SHIFT(94, 0),
    [310] = {.count = 1}, SHIFT(96, 0),
    [312] = {.count = 1}, SHIFT(98, 0),
    [314] = {.count = 1}, SHIFT(100, 0),
    [316] = {.count = 1}, SHIFT(101, 0),
    [318] = {.count = 1}, SHIFT(102, 0),
    [320] = {.count = 1}, SHIFT(106, 0),
    [322] = {.count = 1}, SHIFT(105, 0),
    [324] = {.count = 1}, SHIFT(107, 0),
    [326] = {.count = 1}, SHIFT(134, 0),
    [328] = {.count = 1}, SHIFT(133, 0),
    [330] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [332] = {.count = 1}, SHIFT(112, 0),
    [334] = {.count = 1}, SHIFT(113, 0),
    [336] = {.count = 1}, SHIFT(114, 0),
    [338] = {.count = 1}, SHIFT(115, 0),
    [340] = {.count = 1}, SHIFT(116, 0),
    [342] = {.count = 1}, SHIFT(117, 0),
    [344] = {.count = 1}, SHIFT(128, 0),
    [346] = {.count = 1}, SHIFT(129, 0),
    [348] = {.count = 1}, SHIFT(124, 0),
    [350] = {.count = 1}, SHIFT(120, 0),
    [352] = {.count = 1}, SHIFT(118, 0),
    [354] = {.count = 1}, SHIFT(119, 0),
    [356] = {.count = 1}, SHIFT(121, 0),
    [358] = {.count = 1}, SHIFT(122, 0),
    [360] = {.count = 1}, SHIFT(123, 0),
    [362] = {.count = 1}, SHIFT(125, 0),
    [364] = {.count = 1}, SHIFT(126, 0),
    [366] = {.count = 1}, SHIFT(127, 0),
    [368] = {.count = 1}, SHIFT(131, 0),
    [370] = {.count = 1}, SHIFT(130, 0),
    [372] = {.count = 1}, SHIFT(132, 0),
    [374] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [376] = {.count = 1}, SHIFT(135, 0),
    [378] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [380] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [382] = {.count = 1}, SHIFT(202, 0),
    [384] = {.count = 1}, SHIFT(199, 0),
    [386] = {.count = 1}, SHIFT(142, 0),
    [388] = {.count = 1}, SHIFT(200, 0),
    [390] = {.count = 1}, SHIFT(144, 0),
    [392] = {.count = 1}, SHIFT(139, 0),
    [394] = {.count = 1}, SHIFT(140, 0),
    [396] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [398] = {.count = 1}, SHIFT(170, 0),
    [400] = {.count = 1}, SHIFT(171, 0),
    [402] = {.count = 1}, SHIFT(172, 0),
    [404] = {.count = 1}, SHIFT(173, 0),
    [406] = {.count = 1}, SHIFT(174, 0),
    [408] = {.count = 1}, SHIFT(175, 0),
    [410] = {.count = 1}, SHIFT(176, 0),
    [412] = {.count = 1}, SHIFT(177, 0),
    [414] = {.count = 1}, SHIFT(178, 0),
    [416] = {.count = 1}, SHIFT(141, 0),
    [418] = {.count = 1}, SHIFT(143, 0),
    [420] = {.count = 1}, SHIFT(166, 0),
    [422] = {.count = 1}, SHIFT(167, 0),
    [424] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [426] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [428] = {.count = 1}, SHIFT(145, 0),
    [430] = {.count = 1}, SHIFT(146, 0),
    [432] = {.count = 1}, SHIFT(147, 0),
    [434] = {.count = 1}, SHIFT(148, 0),
    [436] = {.count = 1}, SHIFT(149, 0),
    [438] = {.count = 1}, SHIFT(150, 0),
    [440] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [442] = {.count = 1}, SHIFT(161, 0),
    [444] = {.count = 1}, SHIFT(162, 0),
    [446] = {.count = 1}, SHIFT(157, 0),
    [448] = {.count = 1}, SHIFT(153, 0),
    [450] = {.count = 1}, SHIFT(151, 0),
    [452] = {.count = 1}, SHIFT(152, 0),
    [454] = {.count = 1}, SHIFT(154, 0),
    [456] = {.count = 1}, SHIFT(155, 0),
    [458] = {.count = 1}, SHIFT(156, 0),
    [460] = {.count = 1}, SHIFT(158, 0),
    [462] = {.count = 1}, SHIFT(159, 0),
    [464] = {.count = 1}, SHIFT(160, 0),
    [466] = {.count = 1}, SHIFT(164, 0),
    [468] = {.count = 1}, SHIFT(163, 0),
    [470] = {.count = 1}, SHIFT(165, 0),
    [472] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [474] = {.count = 1}, SHIFT(168, 0),
    [476] = {.count = 1}, SHIFT(169, 0),
    [478] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [480] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [482] = {.count = 1}, SHIFT(198, 0),
    [484] = {.count = 1}, SHIFT(195, 0),
    [486] = {.count = 1}, SHIFT(196, 0),
    [488] = {.count = 1}, SHIFT(194, 0),
    [490] = {.count = 1}, SHIFT(189, 0),
    [492] = {.count = 1}, SHIFT(190, 0),
    [494] = {.count = 1}, SHIFT(185, 0),
    [496] = {.count = 1}, SHIFT(181, 0),
    [498] = {.count = 1}, SHIFT(179, 0),
    [500] = {.count = 1}, SHIFT(180, 0),
    [502] = {.count = 1}, SHIFT(182, 0),
    [504] = {.count = 1}, SHIFT(183, 0),
    [506] = {.count = 1}, SHIFT(184, 0),
    [508] = {.count = 1}, SHIFT(186, 0),
    [510] = {.count = 1}, SHIFT(187, 0),
    [512] = {.count = 1}, SHIFT(188, 0),
    [514] = {.count = 1}, SHIFT(192, 0),
    [516] = {.count = 1}, SHIFT(191, 0),
    [518] = {.count = 1}, SHIFT(193, 0),
    [520] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [522] = {.count = 1}, SHIFT(197, 0),
    [524] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [526] = {.count = 1}, SHIFT(201, 0),
    [528] = {.count = 1}, SHIFT(203, 0),
    [530] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [532] = {.count = 1}, SHIFT(204, 0),
    [534] = {.count = 1}, SHIFT(205, 0),
    [536] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [538] = {.count = 1}, SHIFT(206, 0),
    [540] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [542] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [544] = {.count = 1}, SHIFT(266, 0),
    [546] = {.count = 1}, SHIFT(267, 0),
    [548] = {.count = 1}, SHIFT(268, 0),
    [550] = {.count = 1}, SHIFT(269, 0),
    [552] = {.count = 1}, SHIFT(270, 0),
    [554] = {.count = 1}, SHIFT(271, 0),
    [556] = {.count = 1}, SHIFT(272, 0),
    [558] = {.count = 1}, SHIFT(215, 0),
    [560] = {.count = 1}, SHIFT(216, 0),
    [562] = {.count = 1}, SHIFT(217, 0),
    [564] = {.count = 1}, SHIFT(218, 0),
    [566] = {.count = 1}, SHIFT(211, 0),
    [568] = {.count = 1}, SHIFT(212, 0),
    [570] = {.count = 1}, SHIFT(213, 0),
    [572] = {.count = 1}, SHIFT(214, 0),
    [574] = {.count = 1}, SHIFT(264, 0),
    [576] = {.count = 1}, SHIFT(220, 0),
    [578] = {.count = 1}, SHIFT(221, 0),
    [580] = {.count = 1}, SHIFT(222, 0),
    [582] = {.count = 1}, SHIFT(223, 0),
    [584] = {.count = 1}, SHIFT(224, 0),
    [586] = {.count = 1}, SHIFT(225, 0),
    [588] = {.count = 1}, SHIFT(226, 0),
    [590] = {.count = 1}, SHIFT(219, 0),
    [592] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [594] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [596] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [598] = {.count = 1}, SHIFT(262, 0),
    [600] = {.count = 1}, SHIFT(242, 0),
    [602] = {.count = 1}, SHIFT(243, 0),
    [604] = {.count = 1}, SHIFT(244, 0),
    [606] = {.count = 1}, SHIFT(245, 0),
    [608] = {.count = 1}, SHIFT(246, 0),
    [610] = {.count = 1}, SHIFT(247, 0),
    [612] = {.count = 1}, SHIFT(237, 0),
    [614] = {.count = 1}, SHIFT(238, 0),
    [616] = {.count = 1}, SHIFT(233, 0),
    [618] = {.count = 1}, SHIFT(229, 0),
    [620] = {.count = 1}, SHIFT(227, 0),
    [622] = {.count = 1}, SHIFT(228, 0),
    [624] = {.count = 1}, SHIFT(230, 0),
    [626] = {.count = 1}, SHIFT(231, 0),
    [628] = {.count = 1}, SHIFT(232, 0),
    [630] = {.count = 1}, SHIFT(234, 0),
    [632] = {.count = 1}, SHIFT(235, 0),
    [634] = {.count = 1}, SHIFT(236, 0),
    [636] = {.count = 1}, SHIFT(240, 0),
    [638] = {.count = 1}, SHIFT(239, 0),
    [640] = {.count = 1}, SHIFT(241, 0),
    [642] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [644] = {.count = 1}, SHIFT(248, 0),
    [646] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [648] = {.count = 1}, SHIFT(249, 0),
    [650] = {.count = 1}, SHIFT(250, 0),
    [652] = {.count = 1}, SHIFT(251, 0),
    [654] = {.count = 1}, SHIFT(252, 0),
    [656] = {.count = 1}, SHIFT(253, 0),
    [658] = {.count = 1}, SHIFT(254, 0),
    [660] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [662] = {.count = 1}, SHIFT(260, 0),
    [664] = {.count = 1}, SHIFT(259, 0),
    [666] = {.count = 1}, SHIFT(258, 0),
    [668] = {.count = 1}, SHIFT(257, 0),
    [670] = {.count = 1}, SHIFT(256, 0),
    [672] = {.count = 1}, SHIFT(255, 0),
    [674] = {.count = 1}, SHIFT(261, 0),
    [676] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [678] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [680] = {.count = 1}, SHIFT(263, 0),
    [682] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [684] = {.count = 1}, SHIFT(265, 0),
    [686] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [688] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [690] = {.count = 1}, SHIFT(308, 0),
    [692] = {.count = 1}, SHIFT(288, 0),
    [694] = {.count = 1}, SHIFT(289, 0),
    [696] = {.count = 1}, SHIFT(290, 0),
    [698] = {.count = 1}, SHIFT(291, 0),
    [700] = {.count = 1}, SHIFT(292, 0),
    [702] = {.count = 1}, SHIFT(293, 0),
    [704] = {.count = 1}, SHIFT(283, 0),
    [706] = {.count = 1}, SHIFT(284, 0),
    [708] = {.count = 1}, SHIFT(279, 0),
    [710] = {.count = 1}, SHIFT(275, 0),
    [712] = {.count = 1}, SHIFT(273, 0),
    [714] = {.count = 1}, SHIFT(274, 0),
    [716] = {.count = 1}, SHIFT(276, 0),
    [718] = {.count = 1}, SHIFT(277, 0),
    [720] = {.count = 1}, SHIFT(278, 0),
    [722] = {.count = 1}, SHIFT(280, 0),
    [724] = {.count = 1}, SHIFT(281, 0),
    [726] = {.count = 1}, SHIFT(282, 0),
    [728] = {.count = 1}, SHIFT(286, 0),
    [730] = {.count = 1}, SHIFT(285, 0),
    [732] = {.count = 1}, SHIFT(287, 0),
    [734] = {.count = 1}, SHIFT(294, 0),
    [736] = {.count = 1}, SHIFT(295, 0),
    [738] = {.count = 1}, SHIFT(296, 0),
    [740] = {.count = 1}, SHIFT(297, 0),
    [742] = {.count = 1}, SHIFT(298, 0),
    [744] = {.count = 1}, SHIFT(299, 0),
    [746] = {.count = 1}, SHIFT(300, 0),
    [748] = {.count = 1}, SHIFT(306, 0),
    [750] = {.count = 1}, SHIFT(305, 0),
    [752] = {.count = 1}, SHIFT(304, 0),
    [754] = {.count = 1}, SHIFT(303, 0),
    [756] = {.count = 1}, SHIFT(302, 0),
    [758] = {.count = 1}, SHIFT(301, 0),
    [760] = {.count = 1}, SHIFT(307, 0),
    [762] = {.count = 1}, SHIFT(309, 0),
    [764] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [766] = {.count = 1}, SHIFT(345, 0),
    [768] = {.count = 1}, SHIFT(319, 0),
    [770] = {.count = 1}, SHIFT(346, 0),
    [772] = {.count = 1}, SHIFT(321, 0),
    [774] = {.count = 1}, SHIFT(322, 0),
    [776] = {.count = 1}, SHIFT(323, 0),
    [778] = {.count = 1}, SHIFT(324, 0),
    [780] = {.count = 1}, SHIFT(313, 0),
    [782] = {.count = 1}, SHIFT(314, 0),
    [784] = {.count = 1}, SHIFT(315, 0),
    [786] = {.count = 1}, SHIFT(316, 0),
    [788] = {.count = 1}, SHIFT(343, 0),
    [790] = {.count = 1}, SHIFT(318, 0),
    [792] = {.count = 1}, SHIFT(320, 0),
    [794] = {.count = 1}, SHIFT(317, 0),
    [796] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [798] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [800] = {.count = 1}, SHIFT(341, 0),
    [802] = {.count = 1}, SHIFT(340, 0),
    [804] = {.count = 1}, SHIFT(335, 0),
    [806] = {.count = 1}, SHIFT(336, 0),
    [808] = {.count = 1}, SHIFT(331, 0),
    [810] = {.count = 1}, SHIFT(327, 0),
    [812] = {.count = 1}, SHIFT(325, 0),
    [814] = {.count = 1}, SHIFT(326, 0),
    [816] = {.count = 1}, SHIFT(328, 0),
    [818] = {.count = 1}, SHIFT(329, 0),
    [820] = {.count = 1}, SHIFT(330, 0),
    [822] = {.count = 1}, SHIFT(332, 0),
    [824] = {.count = 1}, SHIFT(333, 0),
    [826] = {.count = 1}, SHIFT(334, 0),
    [828] = {.count = 1}, SHIFT(338, 0),
    [830] = {.count = 1}, SHIFT(337, 0),
    [832] = {.count = 1}, SHIFT(339, 0),
    [834] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [836] = {.count = 1}, SHIFT(342, 0),
    [838] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [840] = {.count = 1}, SHIFT(344, 0),
    [842] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [844] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [846] = {.count = 1}, SHIFT(348, 0),
    [848] = {.count = 1}, SHIFT(347, 0),
    [850] = {.count = 1}, SHIFT(349, 0),
    [852] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [854] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [856] = {.count = 1}, SHIFT(356, 0),
    [858] = {.count = 1}, SHIFT(357, 0),
    [860] = {.count = 1}, SHIFT(358, 0),
    [862] = {.count = 1}, SHIFT(359, 0),
    [864] = {.count = 1}, SHIFT(360, 0),
    [866] = {.count = 1}, SHIFT(355, 0),
    [868] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [870] = {.count = 1}, SHIFT(363, 0),
    [872] = {.count = 1}, SHIFT(362, 0),
    [874] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [876] = {.count = 1}, SHIFT(361, 0),
    [878] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [880] = {.count = 1}, SHIFT(364, 0),
    [882] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [884] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [886] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [888] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [890] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
