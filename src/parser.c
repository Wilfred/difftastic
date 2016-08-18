#include "tree_sitter/parser.h"

#define STATE_COUNT 508
#define SYMBOL_COUNT 97

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
    sym_pointer_type,
    sym_array_type,
    sym_slice_type,
    sym_struct_type,
    sym_field_declaration,
    sym_interface_type,
    sym_method_spec,
    sym_map_type,
    sym_channel_type,
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
    anon_sym_STAR,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_struct,
    anon_sym_interface,
    anon_sym_map,
    anon_sym_chan,
    anon_sym_LT_DASH,
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
    [sym_pointer_type] = "pointer_type",
    [sym_array_type] = "array_type",
    [sym_slice_type] = "slice_type",
    [sym_struct_type] = "struct_type",
    [sym_field_declaration] = "field_declaration",
    [sym_interface_type] = "interface_type",
    [sym_method_spec] = "method_spec",
    [sym_map_type] = "map_type",
    [sym_channel_type] = "channel_type",
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
    [anon_sym_STAR] = "*",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_struct] = "struct",
    [anon_sym_interface] = "interface",
    [anon_sym_map] = "map",
    [anon_sym_chan] = "chan",
    [anon_sym_LT_DASH] = "<-",
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
    [sym_pointer_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_array_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_slice_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_struct_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_field_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interface_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_map_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_channel_type] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_chan] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(30);
            if (lookahead == '>')
                ADVANCE(32);
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
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == ']')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(38);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(53);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 'p')
                ADVANCE(70);
            if (lookahead == 's')
                ADVANCE(77);
            if (lookahead == 't')
                ADVANCE(83);
            if (lookahead == 'v')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(90);
            if (lookahead == '|')
                ADVANCE(91);
            if (lookahead == '}')
                ADVANCE(93);
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
            if (lookahead == '-')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '=')
                ADVANCE(29);
            ACCEPT_TOKEN(anon_sym_LT);
        case 27:
            ACCEPT_TOKEN(anon_sym_LT_DASH);
        case 28:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 29:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 30:
            if (lookahead == '=')
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 31:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 32:
            if (lookahead == '=')
                ADVANCE(33);
            if (lookahead == '>')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_GT);
        case 33:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 34:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 36:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 37:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 38:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 39:
            if (lookahead == '`')
                ADVANCE(40);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(39);
            LEX_ERROR();
        case 40:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'h')
                ADVANCE(42);
            if (lookahead == 'o')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_chan);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 's')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 't')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_const);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'u')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_func);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'm')
                ADVANCE(54);
            if (lookahead == 'n')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'p')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'o')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'r')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 't')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_import);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 't')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'f')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_interface);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'p')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_map);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(72);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'k')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'g')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_package);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 't')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'u')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 't')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_struct);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'y')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'p')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'e')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_type);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'a')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'r')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            ACCEPT_TOKEN(anon_sym_var);
        case 90:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 91:
            if (lookahead == '|')
                ADVANCE(92);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 92:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 93:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(96);
            LEX_ERROR();
        case 95:
            if (lookahead == '/')
                ADVANCE(19);
            LEX_ERROR();
        case 96:
            if (lookahead == 'a')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'c')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 'k')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'a')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'g')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'e')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            ACCEPT_TOKEN(anon_sym_package);
        case 103:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == '/')
                ADVANCE(95);
            LEX_ERROR();
        case 104:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            LEX_ERROR();
        case 105:
            if (lookahead == 'o')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'n')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 's')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 't')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_const);
        case 110:
            if (lookahead == 'u')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'n')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'c')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_func);
        case 114:
            if (lookahead == 'm')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'p')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'o')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'r')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 't')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_import);
        case 120:
            if (lookahead == 'y')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'p')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'e')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            ACCEPT_TOKEN(anon_sym_type);
        case 124:
            if (lookahead == 'a')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'r')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_var);
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
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
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            LEX_ERROR();
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
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
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 133:
            if (lookahead == '-')
                ADVANCE(27);
            LEX_ERROR();
        case 134:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'h')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 135:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
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
                ADVANCE(95);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == ']')
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '{')
                ADVANCE(90);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '[')
                ADVANCE(36);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'h')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'a')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 'n')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            ACCEPT_TOKEN(anon_sym_chan);
        case 144:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ']')
                ADVANCE(37);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ']')
                ADVANCE(37);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(93);
            LEX_ERROR();
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(93);
            LEX_ERROR();
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(133);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(95);
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
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(93);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(133);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
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
                ADVANCE(161);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(38);
            if (lookahead == '|')
                ADVANCE(91);
            LEX_ERROR();
        case 161:
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '=')
                ADVANCE(29);
            ACCEPT_TOKEN(anon_sym_LT);
        case 162:
            if (lookahead == '=')
                ADVANCE(31);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(95);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(95);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
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
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            if (lookahead == 't')
                ADVANCE(83);
            if (lookahead == 'v')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(90);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            if (lookahead == '{')
                ADVANCE(90);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            if (lookahead == '{')
                ADVANCE(90);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
            if (lookahead == '=')
                ADVANCE(171);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 171:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(133);
            if (lookahead == '=')
                ADVANCE(171);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '[')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == 'c')
                ADVANCE(134);
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(171);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(171);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
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
                ADVANCE(161);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(38);
            if (lookahead == '|')
                ADVANCE(91);
            LEX_ERROR();
        case 176:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(171);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(171);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
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
                ADVANCE(161);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(38);
            if (lookahead == 'c')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(120);
            if (lookahead == 'v')
                ADVANCE(124);
            if (lookahead == '|')
                ADVANCE(91);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(171);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(171);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(35);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == '`')
                ADVANCE(39);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 94,
    [1] = 103,
    [2] = 104,
    [3] = 127,
    [4] = 104,
    [5] = 104,
    [6] = 128,
    [7] = 128,
    [8] = 128,
    [9] = 128,
    [10] = 103,
    [11] = 129,
    [12] = 130,
    [13] = 130,
    [14] = 130,
    [15] = 130,
    [16] = 128,
    [17] = 131,
    [18] = 132,
    [19] = 128,
    [20] = 128,
    [21] = 132,
    [22] = 136,
    [23] = 137,
    [24] = 137,
    [25] = 138,
    [26] = 132,
    [27] = 139,
    [28] = 144,
    [29] = 127,
    [30] = 128,
    [31] = 132,
    [32] = 128,
    [33] = 128,
    [34] = 132,
    [35] = 128,
    [36] = 132,
    [37] = 145,
    [38] = 145,
    [39] = 132,
    [40] = 136,
    [41] = 137,
    [42] = 137,
    [43] = 138,
    [44] = 132,
    [45] = 139,
    [46] = 146,
    [47] = 127,
    [48] = 145,
    [49] = 132,
    [50] = 145,
    [51] = 145,
    [52] = 132,
    [53] = 145,
    [54] = 132,
    [55] = 145,
    [56] = 132,
    [57] = 145,
    [58] = 147,
    [59] = 148,
    [60] = 149,
    [61] = 145,
    [62] = 150,
    [63] = 151,
    [64] = 131,
    [65] = 147,
    [66] = 149,
    [67] = 152,
    [68] = 152,
    [69] = 151,
    [70] = 153,
    [71] = 152,
    [72] = 152,
    [73] = 132,
    [74] = 136,
    [75] = 137,
    [76] = 137,
    [77] = 138,
    [78] = 132,
    [79] = 139,
    [80] = 154,
    [81] = 127,
    [82] = 152,
    [83] = 132,
    [84] = 152,
    [85] = 152,
    [86] = 132,
    [87] = 152,
    [88] = 132,
    [89] = 145,
    [90] = 132,
    [91] = 152,
    [92] = 147,
    [93] = 149,
    [94] = 152,
    [95] = 152,
    [96] = 155,
    [97] = 132,
    [98] = 148,
    [99] = 149,
    [100] = 152,
    [101] = 127,
    [102] = 156,
    [103] = 148,
    [104] = 132,
    [105] = 127,
    [106] = 148,
    [107] = 157,
    [108] = 132,
    [109] = 158,
    [110] = 148,
    [111] = 152,
    [112] = 155,
    [113] = 149,
    [114] = 158,
    [115] = 132,
    [116] = 136,
    [117] = 137,
    [118] = 137,
    [119] = 138,
    [120] = 132,
    [121] = 139,
    [122] = 159,
    [123] = 127,
    [124] = 158,
    [125] = 132,
    [126] = 158,
    [127] = 158,
    [128] = 132,
    [129] = 158,
    [130] = 132,
    [131] = 145,
    [132] = 132,
    [133] = 158,
    [134] = 147,
    [135] = 149,
    [136] = 158,
    [137] = 158,
    [138] = 155,
    [139] = 149,
    [140] = 158,
    [141] = 158,
    [142] = 160,
    [143] = 160,
    [144] = 160,
    [145] = 132,
    [146] = 160,
    [147] = 160,
    [148] = 158,
    [149] = 163,
    [150] = 132,
    [151] = 163,
    [152] = 163,
    [153] = 163,
    [154] = 163,
    [155] = 160,
    [156] = 160,
    [157] = 160,
    [158] = 160,
    [159] = 160,
    [160] = 158,
    [161] = 158,
    [162] = 160,
    [163] = 132,
    [164] = 152,
    [165] = 132,
    [166] = 152,
    [167] = 152,
    [168] = 151,
    [169] = 127,
    [170] = 152,
    [171] = 153,
    [172] = 148,
    [173] = 148,
    [174] = 131,
    [175] = 132,
    [176] = 136,
    [177] = 137,
    [178] = 137,
    [179] = 138,
    [180] = 132,
    [181] = 139,
    [182] = 164,
    [183] = 127,
    [184] = 148,
    [185] = 132,
    [186] = 148,
    [187] = 148,
    [188] = 132,
    [189] = 148,
    [190] = 132,
    [191] = 145,
    [192] = 132,
    [193] = 148,
    [194] = 147,
    [195] = 149,
    [196] = 148,
    [197] = 148,
    [198] = 155,
    [199] = 149,
    [200] = 148,
    [201] = 148,
    [202] = 160,
    [203] = 132,
    [204] = 148,
    [205] = 132,
    [206] = 148,
    [207] = 148,
    [208] = 152,
    [209] = 148,
    [210] = 148,
    [211] = 145,
    [212] = 155,
    [213] = 149,
    [214] = 145,
    [215] = 145,
    [216] = 160,
    [217] = 132,
    [218] = 145,
    [219] = 132,
    [220] = 145,
    [221] = 145,
    [222] = 132,
    [223] = 128,
    [224] = 147,
    [225] = 149,
    [226] = 128,
    [227] = 128,
    [228] = 155,
    [229] = 149,
    [230] = 128,
    [231] = 128,
    [232] = 160,
    [233] = 132,
    [234] = 128,
    [235] = 132,
    [236] = 128,
    [237] = 128,
    [238] = 148,
    [239] = 165,
    [240] = 128,
    [241] = 132,
    [242] = 148,
    [243] = 128,
    [244] = 131,
    [245] = 165,
    [246] = 127,
    [247] = 131,
    [248] = 166,
    [249] = 167,
    [250] = 131,
    [251] = 152,
    [252] = 167,
    [253] = 167,
    [254] = 168,
    [255] = 128,
    [256] = 168,
    [257] = 131,
    [258] = 149,
    [259] = 132,
    [260] = 136,
    [261] = 137,
    [262] = 137,
    [263] = 138,
    [264] = 132,
    [265] = 139,
    [266] = 169,
    [267] = 127,
    [268] = 168,
    [269] = 132,
    [270] = 168,
    [271] = 168,
    [272] = 132,
    [273] = 168,
    [274] = 132,
    [275] = 145,
    [276] = 132,
    [277] = 168,
    [278] = 147,
    [279] = 149,
    [280] = 168,
    [281] = 168,
    [282] = 155,
    [283] = 149,
    [284] = 168,
    [285] = 168,
    [286] = 160,
    [287] = 132,
    [288] = 168,
    [289] = 132,
    [290] = 168,
    [291] = 168,
    [292] = 128,
    [293] = 152,
    [294] = 168,
    [295] = 168,
    [296] = 128,
    [297] = 152,
    [298] = 127,
    [299] = 127,
    [300] = 166,
    [301] = 167,
    [302] = 168,
    [303] = 128,
    [304] = 128,
    [305] = 128,
    [306] = 170,
    [307] = 131,
    [308] = 172,
    [309] = 170,
    [310] = 127,
    [311] = 172,
    [312] = 170,
    [313] = 148,
    [314] = 170,
    [315] = 165,
    [316] = 128,
    [317] = 128,
    [318] = 173,
    [319] = 173,
    [320] = 163,
    [321] = 132,
    [322] = 136,
    [323] = 137,
    [324] = 137,
    [325] = 138,
    [326] = 132,
    [327] = 139,
    [328] = 174,
    [329] = 127,
    [330] = 173,
    [331] = 132,
    [332] = 173,
    [333] = 173,
    [334] = 132,
    [335] = 173,
    [336] = 132,
    [337] = 145,
    [338] = 132,
    [339] = 173,
    [340] = 147,
    [341] = 149,
    [342] = 173,
    [343] = 173,
    [344] = 155,
    [345] = 149,
    [346] = 173,
    [347] = 173,
    [348] = 160,
    [349] = 132,
    [350] = 173,
    [351] = 132,
    [352] = 173,
    [353] = 173,
    [354] = 148,
    [355] = 175,
    [356] = 175,
    [357] = 175,
    [358] = 175,
    [359] = 175,
    [360] = 148,
    [361] = 163,
    [362] = 163,
    [363] = 163,
    [364] = 163,
    [365] = 163,
    [366] = 163,
    [367] = 175,
    [368] = 175,
    [369] = 175,
    [370] = 175,
    [371] = 175,
    [372] = 175,
    [373] = 148,
    [374] = 163,
    [375] = 148,
    [376] = 131,
    [377] = 165,
    [378] = 176,
    [379] = 176,
    [380] = 163,
    [381] = 132,
    [382] = 136,
    [383] = 137,
    [384] = 137,
    [385] = 138,
    [386] = 132,
    [387] = 139,
    [388] = 177,
    [389] = 127,
    [390] = 176,
    [391] = 132,
    [392] = 176,
    [393] = 176,
    [394] = 132,
    [395] = 176,
    [396] = 132,
    [397] = 145,
    [398] = 132,
    [399] = 176,
    [400] = 147,
    [401] = 149,
    [402] = 176,
    [403] = 176,
    [404] = 155,
    [405] = 149,
    [406] = 176,
    [407] = 176,
    [408] = 160,
    [409] = 132,
    [410] = 176,
    [411] = 132,
    [412] = 176,
    [413] = 176,
    [414] = 128,
    [415] = 178,
    [416] = 178,
    [417] = 178,
    [418] = 178,
    [419] = 178,
    [420] = 128,
    [421] = 163,
    [422] = 163,
    [423] = 163,
    [424] = 163,
    [425] = 163,
    [426] = 163,
    [427] = 178,
    [428] = 178,
    [429] = 178,
    [430] = 178,
    [431] = 178,
    [432] = 178,
    [433] = 128,
    [434] = 163,
    [435] = 128,
    [436] = 128,
    [437] = 170,
    [438] = 131,
    [439] = 148,
    [440] = 170,
    [441] = 165,
    [442] = 128,
    [443] = 128,
    [444] = 179,
    [445] = 179,
    [446] = 163,
    [447] = 132,
    [448] = 136,
    [449] = 137,
    [450] = 137,
    [451] = 138,
    [452] = 132,
    [453] = 139,
    [454] = 180,
    [455] = 127,
    [456] = 179,
    [457] = 132,
    [458] = 179,
    [459] = 179,
    [460] = 132,
    [461] = 179,
    [462] = 132,
    [463] = 145,
    [464] = 132,
    [465] = 179,
    [466] = 147,
    [467] = 149,
    [468] = 179,
    [469] = 179,
    [470] = 155,
    [471] = 149,
    [472] = 179,
    [473] = 179,
    [474] = 160,
    [475] = 132,
    [476] = 179,
    [477] = 132,
    [478] = 179,
    [479] = 179,
    [480] = 148,
    [481] = 163,
    [482] = 148,
    [483] = 131,
    [484] = 165,
    [485] = 179,
    [486] = 163,
    [487] = 128,
    [488] = 163,
    [489] = 128,
    [490] = 104,
    [491] = 104,
    [492] = 181,
    [493] = 182,
    [494] = 104,
    [495] = 104,
    [496] = 148,
    [497] = 148,
    [498] = 165,
    [499] = 104,
    [500] = 182,
    [501] = 148,
    [502] = 104,
    [503] = 181,
    [504] = 165,
    [505] = 103,
    [506] = 103,
    [507] = 128,
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
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [19] = {
        [sym__top_level_declaration] = 122,
        [sym__declaration] = 122,
        [sym_const_declaration] = 122,
        [sym_var_declaration] = 122,
        [sym_function_declaration] = 122,
        [sym_method_declaration] = 122,
        [sym_type_declaration] = 122,
        [aux_sym_source_file_repeat2] = 122,
        [ts_builtin_sym_end] = 122,
        [anon_sym_const] = 122,
        [anon_sym_var] = 122,
        [anon_sym_func] = 122,
        [anon_sym_type] = 122,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_const] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__type] = 126,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__expression] = 128,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 134,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_LBRACE] = 140,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 142,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACK] = 144,
        [sym_comment] = 8,
    },
    [26] = {
        [sym__type] = 146,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 148,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [27] = {
        [anon_sym_chan] = 150,
        [sym_comment] = 8,
    },
    [28] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_DOT] = 152,
        [anon_sym_const] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [29] = {
        [sym_identifier] = 154,
        [sym_comment] = 8,
    },
    [30] = {
        [sym__top_level_declaration] = 156,
        [sym__declaration] = 156,
        [sym_const_declaration] = 156,
        [sym_var_declaration] = 156,
        [sym_function_declaration] = 156,
        [sym_method_declaration] = 156,
        [sym_type_declaration] = 156,
        [aux_sym_source_file_repeat2] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_const] = 156,
        [anon_sym_var] = 156,
        [anon_sym_func] = 156,
        [anon_sym_type] = 156,
        [sym_comment] = 8,
    },
    [31] = {
        [sym__type] = 158,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__top_level_declaration] = 160,
        [sym__declaration] = 160,
        [sym_const_declaration] = 160,
        [sym_var_declaration] = 160,
        [sym_function_declaration] = 160,
        [sym_method_declaration] = 160,
        [sym_type_declaration] = 160,
        [aux_sym_source_file_repeat2] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_const] = 160,
        [anon_sym_var] = 160,
        [anon_sym_func] = 160,
        [anon_sym_type] = 160,
        [sym_comment] = 8,
    },
    [33] = {
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
    [34] = {
        [sym__type] = 164,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__top_level_declaration] = 166,
        [sym__declaration] = 166,
        [sym_const_declaration] = 166,
        [sym_var_declaration] = 166,
        [sym_function_declaration] = 166,
        [sym_method_declaration] = 166,
        [sym_type_declaration] = 166,
        [aux_sym_source_file_repeat2] = 166,
        [ts_builtin_sym_end] = 166,
        [anon_sym_const] = 166,
        [anon_sym_var] = 166,
        [anon_sym_func] = 166,
        [anon_sym_type] = 166,
        [sym_comment] = 8,
    },
    [36] = {
        [sym__type] = 168,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [37] = {
        [anon_sym_RBRACK] = 188,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 124,
        [sym_comment] = 8,
    },
    [39] = {
        [sym__type] = 190,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [40] = {
        [sym__expression] = 192,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 194,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [41] = {
        [anon_sym_LBRACE] = 196,
        [sym_comment] = 8,
    },
    [42] = {
        [anon_sym_LBRACE] = 198,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_LBRACK] = 200,
        [sym_comment] = 8,
    },
    [44] = {
        [sym__type] = 202,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 204,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_chan] = 206,
        [sym_comment] = 8,
    },
    [46] = {
        [anon_sym_DOT] = 208,
        [anon_sym_RBRACK] = 124,
        [sym_comment] = 8,
    },
    [47] = {
        [sym_identifier] = 210,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_RBRACK] = 156,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__type] = 212,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACK] = 160,
        [sym_comment] = 8,
    },
    [51] = {
        [anon_sym_RBRACK] = 162,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__type] = 214,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RBRACK] = 166,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 216,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 218,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 220,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACK] = 222,
        [sym_comment] = 8,
    },
    [58] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 226,
        [anon_sym_RBRACE] = 228,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [59] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 232,
        [sym_comment] = 8,
    },
    [60] = {
        [anon_sym_RBRACE] = 234,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_RBRACK] = 236,
        [sym_comment] = 8,
    },
    [62] = {
        [sym_parameters] = 238,
        [anon_sym_LPAREN] = 240,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 232,
        [sym_comment] = 8,
    },
    [63] = {
        [sym_parameters] = 242,
        [sym__type] = 242,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_LPAREN] = 246,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 248,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [64] = {
        [sym__parameter_list] = 266,
        [sym_parameter_declaration] = 268,
        [anon_sym_RPAREN] = 270,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 274,
        [anon_sym_RBRACE] = 276,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [66] = {
        [anon_sym_RBRACE] = 278,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_RPAREN] = 280,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 284,
        [anon_sym_COMMA] = 284,
        [sym_comment] = 8,
    },
    [69] = {
        [sym_parameters] = 286,
        [sym__type] = 286,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_LPAREN] = 286,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [anon_sym_STAR] = 286,
        [anon_sym_LBRACK] = 286,
        [anon_sym_struct] = 286,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 286,
        [anon_sym_chan] = 286,
        [anon_sym_LT_DASH] = 286,
        [sym_identifier] = 286,
        [sym_comment] = 8,
    },
    [70] = {
        [sym__type] = 288,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_RPAREN] = 284,
        [anon_sym_COMMA] = 284,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [71] = {
        [anon_sym_RPAREN] = 308,
        [anon_sym_COMMA] = 308,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 124,
        [anon_sym_COMMA] = 124,
        [sym_comment] = 8,
    },
    [73] = {
        [sym__type] = 310,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [74] = {
        [sym__expression] = 312,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 314,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [75] = {
        [anon_sym_LBRACE] = 316,
        [sym_comment] = 8,
    },
    [76] = {
        [anon_sym_LBRACE] = 318,
        [sym_comment] = 8,
    },
    [77] = {
        [anon_sym_LBRACK] = 320,
        [sym_comment] = 8,
    },
    [78] = {
        [sym__type] = 322,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 324,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_chan] = 326,
        [sym_comment] = 8,
    },
    [80] = {
        [anon_sym_RPAREN] = 124,
        [anon_sym_DOT] = 328,
        [anon_sym_COMMA] = 124,
        [sym_comment] = 8,
    },
    [81] = {
        [sym_identifier] = 330,
        [sym_comment] = 8,
    },
    [82] = {
        [anon_sym_RPAREN] = 156,
        [anon_sym_COMMA] = 156,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__type] = 332,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [84] = {
        [anon_sym_RPAREN] = 160,
        [anon_sym_COMMA] = 160,
        [sym_comment] = 8,
    },
    [85] = {
        [anon_sym_RPAREN] = 162,
        [anon_sym_COMMA] = 162,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__type] = 334,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RPAREN] = 166,
        [anon_sym_COMMA] = 166,
        [sym_comment] = 8,
    },
    [88] = {
        [sym__type] = 336,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [89] = {
        [anon_sym_RBRACK] = 338,
        [sym_comment] = 8,
    },
    [90] = {
        [sym__type] = 340,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [91] = {
        [anon_sym_RPAREN] = 222,
        [anon_sym_COMMA] = 222,
        [sym_comment] = 8,
    },
    [92] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 342,
        [anon_sym_RBRACE] = 344,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [93] = {
        [anon_sym_RBRACE] = 346,
        [sym_comment] = 8,
    },
    [94] = {
        [anon_sym_RPAREN] = 236,
        [anon_sym_COMMA] = 236,
        [sym_comment] = 8,
    },
    [95] = {
        [anon_sym_RPAREN] = 348,
        [anon_sym_COMMA] = 348,
        [sym_comment] = 8,
    },
    [96] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 354,
        [anon_sym_RBRACE] = 356,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [97] = {
        [sym__type] = 362,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [98] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 382,
        [sym_comment] = 8,
    },
    [99] = {
        [anon_sym_RBRACE] = 384,
        [sym_comment] = 8,
    },
    [100] = {
        [anon_sym_RPAREN] = 386,
        [anon_sym_COMMA] = 386,
        [sym_comment] = 8,
    },
    [101] = {
        [sym_identifier] = 362,
        [sym_comment] = 8,
    },
    [102] = {
        [sym__type] = 388,
        [sym_pointer_type] = 388,
        [sym_array_type] = 388,
        [sym_slice_type] = 388,
        [sym_struct_type] = 388,
        [sym_interface_type] = 388,
        [sym_map_type] = 388,
        [sym_channel_type] = 388,
        [sym_qualified_identifier] = 388,
        [sym__string_literal] = 390,
        [aux_sym_identifier_list_repeat1] = 392,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 394,
        [anon_sym_COMMA] = 396,
        [anon_sym_STAR] = 388,
        [anon_sym_LBRACK] = 388,
        [anon_sym_struct] = 388,
        [anon_sym_interface] = 388,
        [anon_sym_map] = 388,
        [anon_sym_chan] = 388,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 388,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [103] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__type] = 402,
        [sym_pointer_type] = 402,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_interface_type] = 402,
        [sym_map_type] = 402,
        [sym_channel_type] = 402,
        [sym_qualified_identifier] = 402,
        [anon_sym_STAR] = 402,
        [anon_sym_LBRACK] = 402,
        [anon_sym_struct] = 402,
        [anon_sym_interface] = 402,
        [anon_sym_map] = 402,
        [anon_sym_chan] = 402,
        [anon_sym_LT_DASH] = 402,
        [sym_identifier] = 402,
        [sym_comment] = 8,
    },
    [105] = {
        [sym_identifier] = 404,
        [sym_comment] = 8,
    },
    [106] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 406,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__type] = 408,
        [sym_pointer_type] = 408,
        [sym_array_type] = 408,
        [sym_slice_type] = 408,
        [sym_struct_type] = 408,
        [sym_interface_type] = 408,
        [sym_map_type] = 408,
        [sym_channel_type] = 408,
        [sym_qualified_identifier] = 408,
        [aux_sym_identifier_list_repeat1] = 410,
        [anon_sym_COMMA] = 396,
        [anon_sym_STAR] = 408,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 408,
        [anon_sym_interface] = 408,
        [anon_sym_map] = 408,
        [anon_sym_chan] = 408,
        [anon_sym_LT_DASH] = 408,
        [sym_identifier] = 408,
        [sym_comment] = 8,
    },
    [108] = {
        [sym__type] = 412,
        [sym_pointer_type] = 412,
        [sym_array_type] = 412,
        [sym_slice_type] = 412,
        [sym_struct_type] = 412,
        [sym_interface_type] = 412,
        [sym_map_type] = 412,
        [sym_channel_type] = 412,
        [sym_qualified_identifier] = 412,
        [anon_sym_STAR] = 412,
        [anon_sym_LBRACK] = 412,
        [anon_sym_struct] = 412,
        [anon_sym_interface] = 412,
        [anon_sym_map] = 412,
        [anon_sym_chan] = 412,
        [anon_sym_LT_DASH] = 412,
        [sym_identifier] = 412,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__string_literal] = 414,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [110] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 416,
        [sym_comment] = 8,
    },
    [111] = {
        [anon_sym_RPAREN] = 418,
        [anon_sym_COMMA] = 418,
        [sym_comment] = 8,
    },
    [112] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 420,
        [anon_sym_RBRACE] = 422,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_RBRACE] = 424,
        [sym_comment] = 8,
    },
    [114] = {
        [sym__string_literal] = 124,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [sym_comment] = 8,
    },
    [115] = {
        [sym__type] = 426,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [116] = {
        [sym__expression] = 428,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 430,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [117] = {
        [anon_sym_LBRACE] = 432,
        [sym_comment] = 8,
    },
    [118] = {
        [anon_sym_LBRACE] = 434,
        [sym_comment] = 8,
    },
    [119] = {
        [anon_sym_LBRACK] = 436,
        [sym_comment] = 8,
    },
    [120] = {
        [sym__type] = 438,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 440,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_chan] = 442,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__string_literal] = 124,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [anon_sym_DOT] = 444,
        [sym_raw_string_literal] = 124,
        [sym_interpreted_string_literal] = 124,
        [sym_comment] = 8,
    },
    [123] = {
        [sym_identifier] = 446,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__string_literal] = 156,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 156,
        [sym_raw_string_literal] = 156,
        [sym_interpreted_string_literal] = 156,
        [sym_comment] = 8,
    },
    [125] = {
        [sym__type] = 448,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__string_literal] = 160,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 160,
        [sym_raw_string_literal] = 160,
        [sym_interpreted_string_literal] = 160,
        [sym_comment] = 8,
    },
    [127] = {
        [sym__string_literal] = 162,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_raw_string_literal] = 162,
        [sym_interpreted_string_literal] = 162,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__type] = 450,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__string_literal] = 166,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 166,
        [sym_raw_string_literal] = 166,
        [sym_interpreted_string_literal] = 166,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__type] = 452,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [131] = {
        [anon_sym_RBRACK] = 454,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__type] = 456,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__string_literal] = 222,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [sym_raw_string_literal] = 222,
        [sym_interpreted_string_literal] = 222,
        [sym_comment] = 8,
    },
    [134] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 458,
        [anon_sym_RBRACE] = 460,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [135] = {
        [anon_sym_RBRACE] = 462,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__string_literal] = 236,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 236,
        [sym_raw_string_literal] = 236,
        [sym_interpreted_string_literal] = 236,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__string_literal] = 348,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 348,
        [sym_raw_string_literal] = 348,
        [sym_interpreted_string_literal] = 348,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 464,
        [anon_sym_RBRACE] = 466,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [139] = {
        [anon_sym_RBRACE] = 468,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__string_literal] = 386,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 386,
        [sym_raw_string_literal] = 386,
        [sym_interpreted_string_literal] = 386,
        [sym_comment] = 8,
    },
    [141] = {
        [sym__string_literal] = 418,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 418,
        [sym_raw_string_literal] = 418,
        [sym_interpreted_string_literal] = 418,
        [sym_comment] = 8,
    },
    [142] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 472,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [143] = {
        [anon_sym_STAR] = 482,
        [anon_sym_RBRACK] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [144] = {
        [anon_sym_STAR] = 484,
        [anon_sym_RBRACK] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__type] = 486,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [146] = {
        [anon_sym_STAR] = 406,
        [anon_sym_RBRACK] = 406,
        [anon_sym_SLASH] = 406,
        [anon_sym_PERCENT] = 406,
        [anon_sym_LT_LT] = 406,
        [anon_sym_GT_GT] = 406,
        [anon_sym_AMP] = 406,
        [anon_sym_AMP_CARET] = 406,
        [anon_sym_PLUS] = 406,
        [anon_sym_DASH] = 406,
        [anon_sym_PIPE] = 406,
        [anon_sym_CARET] = 406,
        [anon_sym_EQ_EQ] = 406,
        [anon_sym_BANG_EQ] = 406,
        [anon_sym_LT] = 406,
        [anon_sym_LT_EQ] = 406,
        [anon_sym_GT] = 406,
        [anon_sym_GT_EQ] = 406,
        [anon_sym_AMP_AMP] = 406,
        [anon_sym_PIPE_PIPE] = 406,
        [sym_comment] = 8,
    },
    [147] = {
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__string_literal] = 490,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [sym_raw_string_literal] = 490,
        [sym_interpreted_string_literal] = 490,
        [sym_comment] = 8,
    },
    [149] = {
        [sym__expression] = 492,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [150] = {
        [sym__type] = 494,
        [sym_pointer_type] = 364,
        [sym_array_type] = 364,
        [sym_slice_type] = 364,
        [sym_struct_type] = 364,
        [sym_interface_type] = 364,
        [sym_map_type] = 364,
        [sym_channel_type] = 364,
        [sym_qualified_identifier] = 364,
        [anon_sym_STAR] = 366,
        [anon_sym_LBRACK] = 368,
        [anon_sym_struct] = 370,
        [anon_sym_interface] = 372,
        [anon_sym_map] = 374,
        [anon_sym_chan] = 376,
        [anon_sym_LT_DASH] = 378,
        [sym_identifier] = 380,
        [sym_comment] = 8,
    },
    [151] = {
        [sym__expression] = 496,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [152] = {
        [sym__expression] = 498,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [153] = {
        [sym__expression] = 500,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [154] = {
        [sym__expression] = 502,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [155] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 504,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [156] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 504,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [157] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 504,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [158] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 504,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 504,
        [anon_sym_DASH] = 504,
        [anon_sym_PIPE] = 504,
        [anon_sym_CARET] = 504,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [159] = {
        [anon_sym_STAR] = 506,
        [anon_sym_RBRACK] = 506,
        [anon_sym_SLASH] = 506,
        [anon_sym_PERCENT] = 506,
        [anon_sym_LT_LT] = 506,
        [anon_sym_GT_GT] = 506,
        [anon_sym_AMP] = 506,
        [anon_sym_AMP_CARET] = 506,
        [anon_sym_PLUS] = 506,
        [anon_sym_DASH] = 506,
        [anon_sym_PIPE] = 506,
        [anon_sym_CARET] = 506,
        [anon_sym_EQ_EQ] = 506,
        [anon_sym_BANG_EQ] = 506,
        [anon_sym_LT] = 506,
        [anon_sym_LT_EQ] = 506,
        [anon_sym_GT] = 506,
        [anon_sym_GT_EQ] = 506,
        [anon_sym_AMP_AMP] = 506,
        [anon_sym_PIPE_PIPE] = 506,
        [sym_comment] = 8,
    },
    [160] = {
        [sym__string_literal] = 508,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 508,
        [sym_raw_string_literal] = 508,
        [sym_interpreted_string_literal] = 508,
        [sym_comment] = 8,
    },
    [161] = {
        [sym__string_literal] = 510,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 510,
        [sym_raw_string_literal] = 510,
        [sym_interpreted_string_literal] = 510,
        [sym_comment] = 8,
    },
    [162] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 512,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [163] = {
        [sym__type] = 514,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [164] = {
        [anon_sym_RPAREN] = 490,
        [anon_sym_COMMA] = 490,
        [sym_comment] = 8,
    },
    [165] = {
        [sym__type] = 516,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [166] = {
        [anon_sym_RPAREN] = 508,
        [anon_sym_COMMA] = 508,
        [sym_comment] = 8,
    },
    [167] = {
        [anon_sym_RPAREN] = 510,
        [anon_sym_COMMA] = 510,
        [sym_comment] = 8,
    },
    [168] = {
        [sym_parameters] = 518,
        [sym__type] = 518,
        [sym_pointer_type] = 518,
        [sym_array_type] = 518,
        [sym_slice_type] = 518,
        [sym_struct_type] = 518,
        [sym_interface_type] = 518,
        [sym_map_type] = 518,
        [sym_channel_type] = 518,
        [sym_qualified_identifier] = 518,
        [anon_sym_LPAREN] = 518,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_LBRACK] = 518,
        [anon_sym_struct] = 518,
        [anon_sym_interface] = 518,
        [anon_sym_map] = 518,
        [anon_sym_chan] = 518,
        [anon_sym_LT_DASH] = 518,
        [sym_identifier] = 518,
        [sym_comment] = 8,
    },
    [169] = {
        [sym_parameter_declaration] = 520,
        [sym_identifier] = 522,
        [sym_comment] = 8,
    },
    [170] = {
        [anon_sym_RPAREN] = 524,
        [anon_sym_COMMA] = 524,
        [sym_comment] = 8,
    },
    [171] = {
        [sym__type] = 288,
        [sym_pointer_type] = 290,
        [sym_array_type] = 290,
        [sym_slice_type] = 290,
        [sym_struct_type] = 290,
        [sym_interface_type] = 290,
        [sym_map_type] = 290,
        [sym_channel_type] = 290,
        [sym_qualified_identifier] = 290,
        [anon_sym_RPAREN] = 524,
        [anon_sym_COMMA] = 524,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 304,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [172] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 526,
        [sym_comment] = 8,
    },
    [173] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [sym_comment] = 8,
    },
    [174] = {
        [sym__parameter_list] = 528,
        [sym_parameter_declaration] = 268,
        [anon_sym_RPAREN] = 530,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [175] = {
        [sym__type] = 532,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [176] = {
        [sym__expression] = 534,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 536,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_LBRACE] = 538,
        [sym_comment] = 8,
    },
    [178] = {
        [anon_sym_LBRACE] = 540,
        [sym_comment] = 8,
    },
    [179] = {
        [anon_sym_LBRACK] = 542,
        [sym_comment] = 8,
    },
    [180] = {
        [sym__type] = 544,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 546,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [181] = {
        [anon_sym_chan] = 548,
        [sym_comment] = 8,
    },
    [182] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [anon_sym_DOT] = 550,
        [sym_comment] = 8,
    },
    [183] = {
        [sym_identifier] = 552,
        [sym_comment] = 8,
    },
    [184] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 156,
        [sym_comment] = 8,
    },
    [185] = {
        [sym__type] = 554,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [186] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 160,
        [sym_comment] = 8,
    },
    [187] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_comment] = 8,
    },
    [188] = {
        [sym__type] = 556,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [189] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 166,
        [sym_comment] = 8,
    },
    [190] = {
        [sym__type] = 558,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [191] = {
        [anon_sym_RBRACK] = 560,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__type] = 562,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [193] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [sym_comment] = 8,
    },
    [194] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 564,
        [anon_sym_RBRACE] = 566,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [195] = {
        [anon_sym_RBRACE] = 568,
        [sym_comment] = 8,
    },
    [196] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 236,
        [sym_comment] = 8,
    },
    [197] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 348,
        [sym_comment] = 8,
    },
    [198] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 570,
        [anon_sym_RBRACE] = 572,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [199] = {
        [anon_sym_RBRACE] = 574,
        [sym_comment] = 8,
    },
    [200] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 386,
        [sym_comment] = 8,
    },
    [201] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 418,
        [sym_comment] = 8,
    },
    [202] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 576,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [203] = {
        [sym__type] = 578,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [204] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__type] = 580,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [206] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 508,
        [sym_comment] = 8,
    },
    [207] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 510,
        [sym_comment] = 8,
    },
    [208] = {
        [anon_sym_RPAREN] = 582,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [209] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [sym_comment] = 8,
    },
    [210] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [sym_comment] = 8,
    },
    [211] = {
        [anon_sym_RBRACK] = 348,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 584,
        [anon_sym_RBRACE] = 586,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [213] = {
        [anon_sym_RBRACE] = 588,
        [sym_comment] = 8,
    },
    [214] = {
        [anon_sym_RBRACK] = 386,
        [sym_comment] = 8,
    },
    [215] = {
        [anon_sym_RBRACK] = 418,
        [sym_comment] = 8,
    },
    [216] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 590,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [217] = {
        [sym__type] = 592,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [218] = {
        [anon_sym_RBRACK] = 490,
        [sym_comment] = 8,
    },
    [219] = {
        [sym__type] = 594,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [220] = {
        [anon_sym_RBRACK] = 508,
        [sym_comment] = 8,
    },
    [221] = {
        [anon_sym_RBRACK] = 510,
        [sym_comment] = 8,
    },
    [222] = {
        [sym__type] = 596,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [223] = {
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_const] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [anon_sym_type] = 222,
        [sym_comment] = 8,
    },
    [224] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 598,
        [anon_sym_RBRACE] = 600,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [225] = {
        [anon_sym_RBRACE] = 602,
        [sym_comment] = 8,
    },
    [226] = {
        [sym__top_level_declaration] = 236,
        [sym__declaration] = 236,
        [sym_const_declaration] = 236,
        [sym_var_declaration] = 236,
        [sym_function_declaration] = 236,
        [sym_method_declaration] = 236,
        [sym_type_declaration] = 236,
        [aux_sym_source_file_repeat2] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_const] = 236,
        [anon_sym_var] = 236,
        [anon_sym_func] = 236,
        [anon_sym_type] = 236,
        [sym_comment] = 8,
    },
    [227] = {
        [sym__top_level_declaration] = 348,
        [sym__declaration] = 348,
        [sym_const_declaration] = 348,
        [sym_var_declaration] = 348,
        [sym_function_declaration] = 348,
        [sym_method_declaration] = 348,
        [sym_type_declaration] = 348,
        [aux_sym_source_file_repeat2] = 348,
        [ts_builtin_sym_end] = 348,
        [anon_sym_const] = 348,
        [anon_sym_var] = 348,
        [anon_sym_func] = 348,
        [anon_sym_type] = 348,
        [sym_comment] = 8,
    },
    [228] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 604,
        [anon_sym_RBRACE] = 606,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [229] = {
        [anon_sym_RBRACE] = 608,
        [sym_comment] = 8,
    },
    [230] = {
        [sym__top_level_declaration] = 386,
        [sym__declaration] = 386,
        [sym_const_declaration] = 386,
        [sym_var_declaration] = 386,
        [sym_function_declaration] = 386,
        [sym_method_declaration] = 386,
        [sym_type_declaration] = 386,
        [aux_sym_source_file_repeat2] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_const] = 386,
        [anon_sym_var] = 386,
        [anon_sym_func] = 386,
        [anon_sym_type] = 386,
        [sym_comment] = 8,
    },
    [231] = {
        [sym__top_level_declaration] = 418,
        [sym__declaration] = 418,
        [sym_const_declaration] = 418,
        [sym_var_declaration] = 418,
        [sym_function_declaration] = 418,
        [sym_method_declaration] = 418,
        [sym_type_declaration] = 418,
        [aux_sym_source_file_repeat2] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_const] = 418,
        [anon_sym_var] = 418,
        [anon_sym_func] = 418,
        [anon_sym_type] = 418,
        [sym_comment] = 8,
    },
    [232] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 610,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [233] = {
        [sym__type] = 612,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [234] = {
        [sym__top_level_declaration] = 490,
        [sym__declaration] = 490,
        [sym_const_declaration] = 490,
        [sym_var_declaration] = 490,
        [sym_function_declaration] = 490,
        [sym_method_declaration] = 490,
        [sym_type_declaration] = 490,
        [aux_sym_source_file_repeat2] = 490,
        [ts_builtin_sym_end] = 490,
        [anon_sym_const] = 490,
        [anon_sym_var] = 490,
        [anon_sym_func] = 490,
        [anon_sym_type] = 490,
        [sym_comment] = 8,
    },
    [235] = {
        [sym__type] = 614,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_channel_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [anon_sym_chan] = 116,
        [anon_sym_LT_DASH] = 118,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [236] = {
        [sym__top_level_declaration] = 508,
        [sym__declaration] = 508,
        [sym_const_declaration] = 508,
        [sym_var_declaration] = 508,
        [sym_function_declaration] = 508,
        [sym_method_declaration] = 508,
        [sym_type_declaration] = 508,
        [aux_sym_source_file_repeat2] = 508,
        [ts_builtin_sym_end] = 508,
        [anon_sym_const] = 508,
        [anon_sym_var] = 508,
        [anon_sym_func] = 508,
        [anon_sym_type] = 508,
        [sym_comment] = 8,
    },
    [237] = {
        [sym__top_level_declaration] = 510,
        [sym__declaration] = 510,
        [sym_const_declaration] = 510,
        [sym_var_declaration] = 510,
        [sym_function_declaration] = 510,
        [sym_method_declaration] = 510,
        [sym_type_declaration] = 510,
        [aux_sym_source_file_repeat2] = 510,
        [ts_builtin_sym_end] = 510,
        [anon_sym_const] = 510,
        [anon_sym_var] = 510,
        [anon_sym_func] = 510,
        [anon_sym_type] = 510,
        [sym_comment] = 8,
    },
    [238] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 616,
        [sym_comment] = 8,
    },
    [239] = {
        [anon_sym_RPAREN] = 618,
        [sym_comment] = 8,
    },
    [240] = {
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
    [241] = {
        [sym__type] = 622,
        [sym_pointer_type] = 244,
        [sym_array_type] = 244,
        [sym_slice_type] = 244,
        [sym_struct_type] = 244,
        [sym_interface_type] = 244,
        [sym_map_type] = 244,
        [sym_channel_type] = 244,
        [sym_qualified_identifier] = 244,
        [anon_sym_STAR] = 250,
        [anon_sym_LBRACK] = 252,
        [anon_sym_struct] = 254,
        [anon_sym_interface] = 256,
        [anon_sym_map] = 258,
        [anon_sym_chan] = 260,
        [anon_sym_LT_DASH] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [242] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [sym_comment] = 8,
    },
    [243] = {
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
    [244] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 626,
        [anon_sym_RPAREN] = 628,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [245] = {
        [anon_sym_RPAREN] = 630,
        [sym_comment] = 8,
    },
    [246] = {
        [sym_identifier] = 632,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__parameter_list] = 634,
        [sym_parameter_declaration] = 268,
        [anon_sym_RPAREN] = 636,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [248] = {
        [sym_parameters] = 638,
        [anon_sym_LPAREN] = 640,
        [sym_comment] = 8,
    },
    [249] = {
        [sym__top_level_declaration] = 642,
        [sym__declaration] = 642,
        [sym_const_declaration] = 642,
        [sym_var_declaration] = 642,
        [sym_function_declaration] = 642,
        [sym_method_declaration] = 642,
        [sym_parameters] = 644,
        [sym_block] = 646,
        [sym_type_declaration] = 642,
        [sym__type] = 644,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [aux_sym_source_file_repeat2] = 642,
        [ts_builtin_sym_end] = 642,
        [anon_sym_LPAREN] = 650,
        [anon_sym_const] = 642,
        [anon_sym_var] = 642,
        [anon_sym_func] = 642,
        [anon_sym_LBRACE] = 652,
        [anon_sym_type] = 642,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [250] = {
        [sym__parameter_list] = 670,
        [sym_parameter_declaration] = 268,
        [anon_sym_RPAREN] = 672,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [251] = {
        [anon_sym_RPAREN] = 674,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [252] = {
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_parameters] = 286,
        [sym_block] = 286,
        [sym_type_declaration] = 286,
        [sym__type] = 286,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_qualified_identifier] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_LPAREN] = 286,
        [anon_sym_const] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_LBRACE] = 286,
        [anon_sym_type] = 286,
        [anon_sym_STAR] = 286,
        [anon_sym_LBRACK] = 286,
        [anon_sym_struct] = 286,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 286,
        [anon_sym_chan] = 286,
        [anon_sym_LT_DASH] = 286,
        [sym_identifier] = 286,
        [sym_comment] = 8,
    },
    [253] = {
        [sym__top_level_declaration] = 518,
        [sym__declaration] = 518,
        [sym_const_declaration] = 518,
        [sym_var_declaration] = 518,
        [sym_function_declaration] = 518,
        [sym_method_declaration] = 518,
        [sym_parameters] = 518,
        [sym_block] = 518,
        [sym_type_declaration] = 518,
        [sym__type] = 518,
        [sym_pointer_type] = 518,
        [sym_array_type] = 518,
        [sym_slice_type] = 518,
        [sym_struct_type] = 518,
        [sym_interface_type] = 518,
        [sym_map_type] = 518,
        [sym_channel_type] = 518,
        [sym_qualified_identifier] = 518,
        [aux_sym_source_file_repeat2] = 518,
        [ts_builtin_sym_end] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_const] = 518,
        [anon_sym_var] = 518,
        [anon_sym_func] = 518,
        [anon_sym_LBRACE] = 518,
        [anon_sym_type] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_LBRACK] = 518,
        [anon_sym_struct] = 518,
        [anon_sym_interface] = 518,
        [anon_sym_map] = 518,
        [anon_sym_chan] = 518,
        [anon_sym_LT_DASH] = 518,
        [sym_identifier] = 518,
        [sym_comment] = 8,
    },
    [254] = {
        [sym__top_level_declaration] = 676,
        [sym__declaration] = 676,
        [sym_const_declaration] = 676,
        [sym_var_declaration] = 676,
        [sym_function_declaration] = 676,
        [sym_method_declaration] = 676,
        [sym_block] = 678,
        [sym_type_declaration] = 676,
        [aux_sym_source_file_repeat2] = 676,
        [ts_builtin_sym_end] = 676,
        [anon_sym_const] = 676,
        [anon_sym_var] = 676,
        [anon_sym_func] = 676,
        [anon_sym_LBRACE] = 652,
        [anon_sym_type] = 676,
        [sym_comment] = 8,
    },
    [255] = {
        [sym__top_level_declaration] = 676,
        [sym__declaration] = 676,
        [sym_const_declaration] = 676,
        [sym_var_declaration] = 676,
        [sym_function_declaration] = 676,
        [sym_method_declaration] = 676,
        [sym_type_declaration] = 676,
        [aux_sym_source_file_repeat2] = 676,
        [ts_builtin_sym_end] = 676,
        [anon_sym_const] = 676,
        [anon_sym_var] = 676,
        [anon_sym_func] = 676,
        [anon_sym_type] = 676,
        [sym_comment] = 8,
    },
    [256] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_block] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_const] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_LBRACE] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [257] = {
        [sym__parameter_list] = 680,
        [sym_parameter_declaration] = 268,
        [anon_sym_RPAREN] = 682,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [258] = {
        [anon_sym_RBRACE] = 684,
        [sym_comment] = 8,
    },
    [259] = {
        [sym__type] = 686,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [260] = {
        [sym__expression] = 688,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 690,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [261] = {
        [anon_sym_LBRACE] = 692,
        [sym_comment] = 8,
    },
    [262] = {
        [anon_sym_LBRACE] = 694,
        [sym_comment] = 8,
    },
    [263] = {
        [anon_sym_LBRACK] = 696,
        [sym_comment] = 8,
    },
    [264] = {
        [sym__type] = 698,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 700,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [265] = {
        [anon_sym_chan] = 702,
        [sym_comment] = 8,
    },
    [266] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_block] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_DOT] = 704,
        [anon_sym_const] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_LBRACE] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [267] = {
        [sym_identifier] = 706,
        [sym_comment] = 8,
    },
    [268] = {
        [sym__top_level_declaration] = 156,
        [sym__declaration] = 156,
        [sym_const_declaration] = 156,
        [sym_var_declaration] = 156,
        [sym_function_declaration] = 156,
        [sym_method_declaration] = 156,
        [sym_block] = 156,
        [sym_type_declaration] = 156,
        [aux_sym_source_file_repeat2] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_const] = 156,
        [anon_sym_var] = 156,
        [anon_sym_func] = 156,
        [anon_sym_LBRACE] = 156,
        [anon_sym_type] = 156,
        [sym_comment] = 8,
    },
    [269] = {
        [sym__type] = 708,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [270] = {
        [sym__top_level_declaration] = 160,
        [sym__declaration] = 160,
        [sym_const_declaration] = 160,
        [sym_var_declaration] = 160,
        [sym_function_declaration] = 160,
        [sym_method_declaration] = 160,
        [sym_block] = 160,
        [sym_type_declaration] = 160,
        [aux_sym_source_file_repeat2] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_const] = 160,
        [anon_sym_var] = 160,
        [anon_sym_func] = 160,
        [anon_sym_LBRACE] = 160,
        [anon_sym_type] = 160,
        [sym_comment] = 8,
    },
    [271] = {
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
    [272] = {
        [sym__type] = 710,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [273] = {
        [sym__top_level_declaration] = 166,
        [sym__declaration] = 166,
        [sym_const_declaration] = 166,
        [sym_var_declaration] = 166,
        [sym_function_declaration] = 166,
        [sym_method_declaration] = 166,
        [sym_block] = 166,
        [sym_type_declaration] = 166,
        [aux_sym_source_file_repeat2] = 166,
        [ts_builtin_sym_end] = 166,
        [anon_sym_const] = 166,
        [anon_sym_var] = 166,
        [anon_sym_func] = 166,
        [anon_sym_LBRACE] = 166,
        [anon_sym_type] = 166,
        [sym_comment] = 8,
    },
    [274] = {
        [sym__type] = 712,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [275] = {
        [anon_sym_RBRACK] = 714,
        [sym_comment] = 8,
    },
    [276] = {
        [sym__type] = 716,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [277] = {
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_block] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_const] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [anon_sym_LBRACE] = 222,
        [anon_sym_type] = 222,
        [sym_comment] = 8,
    },
    [278] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 718,
        [anon_sym_RBRACE] = 720,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [279] = {
        [anon_sym_RBRACE] = 722,
        [sym_comment] = 8,
    },
    [280] = {
        [sym__top_level_declaration] = 236,
        [sym__declaration] = 236,
        [sym_const_declaration] = 236,
        [sym_var_declaration] = 236,
        [sym_function_declaration] = 236,
        [sym_method_declaration] = 236,
        [sym_block] = 236,
        [sym_type_declaration] = 236,
        [aux_sym_source_file_repeat2] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_const] = 236,
        [anon_sym_var] = 236,
        [anon_sym_func] = 236,
        [anon_sym_LBRACE] = 236,
        [anon_sym_type] = 236,
        [sym_comment] = 8,
    },
    [281] = {
        [sym__top_level_declaration] = 348,
        [sym__declaration] = 348,
        [sym_const_declaration] = 348,
        [sym_var_declaration] = 348,
        [sym_function_declaration] = 348,
        [sym_method_declaration] = 348,
        [sym_block] = 348,
        [sym_type_declaration] = 348,
        [aux_sym_source_file_repeat2] = 348,
        [ts_builtin_sym_end] = 348,
        [anon_sym_const] = 348,
        [anon_sym_var] = 348,
        [anon_sym_func] = 348,
        [anon_sym_LBRACE] = 348,
        [anon_sym_type] = 348,
        [sym_comment] = 8,
    },
    [282] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 724,
        [anon_sym_RBRACE] = 726,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [283] = {
        [anon_sym_RBRACE] = 728,
        [sym_comment] = 8,
    },
    [284] = {
        [sym__top_level_declaration] = 386,
        [sym__declaration] = 386,
        [sym_const_declaration] = 386,
        [sym_var_declaration] = 386,
        [sym_function_declaration] = 386,
        [sym_method_declaration] = 386,
        [sym_block] = 386,
        [sym_type_declaration] = 386,
        [aux_sym_source_file_repeat2] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_const] = 386,
        [anon_sym_var] = 386,
        [anon_sym_func] = 386,
        [anon_sym_LBRACE] = 386,
        [anon_sym_type] = 386,
        [sym_comment] = 8,
    },
    [285] = {
        [sym__top_level_declaration] = 418,
        [sym__declaration] = 418,
        [sym_const_declaration] = 418,
        [sym_var_declaration] = 418,
        [sym_function_declaration] = 418,
        [sym_method_declaration] = 418,
        [sym_block] = 418,
        [sym_type_declaration] = 418,
        [aux_sym_source_file_repeat2] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_const] = 418,
        [anon_sym_var] = 418,
        [anon_sym_func] = 418,
        [anon_sym_LBRACE] = 418,
        [anon_sym_type] = 418,
        [sym_comment] = 8,
    },
    [286] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 730,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__type] = 732,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [288] = {
        [sym__top_level_declaration] = 490,
        [sym__declaration] = 490,
        [sym_const_declaration] = 490,
        [sym_var_declaration] = 490,
        [sym_function_declaration] = 490,
        [sym_method_declaration] = 490,
        [sym_block] = 490,
        [sym_type_declaration] = 490,
        [aux_sym_source_file_repeat2] = 490,
        [ts_builtin_sym_end] = 490,
        [anon_sym_const] = 490,
        [anon_sym_var] = 490,
        [anon_sym_func] = 490,
        [anon_sym_LBRACE] = 490,
        [anon_sym_type] = 490,
        [sym_comment] = 8,
    },
    [289] = {
        [sym__type] = 734,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [290] = {
        [sym__top_level_declaration] = 508,
        [sym__declaration] = 508,
        [sym_const_declaration] = 508,
        [sym_var_declaration] = 508,
        [sym_function_declaration] = 508,
        [sym_method_declaration] = 508,
        [sym_block] = 508,
        [sym_type_declaration] = 508,
        [aux_sym_source_file_repeat2] = 508,
        [ts_builtin_sym_end] = 508,
        [anon_sym_const] = 508,
        [anon_sym_var] = 508,
        [anon_sym_func] = 508,
        [anon_sym_LBRACE] = 508,
        [anon_sym_type] = 508,
        [sym_comment] = 8,
    },
    [291] = {
        [sym__top_level_declaration] = 510,
        [sym__declaration] = 510,
        [sym_const_declaration] = 510,
        [sym_var_declaration] = 510,
        [sym_function_declaration] = 510,
        [sym_method_declaration] = 510,
        [sym_block] = 510,
        [sym_type_declaration] = 510,
        [aux_sym_source_file_repeat2] = 510,
        [ts_builtin_sym_end] = 510,
        [anon_sym_const] = 510,
        [anon_sym_var] = 510,
        [anon_sym_func] = 510,
        [anon_sym_LBRACE] = 510,
        [anon_sym_type] = 510,
        [sym_comment] = 8,
    },
    [292] = {
        [sym__top_level_declaration] = 736,
        [sym__declaration] = 736,
        [sym_const_declaration] = 736,
        [sym_var_declaration] = 736,
        [sym_function_declaration] = 736,
        [sym_method_declaration] = 736,
        [sym_type_declaration] = 736,
        [aux_sym_source_file_repeat2] = 736,
        [ts_builtin_sym_end] = 736,
        [anon_sym_const] = 736,
        [anon_sym_var] = 736,
        [anon_sym_func] = 736,
        [anon_sym_type] = 736,
        [sym_comment] = 8,
    },
    [293] = {
        [anon_sym_RPAREN] = 738,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [294] = {
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
    [295] = {
        [sym__top_level_declaration] = 518,
        [sym__declaration] = 518,
        [sym_const_declaration] = 518,
        [sym_var_declaration] = 518,
        [sym_function_declaration] = 518,
        [sym_method_declaration] = 518,
        [sym_block] = 518,
        [sym_type_declaration] = 518,
        [aux_sym_source_file_repeat2] = 518,
        [ts_builtin_sym_end] = 518,
        [anon_sym_const] = 518,
        [anon_sym_var] = 518,
        [anon_sym_func] = 518,
        [anon_sym_LBRACE] = 518,
        [anon_sym_type] = 518,
        [sym_comment] = 8,
    },
    [296] = {
        [sym__top_level_declaration] = 740,
        [sym__declaration] = 740,
        [sym_const_declaration] = 740,
        [sym_var_declaration] = 740,
        [sym_function_declaration] = 740,
        [sym_method_declaration] = 740,
        [sym_type_declaration] = 740,
        [aux_sym_source_file_repeat2] = 740,
        [ts_builtin_sym_end] = 740,
        [anon_sym_const] = 740,
        [anon_sym_var] = 740,
        [anon_sym_func] = 740,
        [anon_sym_type] = 740,
        [sym_comment] = 8,
    },
    [297] = {
        [anon_sym_RPAREN] = 742,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [298] = {
        [sym_identifier] = 286,
        [sym_comment] = 8,
    },
    [299] = {
        [sym_identifier] = 518,
        [sym_comment] = 8,
    },
    [300] = {
        [sym_parameters] = 744,
        [anon_sym_LPAREN] = 640,
        [sym_comment] = 8,
    },
    [301] = {
        [sym__top_level_declaration] = 746,
        [sym__declaration] = 746,
        [sym_const_declaration] = 746,
        [sym_var_declaration] = 746,
        [sym_function_declaration] = 746,
        [sym_method_declaration] = 746,
        [sym_parameters] = 748,
        [sym_block] = 750,
        [sym_type_declaration] = 746,
        [sym__type] = 748,
        [sym_pointer_type] = 648,
        [sym_array_type] = 648,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_interface_type] = 648,
        [sym_map_type] = 648,
        [sym_channel_type] = 648,
        [sym_qualified_identifier] = 648,
        [aux_sym_source_file_repeat2] = 746,
        [ts_builtin_sym_end] = 746,
        [anon_sym_LPAREN] = 650,
        [anon_sym_const] = 746,
        [anon_sym_var] = 746,
        [anon_sym_func] = 746,
        [anon_sym_LBRACE] = 652,
        [anon_sym_type] = 746,
        [anon_sym_STAR] = 654,
        [anon_sym_LBRACK] = 656,
        [anon_sym_struct] = 658,
        [anon_sym_interface] = 660,
        [anon_sym_map] = 662,
        [anon_sym_chan] = 664,
        [anon_sym_LT_DASH] = 666,
        [sym_identifier] = 668,
        [sym_comment] = 8,
    },
    [302] = {
        [sym__top_level_declaration] = 752,
        [sym__declaration] = 752,
        [sym_const_declaration] = 752,
        [sym_var_declaration] = 752,
        [sym_function_declaration] = 752,
        [sym_method_declaration] = 752,
        [sym_block] = 754,
        [sym_type_declaration] = 752,
        [aux_sym_source_file_repeat2] = 752,
        [ts_builtin_sym_end] = 752,
        [anon_sym_const] = 752,
        [anon_sym_var] = 752,
        [anon_sym_func] = 752,
        [anon_sym_LBRACE] = 652,
        [anon_sym_type] = 752,
        [sym_comment] = 8,
    },
    [303] = {
        [sym__top_level_declaration] = 752,
        [sym__declaration] = 752,
        [sym_const_declaration] = 752,
        [sym_var_declaration] = 752,
        [sym_function_declaration] = 752,
        [sym_method_declaration] = 752,
        [sym_type_declaration] = 752,
        [aux_sym_source_file_repeat2] = 752,
        [ts_builtin_sym_end] = 752,
        [anon_sym_const] = 752,
        [anon_sym_var] = 752,
        [anon_sym_func] = 752,
        [anon_sym_type] = 752,
        [sym_comment] = 8,
    },
    [304] = {
        [sym__top_level_declaration] = 756,
        [sym__declaration] = 756,
        [sym_const_declaration] = 756,
        [sym_var_declaration] = 756,
        [sym_function_declaration] = 756,
        [sym_method_declaration] = 756,
        [sym_type_declaration] = 756,
        [aux_sym_source_file_repeat2] = 756,
        [ts_builtin_sym_end] = 756,
        [anon_sym_const] = 756,
        [anon_sym_var] = 756,
        [anon_sym_func] = 756,
        [anon_sym_type] = 756,
        [sym_comment] = 8,
    },
    [305] = {
        [sym__top_level_declaration] = 758,
        [sym__declaration] = 758,
        [sym_const_declaration] = 758,
        [sym_var_declaration] = 758,
        [sym_function_declaration] = 758,
        [sym_method_declaration] = 758,
        [sym_type_declaration] = 758,
        [aux_sym_source_file_repeat2] = 758,
        [ts_builtin_sym_end] = 758,
        [anon_sym_const] = 758,
        [anon_sym_var] = 758,
        [anon_sym_func] = 758,
        [anon_sym_type] = 758,
        [sym_comment] = 8,
    },
    [306] = {
        [sym__type] = 760,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_EQ] = 764,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [307] = {
        [sym_var_spec] = 782,
        [sym_identifier_list] = 784,
        [aux_sym_var_declaration_repeat1] = 786,
        [anon_sym_RPAREN] = 788,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [308] = {
        [sym__type] = 388,
        [sym_pointer_type] = 388,
        [sym_array_type] = 388,
        [sym_slice_type] = 388,
        [sym_struct_type] = 388,
        [sym_interface_type] = 388,
        [sym_map_type] = 388,
        [sym_channel_type] = 388,
        [sym_qualified_identifier] = 388,
        [aux_sym_identifier_list_repeat1] = 790,
        [anon_sym_EQ] = 388,
        [anon_sym_COMMA] = 792,
        [anon_sym_STAR] = 388,
        [anon_sym_LBRACK] = 388,
        [anon_sym_struct] = 388,
        [anon_sym_interface] = 388,
        [anon_sym_map] = 388,
        [anon_sym_chan] = 388,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [309] = {
        [sym__type] = 402,
        [sym_pointer_type] = 402,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_interface_type] = 402,
        [sym_map_type] = 402,
        [sym_channel_type] = 402,
        [sym_qualified_identifier] = 402,
        [anon_sym_EQ] = 402,
        [anon_sym_STAR] = 402,
        [anon_sym_LBRACK] = 402,
        [anon_sym_struct] = 402,
        [anon_sym_interface] = 402,
        [anon_sym_map] = 402,
        [anon_sym_chan] = 402,
        [anon_sym_LT_DASH] = 402,
        [sym_identifier] = 402,
        [sym_comment] = 8,
    },
    [310] = {
        [sym_identifier] = 794,
        [sym_comment] = 8,
    },
    [311] = {
        [sym__type] = 408,
        [sym_pointer_type] = 408,
        [sym_array_type] = 408,
        [sym_slice_type] = 408,
        [sym_struct_type] = 408,
        [sym_interface_type] = 408,
        [sym_map_type] = 408,
        [sym_channel_type] = 408,
        [sym_qualified_identifier] = 408,
        [aux_sym_identifier_list_repeat1] = 796,
        [anon_sym_EQ] = 408,
        [anon_sym_COMMA] = 792,
        [anon_sym_STAR] = 408,
        [anon_sym_LBRACK] = 408,
        [anon_sym_struct] = 408,
        [anon_sym_interface] = 408,
        [anon_sym_map] = 408,
        [anon_sym_chan] = 408,
        [anon_sym_LT_DASH] = 408,
        [sym_identifier] = 408,
        [sym_comment] = 8,
    },
    [312] = {
        [sym__type] = 412,
        [sym_pointer_type] = 412,
        [sym_array_type] = 412,
        [sym_slice_type] = 412,
        [sym_struct_type] = 412,
        [sym_interface_type] = 412,
        [sym_map_type] = 412,
        [sym_channel_type] = 412,
        [sym_qualified_identifier] = 412,
        [anon_sym_EQ] = 412,
        [anon_sym_STAR] = 412,
        [anon_sym_LBRACK] = 412,
        [anon_sym_struct] = 412,
        [anon_sym_interface] = 412,
        [anon_sym_map] = 412,
        [anon_sym_chan] = 412,
        [anon_sym_LT_DASH] = 412,
        [sym_identifier] = 412,
        [sym_comment] = 8,
    },
    [313] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 798,
        [sym_comment] = 8,
    },
    [314] = {
        [sym__type] = 800,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_EQ] = 804,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [315] = {
        [anon_sym_RPAREN] = 822,
        [sym_comment] = 8,
    },
    [316] = {
        [sym__top_level_declaration] = 824,
        [sym__declaration] = 824,
        [sym_const_declaration] = 824,
        [sym_var_declaration] = 824,
        [sym_function_declaration] = 824,
        [sym_method_declaration] = 824,
        [sym_type_declaration] = 824,
        [aux_sym_source_file_repeat2] = 824,
        [ts_builtin_sym_end] = 824,
        [anon_sym_const] = 824,
        [anon_sym_var] = 824,
        [anon_sym_func] = 824,
        [anon_sym_type] = 824,
        [sym_comment] = 8,
    },
    [317] = {
        [sym__top_level_declaration] = 826,
        [sym__declaration] = 826,
        [sym_const_declaration] = 826,
        [sym_var_declaration] = 826,
        [sym_function_declaration] = 826,
        [sym_method_declaration] = 826,
        [sym_type_declaration] = 826,
        [aux_sym_source_file_repeat2] = 826,
        [ts_builtin_sym_end] = 826,
        [anon_sym_const] = 826,
        [anon_sym_var] = 826,
        [anon_sym_func] = 826,
        [anon_sym_type] = 826,
        [sym_comment] = 8,
    },
    [318] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 828,
        [anon_sym_EQ] = 830,
        [sym_comment] = 8,
    },
    [319] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [anon_sym_EQ] = 124,
        [sym_comment] = 8,
    },
    [320] = {
        [sym_expression_list] = 832,
        [sym__expression] = 834,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [321] = {
        [sym__type] = 844,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [322] = {
        [sym__expression] = 846,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 848,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [323] = {
        [anon_sym_LBRACE] = 850,
        [sym_comment] = 8,
    },
    [324] = {
        [anon_sym_LBRACE] = 852,
        [sym_comment] = 8,
    },
    [325] = {
        [anon_sym_LBRACK] = 854,
        [sym_comment] = 8,
    },
    [326] = {
        [sym__type] = 856,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 858,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [327] = {
        [anon_sym_chan] = 860,
        [sym_comment] = 8,
    },
    [328] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 124,
        [anon_sym_DOT] = 862,
        [anon_sym_EQ] = 124,
        [sym_comment] = 8,
    },
    [329] = {
        [sym_identifier] = 864,
        [sym_comment] = 8,
    },
    [330] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 156,
        [anon_sym_EQ] = 156,
        [sym_comment] = 8,
    },
    [331] = {
        [sym__type] = 866,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [332] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 160,
        [anon_sym_EQ] = 160,
        [sym_comment] = 8,
    },
    [333] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [334] = {
        [sym__type] = 868,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [335] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 166,
        [anon_sym_EQ] = 166,
        [sym_comment] = 8,
    },
    [336] = {
        [sym__type] = 870,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [337] = {
        [anon_sym_RBRACK] = 872,
        [sym_comment] = 8,
    },
    [338] = {
        [sym__type] = 874,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [339] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [anon_sym_EQ] = 222,
        [sym_comment] = 8,
    },
    [340] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 876,
        [anon_sym_RBRACE] = 878,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [341] = {
        [anon_sym_RBRACE] = 880,
        [sym_comment] = 8,
    },
    [342] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 236,
        [anon_sym_EQ] = 236,
        [sym_comment] = 8,
    },
    [343] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 348,
        [anon_sym_EQ] = 348,
        [sym_comment] = 8,
    },
    [344] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 882,
        [anon_sym_RBRACE] = 884,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [345] = {
        [anon_sym_RBRACE] = 886,
        [sym_comment] = 8,
    },
    [346] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 386,
        [anon_sym_EQ] = 386,
        [sym_comment] = 8,
    },
    [347] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 418,
        [anon_sym_EQ] = 418,
        [sym_comment] = 8,
    },
    [348] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 888,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [349] = {
        [sym__type] = 890,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [350] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [anon_sym_EQ] = 490,
        [sym_comment] = 8,
    },
    [351] = {
        [sym__type] = 892,
        [sym_pointer_type] = 802,
        [sym_array_type] = 802,
        [sym_slice_type] = 802,
        [sym_struct_type] = 802,
        [sym_interface_type] = 802,
        [sym_map_type] = 802,
        [sym_channel_type] = 802,
        [sym_qualified_identifier] = 802,
        [anon_sym_STAR] = 806,
        [anon_sym_LBRACK] = 808,
        [anon_sym_struct] = 810,
        [anon_sym_interface] = 812,
        [anon_sym_map] = 814,
        [anon_sym_chan] = 816,
        [anon_sym_LT_DASH] = 818,
        [sym_identifier] = 820,
        [sym_comment] = 8,
    },
    [352] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 508,
        [anon_sym_EQ] = 508,
        [sym_comment] = 8,
    },
    [353] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 510,
        [anon_sym_EQ] = 510,
        [sym_comment] = 8,
    },
    [354] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 894,
        [sym_comment] = 8,
    },
    [355] = {
        [aux_sym_expression_list_repeat1] = 896,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 898,
        [anon_sym_COMMA] = 900,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 904,
        [anon_sym_DASH] = 904,
        [anon_sym_PIPE] = 904,
        [anon_sym_CARET] = 904,
        [anon_sym_EQ_EQ] = 906,
        [anon_sym_BANG_EQ] = 906,
        [anon_sym_LT] = 906,
        [anon_sym_LT_EQ] = 906,
        [anon_sym_GT] = 906,
        [anon_sym_GT_EQ] = 906,
        [anon_sym_AMP_AMP] = 908,
        [anon_sym_PIPE_PIPE] = 910,
        [sym_comment] = 8,
    },
    [356] = {
        [aux_sym_expression_list_repeat1] = 482,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [357] = {
        [aux_sym_expression_list_repeat1] = 484,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [358] = {
        [aux_sym_expression_list_repeat1] = 406,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 406,
        [anon_sym_COMMA] = 406,
        [anon_sym_STAR] = 406,
        [anon_sym_SLASH] = 406,
        [anon_sym_PERCENT] = 406,
        [anon_sym_LT_LT] = 406,
        [anon_sym_GT_GT] = 406,
        [anon_sym_AMP] = 406,
        [anon_sym_AMP_CARET] = 406,
        [anon_sym_PLUS] = 406,
        [anon_sym_DASH] = 406,
        [anon_sym_PIPE] = 406,
        [anon_sym_CARET] = 406,
        [anon_sym_EQ_EQ] = 406,
        [anon_sym_BANG_EQ] = 406,
        [anon_sym_LT] = 406,
        [anon_sym_LT_EQ] = 406,
        [anon_sym_GT] = 406,
        [anon_sym_GT_EQ] = 406,
        [anon_sym_AMP_AMP] = 406,
        [anon_sym_PIPE_PIPE] = 406,
        [sym_comment] = 8,
    },
    [359] = {
        [aux_sym_expression_list_repeat1] = 488,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [360] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 912,
        [sym_comment] = 8,
    },
    [361] = {
        [sym__expression] = 914,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [362] = {
        [sym__expression] = 916,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [363] = {
        [sym__expression] = 918,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [364] = {
        [sym__expression] = 920,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [365] = {
        [sym__expression] = 922,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [366] = {
        [sym__expression] = 924,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [367] = {
        [aux_sym_expression_list_repeat1] = 504,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 904,
        [anon_sym_DASH] = 904,
        [anon_sym_PIPE] = 904,
        [anon_sym_CARET] = 904,
        [anon_sym_EQ_EQ] = 906,
        [anon_sym_BANG_EQ] = 906,
        [anon_sym_LT] = 906,
        [anon_sym_LT_EQ] = 906,
        [anon_sym_GT] = 906,
        [anon_sym_GT_EQ] = 906,
        [anon_sym_AMP_AMP] = 908,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [368] = {
        [aux_sym_expression_list_repeat1] = 504,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 904,
        [anon_sym_DASH] = 904,
        [anon_sym_PIPE] = 904,
        [anon_sym_CARET] = 904,
        [anon_sym_EQ_EQ] = 906,
        [anon_sym_BANG_EQ] = 906,
        [anon_sym_LT] = 906,
        [anon_sym_LT_EQ] = 906,
        [anon_sym_GT] = 906,
        [anon_sym_GT_EQ] = 906,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [369] = {
        [aux_sym_expression_list_repeat1] = 504,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 904,
        [anon_sym_DASH] = 904,
        [anon_sym_PIPE] = 904,
        [anon_sym_CARET] = 904,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [370] = {
        [aux_sym_expression_list_repeat1] = 504,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 504,
        [anon_sym_DASH] = 504,
        [anon_sym_PIPE] = 504,
        [anon_sym_CARET] = 504,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [371] = {
        [aux_sym_expression_list_repeat1] = 506,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 506,
        [anon_sym_COMMA] = 506,
        [anon_sym_STAR] = 506,
        [anon_sym_SLASH] = 506,
        [anon_sym_PERCENT] = 506,
        [anon_sym_LT_LT] = 506,
        [anon_sym_GT_GT] = 506,
        [anon_sym_AMP] = 506,
        [anon_sym_AMP_CARET] = 506,
        [anon_sym_PLUS] = 506,
        [anon_sym_DASH] = 506,
        [anon_sym_PIPE] = 506,
        [anon_sym_CARET] = 506,
        [anon_sym_EQ_EQ] = 506,
        [anon_sym_BANG_EQ] = 506,
        [anon_sym_LT] = 506,
        [anon_sym_LT_EQ] = 506,
        [anon_sym_GT] = 506,
        [anon_sym_GT_EQ] = 506,
        [anon_sym_AMP_AMP] = 506,
        [anon_sym_PIPE_PIPE] = 506,
        [sym_comment] = 8,
    },
    [372] = {
        [aux_sym_expression_list_repeat1] = 926,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 928,
        [anon_sym_COMMA] = 900,
        [anon_sym_STAR] = 902,
        [anon_sym_SLASH] = 902,
        [anon_sym_PERCENT] = 902,
        [anon_sym_LT_LT] = 902,
        [anon_sym_GT_GT] = 902,
        [anon_sym_AMP] = 902,
        [anon_sym_AMP_CARET] = 902,
        [anon_sym_PLUS] = 904,
        [anon_sym_DASH] = 904,
        [anon_sym_PIPE] = 904,
        [anon_sym_CARET] = 904,
        [anon_sym_EQ_EQ] = 906,
        [anon_sym_BANG_EQ] = 906,
        [anon_sym_LT] = 906,
        [anon_sym_LT_EQ] = 906,
        [anon_sym_GT] = 906,
        [anon_sym_GT_EQ] = 906,
        [anon_sym_AMP_AMP] = 908,
        [anon_sym_PIPE_PIPE] = 910,
        [sym_comment] = 8,
    },
    [373] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 930,
        [sym_comment] = 8,
    },
    [374] = {
        [sym_expression_list] = 932,
        [sym__expression] = 834,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [375] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 934,
        [sym_comment] = 8,
    },
    [376] = {
        [sym_var_spec] = 782,
        [sym_identifier_list] = 784,
        [aux_sym_var_declaration_repeat1] = 936,
        [anon_sym_RPAREN] = 938,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [377] = {
        [anon_sym_RPAREN] = 940,
        [sym_comment] = 8,
    },
    [378] = {
        [sym__top_level_declaration] = 828,
        [sym__declaration] = 828,
        [sym_const_declaration] = 828,
        [sym_var_declaration] = 828,
        [sym_function_declaration] = 828,
        [sym_method_declaration] = 828,
        [sym_type_declaration] = 828,
        [aux_sym_source_file_repeat2] = 828,
        [ts_builtin_sym_end] = 828,
        [anon_sym_const] = 828,
        [anon_sym_EQ] = 942,
        [anon_sym_var] = 828,
        [anon_sym_func] = 828,
        [anon_sym_type] = 828,
        [sym_comment] = 8,
    },
    [379] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_const] = 124,
        [anon_sym_EQ] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [380] = {
        [sym_expression_list] = 944,
        [sym__expression] = 946,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [381] = {
        [sym__type] = 956,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [382] = {
        [sym__expression] = 958,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 960,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [383] = {
        [anon_sym_LBRACE] = 962,
        [sym_comment] = 8,
    },
    [384] = {
        [anon_sym_LBRACE] = 964,
        [sym_comment] = 8,
    },
    [385] = {
        [anon_sym_LBRACK] = 966,
        [sym_comment] = 8,
    },
    [386] = {
        [sym__type] = 968,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 970,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [387] = {
        [anon_sym_chan] = 972,
        [sym_comment] = 8,
    },
    [388] = {
        [sym__top_level_declaration] = 124,
        [sym__declaration] = 124,
        [sym_const_declaration] = 124,
        [sym_var_declaration] = 124,
        [sym_function_declaration] = 124,
        [sym_method_declaration] = 124,
        [sym_type_declaration] = 124,
        [aux_sym_source_file_repeat2] = 124,
        [ts_builtin_sym_end] = 124,
        [anon_sym_DOT] = 974,
        [anon_sym_const] = 124,
        [anon_sym_EQ] = 124,
        [anon_sym_var] = 124,
        [anon_sym_func] = 124,
        [anon_sym_type] = 124,
        [sym_comment] = 8,
    },
    [389] = {
        [sym_identifier] = 976,
        [sym_comment] = 8,
    },
    [390] = {
        [sym__top_level_declaration] = 156,
        [sym__declaration] = 156,
        [sym_const_declaration] = 156,
        [sym_var_declaration] = 156,
        [sym_function_declaration] = 156,
        [sym_method_declaration] = 156,
        [sym_type_declaration] = 156,
        [aux_sym_source_file_repeat2] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_const] = 156,
        [anon_sym_EQ] = 156,
        [anon_sym_var] = 156,
        [anon_sym_func] = 156,
        [anon_sym_type] = 156,
        [sym_comment] = 8,
    },
    [391] = {
        [sym__type] = 978,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [392] = {
        [sym__top_level_declaration] = 160,
        [sym__declaration] = 160,
        [sym_const_declaration] = 160,
        [sym_var_declaration] = 160,
        [sym_function_declaration] = 160,
        [sym_method_declaration] = 160,
        [sym_type_declaration] = 160,
        [aux_sym_source_file_repeat2] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_const] = 160,
        [anon_sym_EQ] = 160,
        [anon_sym_var] = 160,
        [anon_sym_func] = 160,
        [anon_sym_type] = 160,
        [sym_comment] = 8,
    },
    [393] = {
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
    [394] = {
        [sym__type] = 980,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [395] = {
        [sym__top_level_declaration] = 166,
        [sym__declaration] = 166,
        [sym_const_declaration] = 166,
        [sym_var_declaration] = 166,
        [sym_function_declaration] = 166,
        [sym_method_declaration] = 166,
        [sym_type_declaration] = 166,
        [aux_sym_source_file_repeat2] = 166,
        [ts_builtin_sym_end] = 166,
        [anon_sym_const] = 166,
        [anon_sym_EQ] = 166,
        [anon_sym_var] = 166,
        [anon_sym_func] = 166,
        [anon_sym_type] = 166,
        [sym_comment] = 8,
    },
    [396] = {
        [sym__type] = 982,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [397] = {
        [anon_sym_RBRACK] = 984,
        [sym_comment] = 8,
    },
    [398] = {
        [sym__type] = 986,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [399] = {
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_const] = 222,
        [anon_sym_EQ] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [anon_sym_type] = 222,
        [sym_comment] = 8,
    },
    [400] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 988,
        [anon_sym_RBRACE] = 990,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [401] = {
        [anon_sym_RBRACE] = 992,
        [sym_comment] = 8,
    },
    [402] = {
        [sym__top_level_declaration] = 236,
        [sym__declaration] = 236,
        [sym_const_declaration] = 236,
        [sym_var_declaration] = 236,
        [sym_function_declaration] = 236,
        [sym_method_declaration] = 236,
        [sym_type_declaration] = 236,
        [aux_sym_source_file_repeat2] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_const] = 236,
        [anon_sym_EQ] = 236,
        [anon_sym_var] = 236,
        [anon_sym_func] = 236,
        [anon_sym_type] = 236,
        [sym_comment] = 8,
    },
    [403] = {
        [sym__top_level_declaration] = 348,
        [sym__declaration] = 348,
        [sym_const_declaration] = 348,
        [sym_var_declaration] = 348,
        [sym_function_declaration] = 348,
        [sym_method_declaration] = 348,
        [sym_type_declaration] = 348,
        [aux_sym_source_file_repeat2] = 348,
        [ts_builtin_sym_end] = 348,
        [anon_sym_const] = 348,
        [anon_sym_EQ] = 348,
        [anon_sym_var] = 348,
        [anon_sym_func] = 348,
        [anon_sym_type] = 348,
        [sym_comment] = 8,
    },
    [404] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 994,
        [anon_sym_RBRACE] = 996,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [405] = {
        [anon_sym_RBRACE] = 998,
        [sym_comment] = 8,
    },
    [406] = {
        [sym__top_level_declaration] = 386,
        [sym__declaration] = 386,
        [sym_const_declaration] = 386,
        [sym_var_declaration] = 386,
        [sym_function_declaration] = 386,
        [sym_method_declaration] = 386,
        [sym_type_declaration] = 386,
        [aux_sym_source_file_repeat2] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_const] = 386,
        [anon_sym_EQ] = 386,
        [anon_sym_var] = 386,
        [anon_sym_func] = 386,
        [anon_sym_type] = 386,
        [sym_comment] = 8,
    },
    [407] = {
        [sym__top_level_declaration] = 418,
        [sym__declaration] = 418,
        [sym_const_declaration] = 418,
        [sym_var_declaration] = 418,
        [sym_function_declaration] = 418,
        [sym_method_declaration] = 418,
        [sym_type_declaration] = 418,
        [aux_sym_source_file_repeat2] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_const] = 418,
        [anon_sym_EQ] = 418,
        [anon_sym_var] = 418,
        [anon_sym_func] = 418,
        [anon_sym_type] = 418,
        [sym_comment] = 8,
    },
    [408] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 1000,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [409] = {
        [sym__type] = 1002,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [410] = {
        [sym__top_level_declaration] = 490,
        [sym__declaration] = 490,
        [sym_const_declaration] = 490,
        [sym_var_declaration] = 490,
        [sym_function_declaration] = 490,
        [sym_method_declaration] = 490,
        [sym_type_declaration] = 490,
        [aux_sym_source_file_repeat2] = 490,
        [ts_builtin_sym_end] = 490,
        [anon_sym_const] = 490,
        [anon_sym_EQ] = 490,
        [anon_sym_var] = 490,
        [anon_sym_func] = 490,
        [anon_sym_type] = 490,
        [sym_comment] = 8,
    },
    [411] = {
        [sym__type] = 1004,
        [sym_pointer_type] = 762,
        [sym_array_type] = 762,
        [sym_slice_type] = 762,
        [sym_struct_type] = 762,
        [sym_interface_type] = 762,
        [sym_map_type] = 762,
        [sym_channel_type] = 762,
        [sym_qualified_identifier] = 762,
        [anon_sym_STAR] = 766,
        [anon_sym_LBRACK] = 768,
        [anon_sym_struct] = 770,
        [anon_sym_interface] = 772,
        [anon_sym_map] = 774,
        [anon_sym_chan] = 776,
        [anon_sym_LT_DASH] = 778,
        [sym_identifier] = 780,
        [sym_comment] = 8,
    },
    [412] = {
        [sym__top_level_declaration] = 508,
        [sym__declaration] = 508,
        [sym_const_declaration] = 508,
        [sym_var_declaration] = 508,
        [sym_function_declaration] = 508,
        [sym_method_declaration] = 508,
        [sym_type_declaration] = 508,
        [aux_sym_source_file_repeat2] = 508,
        [ts_builtin_sym_end] = 508,
        [anon_sym_const] = 508,
        [anon_sym_EQ] = 508,
        [anon_sym_var] = 508,
        [anon_sym_func] = 508,
        [anon_sym_type] = 508,
        [sym_comment] = 8,
    },
    [413] = {
        [sym__top_level_declaration] = 510,
        [sym__declaration] = 510,
        [sym_const_declaration] = 510,
        [sym_var_declaration] = 510,
        [sym_function_declaration] = 510,
        [sym_method_declaration] = 510,
        [sym_type_declaration] = 510,
        [aux_sym_source_file_repeat2] = 510,
        [ts_builtin_sym_end] = 510,
        [anon_sym_const] = 510,
        [anon_sym_EQ] = 510,
        [anon_sym_var] = 510,
        [anon_sym_func] = 510,
        [anon_sym_type] = 510,
        [sym_comment] = 8,
    },
    [414] = {
        [sym__top_level_declaration] = 894,
        [sym__declaration] = 894,
        [sym_const_declaration] = 894,
        [sym_var_declaration] = 894,
        [sym_function_declaration] = 894,
        [sym_method_declaration] = 894,
        [sym_type_declaration] = 894,
        [aux_sym_source_file_repeat2] = 894,
        [ts_builtin_sym_end] = 894,
        [anon_sym_const] = 894,
        [anon_sym_var] = 894,
        [anon_sym_func] = 894,
        [anon_sym_type] = 894,
        [sym_comment] = 8,
    },
    [415] = {
        [sym__top_level_declaration] = 898,
        [sym__declaration] = 898,
        [sym_const_declaration] = 898,
        [sym_var_declaration] = 898,
        [sym_function_declaration] = 898,
        [sym_method_declaration] = 898,
        [sym_type_declaration] = 898,
        [aux_sym_source_file_repeat2] = 898,
        [aux_sym_expression_list_repeat1] = 1006,
        [ts_builtin_sym_end] = 898,
        [anon_sym_const] = 898,
        [anon_sym_var] = 898,
        [anon_sym_func] = 898,
        [anon_sym_COMMA] = 1008,
        [anon_sym_type] = 898,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 1012,
        [anon_sym_DASH] = 1012,
        [anon_sym_PIPE] = 1012,
        [anon_sym_CARET] = 1012,
        [anon_sym_EQ_EQ] = 1014,
        [anon_sym_BANG_EQ] = 1014,
        [anon_sym_LT] = 1014,
        [anon_sym_LT_EQ] = 1014,
        [anon_sym_GT] = 1014,
        [anon_sym_GT_EQ] = 1014,
        [anon_sym_AMP_AMP] = 1016,
        [anon_sym_PIPE_PIPE] = 1018,
        [sym_comment] = 8,
    },
    [416] = {
        [sym__top_level_declaration] = 482,
        [sym__declaration] = 482,
        [sym_const_declaration] = 482,
        [sym_var_declaration] = 482,
        [sym_function_declaration] = 482,
        [sym_method_declaration] = 482,
        [sym_type_declaration] = 482,
        [aux_sym_source_file_repeat2] = 482,
        [aux_sym_expression_list_repeat1] = 482,
        [ts_builtin_sym_end] = 482,
        [anon_sym_const] = 482,
        [anon_sym_var] = 482,
        [anon_sym_func] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_type] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [417] = {
        [sym__top_level_declaration] = 484,
        [sym__declaration] = 484,
        [sym_const_declaration] = 484,
        [sym_var_declaration] = 484,
        [sym_function_declaration] = 484,
        [sym_method_declaration] = 484,
        [sym_type_declaration] = 484,
        [aux_sym_source_file_repeat2] = 484,
        [aux_sym_expression_list_repeat1] = 484,
        [ts_builtin_sym_end] = 484,
        [anon_sym_const] = 484,
        [anon_sym_var] = 484,
        [anon_sym_func] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_type] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [418] = {
        [sym__top_level_declaration] = 406,
        [sym__declaration] = 406,
        [sym_const_declaration] = 406,
        [sym_var_declaration] = 406,
        [sym_function_declaration] = 406,
        [sym_method_declaration] = 406,
        [sym_type_declaration] = 406,
        [aux_sym_source_file_repeat2] = 406,
        [aux_sym_expression_list_repeat1] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_const] = 406,
        [anon_sym_var] = 406,
        [anon_sym_func] = 406,
        [anon_sym_COMMA] = 406,
        [anon_sym_type] = 406,
        [anon_sym_STAR] = 406,
        [anon_sym_SLASH] = 406,
        [anon_sym_PERCENT] = 406,
        [anon_sym_LT_LT] = 406,
        [anon_sym_GT_GT] = 406,
        [anon_sym_AMP] = 406,
        [anon_sym_AMP_CARET] = 406,
        [anon_sym_PLUS] = 406,
        [anon_sym_DASH] = 406,
        [anon_sym_PIPE] = 406,
        [anon_sym_CARET] = 406,
        [anon_sym_EQ_EQ] = 406,
        [anon_sym_BANG_EQ] = 406,
        [anon_sym_LT] = 406,
        [anon_sym_LT_EQ] = 406,
        [anon_sym_GT] = 406,
        [anon_sym_GT_EQ] = 406,
        [anon_sym_AMP_AMP] = 406,
        [anon_sym_PIPE_PIPE] = 406,
        [sym_comment] = 8,
    },
    [419] = {
        [sym__top_level_declaration] = 488,
        [sym__declaration] = 488,
        [sym_const_declaration] = 488,
        [sym_var_declaration] = 488,
        [sym_function_declaration] = 488,
        [sym_method_declaration] = 488,
        [sym_type_declaration] = 488,
        [aux_sym_source_file_repeat2] = 488,
        [aux_sym_expression_list_repeat1] = 488,
        [ts_builtin_sym_end] = 488,
        [anon_sym_const] = 488,
        [anon_sym_var] = 488,
        [anon_sym_func] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_type] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [420] = {
        [sym__top_level_declaration] = 912,
        [sym__declaration] = 912,
        [sym_const_declaration] = 912,
        [sym_var_declaration] = 912,
        [sym_function_declaration] = 912,
        [sym_method_declaration] = 912,
        [sym_type_declaration] = 912,
        [aux_sym_source_file_repeat2] = 912,
        [ts_builtin_sym_end] = 912,
        [anon_sym_const] = 912,
        [anon_sym_var] = 912,
        [anon_sym_func] = 912,
        [anon_sym_type] = 912,
        [sym_comment] = 8,
    },
    [421] = {
        [sym__expression] = 1020,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [422] = {
        [sym__expression] = 1022,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [423] = {
        [sym__expression] = 1024,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [424] = {
        [sym__expression] = 1026,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [425] = {
        [sym__expression] = 1028,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [426] = {
        [sym__expression] = 1030,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [427] = {
        [sym__top_level_declaration] = 504,
        [sym__declaration] = 504,
        [sym_const_declaration] = 504,
        [sym_var_declaration] = 504,
        [sym_function_declaration] = 504,
        [sym_method_declaration] = 504,
        [sym_type_declaration] = 504,
        [aux_sym_source_file_repeat2] = 504,
        [aux_sym_expression_list_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_const] = 504,
        [anon_sym_var] = 504,
        [anon_sym_func] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_type] = 504,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 1012,
        [anon_sym_DASH] = 1012,
        [anon_sym_PIPE] = 1012,
        [anon_sym_CARET] = 1012,
        [anon_sym_EQ_EQ] = 1014,
        [anon_sym_BANG_EQ] = 1014,
        [anon_sym_LT] = 1014,
        [anon_sym_LT_EQ] = 1014,
        [anon_sym_GT] = 1014,
        [anon_sym_GT_EQ] = 1014,
        [anon_sym_AMP_AMP] = 1016,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [428] = {
        [sym__top_level_declaration] = 504,
        [sym__declaration] = 504,
        [sym_const_declaration] = 504,
        [sym_var_declaration] = 504,
        [sym_function_declaration] = 504,
        [sym_method_declaration] = 504,
        [sym_type_declaration] = 504,
        [aux_sym_source_file_repeat2] = 504,
        [aux_sym_expression_list_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_const] = 504,
        [anon_sym_var] = 504,
        [anon_sym_func] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_type] = 504,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 1012,
        [anon_sym_DASH] = 1012,
        [anon_sym_PIPE] = 1012,
        [anon_sym_CARET] = 1012,
        [anon_sym_EQ_EQ] = 1014,
        [anon_sym_BANG_EQ] = 1014,
        [anon_sym_LT] = 1014,
        [anon_sym_LT_EQ] = 1014,
        [anon_sym_GT] = 1014,
        [anon_sym_GT_EQ] = 1014,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [429] = {
        [sym__top_level_declaration] = 504,
        [sym__declaration] = 504,
        [sym_const_declaration] = 504,
        [sym_var_declaration] = 504,
        [sym_function_declaration] = 504,
        [sym_method_declaration] = 504,
        [sym_type_declaration] = 504,
        [aux_sym_source_file_repeat2] = 504,
        [aux_sym_expression_list_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_const] = 504,
        [anon_sym_var] = 504,
        [anon_sym_func] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_type] = 504,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 1012,
        [anon_sym_DASH] = 1012,
        [anon_sym_PIPE] = 1012,
        [anon_sym_CARET] = 1012,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [430] = {
        [sym__top_level_declaration] = 504,
        [sym__declaration] = 504,
        [sym_const_declaration] = 504,
        [sym_var_declaration] = 504,
        [sym_function_declaration] = 504,
        [sym_method_declaration] = 504,
        [sym_type_declaration] = 504,
        [aux_sym_source_file_repeat2] = 504,
        [aux_sym_expression_list_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_const] = 504,
        [anon_sym_var] = 504,
        [anon_sym_func] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_type] = 504,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 504,
        [anon_sym_DASH] = 504,
        [anon_sym_PIPE] = 504,
        [anon_sym_CARET] = 504,
        [anon_sym_EQ_EQ] = 504,
        [anon_sym_BANG_EQ] = 504,
        [anon_sym_LT] = 504,
        [anon_sym_LT_EQ] = 504,
        [anon_sym_GT] = 504,
        [anon_sym_GT_EQ] = 504,
        [anon_sym_AMP_AMP] = 504,
        [anon_sym_PIPE_PIPE] = 504,
        [sym_comment] = 8,
    },
    [431] = {
        [sym__top_level_declaration] = 506,
        [sym__declaration] = 506,
        [sym_const_declaration] = 506,
        [sym_var_declaration] = 506,
        [sym_function_declaration] = 506,
        [sym_method_declaration] = 506,
        [sym_type_declaration] = 506,
        [aux_sym_source_file_repeat2] = 506,
        [aux_sym_expression_list_repeat1] = 506,
        [ts_builtin_sym_end] = 506,
        [anon_sym_const] = 506,
        [anon_sym_var] = 506,
        [anon_sym_func] = 506,
        [anon_sym_COMMA] = 506,
        [anon_sym_type] = 506,
        [anon_sym_STAR] = 506,
        [anon_sym_SLASH] = 506,
        [anon_sym_PERCENT] = 506,
        [anon_sym_LT_LT] = 506,
        [anon_sym_GT_GT] = 506,
        [anon_sym_AMP] = 506,
        [anon_sym_AMP_CARET] = 506,
        [anon_sym_PLUS] = 506,
        [anon_sym_DASH] = 506,
        [anon_sym_PIPE] = 506,
        [anon_sym_CARET] = 506,
        [anon_sym_EQ_EQ] = 506,
        [anon_sym_BANG_EQ] = 506,
        [anon_sym_LT] = 506,
        [anon_sym_LT_EQ] = 506,
        [anon_sym_GT] = 506,
        [anon_sym_GT_EQ] = 506,
        [anon_sym_AMP_AMP] = 506,
        [anon_sym_PIPE_PIPE] = 506,
        [sym_comment] = 8,
    },
    [432] = {
        [sym__top_level_declaration] = 928,
        [sym__declaration] = 928,
        [sym_const_declaration] = 928,
        [sym_var_declaration] = 928,
        [sym_function_declaration] = 928,
        [sym_method_declaration] = 928,
        [sym_type_declaration] = 928,
        [aux_sym_source_file_repeat2] = 928,
        [aux_sym_expression_list_repeat1] = 1032,
        [ts_builtin_sym_end] = 928,
        [anon_sym_const] = 928,
        [anon_sym_var] = 928,
        [anon_sym_func] = 928,
        [anon_sym_COMMA] = 1008,
        [anon_sym_type] = 928,
        [anon_sym_STAR] = 1010,
        [anon_sym_SLASH] = 1010,
        [anon_sym_PERCENT] = 1010,
        [anon_sym_LT_LT] = 1010,
        [anon_sym_GT_GT] = 1010,
        [anon_sym_AMP] = 1010,
        [anon_sym_AMP_CARET] = 1010,
        [anon_sym_PLUS] = 1012,
        [anon_sym_DASH] = 1012,
        [anon_sym_PIPE] = 1012,
        [anon_sym_CARET] = 1012,
        [anon_sym_EQ_EQ] = 1014,
        [anon_sym_BANG_EQ] = 1014,
        [anon_sym_LT] = 1014,
        [anon_sym_LT_EQ] = 1014,
        [anon_sym_GT] = 1014,
        [anon_sym_GT_EQ] = 1014,
        [anon_sym_AMP_AMP] = 1016,
        [anon_sym_PIPE_PIPE] = 1018,
        [sym_comment] = 8,
    },
    [433] = {
        [sym__top_level_declaration] = 930,
        [sym__declaration] = 930,
        [sym_const_declaration] = 930,
        [sym_var_declaration] = 930,
        [sym_function_declaration] = 930,
        [sym_method_declaration] = 930,
        [sym_type_declaration] = 930,
        [aux_sym_source_file_repeat2] = 930,
        [ts_builtin_sym_end] = 930,
        [anon_sym_const] = 930,
        [anon_sym_var] = 930,
        [anon_sym_func] = 930,
        [anon_sym_type] = 930,
        [sym_comment] = 8,
    },
    [434] = {
        [sym_expression_list] = 1034,
        [sym__expression] = 946,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [435] = {
        [sym__top_level_declaration] = 934,
        [sym__declaration] = 934,
        [sym_const_declaration] = 934,
        [sym_var_declaration] = 934,
        [sym_function_declaration] = 934,
        [sym_method_declaration] = 934,
        [sym_type_declaration] = 934,
        [aux_sym_source_file_repeat2] = 934,
        [ts_builtin_sym_end] = 934,
        [anon_sym_const] = 934,
        [anon_sym_var] = 934,
        [anon_sym_func] = 934,
        [anon_sym_type] = 934,
        [sym_comment] = 8,
    },
    [436] = {
        [sym__top_level_declaration] = 1036,
        [sym__declaration] = 1036,
        [sym_const_declaration] = 1036,
        [sym_var_declaration] = 1036,
        [sym_function_declaration] = 1036,
        [sym_method_declaration] = 1036,
        [sym_type_declaration] = 1036,
        [aux_sym_source_file_repeat2] = 1036,
        [ts_builtin_sym_end] = 1036,
        [anon_sym_const] = 1036,
        [anon_sym_var] = 1036,
        [anon_sym_func] = 1036,
        [anon_sym_type] = 1036,
        [sym_comment] = 8,
    },
    [437] = {
        [sym__type] = 1038,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_EQ] = 1042,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [438] = {
        [sym_const_spec] = 1060,
        [sym_identifier_list] = 1062,
        [aux_sym_const_declaration_repeat1] = 1064,
        [anon_sym_RPAREN] = 1066,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [439] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1068,
        [sym_comment] = 8,
    },
    [440] = {
        [sym__type] = 1070,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_EQ] = 1072,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [441] = {
        [anon_sym_RPAREN] = 1074,
        [sym_comment] = 8,
    },
    [442] = {
        [sym__top_level_declaration] = 1076,
        [sym__declaration] = 1076,
        [sym_const_declaration] = 1076,
        [sym_var_declaration] = 1076,
        [sym_function_declaration] = 1076,
        [sym_method_declaration] = 1076,
        [sym_type_declaration] = 1076,
        [aux_sym_source_file_repeat2] = 1076,
        [ts_builtin_sym_end] = 1076,
        [anon_sym_const] = 1076,
        [anon_sym_var] = 1076,
        [anon_sym_func] = 1076,
        [anon_sym_type] = 1076,
        [sym_comment] = 8,
    },
    [443] = {
        [sym__top_level_declaration] = 1078,
        [sym__declaration] = 1078,
        [sym_const_declaration] = 1078,
        [sym_var_declaration] = 1078,
        [sym_function_declaration] = 1078,
        [sym_method_declaration] = 1078,
        [sym_type_declaration] = 1078,
        [aux_sym_source_file_repeat2] = 1078,
        [ts_builtin_sym_end] = 1078,
        [anon_sym_const] = 1078,
        [anon_sym_var] = 1078,
        [anon_sym_func] = 1078,
        [anon_sym_type] = 1078,
        [sym_comment] = 8,
    },
    [444] = {
        [anon_sym_EQ] = 1080,
        [sym_comment] = 8,
    },
    [445] = {
        [anon_sym_EQ] = 124,
        [sym_comment] = 8,
    },
    [446] = {
        [sym_expression_list] = 1082,
        [sym__expression] = 834,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [447] = {
        [sym__type] = 1084,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [448] = {
        [sym__expression] = 1086,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [anon_sym_RBRACK] = 1088,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 136,
        [sym_interpreted_string_literal] = 136,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 138,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 8,
    },
    [449] = {
        [anon_sym_LBRACE] = 1090,
        [sym_comment] = 8,
    },
    [450] = {
        [anon_sym_LBRACE] = 1092,
        [sym_comment] = 8,
    },
    [451] = {
        [anon_sym_LBRACK] = 1094,
        [sym_comment] = 8,
    },
    [452] = {
        [sym__type] = 1096,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1098,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [453] = {
        [anon_sym_chan] = 1100,
        [sym_comment] = 8,
    },
    [454] = {
        [anon_sym_DOT] = 1102,
        [anon_sym_EQ] = 124,
        [sym_comment] = 8,
    },
    [455] = {
        [sym_identifier] = 1104,
        [sym_comment] = 8,
    },
    [456] = {
        [anon_sym_EQ] = 156,
        [sym_comment] = 8,
    },
    [457] = {
        [sym__type] = 1106,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [458] = {
        [anon_sym_EQ] = 160,
        [sym_comment] = 8,
    },
    [459] = {
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [460] = {
        [sym__type] = 1108,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [461] = {
        [anon_sym_EQ] = 166,
        [sym_comment] = 8,
    },
    [462] = {
        [sym__type] = 1110,
        [sym_pointer_type] = 170,
        [sym_array_type] = 170,
        [sym_slice_type] = 170,
        [sym_struct_type] = 170,
        [sym_interface_type] = 170,
        [sym_map_type] = 170,
        [sym_channel_type] = 170,
        [sym_qualified_identifier] = 170,
        [anon_sym_STAR] = 172,
        [anon_sym_LBRACK] = 174,
        [anon_sym_struct] = 176,
        [anon_sym_interface] = 178,
        [anon_sym_map] = 180,
        [anon_sym_chan] = 182,
        [anon_sym_LT_DASH] = 184,
        [sym_identifier] = 186,
        [sym_comment] = 8,
    },
    [463] = {
        [anon_sym_RBRACK] = 1112,
        [sym_comment] = 8,
    },
    [464] = {
        [sym__type] = 1114,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [465] = {
        [anon_sym_EQ] = 222,
        [sym_comment] = 8,
    },
    [466] = {
        [sym_method_spec] = 224,
        [aux_sym_interface_type_repeat1] = 1116,
        [anon_sym_RBRACE] = 1118,
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [467] = {
        [anon_sym_RBRACE] = 1120,
        [sym_comment] = 8,
    },
    [468] = {
        [anon_sym_EQ] = 236,
        [sym_comment] = 8,
    },
    [469] = {
        [anon_sym_EQ] = 348,
        [sym_comment] = 8,
    },
    [470] = {
        [sym_identifier_list] = 350,
        [sym_field_declaration] = 352,
        [aux_sym_struct_type_repeat1] = 1122,
        [anon_sym_RBRACE] = 1124,
        [anon_sym_STAR] = 358,
        [sym_identifier] = 360,
        [sym_comment] = 8,
    },
    [471] = {
        [anon_sym_RBRACE] = 1126,
        [sym_comment] = 8,
    },
    [472] = {
        [anon_sym_EQ] = 386,
        [sym_comment] = 8,
    },
    [473] = {
        [anon_sym_EQ] = 418,
        [sym_comment] = 8,
    },
    [474] = {
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 1128,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [475] = {
        [sym__type] = 1130,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [476] = {
        [anon_sym_EQ] = 490,
        [sym_comment] = 8,
    },
    [477] = {
        [sym__type] = 1132,
        [sym_pointer_type] = 1040,
        [sym_array_type] = 1040,
        [sym_slice_type] = 1040,
        [sym_struct_type] = 1040,
        [sym_interface_type] = 1040,
        [sym_map_type] = 1040,
        [sym_channel_type] = 1040,
        [sym_qualified_identifier] = 1040,
        [anon_sym_STAR] = 1044,
        [anon_sym_LBRACK] = 1046,
        [anon_sym_struct] = 1048,
        [anon_sym_interface] = 1050,
        [anon_sym_map] = 1052,
        [anon_sym_chan] = 1054,
        [anon_sym_LT_DASH] = 1056,
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [478] = {
        [anon_sym_EQ] = 508,
        [sym_comment] = 8,
    },
    [479] = {
        [anon_sym_EQ] = 510,
        [sym_comment] = 8,
    },
    [480] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1134,
        [sym_comment] = 8,
    },
    [481] = {
        [sym_expression_list] = 1136,
        [sym__expression] = 834,
        [sym_unary_expression] = 836,
        [sym_binary_expression] = 836,
        [sym__primary_expression] = 836,
        [sym__string_literal] = 838,
        [sym_int_literal] = 838,
        [sym_float_literal] = 838,
        [sym_identifier] = 838,
        [sym_raw_string_literal] = 840,
        [sym_interpreted_string_literal] = 840,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 842,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 842,
        [sym_comment] = 8,
    },
    [482] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1138,
        [sym_comment] = 8,
    },
    [483] = {
        [sym_const_spec] = 1060,
        [sym_identifier_list] = 1062,
        [aux_sym_const_declaration_repeat1] = 1140,
        [anon_sym_RPAREN] = 1142,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [484] = {
        [anon_sym_RPAREN] = 1144,
        [sym_comment] = 8,
    },
    [485] = {
        [anon_sym_EQ] = 1146,
        [sym_comment] = 8,
    },
    [486] = {
        [sym_expression_list] = 1148,
        [sym__expression] = 946,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [487] = {
        [sym__top_level_declaration] = 1134,
        [sym__declaration] = 1134,
        [sym_const_declaration] = 1134,
        [sym_var_declaration] = 1134,
        [sym_function_declaration] = 1134,
        [sym_method_declaration] = 1134,
        [sym_type_declaration] = 1134,
        [aux_sym_source_file_repeat2] = 1134,
        [ts_builtin_sym_end] = 1134,
        [anon_sym_const] = 1134,
        [anon_sym_var] = 1134,
        [anon_sym_func] = 1134,
        [anon_sym_type] = 1134,
        [sym_comment] = 8,
    },
    [488] = {
        [sym_expression_list] = 1150,
        [sym__expression] = 946,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [489] = {
        [sym__top_level_declaration] = 1138,
        [sym__declaration] = 1138,
        [sym_const_declaration] = 1138,
        [sym_var_declaration] = 1138,
        [sym_function_declaration] = 1138,
        [sym_method_declaration] = 1138,
        [sym_type_declaration] = 1138,
        [aux_sym_source_file_repeat2] = 1138,
        [ts_builtin_sym_end] = 1138,
        [anon_sym_const] = 1138,
        [anon_sym_var] = 1138,
        [anon_sym_func] = 1138,
        [anon_sym_type] = 1138,
        [sym_comment] = 8,
    },
    [490] = {
        [sym_import_declaration] = 1152,
        [sym__top_level_declaration] = 1152,
        [sym__declaration] = 1152,
        [sym_const_declaration] = 1152,
        [sym_var_declaration] = 1152,
        [sym_function_declaration] = 1152,
        [sym_method_declaration] = 1152,
        [sym_type_declaration] = 1152,
        [aux_sym_source_file_repeat1] = 1152,
        [aux_sym_source_file_repeat2] = 1152,
        [ts_builtin_sym_end] = 1152,
        [anon_sym_import] = 1152,
        [anon_sym_const] = 1152,
        [anon_sym_var] = 1152,
        [anon_sym_func] = 1152,
        [anon_sym_type] = 1152,
        [sym_comment] = 8,
    },
    [491] = {
        [sym_import_declaration] = 1154,
        [sym__top_level_declaration] = 1154,
        [sym__declaration] = 1154,
        [sym_const_declaration] = 1154,
        [sym_var_declaration] = 1154,
        [sym_function_declaration] = 1154,
        [sym_method_declaration] = 1154,
        [sym_type_declaration] = 1154,
        [aux_sym_source_file_repeat1] = 1154,
        [aux_sym_source_file_repeat2] = 1154,
        [ts_builtin_sym_end] = 1154,
        [anon_sym_import] = 1154,
        [anon_sym_const] = 1154,
        [anon_sym_var] = 1154,
        [anon_sym_func] = 1154,
        [anon_sym_type] = 1154,
        [sym_comment] = 8,
    },
    [492] = {
        [sym_import_spec] = 1156,
        [sym__string_literal] = 1158,
        [aux_sym_import_declaration_repeat1] = 1160,
        [anon_sym_RPAREN] = 1162,
        [anon_sym_DOT] = 1164,
        [sym_identifier] = 1164,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [493] = {
        [sym__string_literal] = 1166,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [494] = {
        [sym_import_declaration] = 406,
        [sym__top_level_declaration] = 406,
        [sym__declaration] = 406,
        [sym_const_declaration] = 406,
        [sym_var_declaration] = 406,
        [sym_function_declaration] = 406,
        [sym_method_declaration] = 406,
        [sym_type_declaration] = 406,
        [aux_sym_source_file_repeat1] = 406,
        [aux_sym_source_file_repeat2] = 406,
        [ts_builtin_sym_end] = 406,
        [anon_sym_import] = 406,
        [anon_sym_const] = 406,
        [anon_sym_var] = 406,
        [anon_sym_func] = 406,
        [anon_sym_type] = 406,
        [sym_comment] = 8,
    },
    [495] = {
        [sym_import_declaration] = 1168,
        [sym__top_level_declaration] = 1168,
        [sym__declaration] = 1168,
        [sym_const_declaration] = 1168,
        [sym_var_declaration] = 1168,
        [sym_function_declaration] = 1168,
        [sym_method_declaration] = 1168,
        [sym_type_declaration] = 1168,
        [aux_sym_source_file_repeat1] = 1168,
        [aux_sym_source_file_repeat2] = 1168,
        [ts_builtin_sym_end] = 1168,
        [anon_sym_import] = 1168,
        [anon_sym_const] = 1168,
        [anon_sym_var] = 1168,
        [anon_sym_func] = 1168,
        [anon_sym_type] = 1168,
        [sym_comment] = 8,
    },
    [496] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1170,
        [sym_comment] = 8,
    },
    [497] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1154,
        [sym_comment] = 8,
    },
    [498] = {
        [anon_sym_RPAREN] = 1172,
        [sym_comment] = 8,
    },
    [499] = {
        [sym_import_declaration] = 1174,
        [sym__top_level_declaration] = 1174,
        [sym__declaration] = 1174,
        [sym_const_declaration] = 1174,
        [sym_var_declaration] = 1174,
        [sym_function_declaration] = 1174,
        [sym_method_declaration] = 1174,
        [sym_type_declaration] = 1174,
        [aux_sym_source_file_repeat1] = 1174,
        [aux_sym_source_file_repeat2] = 1174,
        [ts_builtin_sym_end] = 1174,
        [anon_sym_import] = 1174,
        [anon_sym_const] = 1174,
        [anon_sym_var] = 1174,
        [anon_sym_func] = 1174,
        [anon_sym_type] = 1174,
        [sym_comment] = 8,
    },
    [500] = {
        [sym__string_literal] = 1176,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [501] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1168,
        [sym_comment] = 8,
    },
    [502] = {
        [sym_import_declaration] = 1178,
        [sym__top_level_declaration] = 1178,
        [sym__declaration] = 1178,
        [sym_const_declaration] = 1178,
        [sym_var_declaration] = 1178,
        [sym_function_declaration] = 1178,
        [sym_method_declaration] = 1178,
        [sym_type_declaration] = 1178,
        [aux_sym_source_file_repeat1] = 1178,
        [aux_sym_source_file_repeat2] = 1178,
        [ts_builtin_sym_end] = 1178,
        [anon_sym_import] = 1178,
        [anon_sym_const] = 1178,
        [anon_sym_var] = 1178,
        [anon_sym_func] = 1178,
        [anon_sym_type] = 1178,
        [sym_comment] = 8,
    },
    [503] = {
        [sym_import_spec] = 1156,
        [sym__string_literal] = 1158,
        [aux_sym_import_declaration_repeat1] = 1180,
        [anon_sym_RPAREN] = 1182,
        [anon_sym_DOT] = 1164,
        [sym_identifier] = 1164,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [504] = {
        [anon_sym_RPAREN] = 1184,
        [sym_comment] = 8,
    },
    [505] = {
        [ts_builtin_sym_end] = 1186,
        [sym_comment] = 8,
    },
    [506] = {
        [ts_builtin_sym_end] = 1188,
        [sym_comment] = 8,
    },
    [507] = {
        [sym__top_level_declaration] = 1190,
        [sym__declaration] = 1190,
        [sym_const_declaration] = 1190,
        [sym_var_declaration] = 1190,
        [sym_function_declaration] = 1190,
        [sym_method_declaration] = 1190,
        [sym_type_declaration] = 1190,
        [aux_sym_source_file_repeat2] = 1190,
        [ts_builtin_sym_end] = 1190,
        [anon_sym_const] = 1190,
        [anon_sym_var] = 1190,
        [anon_sym_func] = 1190,
        [anon_sym_type] = 1190,
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
    [42] = {.count = 1}, SHIFT(507, 0),
    [44] = {.count = 1}, SHIFT(506, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(505, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(490, 0),
    [58] = {.count = 1}, SHIFT(491, 0),
    [60] = {.count = 1}, SHIFT(492, 0),
    [62] = {.count = 1}, SHIFT(493, 0),
    [64] = {.count = 1}, SHIFT(494, 0),
    [66] = {.count = 1}, SHIFT(436, 0),
    [68] = {.count = 1}, SHIFT(437, 0),
    [70] = {.count = 1}, SHIFT(438, 0),
    [72] = {.count = 1}, SHIFT(308, 0),
    [74] = {.count = 1}, SHIFT(305, 0),
    [76] = {.count = 1}, SHIFT(306, 0),
    [78] = {.count = 1}, SHIFT(307, 0),
    [80] = {.count = 1}, SHIFT(246, 0),
    [82] = {.count = 1}, SHIFT(247, 0),
    [84] = {.count = 1}, SHIFT(248, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(238, 0),
    [96] = {.count = 1}, SHIFT(239, 0),
    [98] = {.count = 1}, SHIFT(240, 0),
    [100] = {.count = 1}, SHIFT(241, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, SHIFT(23, 0),
    [112] = {.count = 1}, SHIFT(24, 0),
    [114] = {.count = 1}, SHIFT(25, 0),
    [116] = {.count = 1}, SHIFT(26, 0),
    [118] = {.count = 1}, SHIFT(27, 0),
    [120] = {.count = 1}, SHIFT(28, 0),
    [122] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [124] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [126] = {.count = 1}, SHIFT(237, 0),
    [128] = {.count = 1}, SHIFT(232, 0),
    [130] = {.count = 1}, SHIFT(143, 0),
    [132] = {.count = 1}, SHIFT(144, 0),
    [134] = {.count = 1}, SHIFT(233, 0),
    [136] = {.count = 1}, SHIFT(146, 0),
    [138] = {.count = 1}, SHIFT(147, 0),
    [140] = {.count = 1}, SHIFT(228, 0),
    [142] = {.count = 1}, SHIFT(224, 0),
    [144] = {.count = 1}, SHIFT(36, 0),
    [146] = {.count = 1}, SHIFT(33, 0),
    [148] = {.count = 1}, SHIFT(34, 0),
    [150] = {.count = 1}, SHIFT(31, 0),
    [152] = {.count = 1}, SHIFT(29, 0),
    [154] = {.count = 1}, SHIFT(30, 0),
    [156] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [158] = {.count = 1}, SHIFT(32, 0),
    [160] = {.count = 1}, REDUCE(sym_channel_type, 3, FRAGILE),
    [162] = {.count = 1}, REDUCE(sym_channel_type, 2, 0),
    [164] = {.count = 1}, SHIFT(35, 0),
    [166] = {.count = 1}, REDUCE(sym_channel_type, 3, 0),
    [168] = {.count = 1}, SHIFT(37, 0),
    [170] = {.count = 1}, SHIFT(38, 0),
    [172] = {.count = 1}, SHIFT(39, 0),
    [174] = {.count = 1}, SHIFT(40, 0),
    [176] = {.count = 1}, SHIFT(41, 0),
    [178] = {.count = 1}, SHIFT(42, 0),
    [180] = {.count = 1}, SHIFT(43, 0),
    [182] = {.count = 1}, SHIFT(44, 0),
    [184] = {.count = 1}, SHIFT(45, 0),
    [186] = {.count = 1}, SHIFT(46, 0),
    [188] = {.count = 1}, SHIFT(222, 0),
    [190] = {.count = 1}, SHIFT(221, 0),
    [192] = {.count = 1}, SHIFT(216, 0),
    [194] = {.count = 1}, SHIFT(217, 0),
    [196] = {.count = 1}, SHIFT(212, 0),
    [198] = {.count = 1}, SHIFT(58, 0),
    [200] = {.count = 1}, SHIFT(54, 0),
    [202] = {.count = 1}, SHIFT(51, 0),
    [204] = {.count = 1}, SHIFT(52, 0),
    [206] = {.count = 1}, SHIFT(49, 0),
    [208] = {.count = 1}, SHIFT(47, 0),
    [210] = {.count = 1}, SHIFT(48, 0),
    [212] = {.count = 1}, SHIFT(50, 0),
    [214] = {.count = 1}, SHIFT(53, 0),
    [216] = {.count = 1}, SHIFT(55, 0),
    [218] = {.count = 1}, SHIFT(56, 0),
    [220] = {.count = 1}, SHIFT(57, 0),
    [222] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [224] = {.count = 1}, SHIFT(59, 0),
    [226] = {.count = 1}, SHIFT(60, 0),
    [228] = {.count = 1}, SHIFT(61, 0),
    [230] = {.count = 1}, SHIFT(62, 0),
    [232] = {.count = 1}, SHIFT(65, 0),
    [234] = {.count = 1}, SHIFT(211, 0),
    [236] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [238] = {.count = 1}, SHIFT(63, 0),
    [240] = {.count = 1}, SHIFT(64, 0),
    [242] = {.count = 1}, SHIFT(172, 0),
    [244] = {.count = 1}, SHIFT(173, 0),
    [246] = {.count = 1}, SHIFT(174, 0),
    [248] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [250] = {.count = 1}, SHIFT(175, 0),
    [252] = {.count = 1}, SHIFT(176, 0),
    [254] = {.count = 1}, SHIFT(177, 0),
    [256] = {.count = 1}, SHIFT(178, 0),
    [258] = {.count = 1}, SHIFT(179, 0),
    [260] = {.count = 1}, SHIFT(180, 0),
    [262] = {.count = 1}, SHIFT(181, 0),
    [264] = {.count = 1}, SHIFT(182, 0),
    [266] = {.count = 1}, SHIFT(67, 0),
    [268] = {.count = 1}, SHIFT(68, 0),
    [270] = {.count = 1}, SHIFT(69, 0),
    [272] = {.count = 1}, SHIFT(70, 0),
    [274] = {.count = 1}, SHIFT(66, 0),
    [276] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [278] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [280] = {.count = 1}, SHIFT(168, 0),
    [282] = {.count = 1}, SHIFT(169, 0),
    [284] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [286] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [288] = {.count = 1}, SHIFT(71, 0),
    [290] = {.count = 1}, SHIFT(72, 0),
    [292] = {.count = 1}, SHIFT(73, 0),
    [294] = {.count = 1}, SHIFT(74, 0),
    [296] = {.count = 1}, SHIFT(75, 0),
    [298] = {.count = 1}, SHIFT(76, 0),
    [300] = {.count = 1}, SHIFT(77, 0),
    [302] = {.count = 1}, SHIFT(78, 0),
    [304] = {.count = 1}, SHIFT(79, 0),
    [306] = {.count = 1}, SHIFT(80, 0),
    [308] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [310] = {.count = 1}, SHIFT(167, 0),
    [312] = {.count = 1}, SHIFT(162, 0),
    [314] = {.count = 1}, SHIFT(163, 0),
    [316] = {.count = 1}, SHIFT(96, 0),
    [318] = {.count = 1}, SHIFT(92, 0),
    [320] = {.count = 1}, SHIFT(88, 0),
    [322] = {.count = 1}, SHIFT(85, 0),
    [324] = {.count = 1}, SHIFT(86, 0),
    [326] = {.count = 1}, SHIFT(83, 0),
    [328] = {.count = 1}, SHIFT(81, 0),
    [330] = {.count = 1}, SHIFT(82, 0),
    [332] = {.count = 1}, SHIFT(84, 0),
    [334] = {.count = 1}, SHIFT(87, 0),
    [336] = {.count = 1}, SHIFT(89, 0),
    [338] = {.count = 1}, SHIFT(90, 0),
    [340] = {.count = 1}, SHIFT(91, 0),
    [342] = {.count = 1}, SHIFT(93, 0),
    [344] = {.count = 1}, SHIFT(94, 0),
    [346] = {.count = 1}, SHIFT(95, 0),
    [348] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [350] = {.count = 1}, SHIFT(97, 0),
    [352] = {.count = 1}, SHIFT(98, 0),
    [354] = {.count = 1}, SHIFT(99, 0),
    [356] = {.count = 1}, SHIFT(100, 0),
    [358] = {.count = 1}, SHIFT(101, 0),
    [360] = {.count = 1}, SHIFT(102, 0),
    [362] = {.count = 1}, SHIFT(109, 0),
    [364] = {.count = 1}, SHIFT(114, 0),
    [366] = {.count = 1}, SHIFT(115, 0),
    [368] = {.count = 1}, SHIFT(116, 0),
    [370] = {.count = 1}, SHIFT(117, 0),
    [372] = {.count = 1}, SHIFT(118, 0),
    [374] = {.count = 1}, SHIFT(119, 0),
    [376] = {.count = 1}, SHIFT(120, 0),
    [378] = {.count = 1}, SHIFT(121, 0),
    [380] = {.count = 1}, SHIFT(122, 0),
    [382] = {.count = 1}, SHIFT(112, 0),
    [384] = {.count = 1}, SHIFT(111, 0),
    [386] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [388] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [390] = {.count = 1}, SHIFT(103, 0),
    [392] = {.count = 1}, SHIFT(104, 0),
    [394] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [396] = {.count = 1}, SHIFT(105, 0),
    [398] = {.count = 1}, SHIFT(106, 0),
    [400] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [402] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [404] = {.count = 1}, SHIFT(107, 0),
    [406] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [408] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [410] = {.count = 1}, SHIFT(108, 0),
    [412] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [414] = {.count = 1}, SHIFT(110, 0),
    [416] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [418] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [420] = {.count = 1}, SHIFT(113, 0),
    [422] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [424] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [426] = {.count = 1}, SHIFT(161, 0),
    [428] = {.count = 1}, SHIFT(142, 0),
    [430] = {.count = 1}, SHIFT(145, 0),
    [432] = {.count = 1}, SHIFT(138, 0),
    [434] = {.count = 1}, SHIFT(134, 0),
    [436] = {.count = 1}, SHIFT(130, 0),
    [438] = {.count = 1}, SHIFT(127, 0),
    [440] = {.count = 1}, SHIFT(128, 0),
    [442] = {.count = 1}, SHIFT(125, 0),
    [444] = {.count = 1}, SHIFT(123, 0),
    [446] = {.count = 1}, SHIFT(124, 0),
    [448] = {.count = 1}, SHIFT(126, 0),
    [450] = {.count = 1}, SHIFT(129, 0),
    [452] = {.count = 1}, SHIFT(131, 0),
    [454] = {.count = 1}, SHIFT(132, 0),
    [456] = {.count = 1}, SHIFT(133, 0),
    [458] = {.count = 1}, SHIFT(135, 0),
    [460] = {.count = 1}, SHIFT(136, 0),
    [462] = {.count = 1}, SHIFT(137, 0),
    [464] = {.count = 1}, SHIFT(139, 0),
    [466] = {.count = 1}, SHIFT(140, 0),
    [468] = {.count = 1}, SHIFT(141, 0),
    [470] = {.count = 1}, SHIFT(149, 0),
    [472] = {.count = 1}, SHIFT(150, 0),
    [474] = {.count = 1}, SHIFT(151, 0),
    [476] = {.count = 1}, SHIFT(152, 0),
    [478] = {.count = 1}, SHIFT(153, 0),
    [480] = {.count = 1}, SHIFT(154, 0),
    [482] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [484] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [486] = {.count = 1}, SHIFT(148, 0),
    [488] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [490] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [492] = {.count = 1}, SHIFT(159, 0),
    [494] = {.count = 1}, SHIFT(160, 0),
    [496] = {.count = 1}, SHIFT(158, 0),
    [498] = {.count = 1}, SHIFT(157, 0),
    [500] = {.count = 1}, SHIFT(156, 0),
    [502] = {.count = 1}, SHIFT(155, 0),
    [504] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [506] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [508] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [510] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [512] = {.count = 1}, SHIFT(165, 0),
    [514] = {.count = 1}, SHIFT(164, 0),
    [516] = {.count = 1}, SHIFT(166, 0),
    [518] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [520] = {.count = 1}, SHIFT(170, 0),
    [522] = {.count = 1}, SHIFT(171, 0),
    [524] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [526] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [528] = {.count = 1}, SHIFT(208, 0),
    [530] = {.count = 1}, SHIFT(209, 0),
    [532] = {.count = 1}, SHIFT(207, 0),
    [534] = {.count = 1}, SHIFT(202, 0),
    [536] = {.count = 1}, SHIFT(203, 0),
    [538] = {.count = 1}, SHIFT(198, 0),
    [540] = {.count = 1}, SHIFT(194, 0),
    [542] = {.count = 1}, SHIFT(190, 0),
    [544] = {.count = 1}, SHIFT(187, 0),
    [546] = {.count = 1}, SHIFT(188, 0),
    [548] = {.count = 1}, SHIFT(185, 0),
    [550] = {.count = 1}, SHIFT(183, 0),
    [552] = {.count = 1}, SHIFT(184, 0),
    [554] = {.count = 1}, SHIFT(186, 0),
    [556] = {.count = 1}, SHIFT(189, 0),
    [558] = {.count = 1}, SHIFT(191, 0),
    [560] = {.count = 1}, SHIFT(192, 0),
    [562] = {.count = 1}, SHIFT(193, 0),
    [564] = {.count = 1}, SHIFT(195, 0),
    [566] = {.count = 1}, SHIFT(196, 0),
    [568] = {.count = 1}, SHIFT(197, 0),
    [570] = {.count = 1}, SHIFT(199, 0),
    [572] = {.count = 1}, SHIFT(200, 0),
    [574] = {.count = 1}, SHIFT(201, 0),
    [576] = {.count = 1}, SHIFT(205, 0),
    [578] = {.count = 1}, SHIFT(204, 0),
    [580] = {.count = 1}, SHIFT(206, 0),
    [582] = {.count = 1}, SHIFT(210, 0),
    [584] = {.count = 1}, SHIFT(213, 0),
    [586] = {.count = 1}, SHIFT(214, 0),
    [588] = {.count = 1}, SHIFT(215, 0),
    [590] = {.count = 1}, SHIFT(219, 0),
    [592] = {.count = 1}, SHIFT(218, 0),
    [594] = {.count = 1}, SHIFT(220, 0),
    [596] = {.count = 1}, SHIFT(223, 0),
    [598] = {.count = 1}, SHIFT(225, 0),
    [600] = {.count = 1}, SHIFT(226, 0),
    [602] = {.count = 1}, SHIFT(227, 0),
    [604] = {.count = 1}, SHIFT(229, 0),
    [606] = {.count = 1}, SHIFT(230, 0),
    [608] = {.count = 1}, SHIFT(231, 0),
    [610] = {.count = 1}, SHIFT(235, 0),
    [612] = {.count = 1}, SHIFT(234, 0),
    [614] = {.count = 1}, SHIFT(236, 0),
    [616] = {.count = 1}, SHIFT(244, 0),
    [618] = {.count = 1}, SHIFT(243, 0),
    [620] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [622] = {.count = 1}, SHIFT(242, 0),
    [624] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [626] = {.count = 1}, SHIFT(245, 0),
    [628] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [630] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [632] = {.count = 1}, SHIFT(300, 0),
    [634] = {.count = 1}, SHIFT(297, 0),
    [636] = {.count = 1}, SHIFT(298, 0),
    [638] = {.count = 1}, SHIFT(249, 0),
    [640] = {.count = 1}, SHIFT(250, 0),
    [642] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [644] = {.count = 1}, SHIFT(254, 0),
    [646] = {.count = 1}, SHIFT(255, 0),
    [648] = {.count = 1}, SHIFT(256, 0),
    [650] = {.count = 1}, SHIFT(257, 0),
    [652] = {.count = 1}, SHIFT(258, 0),
    [654] = {.count = 1}, SHIFT(259, 0),
    [656] = {.count = 1}, SHIFT(260, 0),
    [658] = {.count = 1}, SHIFT(261, 0),
    [660] = {.count = 1}, SHIFT(262, 0),
    [662] = {.count = 1}, SHIFT(263, 0),
    [664] = {.count = 1}, SHIFT(264, 0),
    [666] = {.count = 1}, SHIFT(265, 0),
    [668] = {.count = 1}, SHIFT(266, 0),
    [670] = {.count = 1}, SHIFT(251, 0),
    [672] = {.count = 1}, SHIFT(252, 0),
    [674] = {.count = 1}, SHIFT(253, 0),
    [676] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [678] = {.count = 1}, SHIFT(296, 0),
    [680] = {.count = 1}, SHIFT(293, 0),
    [682] = {.count = 1}, SHIFT(294, 0),
    [684] = {.count = 1}, SHIFT(292, 0),
    [686] = {.count = 1}, SHIFT(291, 0),
    [688] = {.count = 1}, SHIFT(286, 0),
    [690] = {.count = 1}, SHIFT(287, 0),
    [692] = {.count = 1}, SHIFT(282, 0),
    [694] = {.count = 1}, SHIFT(278, 0),
    [696] = {.count = 1}, SHIFT(274, 0),
    [698] = {.count = 1}, SHIFT(271, 0),
    [700] = {.count = 1}, SHIFT(272, 0),
    [702] = {.count = 1}, SHIFT(269, 0),
    [704] = {.count = 1}, SHIFT(267, 0),
    [706] = {.count = 1}, SHIFT(268, 0),
    [708] = {.count = 1}, SHIFT(270, 0),
    [710] = {.count = 1}, SHIFT(273, 0),
    [712] = {.count = 1}, SHIFT(275, 0),
    [714] = {.count = 1}, SHIFT(276, 0),
    [716] = {.count = 1}, SHIFT(277, 0),
    [718] = {.count = 1}, SHIFT(279, 0),
    [720] = {.count = 1}, SHIFT(280, 0),
    [722] = {.count = 1}, SHIFT(281, 0),
    [724] = {.count = 1}, SHIFT(283, 0),
    [726] = {.count = 1}, SHIFT(284, 0),
    [728] = {.count = 1}, SHIFT(285, 0),
    [730] = {.count = 1}, SHIFT(289, 0),
    [732] = {.count = 1}, SHIFT(288, 0),
    [734] = {.count = 1}, SHIFT(290, 0),
    [736] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [738] = {.count = 1}, SHIFT(295, 0),
    [740] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [742] = {.count = 1}, SHIFT(299, 0),
    [744] = {.count = 1}, SHIFT(301, 0),
    [746] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [748] = {.count = 1}, SHIFT(302, 0),
    [750] = {.count = 1}, SHIFT(303, 0),
    [752] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [754] = {.count = 1}, SHIFT(304, 0),
    [756] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [758] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [760] = {.count = 1}, SHIFT(378, 0),
    [762] = {.count = 1}, SHIFT(379, 0),
    [764] = {.count = 1}, SHIFT(380, 0),
    [766] = {.count = 1}, SHIFT(381, 0),
    [768] = {.count = 1}, SHIFT(382, 0),
    [770] = {.count = 1}, SHIFT(383, 0),
    [772] = {.count = 1}, SHIFT(384, 0),
    [774] = {.count = 1}, SHIFT(385, 0),
    [776] = {.count = 1}, SHIFT(386, 0),
    [778] = {.count = 1}, SHIFT(387, 0),
    [780] = {.count = 1}, SHIFT(388, 0),
    [782] = {.count = 1}, SHIFT(313, 0),
    [784] = {.count = 1}, SHIFT(314, 0),
    [786] = {.count = 1}, SHIFT(315, 0),
    [788] = {.count = 1}, SHIFT(316, 0),
    [790] = {.count = 1}, SHIFT(309, 0),
    [792] = {.count = 1}, SHIFT(310, 0),
    [794] = {.count = 1}, SHIFT(311, 0),
    [796] = {.count = 1}, SHIFT(312, 0),
    [798] = {.count = 1}, SHIFT(376, 0),
    [800] = {.count = 1}, SHIFT(318, 0),
    [802] = {.count = 1}, SHIFT(319, 0),
    [804] = {.count = 1}, SHIFT(320, 0),
    [806] = {.count = 1}, SHIFT(321, 0),
    [808] = {.count = 1}, SHIFT(322, 0),
    [810] = {.count = 1}, SHIFT(323, 0),
    [812] = {.count = 1}, SHIFT(324, 0),
    [814] = {.count = 1}, SHIFT(325, 0),
    [816] = {.count = 1}, SHIFT(326, 0),
    [818] = {.count = 1}, SHIFT(327, 0),
    [820] = {.count = 1}, SHIFT(328, 0),
    [822] = {.count = 1}, SHIFT(317, 0),
    [824] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [826] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [828] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [830] = {.count = 1}, SHIFT(374, 0),
    [832] = {.count = 1}, SHIFT(354, 0),
    [834] = {.count = 1}, SHIFT(355, 0),
    [836] = {.count = 1}, SHIFT(356, 0),
    [838] = {.count = 1}, SHIFT(357, 0),
    [840] = {.count = 1}, SHIFT(358, 0),
    [842] = {.count = 1}, SHIFT(359, 0),
    [844] = {.count = 1}, SHIFT(353, 0),
    [846] = {.count = 1}, SHIFT(348, 0),
    [848] = {.count = 1}, SHIFT(349, 0),
    [850] = {.count = 1}, SHIFT(344, 0),
    [852] = {.count = 1}, SHIFT(340, 0),
    [854] = {.count = 1}, SHIFT(336, 0),
    [856] = {.count = 1}, SHIFT(333, 0),
    [858] = {.count = 1}, SHIFT(334, 0),
    [860] = {.count = 1}, SHIFT(331, 0),
    [862] = {.count = 1}, SHIFT(329, 0),
    [864] = {.count = 1}, SHIFT(330, 0),
    [866] = {.count = 1}, SHIFT(332, 0),
    [868] = {.count = 1}, SHIFT(335, 0),
    [870] = {.count = 1}, SHIFT(337, 0),
    [872] = {.count = 1}, SHIFT(338, 0),
    [874] = {.count = 1}, SHIFT(339, 0),
    [876] = {.count = 1}, SHIFT(341, 0),
    [878] = {.count = 1}, SHIFT(342, 0),
    [880] = {.count = 1}, SHIFT(343, 0),
    [882] = {.count = 1}, SHIFT(345, 0),
    [884] = {.count = 1}, SHIFT(346, 0),
    [886] = {.count = 1}, SHIFT(347, 0),
    [888] = {.count = 1}, SHIFT(351, 0),
    [890] = {.count = 1}, SHIFT(350, 0),
    [892] = {.count = 1}, SHIFT(352, 0),
    [894] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [896] = {.count = 1}, SHIFT(360, 0),
    [898] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [900] = {.count = 1}, SHIFT(361, 0),
    [902] = {.count = 1}, SHIFT(362, 0),
    [904] = {.count = 1}, SHIFT(363, 0),
    [906] = {.count = 1}, SHIFT(364, 0),
    [908] = {.count = 1}, SHIFT(365, 0),
    [910] = {.count = 1}, SHIFT(366, 0),
    [912] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [914] = {.count = 1}, SHIFT(372, 0),
    [916] = {.count = 1}, SHIFT(371, 0),
    [918] = {.count = 1}, SHIFT(370, 0),
    [920] = {.count = 1}, SHIFT(369, 0),
    [922] = {.count = 1}, SHIFT(368, 0),
    [924] = {.count = 1}, SHIFT(367, 0),
    [926] = {.count = 1}, SHIFT(373, 0),
    [928] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [930] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [932] = {.count = 1}, SHIFT(375, 0),
    [934] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [936] = {.count = 1}, SHIFT(377, 0),
    [938] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [940] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [942] = {.count = 1}, SHIFT(434, 0),
    [944] = {.count = 1}, SHIFT(414, 0),
    [946] = {.count = 1}, SHIFT(415, 0),
    [948] = {.count = 1}, SHIFT(416, 0),
    [950] = {.count = 1}, SHIFT(417, 0),
    [952] = {.count = 1}, SHIFT(418, 0),
    [954] = {.count = 1}, SHIFT(419, 0),
    [956] = {.count = 1}, SHIFT(413, 0),
    [958] = {.count = 1}, SHIFT(408, 0),
    [960] = {.count = 1}, SHIFT(409, 0),
    [962] = {.count = 1}, SHIFT(404, 0),
    [964] = {.count = 1}, SHIFT(400, 0),
    [966] = {.count = 1}, SHIFT(396, 0),
    [968] = {.count = 1}, SHIFT(393, 0),
    [970] = {.count = 1}, SHIFT(394, 0),
    [972] = {.count = 1}, SHIFT(391, 0),
    [974] = {.count = 1}, SHIFT(389, 0),
    [976] = {.count = 1}, SHIFT(390, 0),
    [978] = {.count = 1}, SHIFT(392, 0),
    [980] = {.count = 1}, SHIFT(395, 0),
    [982] = {.count = 1}, SHIFT(397, 0),
    [984] = {.count = 1}, SHIFT(398, 0),
    [986] = {.count = 1}, SHIFT(399, 0),
    [988] = {.count = 1}, SHIFT(401, 0),
    [990] = {.count = 1}, SHIFT(402, 0),
    [992] = {.count = 1}, SHIFT(403, 0),
    [994] = {.count = 1}, SHIFT(405, 0),
    [996] = {.count = 1}, SHIFT(406, 0),
    [998] = {.count = 1}, SHIFT(407, 0),
    [1000] = {.count = 1}, SHIFT(411, 0),
    [1002] = {.count = 1}, SHIFT(410, 0),
    [1004] = {.count = 1}, SHIFT(412, 0),
    [1006] = {.count = 1}, SHIFT(420, 0),
    [1008] = {.count = 1}, SHIFT(421, 0),
    [1010] = {.count = 1}, SHIFT(422, 0),
    [1012] = {.count = 1}, SHIFT(423, 0),
    [1014] = {.count = 1}, SHIFT(424, 0),
    [1016] = {.count = 1}, SHIFT(425, 0),
    [1018] = {.count = 1}, SHIFT(426, 0),
    [1020] = {.count = 1}, SHIFT(432, 0),
    [1022] = {.count = 1}, SHIFT(431, 0),
    [1024] = {.count = 1}, SHIFT(430, 0),
    [1026] = {.count = 1}, SHIFT(429, 0),
    [1028] = {.count = 1}, SHIFT(428, 0),
    [1030] = {.count = 1}, SHIFT(427, 0),
    [1032] = {.count = 1}, SHIFT(433, 0),
    [1034] = {.count = 1}, SHIFT(435, 0),
    [1036] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [1038] = {.count = 1}, SHIFT(485, 0),
    [1040] = {.count = 1}, SHIFT(445, 0),
    [1042] = {.count = 1}, SHIFT(486, 0),
    [1044] = {.count = 1}, SHIFT(447, 0),
    [1046] = {.count = 1}, SHIFT(448, 0),
    [1048] = {.count = 1}, SHIFT(449, 0),
    [1050] = {.count = 1}, SHIFT(450, 0),
    [1052] = {.count = 1}, SHIFT(451, 0),
    [1054] = {.count = 1}, SHIFT(452, 0),
    [1056] = {.count = 1}, SHIFT(453, 0),
    [1058] = {.count = 1}, SHIFT(454, 0),
    [1060] = {.count = 1}, SHIFT(439, 0),
    [1062] = {.count = 1}, SHIFT(440, 0),
    [1064] = {.count = 1}, SHIFT(441, 0),
    [1066] = {.count = 1}, SHIFT(442, 0),
    [1068] = {.count = 1}, SHIFT(483, 0),
    [1070] = {.count = 1}, SHIFT(444, 0),
    [1072] = {.count = 1}, SHIFT(446, 0),
    [1074] = {.count = 1}, SHIFT(443, 0),
    [1076] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [1078] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [1080] = {.count = 1}, SHIFT(481, 0),
    [1082] = {.count = 1}, SHIFT(480, 0),
    [1084] = {.count = 1}, SHIFT(479, 0),
    [1086] = {.count = 1}, SHIFT(474, 0),
    [1088] = {.count = 1}, SHIFT(475, 0),
    [1090] = {.count = 1}, SHIFT(470, 0),
    [1092] = {.count = 1}, SHIFT(466, 0),
    [1094] = {.count = 1}, SHIFT(462, 0),
    [1096] = {.count = 1}, SHIFT(459, 0),
    [1098] = {.count = 1}, SHIFT(460, 0),
    [1100] = {.count = 1}, SHIFT(457, 0),
    [1102] = {.count = 1}, SHIFT(455, 0),
    [1104] = {.count = 1}, SHIFT(456, 0),
    [1106] = {.count = 1}, SHIFT(458, 0),
    [1108] = {.count = 1}, SHIFT(461, 0),
    [1110] = {.count = 1}, SHIFT(463, 0),
    [1112] = {.count = 1}, SHIFT(464, 0),
    [1114] = {.count = 1}, SHIFT(465, 0),
    [1116] = {.count = 1}, SHIFT(467, 0),
    [1118] = {.count = 1}, SHIFT(468, 0),
    [1120] = {.count = 1}, SHIFT(469, 0),
    [1122] = {.count = 1}, SHIFT(471, 0),
    [1124] = {.count = 1}, SHIFT(472, 0),
    [1126] = {.count = 1}, SHIFT(473, 0),
    [1128] = {.count = 1}, SHIFT(477, 0),
    [1130] = {.count = 1}, SHIFT(476, 0),
    [1132] = {.count = 1}, SHIFT(478, 0),
    [1134] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1136] = {.count = 1}, SHIFT(482, 0),
    [1138] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1140] = {.count = 1}, SHIFT(484, 0),
    [1142] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1144] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1146] = {.count = 1}, SHIFT(488, 0),
    [1148] = {.count = 1}, SHIFT(487, 0),
    [1150] = {.count = 1}, SHIFT(489, 0),
    [1152] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1154] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1156] = {.count = 1}, SHIFT(496, 0),
    [1158] = {.count = 1}, SHIFT(497, 0),
    [1160] = {.count = 1}, SHIFT(498, 0),
    [1162] = {.count = 1}, SHIFT(499, 0),
    [1164] = {.count = 1}, SHIFT(500, 0),
    [1166] = {.count = 1}, SHIFT(495, 0),
    [1168] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1170] = {.count = 1}, SHIFT(503, 0),
    [1172] = {.count = 1}, SHIFT(502, 0),
    [1174] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1176] = {.count = 1}, SHIFT(501, 0),
    [1178] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1180] = {.count = 1}, SHIFT(504, 0),
    [1182] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1184] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1186] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1188] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1190] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
