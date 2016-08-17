#include "tree_sitter/parser.h"

#define STATE_COUNT 427
#define SYMBOL_COUNT 93

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
    sym_interface_type,
    sym_method_spec,
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
    aux_sym_interface_type_repeat1,
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
    anon_sym_interface,
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
    [sym_interface_type] = "interface_type",
    [sym_method_spec] = "method_spec",
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
    [aux_sym_interface_type_repeat1] = "interface_type_repeat1",
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
    [anon_sym_interface] = "interface",
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
    [sym_interface_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_interface_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(63);
            if (lookahead == 'p')
                ADVANCE(66);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 't')
                ADVANCE(79);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(86);
            if (lookahead == '|')
                ADVANCE(87);
            if (lookahead == '}')
                ADVANCE(89);
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
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(55);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'f')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
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
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_interface);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_map);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
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
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'k')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'g')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(72);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_package);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
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
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_struct);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'y')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_type);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_var);
        case 86:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 87:
            if (lookahead == '|')
                ADVANCE(88);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 88:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 89:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(92);
            LEX_ERROR();
        case 91:
            if (lookahead == '/')
                ADVANCE(19);
            LEX_ERROR();
        case 92:
            if (lookahead == 'a')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'c')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'k')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'a')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'g')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'e')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            ACCEPT_TOKEN(anon_sym_package);
        case 99:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 101:
            if (lookahead == 'o')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'n')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 's')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 't')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            ACCEPT_TOKEN(anon_sym_const);
        case 106:
            if (lookahead == 'u')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'n')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'c')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_func);
        case 110:
            if (lookahead == 'm')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'p')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'o')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'r')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 't')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(anon_sym_import);
        case 116:
            if (lookahead == 'y')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'p')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'e')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_type);
        case 120:
            if (lookahead == 'a')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'r')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_var);
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
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
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
                ADVANCE(91);
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
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '[')
                ADVANCE(35);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
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
                ADVANCE(91);
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
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
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
                ADVANCE(91);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
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
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 150:
            if (lookahead == '=')
                ADVANCE(30);
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
            if (lookahead == '/')
                ADVANCE(91);
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
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
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
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 't')
                ADVANCE(79);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 159:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
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
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
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
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 90,
    [1] = 99,
    [2] = 100,
    [3] = 123,
    [4] = 100,
    [5] = 100,
    [6] = 124,
    [7] = 124,
    [8] = 124,
    [9] = 124,
    [10] = 99,
    [11] = 125,
    [12] = 126,
    [13] = 126,
    [14] = 126,
    [15] = 126,
    [16] = 124,
    [17] = 127,
    [18] = 128,
    [19] = 124,
    [20] = 124,
    [21] = 130,
    [22] = 131,
    [23] = 131,
    [24] = 132,
    [25] = 133,
    [26] = 123,
    [27] = 124,
    [28] = 128,
    [29] = 134,
    [30] = 134,
    [31] = 130,
    [32] = 131,
    [33] = 131,
    [34] = 132,
    [35] = 135,
    [36] = 123,
    [37] = 134,
    [38] = 128,
    [39] = 134,
    [40] = 128,
    [41] = 134,
    [42] = 136,
    [43] = 137,
    [44] = 138,
    [45] = 134,
    [46] = 139,
    [47] = 140,
    [48] = 127,
    [49] = 136,
    [50] = 138,
    [51] = 141,
    [52] = 141,
    [53] = 140,
    [54] = 142,
    [55] = 141,
    [56] = 141,
    [57] = 130,
    [58] = 131,
    [59] = 131,
    [60] = 132,
    [61] = 143,
    [62] = 123,
    [63] = 141,
    [64] = 128,
    [65] = 134,
    [66] = 128,
    [67] = 141,
    [68] = 136,
    [69] = 138,
    [70] = 141,
    [71] = 141,
    [72] = 144,
    [73] = 128,
    [74] = 137,
    [75] = 138,
    [76] = 141,
    [77] = 123,
    [78] = 145,
    [79] = 137,
    [80] = 128,
    [81] = 123,
    [82] = 137,
    [83] = 146,
    [84] = 128,
    [85] = 147,
    [86] = 137,
    [87] = 141,
    [88] = 144,
    [89] = 138,
    [90] = 147,
    [91] = 130,
    [92] = 131,
    [93] = 131,
    [94] = 132,
    [95] = 148,
    [96] = 123,
    [97] = 147,
    [98] = 128,
    [99] = 134,
    [100] = 128,
    [101] = 147,
    [102] = 136,
    [103] = 138,
    [104] = 147,
    [105] = 147,
    [106] = 144,
    [107] = 138,
    [108] = 147,
    [109] = 147,
    [110] = 149,
    [111] = 149,
    [112] = 149,
    [113] = 128,
    [114] = 149,
    [115] = 149,
    [116] = 147,
    [117] = 128,
    [118] = 151,
    [119] = 151,
    [120] = 151,
    [121] = 151,
    [122] = 151,
    [123] = 149,
    [124] = 149,
    [125] = 149,
    [126] = 149,
    [127] = 149,
    [128] = 147,
    [129] = 149,
    [130] = 128,
    [131] = 141,
    [132] = 128,
    [133] = 141,
    [134] = 140,
    [135] = 123,
    [136] = 141,
    [137] = 142,
    [138] = 137,
    [139] = 137,
    [140] = 127,
    [141] = 130,
    [142] = 131,
    [143] = 131,
    [144] = 132,
    [145] = 152,
    [146] = 123,
    [147] = 137,
    [148] = 128,
    [149] = 134,
    [150] = 128,
    [151] = 137,
    [152] = 136,
    [153] = 138,
    [154] = 137,
    [155] = 137,
    [156] = 144,
    [157] = 138,
    [158] = 137,
    [159] = 137,
    [160] = 149,
    [161] = 128,
    [162] = 137,
    [163] = 128,
    [164] = 137,
    [165] = 141,
    [166] = 137,
    [167] = 137,
    [168] = 134,
    [169] = 144,
    [170] = 138,
    [171] = 134,
    [172] = 134,
    [173] = 149,
    [174] = 128,
    [175] = 134,
    [176] = 128,
    [177] = 134,
    [178] = 128,
    [179] = 124,
    [180] = 136,
    [181] = 138,
    [182] = 124,
    [183] = 124,
    [184] = 144,
    [185] = 138,
    [186] = 124,
    [187] = 124,
    [188] = 149,
    [189] = 128,
    [190] = 124,
    [191] = 128,
    [192] = 124,
    [193] = 137,
    [194] = 153,
    [195] = 124,
    [196] = 128,
    [197] = 137,
    [198] = 124,
    [199] = 127,
    [200] = 153,
    [201] = 123,
    [202] = 127,
    [203] = 154,
    [204] = 155,
    [205] = 127,
    [206] = 141,
    [207] = 155,
    [208] = 155,
    [209] = 156,
    [210] = 124,
    [211] = 156,
    [212] = 127,
    [213] = 138,
    [214] = 130,
    [215] = 131,
    [216] = 131,
    [217] = 132,
    [218] = 157,
    [219] = 123,
    [220] = 156,
    [221] = 128,
    [222] = 134,
    [223] = 128,
    [224] = 156,
    [225] = 136,
    [226] = 138,
    [227] = 156,
    [228] = 156,
    [229] = 144,
    [230] = 138,
    [231] = 156,
    [232] = 156,
    [233] = 149,
    [234] = 128,
    [235] = 156,
    [236] = 128,
    [237] = 156,
    [238] = 124,
    [239] = 141,
    [240] = 156,
    [241] = 156,
    [242] = 124,
    [243] = 141,
    [244] = 123,
    [245] = 123,
    [246] = 154,
    [247] = 155,
    [248] = 156,
    [249] = 124,
    [250] = 124,
    [251] = 124,
    [252] = 158,
    [253] = 127,
    [254] = 160,
    [255] = 158,
    [256] = 123,
    [257] = 160,
    [258] = 158,
    [259] = 137,
    [260] = 158,
    [261] = 153,
    [262] = 124,
    [263] = 124,
    [264] = 161,
    [265] = 161,
    [266] = 151,
    [267] = 130,
    [268] = 131,
    [269] = 131,
    [270] = 132,
    [271] = 162,
    [272] = 123,
    [273] = 161,
    [274] = 128,
    [275] = 134,
    [276] = 128,
    [277] = 161,
    [278] = 136,
    [279] = 138,
    [280] = 161,
    [281] = 161,
    [282] = 144,
    [283] = 138,
    [284] = 161,
    [285] = 161,
    [286] = 149,
    [287] = 128,
    [288] = 161,
    [289] = 128,
    [290] = 161,
    [291] = 137,
    [292] = 163,
    [293] = 163,
    [294] = 163,
    [295] = 163,
    [296] = 163,
    [297] = 137,
    [298] = 151,
    [299] = 151,
    [300] = 151,
    [301] = 151,
    [302] = 151,
    [303] = 151,
    [304] = 163,
    [305] = 163,
    [306] = 163,
    [307] = 163,
    [308] = 163,
    [309] = 163,
    [310] = 137,
    [311] = 151,
    [312] = 137,
    [313] = 127,
    [314] = 153,
    [315] = 164,
    [316] = 164,
    [317] = 151,
    [318] = 130,
    [319] = 131,
    [320] = 131,
    [321] = 132,
    [322] = 165,
    [323] = 123,
    [324] = 164,
    [325] = 128,
    [326] = 134,
    [327] = 128,
    [328] = 164,
    [329] = 136,
    [330] = 138,
    [331] = 164,
    [332] = 164,
    [333] = 144,
    [334] = 138,
    [335] = 164,
    [336] = 164,
    [337] = 149,
    [338] = 128,
    [339] = 164,
    [340] = 128,
    [341] = 164,
    [342] = 124,
    [343] = 166,
    [344] = 166,
    [345] = 166,
    [346] = 166,
    [347] = 166,
    [348] = 124,
    [349] = 151,
    [350] = 151,
    [351] = 151,
    [352] = 151,
    [353] = 151,
    [354] = 151,
    [355] = 166,
    [356] = 166,
    [357] = 166,
    [358] = 166,
    [359] = 166,
    [360] = 166,
    [361] = 124,
    [362] = 151,
    [363] = 124,
    [364] = 124,
    [365] = 158,
    [366] = 127,
    [367] = 137,
    [368] = 158,
    [369] = 153,
    [370] = 124,
    [371] = 124,
    [372] = 167,
    [373] = 167,
    [374] = 151,
    [375] = 130,
    [376] = 131,
    [377] = 131,
    [378] = 132,
    [379] = 168,
    [380] = 123,
    [381] = 167,
    [382] = 128,
    [383] = 134,
    [384] = 128,
    [385] = 167,
    [386] = 136,
    [387] = 138,
    [388] = 167,
    [389] = 167,
    [390] = 144,
    [391] = 138,
    [392] = 167,
    [393] = 167,
    [394] = 149,
    [395] = 128,
    [396] = 167,
    [397] = 128,
    [398] = 167,
    [399] = 137,
    [400] = 151,
    [401] = 137,
    [402] = 127,
    [403] = 153,
    [404] = 167,
    [405] = 151,
    [406] = 124,
    [407] = 151,
    [408] = 124,
    [409] = 100,
    [410] = 100,
    [411] = 169,
    [412] = 170,
    [413] = 100,
    [414] = 100,
    [415] = 137,
    [416] = 137,
    [417] = 153,
    [418] = 100,
    [419] = 170,
    [420] = 137,
    [421] = 100,
    [422] = 169,
    [423] = 153,
    [424] = 99,
    [425] = 99,
    [426] = 124,
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
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [19] = {
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
    [20] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_const] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__expression] = 120,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 126,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [22] = {
        [anon_sym_LBRACE] = 132,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_LBRACE] = 134,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACK] = 136,
        [sym_comment] = 8,
    },
    [25] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_DOT] = 138,
        [anon_sym_const] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [26] = {
        [sym_identifier] = 140,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_var_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_type_declaration] = 142,
        [aux_sym_source_file_repeat2] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_const] = 142,
        [anon_sym_var] = 142,
        [anon_sym_func] = 142,
        [anon_sym_type] = 142,
        [sym_comment] = 8,
    },
    [28] = {
        [sym__type] = 144,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_RBRACK] = 158,
        [sym_comment] = 8,
    },
    [30] = {
        [anon_sym_RBRACK] = 118,
        [sym_comment] = 8,
    },
    [31] = {
        [sym__expression] = 160,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 162,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [32] = {
        [anon_sym_LBRACE] = 164,
        [sym_comment] = 8,
    },
    [33] = {
        [anon_sym_LBRACE] = 166,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_LBRACK] = 168,
        [sym_comment] = 8,
    },
    [35] = {
        [anon_sym_DOT] = 170,
        [anon_sym_RBRACK] = 118,
        [sym_comment] = 8,
    },
    [36] = {
        [sym_identifier] = 172,
        [sym_comment] = 8,
    },
    [37] = {
        [anon_sym_RBRACK] = 142,
        [sym_comment] = 8,
    },
    [38] = {
        [sym__type] = 174,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 176,
        [sym_comment] = 8,
    },
    [40] = {
        [sym__type] = 178,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [41] = {
        [anon_sym_RBRACK] = 180,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 184,
        [anon_sym_RBRACE] = 186,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [43] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 190,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_RBRACE] = 192,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_RBRACK] = 194,
        [sym_comment] = 8,
    },
    [46] = {
        [sym_parameters] = 196,
        [anon_sym_LPAREN] = 198,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 190,
        [sym_comment] = 8,
    },
    [47] = {
        [sym_parameters] = 200,
        [sym__type] = 200,
        [sym_array_type] = 202,
        [sym_slice_type] = 202,
        [sym_struct_type] = 202,
        [sym_interface_type] = 202,
        [sym_map_type] = 202,
        [sym_qualified_identifier] = 202,
        [anon_sym_LPAREN] = 204,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 206,
        [anon_sym_LBRACK] = 208,
        [anon_sym_struct] = 210,
        [anon_sym_interface] = 212,
        [anon_sym_map] = 214,
        [sym_identifier] = 216,
        [sym_comment] = 8,
    },
    [48] = {
        [sym__parameter_list] = 218,
        [sym_parameter_declaration] = 220,
        [anon_sym_RPAREN] = 222,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 226,
        [anon_sym_RBRACE] = 228,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACE] = 230,
        [sym_comment] = 8,
    },
    [51] = {
        [anon_sym_RPAREN] = 232,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RPAREN] = 236,
        [anon_sym_COMMA] = 236,
        [sym_comment] = 8,
    },
    [53] = {
        [sym_parameters] = 238,
        [sym__type] = 238,
        [sym_array_type] = 238,
        [sym_slice_type] = 238,
        [sym_struct_type] = 238,
        [sym_interface_type] = 238,
        [sym_map_type] = 238,
        [sym_qualified_identifier] = 238,
        [anon_sym_LPAREN] = 238,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 238,
        [anon_sym_LBRACK] = 238,
        [anon_sym_struct] = 238,
        [anon_sym_interface] = 238,
        [anon_sym_map] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 240,
        [sym_array_type] = 242,
        [sym_slice_type] = 242,
        [sym_struct_type] = 242,
        [sym_interface_type] = 242,
        [sym_map_type] = 242,
        [sym_qualified_identifier] = 242,
        [anon_sym_RPAREN] = 236,
        [anon_sym_COMMA] = 236,
        [anon_sym_LBRACK] = 244,
        [anon_sym_struct] = 246,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 250,
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RPAREN] = 254,
        [anon_sym_COMMA] = 254,
        [sym_comment] = 8,
    },
    [56] = {
        [anon_sym_RPAREN] = 118,
        [anon_sym_COMMA] = 118,
        [sym_comment] = 8,
    },
    [57] = {
        [sym__expression] = 256,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 258,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [58] = {
        [anon_sym_LBRACE] = 260,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_LBRACE] = 262,
        [sym_comment] = 8,
    },
    [60] = {
        [anon_sym_LBRACK] = 264,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_RPAREN] = 118,
        [anon_sym_DOT] = 266,
        [anon_sym_COMMA] = 118,
        [sym_comment] = 8,
    },
    [62] = {
        [sym_identifier] = 268,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_RPAREN] = 142,
        [anon_sym_COMMA] = 142,
        [sym_comment] = 8,
    },
    [64] = {
        [sym__type] = 270,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [65] = {
        [anon_sym_RBRACK] = 272,
        [sym_comment] = 8,
    },
    [66] = {
        [sym__type] = 274,
        [sym_array_type] = 242,
        [sym_slice_type] = 242,
        [sym_struct_type] = 242,
        [sym_interface_type] = 242,
        [sym_map_type] = 242,
        [sym_qualified_identifier] = 242,
        [anon_sym_LBRACK] = 244,
        [anon_sym_struct] = 246,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 250,
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_RPAREN] = 180,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 8,
    },
    [68] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 276,
        [anon_sym_RBRACE] = 278,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RBRACE] = 280,
        [sym_comment] = 8,
    },
    [70] = {
        [anon_sym_RPAREN] = 194,
        [anon_sym_COMMA] = 194,
        [sym_comment] = 8,
    },
    [71] = {
        [anon_sym_RPAREN] = 282,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [72] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 288,
        [anon_sym_RBRACE] = 290,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [73] = {
        [sym__type] = 296,
        [sym_array_type] = 298,
        [sym_slice_type] = 298,
        [sym_struct_type] = 298,
        [sym_interface_type] = 298,
        [sym_map_type] = 298,
        [sym_qualified_identifier] = 298,
        [anon_sym_LBRACK] = 300,
        [anon_sym_struct] = 302,
        [anon_sym_interface] = 304,
        [anon_sym_map] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [74] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 310,
        [sym_comment] = 8,
    },
    [75] = {
        [anon_sym_RBRACE] = 312,
        [sym_comment] = 8,
    },
    [76] = {
        [anon_sym_RPAREN] = 314,
        [anon_sym_COMMA] = 314,
        [sym_comment] = 8,
    },
    [77] = {
        [sym_identifier] = 296,
        [sym_comment] = 8,
    },
    [78] = {
        [sym__type] = 316,
        [sym_array_type] = 316,
        [sym_slice_type] = 316,
        [sym_struct_type] = 316,
        [sym_interface_type] = 316,
        [sym_map_type] = 316,
        [sym_qualified_identifier] = 316,
        [sym__string_literal] = 318,
        [aux_sym_identifier_list_repeat1] = 320,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 322,
        [anon_sym_COMMA] = 324,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 316,
        [anon_sym_interface] = 316,
        [anon_sym_map] = 316,
        [sym_identifier] = 316,
        [sym_raw_string_literal] = 326,
        [sym_interpreted_string_literal] = 326,
        [sym_comment] = 8,
    },
    [79] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 328,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__type] = 330,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_interface_type] = 330,
        [sym_map_type] = 330,
        [sym_qualified_identifier] = 330,
        [anon_sym_LBRACK] = 330,
        [anon_sym_struct] = 330,
        [anon_sym_interface] = 330,
        [anon_sym_map] = 330,
        [sym_identifier] = 330,
        [sym_comment] = 8,
    },
    [81] = {
        [sym_identifier] = 332,
        [sym_comment] = 8,
    },
    [82] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 334,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__type] = 336,
        [sym_array_type] = 336,
        [sym_slice_type] = 336,
        [sym_struct_type] = 336,
        [sym_interface_type] = 336,
        [sym_map_type] = 336,
        [sym_qualified_identifier] = 336,
        [aux_sym_identifier_list_repeat1] = 338,
        [anon_sym_COMMA] = 324,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 336,
        [anon_sym_interface] = 336,
        [anon_sym_map] = 336,
        [sym_identifier] = 336,
        [sym_comment] = 8,
    },
    [84] = {
        [sym__type] = 340,
        [sym_array_type] = 340,
        [sym_slice_type] = 340,
        [sym_struct_type] = 340,
        [sym_interface_type] = 340,
        [sym_map_type] = 340,
        [sym_qualified_identifier] = 340,
        [anon_sym_LBRACK] = 340,
        [anon_sym_struct] = 340,
        [anon_sym_interface] = 340,
        [anon_sym_map] = 340,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [85] = {
        [sym__string_literal] = 342,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 328,
        [sym_raw_string_literal] = 326,
        [sym_interpreted_string_literal] = 326,
        [sym_comment] = 8,
    },
    [86] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 344,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RPAREN] = 346,
        [anon_sym_COMMA] = 346,
        [sym_comment] = 8,
    },
    [88] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 348,
        [anon_sym_RBRACE] = 350,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [89] = {
        [anon_sym_RBRACE] = 352,
        [sym_comment] = 8,
    },
    [90] = {
        [sym__string_literal] = 118,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [sym_raw_string_literal] = 118,
        [sym_interpreted_string_literal] = 118,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__expression] = 354,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 356,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_LBRACE] = 358,
        [sym_comment] = 8,
    },
    [93] = {
        [anon_sym_LBRACE] = 360,
        [sym_comment] = 8,
    },
    [94] = {
        [anon_sym_LBRACK] = 362,
        [sym_comment] = 8,
    },
    [95] = {
        [sym__string_literal] = 118,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [anon_sym_DOT] = 364,
        [sym_raw_string_literal] = 118,
        [sym_interpreted_string_literal] = 118,
        [sym_comment] = 8,
    },
    [96] = {
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [97] = {
        [sym__string_literal] = 142,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 142,
        [sym_raw_string_literal] = 142,
        [sym_interpreted_string_literal] = 142,
        [sym_comment] = 8,
    },
    [98] = {
        [sym__type] = 368,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [99] = {
        [anon_sym_RBRACK] = 370,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__type] = 372,
        [sym_array_type] = 298,
        [sym_slice_type] = 298,
        [sym_struct_type] = 298,
        [sym_interface_type] = 298,
        [sym_map_type] = 298,
        [sym_qualified_identifier] = 298,
        [anon_sym_LBRACK] = 300,
        [anon_sym_struct] = 302,
        [anon_sym_interface] = 304,
        [anon_sym_map] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [101] = {
        [sym__string_literal] = 180,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 180,
        [sym_raw_string_literal] = 180,
        [sym_interpreted_string_literal] = 180,
        [sym_comment] = 8,
    },
    [102] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 374,
        [anon_sym_RBRACE] = 376,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [103] = {
        [anon_sym_RBRACE] = 378,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__string_literal] = 194,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [sym_raw_string_literal] = 194,
        [sym_interpreted_string_literal] = 194,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__string_literal] = 282,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 282,
        [sym_raw_string_literal] = 282,
        [sym_interpreted_string_literal] = 282,
        [sym_comment] = 8,
    },
    [106] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 380,
        [anon_sym_RBRACE] = 382,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [107] = {
        [anon_sym_RBRACE] = 384,
        [sym_comment] = 8,
    },
    [108] = {
        [sym__string_literal] = 314,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 314,
        [sym_raw_string_literal] = 314,
        [sym_interpreted_string_literal] = 314,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__string_literal] = 346,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 346,
        [sym_raw_string_literal] = 346,
        [sym_interpreted_string_literal] = 346,
        [sym_comment] = 8,
    },
    [110] = {
        [anon_sym_RBRACK] = 386,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [111] = {
        [anon_sym_RBRACK] = 398,
        [anon_sym_STAR] = 398,
        [anon_sym_SLASH] = 398,
        [anon_sym_PERCENT] = 398,
        [anon_sym_LT_LT] = 398,
        [anon_sym_GT_GT] = 398,
        [anon_sym_AMP] = 398,
        [anon_sym_AMP_CARET] = 398,
        [anon_sym_PLUS] = 398,
        [anon_sym_DASH] = 398,
        [anon_sym_PIPE] = 398,
        [anon_sym_CARET] = 398,
        [anon_sym_EQ_EQ] = 398,
        [anon_sym_BANG_EQ] = 398,
        [anon_sym_LT] = 398,
        [anon_sym_LT_EQ] = 398,
        [anon_sym_GT] = 398,
        [anon_sym_GT_EQ] = 398,
        [anon_sym_AMP_AMP] = 398,
        [anon_sym_PIPE_PIPE] = 398,
        [sym_comment] = 8,
    },
    [112] = {
        [anon_sym_RBRACK] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [113] = {
        [sym__type] = 402,
        [sym_array_type] = 298,
        [sym_slice_type] = 298,
        [sym_struct_type] = 298,
        [sym_interface_type] = 298,
        [sym_map_type] = 298,
        [sym_qualified_identifier] = 298,
        [anon_sym_LBRACK] = 300,
        [anon_sym_struct] = 302,
        [anon_sym_interface] = 304,
        [anon_sym_map] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_RBRACK] = 334,
        [anon_sym_STAR] = 334,
        [anon_sym_SLASH] = 334,
        [anon_sym_PERCENT] = 334,
        [anon_sym_LT_LT] = 334,
        [anon_sym_GT_GT] = 334,
        [anon_sym_AMP] = 334,
        [anon_sym_AMP_CARET] = 334,
        [anon_sym_PLUS] = 334,
        [anon_sym_DASH] = 334,
        [anon_sym_PIPE] = 334,
        [anon_sym_CARET] = 334,
        [anon_sym_EQ_EQ] = 334,
        [anon_sym_BANG_EQ] = 334,
        [anon_sym_LT] = 334,
        [anon_sym_LT_EQ] = 334,
        [anon_sym_GT] = 334,
        [anon_sym_GT_EQ] = 334,
        [anon_sym_AMP_AMP] = 334,
        [anon_sym_PIPE_PIPE] = 334,
        [sym_comment] = 8,
    },
    [115] = {
        [anon_sym_RBRACK] = 404,
        [anon_sym_STAR] = 404,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 404,
        [anon_sym_DASH] = 404,
        [anon_sym_PIPE] = 404,
        [anon_sym_CARET] = 404,
        [anon_sym_EQ_EQ] = 404,
        [anon_sym_BANG_EQ] = 404,
        [anon_sym_LT] = 404,
        [anon_sym_LT_EQ] = 404,
        [anon_sym_GT] = 404,
        [anon_sym_GT_EQ] = 404,
        [anon_sym_AMP_AMP] = 404,
        [anon_sym_PIPE_PIPE] = 404,
        [sym_comment] = 8,
    },
    [116] = {
        [sym__string_literal] = 406,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 406,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [117] = {
        [sym__type] = 408,
        [sym_array_type] = 298,
        [sym_slice_type] = 298,
        [sym_struct_type] = 298,
        [sym_interface_type] = 298,
        [sym_map_type] = 298,
        [sym_qualified_identifier] = 298,
        [anon_sym_LBRACK] = 300,
        [anon_sym_struct] = 302,
        [anon_sym_interface] = 304,
        [anon_sym_map] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [118] = {
        [sym__expression] = 410,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__expression] = 412,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [120] = {
        [sym__expression] = 414,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [121] = {
        [sym__expression] = 416,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__expression] = 418,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_RBRACK] = 420,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [124] = {
        [anon_sym_RBRACK] = 420,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_RBRACK] = 420,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [126] = {
        [anon_sym_RBRACK] = 420,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 420,
        [anon_sym_DASH] = 420,
        [anon_sym_PIPE] = 420,
        [anon_sym_CARET] = 420,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [127] = {
        [anon_sym_RBRACK] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__string_literal] = 424,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [sym_raw_string_literal] = 424,
        [sym_interpreted_string_literal] = 424,
        [sym_comment] = 8,
    },
    [129] = {
        [anon_sym_RBRACK] = 426,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__type] = 428,
        [sym_array_type] = 242,
        [sym_slice_type] = 242,
        [sym_struct_type] = 242,
        [sym_interface_type] = 242,
        [sym_map_type] = 242,
        [sym_qualified_identifier] = 242,
        [anon_sym_LBRACK] = 244,
        [anon_sym_struct] = 246,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 250,
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [131] = {
        [anon_sym_RPAREN] = 406,
        [anon_sym_COMMA] = 406,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__type] = 430,
        [sym_array_type] = 242,
        [sym_slice_type] = 242,
        [sym_struct_type] = 242,
        [sym_interface_type] = 242,
        [sym_map_type] = 242,
        [sym_qualified_identifier] = 242,
        [anon_sym_LBRACK] = 244,
        [anon_sym_struct] = 246,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 250,
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [133] = {
        [anon_sym_RPAREN] = 424,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 8,
    },
    [134] = {
        [sym_parameters] = 432,
        [sym__type] = 432,
        [sym_array_type] = 432,
        [sym_slice_type] = 432,
        [sym_struct_type] = 432,
        [sym_interface_type] = 432,
        [sym_map_type] = 432,
        [sym_qualified_identifier] = 432,
        [anon_sym_LPAREN] = 432,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 432,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 432,
        [anon_sym_interface] = 432,
        [anon_sym_map] = 432,
        [sym_identifier] = 432,
        [sym_comment] = 8,
    },
    [135] = {
        [sym_parameter_declaration] = 434,
        [sym_identifier] = 436,
        [sym_comment] = 8,
    },
    [136] = {
        [anon_sym_RPAREN] = 438,
        [anon_sym_COMMA] = 438,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__type] = 240,
        [sym_array_type] = 242,
        [sym_slice_type] = 242,
        [sym_struct_type] = 242,
        [sym_interface_type] = 242,
        [sym_map_type] = 242,
        [sym_qualified_identifier] = 242,
        [anon_sym_RPAREN] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_LBRACK] = 244,
        [anon_sym_struct] = 246,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 250,
        [sym_identifier] = 252,
        [sym_comment] = 8,
    },
    [138] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 440,
        [sym_comment] = 8,
    },
    [139] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__parameter_list] = 442,
        [sym_parameter_declaration] = 220,
        [anon_sym_RPAREN] = 444,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [141] = {
        [sym__expression] = 446,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 448,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [142] = {
        [anon_sym_LBRACE] = 450,
        [sym_comment] = 8,
    },
    [143] = {
        [anon_sym_LBRACE] = 452,
        [sym_comment] = 8,
    },
    [144] = {
        [anon_sym_LBRACK] = 454,
        [sym_comment] = 8,
    },
    [145] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [anon_sym_DOT] = 456,
        [sym_comment] = 8,
    },
    [146] = {
        [sym_identifier] = 458,
        [sym_comment] = 8,
    },
    [147] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 142,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__type] = 460,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_RBRACK] = 462,
        [sym_comment] = 8,
    },
    [150] = {
        [sym__type] = 464,
        [sym_array_type] = 202,
        [sym_slice_type] = 202,
        [sym_struct_type] = 202,
        [sym_interface_type] = 202,
        [sym_map_type] = 202,
        [sym_qualified_identifier] = 202,
        [anon_sym_LBRACK] = 208,
        [anon_sym_struct] = 210,
        [anon_sym_interface] = 212,
        [anon_sym_map] = 214,
        [sym_identifier] = 216,
        [sym_comment] = 8,
    },
    [151] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 180,
        [sym_comment] = 8,
    },
    [152] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 466,
        [anon_sym_RBRACE] = 468,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [153] = {
        [anon_sym_RBRACE] = 470,
        [sym_comment] = 8,
    },
    [154] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [sym_comment] = 8,
    },
    [155] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 282,
        [sym_comment] = 8,
    },
    [156] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 472,
        [anon_sym_RBRACE] = 474,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [157] = {
        [anon_sym_RBRACE] = 476,
        [sym_comment] = 8,
    },
    [158] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 314,
        [sym_comment] = 8,
    },
    [159] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 346,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_RBRACK] = 478,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [161] = {
        [sym__type] = 480,
        [sym_array_type] = 202,
        [sym_slice_type] = 202,
        [sym_struct_type] = 202,
        [sym_interface_type] = 202,
        [sym_map_type] = 202,
        [sym_qualified_identifier] = 202,
        [anon_sym_LBRACK] = 208,
        [anon_sym_struct] = 210,
        [anon_sym_interface] = 212,
        [anon_sym_map] = 214,
        [sym_identifier] = 216,
        [sym_comment] = 8,
    },
    [162] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 406,
        [sym_comment] = 8,
    },
    [163] = {
        [sym__type] = 482,
        [sym_array_type] = 202,
        [sym_slice_type] = 202,
        [sym_struct_type] = 202,
        [sym_interface_type] = 202,
        [sym_map_type] = 202,
        [sym_qualified_identifier] = 202,
        [anon_sym_LBRACK] = 208,
        [anon_sym_struct] = 210,
        [anon_sym_interface] = 212,
        [anon_sym_map] = 214,
        [sym_identifier] = 216,
        [sym_comment] = 8,
    },
    [164] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [sym_comment] = 8,
    },
    [165] = {
        [anon_sym_RPAREN] = 484,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [166] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 238,
        [sym_comment] = 8,
    },
    [167] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 432,
        [sym_comment] = 8,
    },
    [168] = {
        [anon_sym_RBRACK] = 282,
        [sym_comment] = 8,
    },
    [169] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 486,
        [anon_sym_RBRACE] = 488,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [170] = {
        [anon_sym_RBRACE] = 490,
        [sym_comment] = 8,
    },
    [171] = {
        [anon_sym_RBRACK] = 314,
        [sym_comment] = 8,
    },
    [172] = {
        [anon_sym_RBRACK] = 346,
        [sym_comment] = 8,
    },
    [173] = {
        [anon_sym_RBRACK] = 492,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [174] = {
        [sym__type] = 494,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [175] = {
        [anon_sym_RBRACK] = 406,
        [sym_comment] = 8,
    },
    [176] = {
        [sym__type] = 496,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_RBRACK] = 424,
        [sym_comment] = 8,
    },
    [178] = {
        [sym__type] = 498,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [179] = {
        [sym__top_level_declaration] = 180,
        [sym__declaration] = 180,
        [sym_const_declaration] = 180,
        [sym_var_declaration] = 180,
        [sym_function_declaration] = 180,
        [sym_method_declaration] = 180,
        [sym_type_declaration] = 180,
        [aux_sym_source_file_repeat2] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_const] = 180,
        [anon_sym_var] = 180,
        [anon_sym_func] = 180,
        [anon_sym_type] = 180,
        [sym_comment] = 8,
    },
    [180] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 500,
        [anon_sym_RBRACE] = 502,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [181] = {
        [anon_sym_RBRACE] = 504,
        [sym_comment] = 8,
    },
    [182] = {
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
    [183] = {
        [sym__top_level_declaration] = 282,
        [sym__declaration] = 282,
        [sym_const_declaration] = 282,
        [sym_var_declaration] = 282,
        [sym_function_declaration] = 282,
        [sym_method_declaration] = 282,
        [sym_type_declaration] = 282,
        [aux_sym_source_file_repeat2] = 282,
        [ts_builtin_sym_end] = 282,
        [anon_sym_const] = 282,
        [anon_sym_var] = 282,
        [anon_sym_func] = 282,
        [anon_sym_type] = 282,
        [sym_comment] = 8,
    },
    [184] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 506,
        [anon_sym_RBRACE] = 508,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [185] = {
        [anon_sym_RBRACE] = 510,
        [sym_comment] = 8,
    },
    [186] = {
        [sym__top_level_declaration] = 314,
        [sym__declaration] = 314,
        [sym_const_declaration] = 314,
        [sym_var_declaration] = 314,
        [sym_function_declaration] = 314,
        [sym_method_declaration] = 314,
        [sym_type_declaration] = 314,
        [aux_sym_source_file_repeat2] = 314,
        [ts_builtin_sym_end] = 314,
        [anon_sym_const] = 314,
        [anon_sym_var] = 314,
        [anon_sym_func] = 314,
        [anon_sym_type] = 314,
        [sym_comment] = 8,
    },
    [187] = {
        [sym__top_level_declaration] = 346,
        [sym__declaration] = 346,
        [sym_const_declaration] = 346,
        [sym_var_declaration] = 346,
        [sym_function_declaration] = 346,
        [sym_method_declaration] = 346,
        [sym_type_declaration] = 346,
        [aux_sym_source_file_repeat2] = 346,
        [ts_builtin_sym_end] = 346,
        [anon_sym_const] = 346,
        [anon_sym_var] = 346,
        [anon_sym_func] = 346,
        [anon_sym_type] = 346,
        [sym_comment] = 8,
    },
    [188] = {
        [anon_sym_RBRACK] = 512,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [189] = {
        [sym__type] = 514,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [190] = {
        [sym__top_level_declaration] = 406,
        [sym__declaration] = 406,
        [sym_const_declaration] = 406,
        [sym_var_declaration] = 406,
        [sym_function_declaration] = 406,
        [sym_method_declaration] = 406,
        [sym_type_declaration] = 406,
        [aux_sym_source_file_repeat2] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_const] = 406,
        [anon_sym_var] = 406,
        [anon_sym_func] = 406,
        [anon_sym_type] = 406,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__type] = 516,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__top_level_declaration] = 424,
        [sym__declaration] = 424,
        [sym_const_declaration] = 424,
        [sym_var_declaration] = 424,
        [sym_function_declaration] = 424,
        [sym_method_declaration] = 424,
        [sym_type_declaration] = 424,
        [aux_sym_source_file_repeat2] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_const] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_type] = 424,
        [sym_comment] = 8,
    },
    [193] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [sym_comment] = 8,
    },
    [194] = {
        [anon_sym_RPAREN] = 520,
        [sym_comment] = 8,
    },
    [195] = {
        [sym__top_level_declaration] = 522,
        [sym__declaration] = 522,
        [sym_const_declaration] = 522,
        [sym_var_declaration] = 522,
        [sym_function_declaration] = 522,
        [sym_method_declaration] = 522,
        [sym_type_declaration] = 522,
        [aux_sym_source_file_repeat2] = 522,
        [ts_builtin_sym_end] = 522,
        [anon_sym_const] = 522,
        [anon_sym_var] = 522,
        [anon_sym_func] = 522,
        [anon_sym_type] = 522,
        [sym_comment] = 8,
    },
    [196] = {
        [sym__type] = 524,
        [sym_array_type] = 202,
        [sym_slice_type] = 202,
        [sym_struct_type] = 202,
        [sym_interface_type] = 202,
        [sym_map_type] = 202,
        [sym_qualified_identifier] = 202,
        [anon_sym_LBRACK] = 208,
        [anon_sym_struct] = 210,
        [anon_sym_interface] = 212,
        [anon_sym_map] = 214,
        [sym_identifier] = 216,
        [sym_comment] = 8,
    },
    [197] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 116,
        [sym_comment] = 8,
    },
    [198] = {
        [sym__top_level_declaration] = 526,
        [sym__declaration] = 526,
        [sym_const_declaration] = 526,
        [sym_var_declaration] = 526,
        [sym_function_declaration] = 526,
        [sym_method_declaration] = 526,
        [sym_type_declaration] = 526,
        [aux_sym_source_file_repeat2] = 526,
        [ts_builtin_sym_end] = 526,
        [anon_sym_const] = 526,
        [anon_sym_var] = 526,
        [anon_sym_func] = 526,
        [anon_sym_type] = 526,
        [sym_comment] = 8,
    },
    [199] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 528,
        [anon_sym_RPAREN] = 530,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [200] = {
        [anon_sym_RPAREN] = 532,
        [sym_comment] = 8,
    },
    [201] = {
        [sym_identifier] = 534,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__parameter_list] = 536,
        [sym_parameter_declaration] = 220,
        [anon_sym_RPAREN] = 538,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [203] = {
        [sym_parameters] = 540,
        [anon_sym_LPAREN] = 542,
        [sym_comment] = 8,
    },
    [204] = {
        [sym__top_level_declaration] = 544,
        [sym__declaration] = 544,
        [sym_const_declaration] = 544,
        [sym_var_declaration] = 544,
        [sym_function_declaration] = 544,
        [sym_method_declaration] = 544,
        [sym_parameters] = 546,
        [sym_block] = 548,
        [sym_type_declaration] = 544,
        [sym__type] = 546,
        [sym_array_type] = 550,
        [sym_slice_type] = 550,
        [sym_struct_type] = 550,
        [sym_interface_type] = 550,
        [sym_map_type] = 550,
        [sym_qualified_identifier] = 550,
        [aux_sym_source_file_repeat2] = 544,
        [ts_builtin_sym_end] = 544,
        [anon_sym_LPAREN] = 552,
        [anon_sym_const] = 544,
        [anon_sym_var] = 544,
        [anon_sym_func] = 544,
        [anon_sym_LBRACE] = 554,
        [anon_sym_type] = 544,
        [anon_sym_LBRACK] = 556,
        [anon_sym_struct] = 558,
        [anon_sym_interface] = 560,
        [anon_sym_map] = 562,
        [sym_identifier] = 564,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__parameter_list] = 566,
        [sym_parameter_declaration] = 220,
        [anon_sym_RPAREN] = 568,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [206] = {
        [anon_sym_RPAREN] = 570,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [207] = {
        [sym__top_level_declaration] = 238,
        [sym__declaration] = 238,
        [sym_const_declaration] = 238,
        [sym_var_declaration] = 238,
        [sym_function_declaration] = 238,
        [sym_method_declaration] = 238,
        [sym_parameters] = 238,
        [sym_block] = 238,
        [sym_type_declaration] = 238,
        [sym__type] = 238,
        [sym_array_type] = 238,
        [sym_slice_type] = 238,
        [sym_struct_type] = 238,
        [sym_interface_type] = 238,
        [sym_map_type] = 238,
        [sym_qualified_identifier] = 238,
        [aux_sym_source_file_repeat2] = 238,
        [ts_builtin_sym_end] = 238,
        [anon_sym_LPAREN] = 238,
        [anon_sym_const] = 238,
        [anon_sym_var] = 238,
        [anon_sym_func] = 238,
        [anon_sym_LBRACE] = 238,
        [anon_sym_type] = 238,
        [anon_sym_LBRACK] = 238,
        [anon_sym_struct] = 238,
        [anon_sym_interface] = 238,
        [anon_sym_map] = 238,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [208] = {
        [sym__top_level_declaration] = 432,
        [sym__declaration] = 432,
        [sym_const_declaration] = 432,
        [sym_var_declaration] = 432,
        [sym_function_declaration] = 432,
        [sym_method_declaration] = 432,
        [sym_parameters] = 432,
        [sym_block] = 432,
        [sym_type_declaration] = 432,
        [sym__type] = 432,
        [sym_array_type] = 432,
        [sym_slice_type] = 432,
        [sym_struct_type] = 432,
        [sym_interface_type] = 432,
        [sym_map_type] = 432,
        [sym_qualified_identifier] = 432,
        [aux_sym_source_file_repeat2] = 432,
        [ts_builtin_sym_end] = 432,
        [anon_sym_LPAREN] = 432,
        [anon_sym_const] = 432,
        [anon_sym_var] = 432,
        [anon_sym_func] = 432,
        [anon_sym_LBRACE] = 432,
        [anon_sym_type] = 432,
        [anon_sym_LBRACK] = 432,
        [anon_sym_struct] = 432,
        [anon_sym_interface] = 432,
        [anon_sym_map] = 432,
        [sym_identifier] = 432,
        [sym_comment] = 8,
    },
    [209] = {
        [sym__top_level_declaration] = 572,
        [sym__declaration] = 572,
        [sym_const_declaration] = 572,
        [sym_var_declaration] = 572,
        [sym_function_declaration] = 572,
        [sym_method_declaration] = 572,
        [sym_block] = 574,
        [sym_type_declaration] = 572,
        [aux_sym_source_file_repeat2] = 572,
        [ts_builtin_sym_end] = 572,
        [anon_sym_const] = 572,
        [anon_sym_var] = 572,
        [anon_sym_func] = 572,
        [anon_sym_LBRACE] = 554,
        [anon_sym_type] = 572,
        [sym_comment] = 8,
    },
    [210] = {
        [sym__top_level_declaration] = 572,
        [sym__declaration] = 572,
        [sym_const_declaration] = 572,
        [sym_var_declaration] = 572,
        [sym_function_declaration] = 572,
        [sym_method_declaration] = 572,
        [sym_type_declaration] = 572,
        [aux_sym_source_file_repeat2] = 572,
        [ts_builtin_sym_end] = 572,
        [anon_sym_const] = 572,
        [anon_sym_var] = 572,
        [anon_sym_func] = 572,
        [anon_sym_type] = 572,
        [sym_comment] = 8,
    },
    [211] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_block] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_const] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_LBRACE] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [212] = {
        [sym__parameter_list] = 576,
        [sym_parameter_declaration] = 220,
        [anon_sym_RPAREN] = 578,
        [sym_identifier] = 224,
        [sym_comment] = 8,
    },
    [213] = {
        [anon_sym_RBRACE] = 580,
        [sym_comment] = 8,
    },
    [214] = {
        [sym__expression] = 582,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 584,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [215] = {
        [anon_sym_LBRACE] = 586,
        [sym_comment] = 8,
    },
    [216] = {
        [anon_sym_LBRACE] = 588,
        [sym_comment] = 8,
    },
    [217] = {
        [anon_sym_LBRACK] = 590,
        [sym_comment] = 8,
    },
    [218] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_block] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_DOT] = 592,
        [anon_sym_const] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_LBRACE] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [219] = {
        [sym_identifier] = 594,
        [sym_comment] = 8,
    },
    [220] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_var_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_block] = 142,
        [sym_type_declaration] = 142,
        [aux_sym_source_file_repeat2] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_const] = 142,
        [anon_sym_var] = 142,
        [anon_sym_func] = 142,
        [anon_sym_LBRACE] = 142,
        [anon_sym_type] = 142,
        [sym_comment] = 8,
    },
    [221] = {
        [sym__type] = 596,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [222] = {
        [anon_sym_RBRACK] = 598,
        [sym_comment] = 8,
    },
    [223] = {
        [sym__type] = 600,
        [sym_array_type] = 550,
        [sym_slice_type] = 550,
        [sym_struct_type] = 550,
        [sym_interface_type] = 550,
        [sym_map_type] = 550,
        [sym_qualified_identifier] = 550,
        [anon_sym_LBRACK] = 556,
        [anon_sym_struct] = 558,
        [anon_sym_interface] = 560,
        [anon_sym_map] = 562,
        [sym_identifier] = 564,
        [sym_comment] = 8,
    },
    [224] = {
        [sym__top_level_declaration] = 180,
        [sym__declaration] = 180,
        [sym_const_declaration] = 180,
        [sym_var_declaration] = 180,
        [sym_function_declaration] = 180,
        [sym_method_declaration] = 180,
        [sym_block] = 180,
        [sym_type_declaration] = 180,
        [aux_sym_source_file_repeat2] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_const] = 180,
        [anon_sym_var] = 180,
        [anon_sym_func] = 180,
        [anon_sym_LBRACE] = 180,
        [anon_sym_type] = 180,
        [sym_comment] = 8,
    },
    [225] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 602,
        [anon_sym_RBRACE] = 604,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [226] = {
        [anon_sym_RBRACE] = 606,
        [sym_comment] = 8,
    },
    [227] = {
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
    [228] = {
        [sym__top_level_declaration] = 282,
        [sym__declaration] = 282,
        [sym_const_declaration] = 282,
        [sym_var_declaration] = 282,
        [sym_function_declaration] = 282,
        [sym_method_declaration] = 282,
        [sym_block] = 282,
        [sym_type_declaration] = 282,
        [aux_sym_source_file_repeat2] = 282,
        [ts_builtin_sym_end] = 282,
        [anon_sym_const] = 282,
        [anon_sym_var] = 282,
        [anon_sym_func] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_type] = 282,
        [sym_comment] = 8,
    },
    [229] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 608,
        [anon_sym_RBRACE] = 610,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [230] = {
        [anon_sym_RBRACE] = 612,
        [sym_comment] = 8,
    },
    [231] = {
        [sym__top_level_declaration] = 314,
        [sym__declaration] = 314,
        [sym_const_declaration] = 314,
        [sym_var_declaration] = 314,
        [sym_function_declaration] = 314,
        [sym_method_declaration] = 314,
        [sym_block] = 314,
        [sym_type_declaration] = 314,
        [aux_sym_source_file_repeat2] = 314,
        [ts_builtin_sym_end] = 314,
        [anon_sym_const] = 314,
        [anon_sym_var] = 314,
        [anon_sym_func] = 314,
        [anon_sym_LBRACE] = 314,
        [anon_sym_type] = 314,
        [sym_comment] = 8,
    },
    [232] = {
        [sym__top_level_declaration] = 346,
        [sym__declaration] = 346,
        [sym_const_declaration] = 346,
        [sym_var_declaration] = 346,
        [sym_function_declaration] = 346,
        [sym_method_declaration] = 346,
        [sym_block] = 346,
        [sym_type_declaration] = 346,
        [aux_sym_source_file_repeat2] = 346,
        [ts_builtin_sym_end] = 346,
        [anon_sym_const] = 346,
        [anon_sym_var] = 346,
        [anon_sym_func] = 346,
        [anon_sym_LBRACE] = 346,
        [anon_sym_type] = 346,
        [sym_comment] = 8,
    },
    [233] = {
        [anon_sym_RBRACK] = 614,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [234] = {
        [sym__type] = 616,
        [sym_array_type] = 550,
        [sym_slice_type] = 550,
        [sym_struct_type] = 550,
        [sym_interface_type] = 550,
        [sym_map_type] = 550,
        [sym_qualified_identifier] = 550,
        [anon_sym_LBRACK] = 556,
        [anon_sym_struct] = 558,
        [anon_sym_interface] = 560,
        [anon_sym_map] = 562,
        [sym_identifier] = 564,
        [sym_comment] = 8,
    },
    [235] = {
        [sym__top_level_declaration] = 406,
        [sym__declaration] = 406,
        [sym_const_declaration] = 406,
        [sym_var_declaration] = 406,
        [sym_function_declaration] = 406,
        [sym_method_declaration] = 406,
        [sym_block] = 406,
        [sym_type_declaration] = 406,
        [aux_sym_source_file_repeat2] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_const] = 406,
        [anon_sym_var] = 406,
        [anon_sym_func] = 406,
        [anon_sym_LBRACE] = 406,
        [anon_sym_type] = 406,
        [sym_comment] = 8,
    },
    [236] = {
        [sym__type] = 618,
        [sym_array_type] = 550,
        [sym_slice_type] = 550,
        [sym_struct_type] = 550,
        [sym_interface_type] = 550,
        [sym_map_type] = 550,
        [sym_qualified_identifier] = 550,
        [anon_sym_LBRACK] = 556,
        [anon_sym_struct] = 558,
        [anon_sym_interface] = 560,
        [anon_sym_map] = 562,
        [sym_identifier] = 564,
        [sym_comment] = 8,
    },
    [237] = {
        [sym__top_level_declaration] = 424,
        [sym__declaration] = 424,
        [sym_const_declaration] = 424,
        [sym_var_declaration] = 424,
        [sym_function_declaration] = 424,
        [sym_method_declaration] = 424,
        [sym_block] = 424,
        [sym_type_declaration] = 424,
        [aux_sym_source_file_repeat2] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_const] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_LBRACE] = 424,
        [anon_sym_type] = 424,
        [sym_comment] = 8,
    },
    [238] = {
        [sym__top_level_declaration] = 620,
        [sym__declaration] = 620,
        [sym_const_declaration] = 620,
        [sym_var_declaration] = 620,
        [sym_function_declaration] = 620,
        [sym_method_declaration] = 620,
        [sym_type_declaration] = 620,
        [aux_sym_source_file_repeat2] = 620,
        [ts_builtin_sym_end] = 620,
        [anon_sym_const] = 620,
        [anon_sym_var] = 620,
        [anon_sym_func] = 620,
        [anon_sym_type] = 620,
        [sym_comment] = 8,
    },
    [239] = {
        [anon_sym_RPAREN] = 622,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [240] = {
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
    [241] = {
        [sym__top_level_declaration] = 432,
        [sym__declaration] = 432,
        [sym_const_declaration] = 432,
        [sym_var_declaration] = 432,
        [sym_function_declaration] = 432,
        [sym_method_declaration] = 432,
        [sym_block] = 432,
        [sym_type_declaration] = 432,
        [aux_sym_source_file_repeat2] = 432,
        [ts_builtin_sym_end] = 432,
        [anon_sym_const] = 432,
        [anon_sym_var] = 432,
        [anon_sym_func] = 432,
        [anon_sym_LBRACE] = 432,
        [anon_sym_type] = 432,
        [sym_comment] = 8,
    },
    [242] = {
        [sym__top_level_declaration] = 624,
        [sym__declaration] = 624,
        [sym_const_declaration] = 624,
        [sym_var_declaration] = 624,
        [sym_function_declaration] = 624,
        [sym_method_declaration] = 624,
        [sym_type_declaration] = 624,
        [aux_sym_source_file_repeat2] = 624,
        [ts_builtin_sym_end] = 624,
        [anon_sym_const] = 624,
        [anon_sym_var] = 624,
        [anon_sym_func] = 624,
        [anon_sym_type] = 624,
        [sym_comment] = 8,
    },
    [243] = {
        [anon_sym_RPAREN] = 626,
        [anon_sym_COMMA] = 234,
        [sym_comment] = 8,
    },
    [244] = {
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [245] = {
        [sym_identifier] = 432,
        [sym_comment] = 8,
    },
    [246] = {
        [sym_parameters] = 628,
        [anon_sym_LPAREN] = 542,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__top_level_declaration] = 630,
        [sym__declaration] = 630,
        [sym_const_declaration] = 630,
        [sym_var_declaration] = 630,
        [sym_function_declaration] = 630,
        [sym_method_declaration] = 630,
        [sym_parameters] = 632,
        [sym_block] = 634,
        [sym_type_declaration] = 630,
        [sym__type] = 632,
        [sym_array_type] = 550,
        [sym_slice_type] = 550,
        [sym_struct_type] = 550,
        [sym_interface_type] = 550,
        [sym_map_type] = 550,
        [sym_qualified_identifier] = 550,
        [aux_sym_source_file_repeat2] = 630,
        [ts_builtin_sym_end] = 630,
        [anon_sym_LPAREN] = 552,
        [anon_sym_const] = 630,
        [anon_sym_var] = 630,
        [anon_sym_func] = 630,
        [anon_sym_LBRACE] = 554,
        [anon_sym_type] = 630,
        [anon_sym_LBRACK] = 556,
        [anon_sym_struct] = 558,
        [anon_sym_interface] = 560,
        [anon_sym_map] = 562,
        [sym_identifier] = 564,
        [sym_comment] = 8,
    },
    [248] = {
        [sym__top_level_declaration] = 636,
        [sym__declaration] = 636,
        [sym_const_declaration] = 636,
        [sym_var_declaration] = 636,
        [sym_function_declaration] = 636,
        [sym_method_declaration] = 636,
        [sym_block] = 638,
        [sym_type_declaration] = 636,
        [aux_sym_source_file_repeat2] = 636,
        [ts_builtin_sym_end] = 636,
        [anon_sym_const] = 636,
        [anon_sym_var] = 636,
        [anon_sym_func] = 636,
        [anon_sym_LBRACE] = 554,
        [anon_sym_type] = 636,
        [sym_comment] = 8,
    },
    [249] = {
        [sym__top_level_declaration] = 636,
        [sym__declaration] = 636,
        [sym_const_declaration] = 636,
        [sym_var_declaration] = 636,
        [sym_function_declaration] = 636,
        [sym_method_declaration] = 636,
        [sym_type_declaration] = 636,
        [aux_sym_source_file_repeat2] = 636,
        [ts_builtin_sym_end] = 636,
        [anon_sym_const] = 636,
        [anon_sym_var] = 636,
        [anon_sym_func] = 636,
        [anon_sym_type] = 636,
        [sym_comment] = 8,
    },
    [250] = {
        [sym__top_level_declaration] = 640,
        [sym__declaration] = 640,
        [sym_const_declaration] = 640,
        [sym_var_declaration] = 640,
        [sym_function_declaration] = 640,
        [sym_method_declaration] = 640,
        [sym_type_declaration] = 640,
        [aux_sym_source_file_repeat2] = 640,
        [ts_builtin_sym_end] = 640,
        [anon_sym_const] = 640,
        [anon_sym_var] = 640,
        [anon_sym_func] = 640,
        [anon_sym_type] = 640,
        [sym_comment] = 8,
    },
    [251] = {
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
    [252] = {
        [sym__type] = 644,
        [sym_array_type] = 646,
        [sym_slice_type] = 646,
        [sym_struct_type] = 646,
        [sym_interface_type] = 646,
        [sym_map_type] = 646,
        [sym_qualified_identifier] = 646,
        [anon_sym_EQ] = 648,
        [anon_sym_LBRACK] = 650,
        [anon_sym_struct] = 652,
        [anon_sym_interface] = 654,
        [anon_sym_map] = 656,
        [sym_identifier] = 658,
        [sym_comment] = 8,
    },
    [253] = {
        [sym_var_spec] = 660,
        [sym_identifier_list] = 662,
        [aux_sym_var_declaration_repeat1] = 664,
        [anon_sym_RPAREN] = 666,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [254] = {
        [sym__type] = 316,
        [sym_array_type] = 316,
        [sym_slice_type] = 316,
        [sym_struct_type] = 316,
        [sym_interface_type] = 316,
        [sym_map_type] = 316,
        [sym_qualified_identifier] = 316,
        [aux_sym_identifier_list_repeat1] = 668,
        [anon_sym_EQ] = 316,
        [anon_sym_COMMA] = 670,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 316,
        [anon_sym_interface] = 316,
        [anon_sym_map] = 316,
        [sym_identifier] = 316,
        [sym_comment] = 8,
    },
    [255] = {
        [sym__type] = 330,
        [sym_array_type] = 330,
        [sym_slice_type] = 330,
        [sym_struct_type] = 330,
        [sym_interface_type] = 330,
        [sym_map_type] = 330,
        [sym_qualified_identifier] = 330,
        [anon_sym_EQ] = 330,
        [anon_sym_LBRACK] = 330,
        [anon_sym_struct] = 330,
        [anon_sym_interface] = 330,
        [anon_sym_map] = 330,
        [sym_identifier] = 330,
        [sym_comment] = 8,
    },
    [256] = {
        [sym_identifier] = 672,
        [sym_comment] = 8,
    },
    [257] = {
        [sym__type] = 336,
        [sym_array_type] = 336,
        [sym_slice_type] = 336,
        [sym_struct_type] = 336,
        [sym_interface_type] = 336,
        [sym_map_type] = 336,
        [sym_qualified_identifier] = 336,
        [aux_sym_identifier_list_repeat1] = 674,
        [anon_sym_EQ] = 336,
        [anon_sym_COMMA] = 670,
        [anon_sym_LBRACK] = 336,
        [anon_sym_struct] = 336,
        [anon_sym_interface] = 336,
        [anon_sym_map] = 336,
        [sym_identifier] = 336,
        [sym_comment] = 8,
    },
    [258] = {
        [sym__type] = 340,
        [sym_array_type] = 340,
        [sym_slice_type] = 340,
        [sym_struct_type] = 340,
        [sym_interface_type] = 340,
        [sym_map_type] = 340,
        [sym_qualified_identifier] = 340,
        [anon_sym_EQ] = 340,
        [anon_sym_LBRACK] = 340,
        [anon_sym_struct] = 340,
        [anon_sym_interface] = 340,
        [anon_sym_map] = 340,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [259] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 676,
        [sym_comment] = 8,
    },
    [260] = {
        [sym__type] = 678,
        [sym_array_type] = 680,
        [sym_slice_type] = 680,
        [sym_struct_type] = 680,
        [sym_interface_type] = 680,
        [sym_map_type] = 680,
        [sym_qualified_identifier] = 680,
        [anon_sym_EQ] = 682,
        [anon_sym_LBRACK] = 684,
        [anon_sym_struct] = 686,
        [anon_sym_interface] = 688,
        [anon_sym_map] = 690,
        [sym_identifier] = 692,
        [sym_comment] = 8,
    },
    [261] = {
        [anon_sym_RPAREN] = 694,
        [sym_comment] = 8,
    },
    [262] = {
        [sym__top_level_declaration] = 696,
        [sym__declaration] = 696,
        [sym_const_declaration] = 696,
        [sym_var_declaration] = 696,
        [sym_function_declaration] = 696,
        [sym_method_declaration] = 696,
        [sym_type_declaration] = 696,
        [aux_sym_source_file_repeat2] = 696,
        [ts_builtin_sym_end] = 696,
        [anon_sym_const] = 696,
        [anon_sym_var] = 696,
        [anon_sym_func] = 696,
        [anon_sym_type] = 696,
        [sym_comment] = 8,
    },
    [263] = {
        [sym__top_level_declaration] = 698,
        [sym__declaration] = 698,
        [sym_const_declaration] = 698,
        [sym_var_declaration] = 698,
        [sym_function_declaration] = 698,
        [sym_method_declaration] = 698,
        [sym_type_declaration] = 698,
        [aux_sym_source_file_repeat2] = 698,
        [ts_builtin_sym_end] = 698,
        [anon_sym_const] = 698,
        [anon_sym_var] = 698,
        [anon_sym_func] = 698,
        [anon_sym_type] = 698,
        [sym_comment] = 8,
    },
    [264] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 700,
        [anon_sym_EQ] = 702,
        [sym_comment] = 8,
    },
    [265] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [266] = {
        [sym_expression_list] = 704,
        [sym__expression] = 706,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [267] = {
        [sym__expression] = 716,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 718,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [268] = {
        [anon_sym_LBRACE] = 720,
        [sym_comment] = 8,
    },
    [269] = {
        [anon_sym_LBRACE] = 722,
        [sym_comment] = 8,
    },
    [270] = {
        [anon_sym_LBRACK] = 724,
        [sym_comment] = 8,
    },
    [271] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [anon_sym_DOT] = 726,
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [272] = {
        [sym_identifier] = 728,
        [sym_comment] = 8,
    },
    [273] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 142,
        [anon_sym_EQ] = 142,
        [sym_comment] = 8,
    },
    [274] = {
        [sym__type] = 730,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [275] = {
        [anon_sym_RBRACK] = 732,
        [sym_comment] = 8,
    },
    [276] = {
        [sym__type] = 734,
        [sym_array_type] = 680,
        [sym_slice_type] = 680,
        [sym_struct_type] = 680,
        [sym_interface_type] = 680,
        [sym_map_type] = 680,
        [sym_qualified_identifier] = 680,
        [anon_sym_LBRACK] = 684,
        [anon_sym_struct] = 686,
        [anon_sym_interface] = 688,
        [anon_sym_map] = 690,
        [sym_identifier] = 692,
        [sym_comment] = 8,
    },
    [277] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 180,
        [anon_sym_EQ] = 180,
        [sym_comment] = 8,
    },
    [278] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 736,
        [anon_sym_RBRACE] = 738,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [279] = {
        [anon_sym_RBRACE] = 740,
        [sym_comment] = 8,
    },
    [280] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 194,
        [anon_sym_EQ] = 194,
        [sym_comment] = 8,
    },
    [281] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 282,
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [282] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 742,
        [anon_sym_RBRACE] = 744,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [283] = {
        [anon_sym_RBRACE] = 746,
        [sym_comment] = 8,
    },
    [284] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 314,
        [anon_sym_EQ] = 314,
        [sym_comment] = 8,
    },
    [285] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 346,
        [anon_sym_EQ] = 346,
        [sym_comment] = 8,
    },
    [286] = {
        [anon_sym_RBRACK] = 748,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__type] = 750,
        [sym_array_type] = 680,
        [sym_slice_type] = 680,
        [sym_struct_type] = 680,
        [sym_interface_type] = 680,
        [sym_map_type] = 680,
        [sym_qualified_identifier] = 680,
        [anon_sym_LBRACK] = 684,
        [anon_sym_struct] = 686,
        [anon_sym_interface] = 688,
        [anon_sym_map] = 690,
        [sym_identifier] = 692,
        [sym_comment] = 8,
    },
    [288] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 406,
        [anon_sym_EQ] = 406,
        [sym_comment] = 8,
    },
    [289] = {
        [sym__type] = 752,
        [sym_array_type] = 680,
        [sym_slice_type] = 680,
        [sym_struct_type] = 680,
        [sym_interface_type] = 680,
        [sym_map_type] = 680,
        [sym_qualified_identifier] = 680,
        [anon_sym_LBRACK] = 684,
        [anon_sym_struct] = 686,
        [anon_sym_interface] = 688,
        [anon_sym_map] = 690,
        [sym_identifier] = 692,
        [sym_comment] = 8,
    },
    [290] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [anon_sym_EQ] = 424,
        [sym_comment] = 8,
    },
    [291] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 754,
        [sym_comment] = 8,
    },
    [292] = {
        [aux_sym_expression_list_repeat1] = 756,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 758,
        [anon_sym_COMMA] = 760,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_PIPE] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_EQ_EQ] = 766,
        [anon_sym_BANG_EQ] = 766,
        [anon_sym_LT] = 766,
        [anon_sym_LT_EQ] = 766,
        [anon_sym_GT] = 766,
        [anon_sym_GT_EQ] = 766,
        [anon_sym_AMP_AMP] = 768,
        [anon_sym_PIPE_PIPE] = 770,
        [sym_comment] = 8,
    },
    [293] = {
        [aux_sym_expression_list_repeat1] = 398,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 398,
        [anon_sym_COMMA] = 398,
        [anon_sym_STAR] = 398,
        [anon_sym_SLASH] = 398,
        [anon_sym_PERCENT] = 398,
        [anon_sym_LT_LT] = 398,
        [anon_sym_GT_GT] = 398,
        [anon_sym_AMP] = 398,
        [anon_sym_AMP_CARET] = 398,
        [anon_sym_PLUS] = 398,
        [anon_sym_DASH] = 398,
        [anon_sym_PIPE] = 398,
        [anon_sym_CARET] = 398,
        [anon_sym_EQ_EQ] = 398,
        [anon_sym_BANG_EQ] = 398,
        [anon_sym_LT] = 398,
        [anon_sym_LT_EQ] = 398,
        [anon_sym_GT] = 398,
        [anon_sym_GT_EQ] = 398,
        [anon_sym_AMP_AMP] = 398,
        [anon_sym_PIPE_PIPE] = 398,
        [sym_comment] = 8,
    },
    [294] = {
        [aux_sym_expression_list_repeat1] = 400,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [295] = {
        [aux_sym_expression_list_repeat1] = 334,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 334,
        [anon_sym_COMMA] = 334,
        [anon_sym_STAR] = 334,
        [anon_sym_SLASH] = 334,
        [anon_sym_PERCENT] = 334,
        [anon_sym_LT_LT] = 334,
        [anon_sym_GT_GT] = 334,
        [anon_sym_AMP] = 334,
        [anon_sym_AMP_CARET] = 334,
        [anon_sym_PLUS] = 334,
        [anon_sym_DASH] = 334,
        [anon_sym_PIPE] = 334,
        [anon_sym_CARET] = 334,
        [anon_sym_EQ_EQ] = 334,
        [anon_sym_BANG_EQ] = 334,
        [anon_sym_LT] = 334,
        [anon_sym_LT_EQ] = 334,
        [anon_sym_GT] = 334,
        [anon_sym_GT_EQ] = 334,
        [anon_sym_AMP_AMP] = 334,
        [anon_sym_PIPE_PIPE] = 334,
        [sym_comment] = 8,
    },
    [296] = {
        [aux_sym_expression_list_repeat1] = 404,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 404,
        [anon_sym_COMMA] = 404,
        [anon_sym_STAR] = 404,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 404,
        [anon_sym_DASH] = 404,
        [anon_sym_PIPE] = 404,
        [anon_sym_CARET] = 404,
        [anon_sym_EQ_EQ] = 404,
        [anon_sym_BANG_EQ] = 404,
        [anon_sym_LT] = 404,
        [anon_sym_LT_EQ] = 404,
        [anon_sym_GT] = 404,
        [anon_sym_GT_EQ] = 404,
        [anon_sym_AMP_AMP] = 404,
        [anon_sym_PIPE_PIPE] = 404,
        [sym_comment] = 8,
    },
    [297] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 772,
        [sym_comment] = 8,
    },
    [298] = {
        [sym__expression] = 774,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [299] = {
        [sym__expression] = 776,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [300] = {
        [sym__expression] = 778,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [301] = {
        [sym__expression] = 780,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [302] = {
        [sym__expression] = 782,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [303] = {
        [sym__expression] = 784,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [304] = {
        [aux_sym_expression_list_repeat1] = 420,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_PIPE] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_EQ_EQ] = 766,
        [anon_sym_BANG_EQ] = 766,
        [anon_sym_LT] = 766,
        [anon_sym_LT_EQ] = 766,
        [anon_sym_GT] = 766,
        [anon_sym_GT_EQ] = 766,
        [anon_sym_AMP_AMP] = 768,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [305] = {
        [aux_sym_expression_list_repeat1] = 420,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_PIPE] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_EQ_EQ] = 766,
        [anon_sym_BANG_EQ] = 766,
        [anon_sym_LT] = 766,
        [anon_sym_LT_EQ] = 766,
        [anon_sym_GT] = 766,
        [anon_sym_GT_EQ] = 766,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [306] = {
        [aux_sym_expression_list_repeat1] = 420,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_PIPE] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [307] = {
        [aux_sym_expression_list_repeat1] = 420,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 420,
        [anon_sym_DASH] = 420,
        [anon_sym_PIPE] = 420,
        [anon_sym_CARET] = 420,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [308] = {
        [aux_sym_expression_list_repeat1] = 422,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 422,
        [anon_sym_COMMA] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [309] = {
        [aux_sym_expression_list_repeat1] = 786,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 788,
        [anon_sym_COMMA] = 760,
        [anon_sym_STAR] = 762,
        [anon_sym_SLASH] = 762,
        [anon_sym_PERCENT] = 762,
        [anon_sym_LT_LT] = 762,
        [anon_sym_GT_GT] = 762,
        [anon_sym_AMP] = 762,
        [anon_sym_AMP_CARET] = 762,
        [anon_sym_PLUS] = 764,
        [anon_sym_DASH] = 764,
        [anon_sym_PIPE] = 764,
        [anon_sym_CARET] = 764,
        [anon_sym_EQ_EQ] = 766,
        [anon_sym_BANG_EQ] = 766,
        [anon_sym_LT] = 766,
        [anon_sym_LT_EQ] = 766,
        [anon_sym_GT] = 766,
        [anon_sym_GT_EQ] = 766,
        [anon_sym_AMP_AMP] = 768,
        [anon_sym_PIPE_PIPE] = 770,
        [sym_comment] = 8,
    },
    [310] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 790,
        [sym_comment] = 8,
    },
    [311] = {
        [sym_expression_list] = 792,
        [sym__expression] = 706,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [312] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 794,
        [sym_comment] = 8,
    },
    [313] = {
        [sym_var_spec] = 660,
        [sym_identifier_list] = 662,
        [aux_sym_var_declaration_repeat1] = 796,
        [anon_sym_RPAREN] = 798,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [314] = {
        [anon_sym_RPAREN] = 800,
        [sym_comment] = 8,
    },
    [315] = {
        [sym__top_level_declaration] = 700,
        [sym__declaration] = 700,
        [sym_const_declaration] = 700,
        [sym_var_declaration] = 700,
        [sym_function_declaration] = 700,
        [sym_method_declaration] = 700,
        [sym_type_declaration] = 700,
        [aux_sym_source_file_repeat2] = 700,
        [ts_builtin_sym_end] = 700,
        [anon_sym_const] = 700,
        [anon_sym_EQ] = 802,
        [anon_sym_var] = 700,
        [anon_sym_func] = 700,
        [anon_sym_type] = 700,
        [sym_comment] = 8,
    },
    [316] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_const] = 118,
        [anon_sym_EQ] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [317] = {
        [sym_expression_list] = 804,
        [sym__expression] = 806,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [318] = {
        [sym__expression] = 816,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 818,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [319] = {
        [anon_sym_LBRACE] = 820,
        [sym_comment] = 8,
    },
    [320] = {
        [anon_sym_LBRACE] = 822,
        [sym_comment] = 8,
    },
    [321] = {
        [anon_sym_LBRACK] = 824,
        [sym_comment] = 8,
    },
    [322] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_DOT] = 826,
        [anon_sym_const] = 118,
        [anon_sym_EQ] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [323] = {
        [sym_identifier] = 828,
        [sym_comment] = 8,
    },
    [324] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_var_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_type_declaration] = 142,
        [aux_sym_source_file_repeat2] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_const] = 142,
        [anon_sym_EQ] = 142,
        [anon_sym_var] = 142,
        [anon_sym_func] = 142,
        [anon_sym_type] = 142,
        [sym_comment] = 8,
    },
    [325] = {
        [sym__type] = 830,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [326] = {
        [anon_sym_RBRACK] = 832,
        [sym_comment] = 8,
    },
    [327] = {
        [sym__type] = 834,
        [sym_array_type] = 646,
        [sym_slice_type] = 646,
        [sym_struct_type] = 646,
        [sym_interface_type] = 646,
        [sym_map_type] = 646,
        [sym_qualified_identifier] = 646,
        [anon_sym_LBRACK] = 650,
        [anon_sym_struct] = 652,
        [anon_sym_interface] = 654,
        [anon_sym_map] = 656,
        [sym_identifier] = 658,
        [sym_comment] = 8,
    },
    [328] = {
        [sym__top_level_declaration] = 180,
        [sym__declaration] = 180,
        [sym_const_declaration] = 180,
        [sym_var_declaration] = 180,
        [sym_function_declaration] = 180,
        [sym_method_declaration] = 180,
        [sym_type_declaration] = 180,
        [aux_sym_source_file_repeat2] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_const] = 180,
        [anon_sym_EQ] = 180,
        [anon_sym_var] = 180,
        [anon_sym_func] = 180,
        [anon_sym_type] = 180,
        [sym_comment] = 8,
    },
    [329] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 836,
        [anon_sym_RBRACE] = 838,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [330] = {
        [anon_sym_RBRACE] = 840,
        [sym_comment] = 8,
    },
    [331] = {
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
    [332] = {
        [sym__top_level_declaration] = 282,
        [sym__declaration] = 282,
        [sym_const_declaration] = 282,
        [sym_var_declaration] = 282,
        [sym_function_declaration] = 282,
        [sym_method_declaration] = 282,
        [sym_type_declaration] = 282,
        [aux_sym_source_file_repeat2] = 282,
        [ts_builtin_sym_end] = 282,
        [anon_sym_const] = 282,
        [anon_sym_EQ] = 282,
        [anon_sym_var] = 282,
        [anon_sym_func] = 282,
        [anon_sym_type] = 282,
        [sym_comment] = 8,
    },
    [333] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 842,
        [anon_sym_RBRACE] = 844,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [334] = {
        [anon_sym_RBRACE] = 846,
        [sym_comment] = 8,
    },
    [335] = {
        [sym__top_level_declaration] = 314,
        [sym__declaration] = 314,
        [sym_const_declaration] = 314,
        [sym_var_declaration] = 314,
        [sym_function_declaration] = 314,
        [sym_method_declaration] = 314,
        [sym_type_declaration] = 314,
        [aux_sym_source_file_repeat2] = 314,
        [ts_builtin_sym_end] = 314,
        [anon_sym_const] = 314,
        [anon_sym_EQ] = 314,
        [anon_sym_var] = 314,
        [anon_sym_func] = 314,
        [anon_sym_type] = 314,
        [sym_comment] = 8,
    },
    [336] = {
        [sym__top_level_declaration] = 346,
        [sym__declaration] = 346,
        [sym_const_declaration] = 346,
        [sym_var_declaration] = 346,
        [sym_function_declaration] = 346,
        [sym_method_declaration] = 346,
        [sym_type_declaration] = 346,
        [aux_sym_source_file_repeat2] = 346,
        [ts_builtin_sym_end] = 346,
        [anon_sym_const] = 346,
        [anon_sym_EQ] = 346,
        [anon_sym_var] = 346,
        [anon_sym_func] = 346,
        [anon_sym_type] = 346,
        [sym_comment] = 8,
    },
    [337] = {
        [anon_sym_RBRACK] = 848,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [338] = {
        [sym__type] = 850,
        [sym_array_type] = 646,
        [sym_slice_type] = 646,
        [sym_struct_type] = 646,
        [sym_interface_type] = 646,
        [sym_map_type] = 646,
        [sym_qualified_identifier] = 646,
        [anon_sym_LBRACK] = 650,
        [anon_sym_struct] = 652,
        [anon_sym_interface] = 654,
        [anon_sym_map] = 656,
        [sym_identifier] = 658,
        [sym_comment] = 8,
    },
    [339] = {
        [sym__top_level_declaration] = 406,
        [sym__declaration] = 406,
        [sym_const_declaration] = 406,
        [sym_var_declaration] = 406,
        [sym_function_declaration] = 406,
        [sym_method_declaration] = 406,
        [sym_type_declaration] = 406,
        [aux_sym_source_file_repeat2] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_const] = 406,
        [anon_sym_EQ] = 406,
        [anon_sym_var] = 406,
        [anon_sym_func] = 406,
        [anon_sym_type] = 406,
        [sym_comment] = 8,
    },
    [340] = {
        [sym__type] = 852,
        [sym_array_type] = 646,
        [sym_slice_type] = 646,
        [sym_struct_type] = 646,
        [sym_interface_type] = 646,
        [sym_map_type] = 646,
        [sym_qualified_identifier] = 646,
        [anon_sym_LBRACK] = 650,
        [anon_sym_struct] = 652,
        [anon_sym_interface] = 654,
        [anon_sym_map] = 656,
        [sym_identifier] = 658,
        [sym_comment] = 8,
    },
    [341] = {
        [sym__top_level_declaration] = 424,
        [sym__declaration] = 424,
        [sym_const_declaration] = 424,
        [sym_var_declaration] = 424,
        [sym_function_declaration] = 424,
        [sym_method_declaration] = 424,
        [sym_type_declaration] = 424,
        [aux_sym_source_file_repeat2] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_const] = 424,
        [anon_sym_EQ] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_type] = 424,
        [sym_comment] = 8,
    },
    [342] = {
        [sym__top_level_declaration] = 754,
        [sym__declaration] = 754,
        [sym_const_declaration] = 754,
        [sym_var_declaration] = 754,
        [sym_function_declaration] = 754,
        [sym_method_declaration] = 754,
        [sym_type_declaration] = 754,
        [aux_sym_source_file_repeat2] = 754,
        [ts_builtin_sym_end] = 754,
        [anon_sym_const] = 754,
        [anon_sym_var] = 754,
        [anon_sym_func] = 754,
        [anon_sym_type] = 754,
        [sym_comment] = 8,
    },
    [343] = {
        [sym__top_level_declaration] = 758,
        [sym__declaration] = 758,
        [sym_const_declaration] = 758,
        [sym_var_declaration] = 758,
        [sym_function_declaration] = 758,
        [sym_method_declaration] = 758,
        [sym_type_declaration] = 758,
        [aux_sym_source_file_repeat2] = 758,
        [aux_sym_expression_list_repeat1] = 854,
        [ts_builtin_sym_end] = 758,
        [anon_sym_const] = 758,
        [anon_sym_var] = 758,
        [anon_sym_func] = 758,
        [anon_sym_COMMA] = 856,
        [anon_sym_type] = 758,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 862,
        [anon_sym_BANG_EQ] = 862,
        [anon_sym_LT] = 862,
        [anon_sym_LT_EQ] = 862,
        [anon_sym_GT] = 862,
        [anon_sym_GT_EQ] = 862,
        [anon_sym_AMP_AMP] = 864,
        [anon_sym_PIPE_PIPE] = 866,
        [sym_comment] = 8,
    },
    [344] = {
        [sym__top_level_declaration] = 398,
        [sym__declaration] = 398,
        [sym_const_declaration] = 398,
        [sym_var_declaration] = 398,
        [sym_function_declaration] = 398,
        [sym_method_declaration] = 398,
        [sym_type_declaration] = 398,
        [aux_sym_source_file_repeat2] = 398,
        [aux_sym_expression_list_repeat1] = 398,
        [ts_builtin_sym_end] = 398,
        [anon_sym_const] = 398,
        [anon_sym_var] = 398,
        [anon_sym_func] = 398,
        [anon_sym_COMMA] = 398,
        [anon_sym_type] = 398,
        [anon_sym_STAR] = 398,
        [anon_sym_SLASH] = 398,
        [anon_sym_PERCENT] = 398,
        [anon_sym_LT_LT] = 398,
        [anon_sym_GT_GT] = 398,
        [anon_sym_AMP] = 398,
        [anon_sym_AMP_CARET] = 398,
        [anon_sym_PLUS] = 398,
        [anon_sym_DASH] = 398,
        [anon_sym_PIPE] = 398,
        [anon_sym_CARET] = 398,
        [anon_sym_EQ_EQ] = 398,
        [anon_sym_BANG_EQ] = 398,
        [anon_sym_LT] = 398,
        [anon_sym_LT_EQ] = 398,
        [anon_sym_GT] = 398,
        [anon_sym_GT_EQ] = 398,
        [anon_sym_AMP_AMP] = 398,
        [anon_sym_PIPE_PIPE] = 398,
        [sym_comment] = 8,
    },
    [345] = {
        [sym__top_level_declaration] = 400,
        [sym__declaration] = 400,
        [sym_const_declaration] = 400,
        [sym_var_declaration] = 400,
        [sym_function_declaration] = 400,
        [sym_method_declaration] = 400,
        [sym_type_declaration] = 400,
        [aux_sym_source_file_repeat2] = 400,
        [aux_sym_expression_list_repeat1] = 400,
        [ts_builtin_sym_end] = 400,
        [anon_sym_const] = 400,
        [anon_sym_var] = 400,
        [anon_sym_func] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_type] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [346] = {
        [sym__top_level_declaration] = 334,
        [sym__declaration] = 334,
        [sym_const_declaration] = 334,
        [sym_var_declaration] = 334,
        [sym_function_declaration] = 334,
        [sym_method_declaration] = 334,
        [sym_type_declaration] = 334,
        [aux_sym_source_file_repeat2] = 334,
        [aux_sym_expression_list_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_const] = 334,
        [anon_sym_var] = 334,
        [anon_sym_func] = 334,
        [anon_sym_COMMA] = 334,
        [anon_sym_type] = 334,
        [anon_sym_STAR] = 334,
        [anon_sym_SLASH] = 334,
        [anon_sym_PERCENT] = 334,
        [anon_sym_LT_LT] = 334,
        [anon_sym_GT_GT] = 334,
        [anon_sym_AMP] = 334,
        [anon_sym_AMP_CARET] = 334,
        [anon_sym_PLUS] = 334,
        [anon_sym_DASH] = 334,
        [anon_sym_PIPE] = 334,
        [anon_sym_CARET] = 334,
        [anon_sym_EQ_EQ] = 334,
        [anon_sym_BANG_EQ] = 334,
        [anon_sym_LT] = 334,
        [anon_sym_LT_EQ] = 334,
        [anon_sym_GT] = 334,
        [anon_sym_GT_EQ] = 334,
        [anon_sym_AMP_AMP] = 334,
        [anon_sym_PIPE_PIPE] = 334,
        [sym_comment] = 8,
    },
    [347] = {
        [sym__top_level_declaration] = 404,
        [sym__declaration] = 404,
        [sym_const_declaration] = 404,
        [sym_var_declaration] = 404,
        [sym_function_declaration] = 404,
        [sym_method_declaration] = 404,
        [sym_type_declaration] = 404,
        [aux_sym_source_file_repeat2] = 404,
        [aux_sym_expression_list_repeat1] = 404,
        [ts_builtin_sym_end] = 404,
        [anon_sym_const] = 404,
        [anon_sym_var] = 404,
        [anon_sym_func] = 404,
        [anon_sym_COMMA] = 404,
        [anon_sym_type] = 404,
        [anon_sym_STAR] = 404,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 404,
        [anon_sym_DASH] = 404,
        [anon_sym_PIPE] = 404,
        [anon_sym_CARET] = 404,
        [anon_sym_EQ_EQ] = 404,
        [anon_sym_BANG_EQ] = 404,
        [anon_sym_LT] = 404,
        [anon_sym_LT_EQ] = 404,
        [anon_sym_GT] = 404,
        [anon_sym_GT_EQ] = 404,
        [anon_sym_AMP_AMP] = 404,
        [anon_sym_PIPE_PIPE] = 404,
        [sym_comment] = 8,
    },
    [348] = {
        [sym__top_level_declaration] = 772,
        [sym__declaration] = 772,
        [sym_const_declaration] = 772,
        [sym_var_declaration] = 772,
        [sym_function_declaration] = 772,
        [sym_method_declaration] = 772,
        [sym_type_declaration] = 772,
        [aux_sym_source_file_repeat2] = 772,
        [ts_builtin_sym_end] = 772,
        [anon_sym_const] = 772,
        [anon_sym_var] = 772,
        [anon_sym_func] = 772,
        [anon_sym_type] = 772,
        [sym_comment] = 8,
    },
    [349] = {
        [sym__expression] = 868,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [350] = {
        [sym__expression] = 870,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [351] = {
        [sym__expression] = 872,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [352] = {
        [sym__expression] = 874,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [353] = {
        [sym__expression] = 876,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [354] = {
        [sym__expression] = 878,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [355] = {
        [sym__top_level_declaration] = 420,
        [sym__declaration] = 420,
        [sym_const_declaration] = 420,
        [sym_var_declaration] = 420,
        [sym_function_declaration] = 420,
        [sym_method_declaration] = 420,
        [sym_type_declaration] = 420,
        [aux_sym_source_file_repeat2] = 420,
        [aux_sym_expression_list_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_const] = 420,
        [anon_sym_var] = 420,
        [anon_sym_func] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_type] = 420,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 862,
        [anon_sym_BANG_EQ] = 862,
        [anon_sym_LT] = 862,
        [anon_sym_LT_EQ] = 862,
        [anon_sym_GT] = 862,
        [anon_sym_GT_EQ] = 862,
        [anon_sym_AMP_AMP] = 864,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [356] = {
        [sym__top_level_declaration] = 420,
        [sym__declaration] = 420,
        [sym_const_declaration] = 420,
        [sym_var_declaration] = 420,
        [sym_function_declaration] = 420,
        [sym_method_declaration] = 420,
        [sym_type_declaration] = 420,
        [aux_sym_source_file_repeat2] = 420,
        [aux_sym_expression_list_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_const] = 420,
        [anon_sym_var] = 420,
        [anon_sym_func] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_type] = 420,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 862,
        [anon_sym_BANG_EQ] = 862,
        [anon_sym_LT] = 862,
        [anon_sym_LT_EQ] = 862,
        [anon_sym_GT] = 862,
        [anon_sym_GT_EQ] = 862,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [357] = {
        [sym__top_level_declaration] = 420,
        [sym__declaration] = 420,
        [sym_const_declaration] = 420,
        [sym_var_declaration] = 420,
        [sym_function_declaration] = 420,
        [sym_method_declaration] = 420,
        [sym_type_declaration] = 420,
        [aux_sym_source_file_repeat2] = 420,
        [aux_sym_expression_list_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_const] = 420,
        [anon_sym_var] = 420,
        [anon_sym_func] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_type] = 420,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [358] = {
        [sym__top_level_declaration] = 420,
        [sym__declaration] = 420,
        [sym_const_declaration] = 420,
        [sym_var_declaration] = 420,
        [sym_function_declaration] = 420,
        [sym_method_declaration] = 420,
        [sym_type_declaration] = 420,
        [aux_sym_source_file_repeat2] = 420,
        [aux_sym_expression_list_repeat1] = 420,
        [ts_builtin_sym_end] = 420,
        [anon_sym_const] = 420,
        [anon_sym_var] = 420,
        [anon_sym_func] = 420,
        [anon_sym_COMMA] = 420,
        [anon_sym_type] = 420,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 420,
        [anon_sym_DASH] = 420,
        [anon_sym_PIPE] = 420,
        [anon_sym_CARET] = 420,
        [anon_sym_EQ_EQ] = 420,
        [anon_sym_BANG_EQ] = 420,
        [anon_sym_LT] = 420,
        [anon_sym_LT_EQ] = 420,
        [anon_sym_GT] = 420,
        [anon_sym_GT_EQ] = 420,
        [anon_sym_AMP_AMP] = 420,
        [anon_sym_PIPE_PIPE] = 420,
        [sym_comment] = 8,
    },
    [359] = {
        [sym__top_level_declaration] = 422,
        [sym__declaration] = 422,
        [sym_const_declaration] = 422,
        [sym_var_declaration] = 422,
        [sym_function_declaration] = 422,
        [sym_method_declaration] = 422,
        [sym_type_declaration] = 422,
        [aux_sym_source_file_repeat2] = 422,
        [aux_sym_expression_list_repeat1] = 422,
        [ts_builtin_sym_end] = 422,
        [anon_sym_const] = 422,
        [anon_sym_var] = 422,
        [anon_sym_func] = 422,
        [anon_sym_COMMA] = 422,
        [anon_sym_type] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [360] = {
        [sym__top_level_declaration] = 788,
        [sym__declaration] = 788,
        [sym_const_declaration] = 788,
        [sym_var_declaration] = 788,
        [sym_function_declaration] = 788,
        [sym_method_declaration] = 788,
        [sym_type_declaration] = 788,
        [aux_sym_source_file_repeat2] = 788,
        [aux_sym_expression_list_repeat1] = 880,
        [ts_builtin_sym_end] = 788,
        [anon_sym_const] = 788,
        [anon_sym_var] = 788,
        [anon_sym_func] = 788,
        [anon_sym_COMMA] = 856,
        [anon_sym_type] = 788,
        [anon_sym_STAR] = 858,
        [anon_sym_SLASH] = 858,
        [anon_sym_PERCENT] = 858,
        [anon_sym_LT_LT] = 858,
        [anon_sym_GT_GT] = 858,
        [anon_sym_AMP] = 858,
        [anon_sym_AMP_CARET] = 858,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 862,
        [anon_sym_BANG_EQ] = 862,
        [anon_sym_LT] = 862,
        [anon_sym_LT_EQ] = 862,
        [anon_sym_GT] = 862,
        [anon_sym_GT_EQ] = 862,
        [anon_sym_AMP_AMP] = 864,
        [anon_sym_PIPE_PIPE] = 866,
        [sym_comment] = 8,
    },
    [361] = {
        [sym__top_level_declaration] = 790,
        [sym__declaration] = 790,
        [sym_const_declaration] = 790,
        [sym_var_declaration] = 790,
        [sym_function_declaration] = 790,
        [sym_method_declaration] = 790,
        [sym_type_declaration] = 790,
        [aux_sym_source_file_repeat2] = 790,
        [ts_builtin_sym_end] = 790,
        [anon_sym_const] = 790,
        [anon_sym_var] = 790,
        [anon_sym_func] = 790,
        [anon_sym_type] = 790,
        [sym_comment] = 8,
    },
    [362] = {
        [sym_expression_list] = 882,
        [sym__expression] = 806,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [363] = {
        [sym__top_level_declaration] = 794,
        [sym__declaration] = 794,
        [sym_const_declaration] = 794,
        [sym_var_declaration] = 794,
        [sym_function_declaration] = 794,
        [sym_method_declaration] = 794,
        [sym_type_declaration] = 794,
        [aux_sym_source_file_repeat2] = 794,
        [ts_builtin_sym_end] = 794,
        [anon_sym_const] = 794,
        [anon_sym_var] = 794,
        [anon_sym_func] = 794,
        [anon_sym_type] = 794,
        [sym_comment] = 8,
    },
    [364] = {
        [sym__top_level_declaration] = 884,
        [sym__declaration] = 884,
        [sym_const_declaration] = 884,
        [sym_var_declaration] = 884,
        [sym_function_declaration] = 884,
        [sym_method_declaration] = 884,
        [sym_type_declaration] = 884,
        [aux_sym_source_file_repeat2] = 884,
        [ts_builtin_sym_end] = 884,
        [anon_sym_const] = 884,
        [anon_sym_var] = 884,
        [anon_sym_func] = 884,
        [anon_sym_type] = 884,
        [sym_comment] = 8,
    },
    [365] = {
        [sym__type] = 886,
        [sym_array_type] = 888,
        [sym_slice_type] = 888,
        [sym_struct_type] = 888,
        [sym_interface_type] = 888,
        [sym_map_type] = 888,
        [sym_qualified_identifier] = 888,
        [anon_sym_EQ] = 890,
        [anon_sym_LBRACK] = 892,
        [anon_sym_struct] = 894,
        [anon_sym_interface] = 896,
        [anon_sym_map] = 898,
        [sym_identifier] = 900,
        [sym_comment] = 8,
    },
    [366] = {
        [sym_const_spec] = 902,
        [sym_identifier_list] = 904,
        [aux_sym_const_declaration_repeat1] = 906,
        [anon_sym_RPAREN] = 908,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [367] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 910,
        [sym_comment] = 8,
    },
    [368] = {
        [sym__type] = 912,
        [sym_array_type] = 888,
        [sym_slice_type] = 888,
        [sym_struct_type] = 888,
        [sym_interface_type] = 888,
        [sym_map_type] = 888,
        [sym_qualified_identifier] = 888,
        [anon_sym_EQ] = 914,
        [anon_sym_LBRACK] = 892,
        [anon_sym_struct] = 894,
        [anon_sym_interface] = 896,
        [anon_sym_map] = 898,
        [sym_identifier] = 900,
        [sym_comment] = 8,
    },
    [369] = {
        [anon_sym_RPAREN] = 916,
        [sym_comment] = 8,
    },
    [370] = {
        [sym__top_level_declaration] = 918,
        [sym__declaration] = 918,
        [sym_const_declaration] = 918,
        [sym_var_declaration] = 918,
        [sym_function_declaration] = 918,
        [sym_method_declaration] = 918,
        [sym_type_declaration] = 918,
        [aux_sym_source_file_repeat2] = 918,
        [ts_builtin_sym_end] = 918,
        [anon_sym_const] = 918,
        [anon_sym_var] = 918,
        [anon_sym_func] = 918,
        [anon_sym_type] = 918,
        [sym_comment] = 8,
    },
    [371] = {
        [sym__top_level_declaration] = 920,
        [sym__declaration] = 920,
        [sym_const_declaration] = 920,
        [sym_var_declaration] = 920,
        [sym_function_declaration] = 920,
        [sym_method_declaration] = 920,
        [sym_type_declaration] = 920,
        [aux_sym_source_file_repeat2] = 920,
        [ts_builtin_sym_end] = 920,
        [anon_sym_const] = 920,
        [anon_sym_var] = 920,
        [anon_sym_func] = 920,
        [anon_sym_type] = 920,
        [sym_comment] = 8,
    },
    [372] = {
        [anon_sym_EQ] = 922,
        [sym_comment] = 8,
    },
    [373] = {
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [374] = {
        [sym_expression_list] = 924,
        [sym__expression] = 706,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [375] = {
        [sym__expression] = 926,
        [sym_unary_expression] = 122,
        [sym_binary_expression] = 122,
        [sym__primary_expression] = 122,
        [sym__string_literal] = 124,
        [sym_int_literal] = 124,
        [sym_float_literal] = 124,
        [anon_sym_RBRACK] = 928,
        [sym_identifier] = 124,
        [sym_raw_string_literal] = 128,
        [sym_interpreted_string_literal] = 128,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 130,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 8,
    },
    [376] = {
        [anon_sym_LBRACE] = 930,
        [sym_comment] = 8,
    },
    [377] = {
        [anon_sym_LBRACE] = 932,
        [sym_comment] = 8,
    },
    [378] = {
        [anon_sym_LBRACK] = 934,
        [sym_comment] = 8,
    },
    [379] = {
        [anon_sym_DOT] = 936,
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [380] = {
        [sym_identifier] = 938,
        [sym_comment] = 8,
    },
    [381] = {
        [anon_sym_EQ] = 142,
        [sym_comment] = 8,
    },
    [382] = {
        [sym__type] = 940,
        [sym_array_type] = 146,
        [sym_slice_type] = 146,
        [sym_struct_type] = 146,
        [sym_interface_type] = 146,
        [sym_map_type] = 146,
        [sym_qualified_identifier] = 146,
        [anon_sym_LBRACK] = 148,
        [anon_sym_struct] = 150,
        [anon_sym_interface] = 152,
        [anon_sym_map] = 154,
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [383] = {
        [anon_sym_RBRACK] = 942,
        [sym_comment] = 8,
    },
    [384] = {
        [sym__type] = 944,
        [sym_array_type] = 888,
        [sym_slice_type] = 888,
        [sym_struct_type] = 888,
        [sym_interface_type] = 888,
        [sym_map_type] = 888,
        [sym_qualified_identifier] = 888,
        [anon_sym_LBRACK] = 892,
        [anon_sym_struct] = 894,
        [anon_sym_interface] = 896,
        [anon_sym_map] = 898,
        [sym_identifier] = 900,
        [sym_comment] = 8,
    },
    [385] = {
        [anon_sym_EQ] = 180,
        [sym_comment] = 8,
    },
    [386] = {
        [sym_method_spec] = 182,
        [aux_sym_interface_type_repeat1] = 946,
        [anon_sym_RBRACE] = 948,
        [sym_identifier] = 188,
        [sym_comment] = 8,
    },
    [387] = {
        [anon_sym_RBRACE] = 950,
        [sym_comment] = 8,
    },
    [388] = {
        [anon_sym_EQ] = 194,
        [sym_comment] = 8,
    },
    [389] = {
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [390] = {
        [sym_identifier_list] = 284,
        [sym_field_declaration] = 286,
        [aux_sym_struct_type_repeat1] = 952,
        [anon_sym_RBRACE] = 954,
        [anon_sym_STAR] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [391] = {
        [anon_sym_RBRACE] = 956,
        [sym_comment] = 8,
    },
    [392] = {
        [anon_sym_EQ] = 314,
        [sym_comment] = 8,
    },
    [393] = {
        [anon_sym_EQ] = 346,
        [sym_comment] = 8,
    },
    [394] = {
        [anon_sym_RBRACK] = 958,
        [anon_sym_STAR] = 388,
        [anon_sym_SLASH] = 388,
        [anon_sym_PERCENT] = 388,
        [anon_sym_LT_LT] = 388,
        [anon_sym_GT_GT] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_AMP_CARET] = 388,
        [anon_sym_PLUS] = 390,
        [anon_sym_DASH] = 390,
        [anon_sym_PIPE] = 390,
        [anon_sym_CARET] = 390,
        [anon_sym_EQ_EQ] = 392,
        [anon_sym_BANG_EQ] = 392,
        [anon_sym_LT] = 392,
        [anon_sym_LT_EQ] = 392,
        [anon_sym_GT] = 392,
        [anon_sym_GT_EQ] = 392,
        [anon_sym_AMP_AMP] = 394,
        [anon_sym_PIPE_PIPE] = 396,
        [sym_comment] = 8,
    },
    [395] = {
        [sym__type] = 960,
        [sym_array_type] = 888,
        [sym_slice_type] = 888,
        [sym_struct_type] = 888,
        [sym_interface_type] = 888,
        [sym_map_type] = 888,
        [sym_qualified_identifier] = 888,
        [anon_sym_LBRACK] = 892,
        [anon_sym_struct] = 894,
        [anon_sym_interface] = 896,
        [anon_sym_map] = 898,
        [sym_identifier] = 900,
        [sym_comment] = 8,
    },
    [396] = {
        [anon_sym_EQ] = 406,
        [sym_comment] = 8,
    },
    [397] = {
        [sym__type] = 962,
        [sym_array_type] = 888,
        [sym_slice_type] = 888,
        [sym_struct_type] = 888,
        [sym_interface_type] = 888,
        [sym_map_type] = 888,
        [sym_qualified_identifier] = 888,
        [anon_sym_LBRACK] = 892,
        [anon_sym_struct] = 894,
        [anon_sym_interface] = 896,
        [anon_sym_map] = 898,
        [sym_identifier] = 900,
        [sym_comment] = 8,
    },
    [398] = {
        [anon_sym_EQ] = 424,
        [sym_comment] = 8,
    },
    [399] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 964,
        [sym_comment] = 8,
    },
    [400] = {
        [sym_expression_list] = 966,
        [sym__expression] = 706,
        [sym_unary_expression] = 708,
        [sym_binary_expression] = 708,
        [sym__primary_expression] = 708,
        [sym__string_literal] = 710,
        [sym_int_literal] = 710,
        [sym_float_literal] = 710,
        [sym_identifier] = 710,
        [sym_raw_string_literal] = 712,
        [sym_interpreted_string_literal] = 712,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 714,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 714,
        [sym_comment] = 8,
    },
    [401] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 968,
        [sym_comment] = 8,
    },
    [402] = {
        [sym_const_spec] = 902,
        [sym_identifier_list] = 904,
        [aux_sym_const_declaration_repeat1] = 970,
        [anon_sym_RPAREN] = 972,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [403] = {
        [anon_sym_RPAREN] = 974,
        [sym_comment] = 8,
    },
    [404] = {
        [anon_sym_EQ] = 976,
        [sym_comment] = 8,
    },
    [405] = {
        [sym_expression_list] = 978,
        [sym__expression] = 806,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [406] = {
        [sym__top_level_declaration] = 964,
        [sym__declaration] = 964,
        [sym_const_declaration] = 964,
        [sym_var_declaration] = 964,
        [sym_function_declaration] = 964,
        [sym_method_declaration] = 964,
        [sym_type_declaration] = 964,
        [aux_sym_source_file_repeat2] = 964,
        [ts_builtin_sym_end] = 964,
        [anon_sym_const] = 964,
        [anon_sym_var] = 964,
        [anon_sym_func] = 964,
        [anon_sym_type] = 964,
        [sym_comment] = 8,
    },
    [407] = {
        [sym_expression_list] = 980,
        [sym__expression] = 806,
        [sym_unary_expression] = 808,
        [sym_binary_expression] = 808,
        [sym__primary_expression] = 808,
        [sym__string_literal] = 810,
        [sym_int_literal] = 810,
        [sym_float_literal] = 810,
        [sym_identifier] = 810,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 814,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 814,
        [sym_comment] = 8,
    },
    [408] = {
        [sym__top_level_declaration] = 968,
        [sym__declaration] = 968,
        [sym_const_declaration] = 968,
        [sym_var_declaration] = 968,
        [sym_function_declaration] = 968,
        [sym_method_declaration] = 968,
        [sym_type_declaration] = 968,
        [aux_sym_source_file_repeat2] = 968,
        [ts_builtin_sym_end] = 968,
        [anon_sym_const] = 968,
        [anon_sym_var] = 968,
        [anon_sym_func] = 968,
        [anon_sym_type] = 968,
        [sym_comment] = 8,
    },
    [409] = {
        [sym_import_declaration] = 982,
        [sym__top_level_declaration] = 982,
        [sym__declaration] = 982,
        [sym_const_declaration] = 982,
        [sym_var_declaration] = 982,
        [sym_function_declaration] = 982,
        [sym_method_declaration] = 982,
        [sym_type_declaration] = 982,
        [aux_sym_source_file_repeat1] = 982,
        [aux_sym_source_file_repeat2] = 982,
        [ts_builtin_sym_end] = 982,
        [anon_sym_import] = 982,
        [anon_sym_const] = 982,
        [anon_sym_var] = 982,
        [anon_sym_func] = 982,
        [anon_sym_type] = 982,
        [sym_comment] = 8,
    },
    [410] = {
        [sym_import_declaration] = 984,
        [sym__top_level_declaration] = 984,
        [sym__declaration] = 984,
        [sym_const_declaration] = 984,
        [sym_var_declaration] = 984,
        [sym_function_declaration] = 984,
        [sym_method_declaration] = 984,
        [sym_type_declaration] = 984,
        [aux_sym_source_file_repeat1] = 984,
        [aux_sym_source_file_repeat2] = 984,
        [ts_builtin_sym_end] = 984,
        [anon_sym_import] = 984,
        [anon_sym_const] = 984,
        [anon_sym_var] = 984,
        [anon_sym_func] = 984,
        [anon_sym_type] = 984,
        [sym_comment] = 8,
    },
    [411] = {
        [sym_import_spec] = 986,
        [sym__string_literal] = 988,
        [aux_sym_import_declaration_repeat1] = 990,
        [anon_sym_RPAREN] = 992,
        [anon_sym_DOT] = 994,
        [sym_identifier] = 994,
        [sym_raw_string_literal] = 326,
        [sym_interpreted_string_literal] = 326,
        [sym_comment] = 8,
    },
    [412] = {
        [sym__string_literal] = 996,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [413] = {
        [sym_import_declaration] = 334,
        [sym__top_level_declaration] = 334,
        [sym__declaration] = 334,
        [sym_const_declaration] = 334,
        [sym_var_declaration] = 334,
        [sym_function_declaration] = 334,
        [sym_method_declaration] = 334,
        [sym_type_declaration] = 334,
        [aux_sym_source_file_repeat1] = 334,
        [aux_sym_source_file_repeat2] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_import] = 334,
        [anon_sym_const] = 334,
        [anon_sym_var] = 334,
        [anon_sym_func] = 334,
        [anon_sym_type] = 334,
        [sym_comment] = 8,
    },
    [414] = {
        [sym_import_declaration] = 998,
        [sym__top_level_declaration] = 998,
        [sym__declaration] = 998,
        [sym_const_declaration] = 998,
        [sym_var_declaration] = 998,
        [sym_function_declaration] = 998,
        [sym_method_declaration] = 998,
        [sym_type_declaration] = 998,
        [aux_sym_source_file_repeat1] = 998,
        [aux_sym_source_file_repeat2] = 998,
        [ts_builtin_sym_end] = 998,
        [anon_sym_import] = 998,
        [anon_sym_const] = 998,
        [anon_sym_var] = 998,
        [anon_sym_func] = 998,
        [anon_sym_type] = 998,
        [sym_comment] = 8,
    },
    [415] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1000,
        [sym_comment] = 8,
    },
    [416] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 984,
        [sym_comment] = 8,
    },
    [417] = {
        [anon_sym_RPAREN] = 1002,
        [sym_comment] = 8,
    },
    [418] = {
        [sym_import_declaration] = 1004,
        [sym__top_level_declaration] = 1004,
        [sym__declaration] = 1004,
        [sym_const_declaration] = 1004,
        [sym_var_declaration] = 1004,
        [sym_function_declaration] = 1004,
        [sym_method_declaration] = 1004,
        [sym_type_declaration] = 1004,
        [aux_sym_source_file_repeat1] = 1004,
        [aux_sym_source_file_repeat2] = 1004,
        [ts_builtin_sym_end] = 1004,
        [anon_sym_import] = 1004,
        [anon_sym_const] = 1004,
        [anon_sym_var] = 1004,
        [anon_sym_func] = 1004,
        [anon_sym_type] = 1004,
        [sym_comment] = 8,
    },
    [419] = {
        [sym__string_literal] = 1006,
        [sym_raw_string_literal] = 326,
        [sym_interpreted_string_literal] = 326,
        [sym_comment] = 8,
    },
    [420] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 998,
        [sym_comment] = 8,
    },
    [421] = {
        [sym_import_declaration] = 1008,
        [sym__top_level_declaration] = 1008,
        [sym__declaration] = 1008,
        [sym_const_declaration] = 1008,
        [sym_var_declaration] = 1008,
        [sym_function_declaration] = 1008,
        [sym_method_declaration] = 1008,
        [sym_type_declaration] = 1008,
        [aux_sym_source_file_repeat1] = 1008,
        [aux_sym_source_file_repeat2] = 1008,
        [ts_builtin_sym_end] = 1008,
        [anon_sym_import] = 1008,
        [anon_sym_const] = 1008,
        [anon_sym_var] = 1008,
        [anon_sym_func] = 1008,
        [anon_sym_type] = 1008,
        [sym_comment] = 8,
    },
    [422] = {
        [sym_import_spec] = 986,
        [sym__string_literal] = 988,
        [aux_sym_import_declaration_repeat1] = 1010,
        [anon_sym_RPAREN] = 1012,
        [anon_sym_DOT] = 994,
        [sym_identifier] = 994,
        [sym_raw_string_literal] = 326,
        [sym_interpreted_string_literal] = 326,
        [sym_comment] = 8,
    },
    [423] = {
        [anon_sym_RPAREN] = 1014,
        [sym_comment] = 8,
    },
    [424] = {
        [ts_builtin_sym_end] = 1016,
        [sym_comment] = 8,
    },
    [425] = {
        [ts_builtin_sym_end] = 1018,
        [sym_comment] = 8,
    },
    [426] = {
        [sym__top_level_declaration] = 1020,
        [sym__declaration] = 1020,
        [sym_const_declaration] = 1020,
        [sym_var_declaration] = 1020,
        [sym_function_declaration] = 1020,
        [sym_method_declaration] = 1020,
        [sym_type_declaration] = 1020,
        [aux_sym_source_file_repeat2] = 1020,
        [ts_builtin_sym_end] = 1020,
        [anon_sym_const] = 1020,
        [anon_sym_var] = 1020,
        [anon_sym_func] = 1020,
        [anon_sym_type] = 1020,
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
    [42] = {.count = 1}, SHIFT(426, 0),
    [44] = {.count = 1}, SHIFT(425, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(424, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(409, 0),
    [58] = {.count = 1}, SHIFT(410, 0),
    [60] = {.count = 1}, SHIFT(411, 0),
    [62] = {.count = 1}, SHIFT(412, 0),
    [64] = {.count = 1}, SHIFT(413, 0),
    [66] = {.count = 1}, SHIFT(364, 0),
    [68] = {.count = 1}, SHIFT(365, 0),
    [70] = {.count = 1}, SHIFT(366, 0),
    [72] = {.count = 1}, SHIFT(254, 0),
    [74] = {.count = 1}, SHIFT(251, 0),
    [76] = {.count = 1}, SHIFT(252, 0),
    [78] = {.count = 1}, SHIFT(253, 0),
    [80] = {.count = 1}, SHIFT(201, 0),
    [82] = {.count = 1}, SHIFT(202, 0),
    [84] = {.count = 1}, SHIFT(203, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(193, 0),
    [96] = {.count = 1}, SHIFT(194, 0),
    [98] = {.count = 1}, SHIFT(195, 0),
    [100] = {.count = 1}, SHIFT(196, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, SHIFT(23, 0),
    [112] = {.count = 1}, SHIFT(24, 0),
    [114] = {.count = 1}, SHIFT(25, 0),
    [116] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [118] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [120] = {.count = 1}, SHIFT(188, 0),
    [122] = {.count = 1}, SHIFT(111, 0),
    [124] = {.count = 1}, SHIFT(112, 0),
    [126] = {.count = 1}, SHIFT(189, 0),
    [128] = {.count = 1}, SHIFT(114, 0),
    [130] = {.count = 1}, SHIFT(115, 0),
    [132] = {.count = 1}, SHIFT(184, 0),
    [134] = {.count = 1}, SHIFT(180, 0),
    [136] = {.count = 1}, SHIFT(28, 0),
    [138] = {.count = 1}, SHIFT(26, 0),
    [140] = {.count = 1}, SHIFT(27, 0),
    [142] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [144] = {.count = 1}, SHIFT(29, 0),
    [146] = {.count = 1}, SHIFT(30, 0),
    [148] = {.count = 1}, SHIFT(31, 0),
    [150] = {.count = 1}, SHIFT(32, 0),
    [152] = {.count = 1}, SHIFT(33, 0),
    [154] = {.count = 1}, SHIFT(34, 0),
    [156] = {.count = 1}, SHIFT(35, 0),
    [158] = {.count = 1}, SHIFT(178, 0),
    [160] = {.count = 1}, SHIFT(173, 0),
    [162] = {.count = 1}, SHIFT(174, 0),
    [164] = {.count = 1}, SHIFT(169, 0),
    [166] = {.count = 1}, SHIFT(42, 0),
    [168] = {.count = 1}, SHIFT(38, 0),
    [170] = {.count = 1}, SHIFT(36, 0),
    [172] = {.count = 1}, SHIFT(37, 0),
    [174] = {.count = 1}, SHIFT(39, 0),
    [176] = {.count = 1}, SHIFT(40, 0),
    [178] = {.count = 1}, SHIFT(41, 0),
    [180] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [182] = {.count = 1}, SHIFT(43, 0),
    [184] = {.count = 1}, SHIFT(44, 0),
    [186] = {.count = 1}, SHIFT(45, 0),
    [188] = {.count = 1}, SHIFT(46, 0),
    [190] = {.count = 1}, SHIFT(49, 0),
    [192] = {.count = 1}, SHIFT(168, 0),
    [194] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [196] = {.count = 1}, SHIFT(47, 0),
    [198] = {.count = 1}, SHIFT(48, 0),
    [200] = {.count = 1}, SHIFT(138, 0),
    [202] = {.count = 1}, SHIFT(139, 0),
    [204] = {.count = 1}, SHIFT(140, 0),
    [206] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [208] = {.count = 1}, SHIFT(141, 0),
    [210] = {.count = 1}, SHIFT(142, 0),
    [212] = {.count = 1}, SHIFT(143, 0),
    [214] = {.count = 1}, SHIFT(144, 0),
    [216] = {.count = 1}, SHIFT(145, 0),
    [218] = {.count = 1}, SHIFT(51, 0),
    [220] = {.count = 1}, SHIFT(52, 0),
    [222] = {.count = 1}, SHIFT(53, 0),
    [224] = {.count = 1}, SHIFT(54, 0),
    [226] = {.count = 1}, SHIFT(50, 0),
    [228] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [230] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [232] = {.count = 1}, SHIFT(134, 0),
    [234] = {.count = 1}, SHIFT(135, 0),
    [236] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [238] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [240] = {.count = 1}, SHIFT(55, 0),
    [242] = {.count = 1}, SHIFT(56, 0),
    [244] = {.count = 1}, SHIFT(57, 0),
    [246] = {.count = 1}, SHIFT(58, 0),
    [248] = {.count = 1}, SHIFT(59, 0),
    [250] = {.count = 1}, SHIFT(60, 0),
    [252] = {.count = 1}, SHIFT(61, 0),
    [254] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [256] = {.count = 1}, SHIFT(129, 0),
    [258] = {.count = 1}, SHIFT(130, 0),
    [260] = {.count = 1}, SHIFT(72, 0),
    [262] = {.count = 1}, SHIFT(68, 0),
    [264] = {.count = 1}, SHIFT(64, 0),
    [266] = {.count = 1}, SHIFT(62, 0),
    [268] = {.count = 1}, SHIFT(63, 0),
    [270] = {.count = 1}, SHIFT(65, 0),
    [272] = {.count = 1}, SHIFT(66, 0),
    [274] = {.count = 1}, SHIFT(67, 0),
    [276] = {.count = 1}, SHIFT(69, 0),
    [278] = {.count = 1}, SHIFT(70, 0),
    [280] = {.count = 1}, SHIFT(71, 0),
    [282] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [284] = {.count = 1}, SHIFT(73, 0),
    [286] = {.count = 1}, SHIFT(74, 0),
    [288] = {.count = 1}, SHIFT(75, 0),
    [290] = {.count = 1}, SHIFT(76, 0),
    [292] = {.count = 1}, SHIFT(77, 0),
    [294] = {.count = 1}, SHIFT(78, 0),
    [296] = {.count = 1}, SHIFT(85, 0),
    [298] = {.count = 1}, SHIFT(90, 0),
    [300] = {.count = 1}, SHIFT(91, 0),
    [302] = {.count = 1}, SHIFT(92, 0),
    [304] = {.count = 1}, SHIFT(93, 0),
    [306] = {.count = 1}, SHIFT(94, 0),
    [308] = {.count = 1}, SHIFT(95, 0),
    [310] = {.count = 1}, SHIFT(88, 0),
    [312] = {.count = 1}, SHIFT(87, 0),
    [314] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [316] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [318] = {.count = 1}, SHIFT(79, 0),
    [320] = {.count = 1}, SHIFT(80, 0),
    [322] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [324] = {.count = 1}, SHIFT(81, 0),
    [326] = {.count = 1}, SHIFT(82, 0),
    [328] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [330] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [332] = {.count = 1}, SHIFT(83, 0),
    [334] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [336] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [338] = {.count = 1}, SHIFT(84, 0),
    [340] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [342] = {.count = 1}, SHIFT(86, 0),
    [344] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [346] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [348] = {.count = 1}, SHIFT(89, 0),
    [350] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [352] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [354] = {.count = 1}, SHIFT(110, 0),
    [356] = {.count = 1}, SHIFT(113, 0),
    [358] = {.count = 1}, SHIFT(106, 0),
    [360] = {.count = 1}, SHIFT(102, 0),
    [362] = {.count = 1}, SHIFT(98, 0),
    [364] = {.count = 1}, SHIFT(96, 0),
    [366] = {.count = 1}, SHIFT(97, 0),
    [368] = {.count = 1}, SHIFT(99, 0),
    [370] = {.count = 1}, SHIFT(100, 0),
    [372] = {.count = 1}, SHIFT(101, 0),
    [374] = {.count = 1}, SHIFT(103, 0),
    [376] = {.count = 1}, SHIFT(104, 0),
    [378] = {.count = 1}, SHIFT(105, 0),
    [380] = {.count = 1}, SHIFT(107, 0),
    [382] = {.count = 1}, SHIFT(108, 0),
    [384] = {.count = 1}, SHIFT(109, 0),
    [386] = {.count = 1}, SHIFT(117, 0),
    [388] = {.count = 1}, SHIFT(118, 0),
    [390] = {.count = 1}, SHIFT(119, 0),
    [392] = {.count = 1}, SHIFT(120, 0),
    [394] = {.count = 1}, SHIFT(121, 0),
    [396] = {.count = 1}, SHIFT(122, 0),
    [398] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [400] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [402] = {.count = 1}, SHIFT(116, 0),
    [404] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [406] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [408] = {.count = 1}, SHIFT(128, 0),
    [410] = {.count = 1}, SHIFT(127, 0),
    [412] = {.count = 1}, SHIFT(126, 0),
    [414] = {.count = 1}, SHIFT(125, 0),
    [416] = {.count = 1}, SHIFT(124, 0),
    [418] = {.count = 1}, SHIFT(123, 0),
    [420] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [422] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [424] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [426] = {.count = 1}, SHIFT(132, 0),
    [428] = {.count = 1}, SHIFT(131, 0),
    [430] = {.count = 1}, SHIFT(133, 0),
    [432] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [434] = {.count = 1}, SHIFT(136, 0),
    [436] = {.count = 1}, SHIFT(137, 0),
    [438] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [440] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [442] = {.count = 1}, SHIFT(165, 0),
    [444] = {.count = 1}, SHIFT(166, 0),
    [446] = {.count = 1}, SHIFT(160, 0),
    [448] = {.count = 1}, SHIFT(161, 0),
    [450] = {.count = 1}, SHIFT(156, 0),
    [452] = {.count = 1}, SHIFT(152, 0),
    [454] = {.count = 1}, SHIFT(148, 0),
    [456] = {.count = 1}, SHIFT(146, 0),
    [458] = {.count = 1}, SHIFT(147, 0),
    [460] = {.count = 1}, SHIFT(149, 0),
    [462] = {.count = 1}, SHIFT(150, 0),
    [464] = {.count = 1}, SHIFT(151, 0),
    [466] = {.count = 1}, SHIFT(153, 0),
    [468] = {.count = 1}, SHIFT(154, 0),
    [470] = {.count = 1}, SHIFT(155, 0),
    [472] = {.count = 1}, SHIFT(157, 0),
    [474] = {.count = 1}, SHIFT(158, 0),
    [476] = {.count = 1}, SHIFT(159, 0),
    [478] = {.count = 1}, SHIFT(163, 0),
    [480] = {.count = 1}, SHIFT(162, 0),
    [482] = {.count = 1}, SHIFT(164, 0),
    [484] = {.count = 1}, SHIFT(167, 0),
    [486] = {.count = 1}, SHIFT(170, 0),
    [488] = {.count = 1}, SHIFT(171, 0),
    [490] = {.count = 1}, SHIFT(172, 0),
    [492] = {.count = 1}, SHIFT(176, 0),
    [494] = {.count = 1}, SHIFT(175, 0),
    [496] = {.count = 1}, SHIFT(177, 0),
    [498] = {.count = 1}, SHIFT(179, 0),
    [500] = {.count = 1}, SHIFT(181, 0),
    [502] = {.count = 1}, SHIFT(182, 0),
    [504] = {.count = 1}, SHIFT(183, 0),
    [506] = {.count = 1}, SHIFT(185, 0),
    [508] = {.count = 1}, SHIFT(186, 0),
    [510] = {.count = 1}, SHIFT(187, 0),
    [512] = {.count = 1}, SHIFT(191, 0),
    [514] = {.count = 1}, SHIFT(190, 0),
    [516] = {.count = 1}, SHIFT(192, 0),
    [518] = {.count = 1}, SHIFT(199, 0),
    [520] = {.count = 1}, SHIFT(198, 0),
    [522] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [524] = {.count = 1}, SHIFT(197, 0),
    [526] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [528] = {.count = 1}, SHIFT(200, 0),
    [530] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [532] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [534] = {.count = 1}, SHIFT(246, 0),
    [536] = {.count = 1}, SHIFT(243, 0),
    [538] = {.count = 1}, SHIFT(244, 0),
    [540] = {.count = 1}, SHIFT(204, 0),
    [542] = {.count = 1}, SHIFT(205, 0),
    [544] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [546] = {.count = 1}, SHIFT(209, 0),
    [548] = {.count = 1}, SHIFT(210, 0),
    [550] = {.count = 1}, SHIFT(211, 0),
    [552] = {.count = 1}, SHIFT(212, 0),
    [554] = {.count = 1}, SHIFT(213, 0),
    [556] = {.count = 1}, SHIFT(214, 0),
    [558] = {.count = 1}, SHIFT(215, 0),
    [560] = {.count = 1}, SHIFT(216, 0),
    [562] = {.count = 1}, SHIFT(217, 0),
    [564] = {.count = 1}, SHIFT(218, 0),
    [566] = {.count = 1}, SHIFT(206, 0),
    [568] = {.count = 1}, SHIFT(207, 0),
    [570] = {.count = 1}, SHIFT(208, 0),
    [572] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [574] = {.count = 1}, SHIFT(242, 0),
    [576] = {.count = 1}, SHIFT(239, 0),
    [578] = {.count = 1}, SHIFT(240, 0),
    [580] = {.count = 1}, SHIFT(238, 0),
    [582] = {.count = 1}, SHIFT(233, 0),
    [584] = {.count = 1}, SHIFT(234, 0),
    [586] = {.count = 1}, SHIFT(229, 0),
    [588] = {.count = 1}, SHIFT(225, 0),
    [590] = {.count = 1}, SHIFT(221, 0),
    [592] = {.count = 1}, SHIFT(219, 0),
    [594] = {.count = 1}, SHIFT(220, 0),
    [596] = {.count = 1}, SHIFT(222, 0),
    [598] = {.count = 1}, SHIFT(223, 0),
    [600] = {.count = 1}, SHIFT(224, 0),
    [602] = {.count = 1}, SHIFT(226, 0),
    [604] = {.count = 1}, SHIFT(227, 0),
    [606] = {.count = 1}, SHIFT(228, 0),
    [608] = {.count = 1}, SHIFT(230, 0),
    [610] = {.count = 1}, SHIFT(231, 0),
    [612] = {.count = 1}, SHIFT(232, 0),
    [614] = {.count = 1}, SHIFT(236, 0),
    [616] = {.count = 1}, SHIFT(235, 0),
    [618] = {.count = 1}, SHIFT(237, 0),
    [620] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [622] = {.count = 1}, SHIFT(241, 0),
    [624] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [626] = {.count = 1}, SHIFT(245, 0),
    [628] = {.count = 1}, SHIFT(247, 0),
    [630] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [632] = {.count = 1}, SHIFT(248, 0),
    [634] = {.count = 1}, SHIFT(249, 0),
    [636] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [638] = {.count = 1}, SHIFT(250, 0),
    [640] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [642] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [644] = {.count = 1}, SHIFT(315, 0),
    [646] = {.count = 1}, SHIFT(316, 0),
    [648] = {.count = 1}, SHIFT(317, 0),
    [650] = {.count = 1}, SHIFT(318, 0),
    [652] = {.count = 1}, SHIFT(319, 0),
    [654] = {.count = 1}, SHIFT(320, 0),
    [656] = {.count = 1}, SHIFT(321, 0),
    [658] = {.count = 1}, SHIFT(322, 0),
    [660] = {.count = 1}, SHIFT(259, 0),
    [662] = {.count = 1}, SHIFT(260, 0),
    [664] = {.count = 1}, SHIFT(261, 0),
    [666] = {.count = 1}, SHIFT(262, 0),
    [668] = {.count = 1}, SHIFT(255, 0),
    [670] = {.count = 1}, SHIFT(256, 0),
    [672] = {.count = 1}, SHIFT(257, 0),
    [674] = {.count = 1}, SHIFT(258, 0),
    [676] = {.count = 1}, SHIFT(313, 0),
    [678] = {.count = 1}, SHIFT(264, 0),
    [680] = {.count = 1}, SHIFT(265, 0),
    [682] = {.count = 1}, SHIFT(266, 0),
    [684] = {.count = 1}, SHIFT(267, 0),
    [686] = {.count = 1}, SHIFT(268, 0),
    [688] = {.count = 1}, SHIFT(269, 0),
    [690] = {.count = 1}, SHIFT(270, 0),
    [692] = {.count = 1}, SHIFT(271, 0),
    [694] = {.count = 1}, SHIFT(263, 0),
    [696] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [698] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [700] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [702] = {.count = 1}, SHIFT(311, 0),
    [704] = {.count = 1}, SHIFT(291, 0),
    [706] = {.count = 1}, SHIFT(292, 0),
    [708] = {.count = 1}, SHIFT(293, 0),
    [710] = {.count = 1}, SHIFT(294, 0),
    [712] = {.count = 1}, SHIFT(295, 0),
    [714] = {.count = 1}, SHIFT(296, 0),
    [716] = {.count = 1}, SHIFT(286, 0),
    [718] = {.count = 1}, SHIFT(287, 0),
    [720] = {.count = 1}, SHIFT(282, 0),
    [722] = {.count = 1}, SHIFT(278, 0),
    [724] = {.count = 1}, SHIFT(274, 0),
    [726] = {.count = 1}, SHIFT(272, 0),
    [728] = {.count = 1}, SHIFT(273, 0),
    [730] = {.count = 1}, SHIFT(275, 0),
    [732] = {.count = 1}, SHIFT(276, 0),
    [734] = {.count = 1}, SHIFT(277, 0),
    [736] = {.count = 1}, SHIFT(279, 0),
    [738] = {.count = 1}, SHIFT(280, 0),
    [740] = {.count = 1}, SHIFT(281, 0),
    [742] = {.count = 1}, SHIFT(283, 0),
    [744] = {.count = 1}, SHIFT(284, 0),
    [746] = {.count = 1}, SHIFT(285, 0),
    [748] = {.count = 1}, SHIFT(289, 0),
    [750] = {.count = 1}, SHIFT(288, 0),
    [752] = {.count = 1}, SHIFT(290, 0),
    [754] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [756] = {.count = 1}, SHIFT(297, 0),
    [758] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [760] = {.count = 1}, SHIFT(298, 0),
    [762] = {.count = 1}, SHIFT(299, 0),
    [764] = {.count = 1}, SHIFT(300, 0),
    [766] = {.count = 1}, SHIFT(301, 0),
    [768] = {.count = 1}, SHIFT(302, 0),
    [770] = {.count = 1}, SHIFT(303, 0),
    [772] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [774] = {.count = 1}, SHIFT(309, 0),
    [776] = {.count = 1}, SHIFT(308, 0),
    [778] = {.count = 1}, SHIFT(307, 0),
    [780] = {.count = 1}, SHIFT(306, 0),
    [782] = {.count = 1}, SHIFT(305, 0),
    [784] = {.count = 1}, SHIFT(304, 0),
    [786] = {.count = 1}, SHIFT(310, 0),
    [788] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [790] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [792] = {.count = 1}, SHIFT(312, 0),
    [794] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [796] = {.count = 1}, SHIFT(314, 0),
    [798] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [800] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [802] = {.count = 1}, SHIFT(362, 0),
    [804] = {.count = 1}, SHIFT(342, 0),
    [806] = {.count = 1}, SHIFT(343, 0),
    [808] = {.count = 1}, SHIFT(344, 0),
    [810] = {.count = 1}, SHIFT(345, 0),
    [812] = {.count = 1}, SHIFT(346, 0),
    [814] = {.count = 1}, SHIFT(347, 0),
    [816] = {.count = 1}, SHIFT(337, 0),
    [818] = {.count = 1}, SHIFT(338, 0),
    [820] = {.count = 1}, SHIFT(333, 0),
    [822] = {.count = 1}, SHIFT(329, 0),
    [824] = {.count = 1}, SHIFT(325, 0),
    [826] = {.count = 1}, SHIFT(323, 0),
    [828] = {.count = 1}, SHIFT(324, 0),
    [830] = {.count = 1}, SHIFT(326, 0),
    [832] = {.count = 1}, SHIFT(327, 0),
    [834] = {.count = 1}, SHIFT(328, 0),
    [836] = {.count = 1}, SHIFT(330, 0),
    [838] = {.count = 1}, SHIFT(331, 0),
    [840] = {.count = 1}, SHIFT(332, 0),
    [842] = {.count = 1}, SHIFT(334, 0),
    [844] = {.count = 1}, SHIFT(335, 0),
    [846] = {.count = 1}, SHIFT(336, 0),
    [848] = {.count = 1}, SHIFT(340, 0),
    [850] = {.count = 1}, SHIFT(339, 0),
    [852] = {.count = 1}, SHIFT(341, 0),
    [854] = {.count = 1}, SHIFT(348, 0),
    [856] = {.count = 1}, SHIFT(349, 0),
    [858] = {.count = 1}, SHIFT(350, 0),
    [860] = {.count = 1}, SHIFT(351, 0),
    [862] = {.count = 1}, SHIFT(352, 0),
    [864] = {.count = 1}, SHIFT(353, 0),
    [866] = {.count = 1}, SHIFT(354, 0),
    [868] = {.count = 1}, SHIFT(360, 0),
    [870] = {.count = 1}, SHIFT(359, 0),
    [872] = {.count = 1}, SHIFT(358, 0),
    [874] = {.count = 1}, SHIFT(357, 0),
    [876] = {.count = 1}, SHIFT(356, 0),
    [878] = {.count = 1}, SHIFT(355, 0),
    [880] = {.count = 1}, SHIFT(361, 0),
    [882] = {.count = 1}, SHIFT(363, 0),
    [884] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [886] = {.count = 1}, SHIFT(404, 0),
    [888] = {.count = 1}, SHIFT(373, 0),
    [890] = {.count = 1}, SHIFT(405, 0),
    [892] = {.count = 1}, SHIFT(375, 0),
    [894] = {.count = 1}, SHIFT(376, 0),
    [896] = {.count = 1}, SHIFT(377, 0),
    [898] = {.count = 1}, SHIFT(378, 0),
    [900] = {.count = 1}, SHIFT(379, 0),
    [902] = {.count = 1}, SHIFT(367, 0),
    [904] = {.count = 1}, SHIFT(368, 0),
    [906] = {.count = 1}, SHIFT(369, 0),
    [908] = {.count = 1}, SHIFT(370, 0),
    [910] = {.count = 1}, SHIFT(402, 0),
    [912] = {.count = 1}, SHIFT(372, 0),
    [914] = {.count = 1}, SHIFT(374, 0),
    [916] = {.count = 1}, SHIFT(371, 0),
    [918] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [920] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [922] = {.count = 1}, SHIFT(400, 0),
    [924] = {.count = 1}, SHIFT(399, 0),
    [926] = {.count = 1}, SHIFT(394, 0),
    [928] = {.count = 1}, SHIFT(395, 0),
    [930] = {.count = 1}, SHIFT(390, 0),
    [932] = {.count = 1}, SHIFT(386, 0),
    [934] = {.count = 1}, SHIFT(382, 0),
    [936] = {.count = 1}, SHIFT(380, 0),
    [938] = {.count = 1}, SHIFT(381, 0),
    [940] = {.count = 1}, SHIFT(383, 0),
    [942] = {.count = 1}, SHIFT(384, 0),
    [944] = {.count = 1}, SHIFT(385, 0),
    [946] = {.count = 1}, SHIFT(387, 0),
    [948] = {.count = 1}, SHIFT(388, 0),
    [950] = {.count = 1}, SHIFT(389, 0),
    [952] = {.count = 1}, SHIFT(391, 0),
    [954] = {.count = 1}, SHIFT(392, 0),
    [956] = {.count = 1}, SHIFT(393, 0),
    [958] = {.count = 1}, SHIFT(397, 0),
    [960] = {.count = 1}, SHIFT(396, 0),
    [962] = {.count = 1}, SHIFT(398, 0),
    [964] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [966] = {.count = 1}, SHIFT(401, 0),
    [968] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [970] = {.count = 1}, SHIFT(403, 0),
    [972] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [974] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [976] = {.count = 1}, SHIFT(407, 0),
    [978] = {.count = 1}, SHIFT(406, 0),
    [980] = {.count = 1}, SHIFT(408, 0),
    [982] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [984] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [986] = {.count = 1}, SHIFT(415, 0),
    [988] = {.count = 1}, SHIFT(416, 0),
    [990] = {.count = 1}, SHIFT(417, 0),
    [992] = {.count = 1}, SHIFT(418, 0),
    [994] = {.count = 1}, SHIFT(419, 0),
    [996] = {.count = 1}, SHIFT(414, 0),
    [998] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1000] = {.count = 1}, SHIFT(422, 0),
    [1002] = {.count = 1}, SHIFT(421, 0),
    [1004] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1006] = {.count = 1}, SHIFT(420, 0),
    [1008] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1010] = {.count = 1}, SHIFT(423, 0),
    [1012] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1014] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1016] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1018] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1020] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
