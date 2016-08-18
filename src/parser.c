#include "tree_sitter/parser.h"

#define STATE_COUNT 838
#define SYMBOL_COUNT 119

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
    sym_function_type,
    sym_block,
    sym__statement,
    sym_send_statement,
    sym_inc_statement,
    sym_dec_statement,
    sym_assignment_statement,
    sym_short_var_declaration,
    sym_return_statement,
    sym__expression,
    sym_call_expression,
    sym_composite_literal,
    sym_literal_value,
    sym__element_list,
    sym_element,
    sym_func_literal,
    sym_unary_expression,
    sym_binary_expression,
    sym__primary_expression,
    sym_qualified_identifier,
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
    aux_sym_block_repeat1,
    anon_sym_LF,
    anon_sym_SEMI,
    anon_sym_package,
    anon_sym_import,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_DOT,
    anon_sym_const,
    anon_sym_EQ,
    anon_sym_var,
    anon_sym_func,
    anon_sym_COMMA,
    anon_sym_type,
    anon_sym_STAR,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_struct,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_map,
    anon_sym_chan,
    anon_sym_LT_DASH,
    anon_sym_PLUS_PLUS,
    anon_sym_DASH_DASH,
    aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH,
    anon_sym_COLON_EQ,
    anon_sym_return,
    anon_sym_COLON,
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
    [sym_function_type] = "function_type",
    [sym_block] = "block",
    [sym__statement] = "_statement",
    [sym_send_statement] = "send_statement",
    [sym_inc_statement] = "inc_statement",
    [sym_dec_statement] = "dec_statement",
    [sym_assignment_statement] = "assignment_statement",
    [sym_short_var_declaration] = "short_var_declaration",
    [sym_return_statement] = "return_statement",
    [sym__expression] = "_expression",
    [sym_call_expression] = "call_expression",
    [sym_composite_literal] = "composite_literal",
    [sym_literal_value] = "literal_value",
    [sym__element_list] = "_element_list",
    [sym_element] = "element",
    [sym_func_literal] = "func_literal",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
    [sym__primary_expression] = "_primary_expression",
    [sym_qualified_identifier] = "qualified_identifier",
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
    [aux_sym_block_repeat1] = "block_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_LF] = "\n",
    [anon_sym_SEMI] = ";",
    [anon_sym_package] = "package",
    [anon_sym_import] = "import",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_DOT] = ".",
    [anon_sym_const] = "const",
    [anon_sym_EQ] = "=",
    [anon_sym_var] = "var",
    [anon_sym_func] = "func",
    [anon_sym_COMMA] = ",",
    [anon_sym_type] = "type",
    [anon_sym_STAR] = "*",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_struct] = "struct",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_interface] = "interface",
    [anon_sym_map] = "map",
    [anon_sym_chan] = "chan",
    [anon_sym_LT_DASH] = "<-",
    [anon_sym_PLUS_PLUS] = "++",
    [anon_sym_DASH_DASH] = "--",
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = "/(*|/|%|<<|>>|&|&^|+|-|||^|)=/",
    [anon_sym_COLON_EQ] = ":=",
    [anon_sym_return] = "return",
    [anon_sym_COLON] = ":",
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
    [sym_function_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_send_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_inc_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_dec_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_assignment_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_short_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_return_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_composite_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_literal_value] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__element_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_element] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_func_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__primary_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_qualified_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_LF] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_package] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_import] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_const] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_func] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_type] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_chan] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_return] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(35);
            if (lookahead == '>')
                ADVANCE(37);
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
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(75);
            if (lookahead == 'r')
                ADVANCE(82);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'v')
                ADVANCE(98);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(anon_sym_LF);
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
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 8:
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 9:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 10:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 11:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 12:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 13:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 14:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 15:
            if (lookahead == '+')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 16:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
        case 17:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 18:
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 19:
            ACCEPT_TOKEN(anon_sym_DASH_DASH);
        case 20:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 21:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
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
            if (lookahead == '=')
                ADVANCE(29);
            ACCEPT_TOKEN(anon_sym_COLON);
        case 29:
            ACCEPT_TOKEN(anon_sym_COLON_EQ);
        case 30:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 31:
            if (lookahead == '-')
                ADVANCE(32);
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 32:
            ACCEPT_TOKEN(anon_sym_LT_DASH);
        case 33:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 34:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 35:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 36:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 37:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(39);
            ACCEPT_TOKEN(anon_sym_GT);
        case 38:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 39:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 42:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 43:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_CARET);
        case 44:
            if (lookahead == '`')
                ADVANCE(45);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(44);
            LEX_ERROR();
        case 45:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_chan);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_const);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_func);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(59);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_import);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_interface);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_map);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'k')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_package);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_return);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(92);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_struct);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(95);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_type);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(100);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_var);
        case 101:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 102:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '|')
                ADVANCE(103);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 103:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 104:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(107);
            LEX_ERROR();
        case 106:
            if (lookahead == '/')
                ADVANCE(22);
            LEX_ERROR();
        case 107:
            if (lookahead == 'a')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'c')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'k')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'g')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'e')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_package);
        case 114:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == '/')
                ADVANCE(106);
            LEX_ERROR();
        case 115:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == 'c')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 't')
                ADVANCE(131);
            if (lookahead == 'v')
                ADVANCE(135);
            LEX_ERROR();
        case 116:
            if (lookahead == 'o')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'n')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 's')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 't')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            ACCEPT_TOKEN(anon_sym_const);
        case 121:
            if (lookahead == 'u')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'n')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'c')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_func);
        case 125:
            if (lookahead == 'm')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'p')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'o')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'r')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 't')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(anon_sym_import);
        case 131:
            if (lookahead == 'y')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'p')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'e')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            ACCEPT_TOKEN(anon_sym_type);
        case 135:
            if (lookahead == 'a')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'r')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_var);
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
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
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == 'c')
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(121);
            if (lookahead == 't')
                ADVANCE(131);
            if (lookahead == 'v')
                ADVANCE(135);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 145:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 146:
            if (lookahead == '-')
                ADVANCE(32);
            LEX_ERROR();
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(106);
            LEX_ERROR();
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '[')
                ADVANCE(41);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == 'c')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'h')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'a')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'n')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            ACCEPT_TOKEN(anon_sym_chan);
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(106);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 176:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(177);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 177:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 178:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 179:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 180:
            if (lookahead == '/')
                ADVANCE(22);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 181:
            if (lookahead == '<')
                ADVANCE(182);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 182:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 183:
            if (lookahead == '=')
                ADVANCE(36);
            LEX_ERROR();
        case 184:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(185);
            ACCEPT_TOKEN(anon_sym_GT);
        case 185:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 186:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 187:
            if (lookahead == '|')
                ADVANCE(103);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ':')
                ADVANCE(191);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 191:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ':')
                ADVANCE(191);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ':')
                ADVANCE(191);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 'r')
                ADVANCE(82);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'v')
                ADVANCE(98);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 197:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '%')
                ADVANCE(200);
            if (lookahead == '&')
                ADVANCE(201);
            if (lookahead == '*')
                ADVANCE(200);
            if (lookahead == '+')
                ADVANCE(200);
            if (lookahead == '-')
                ADVANCE(200);
            if (lookahead == '/')
                ADVANCE(202);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == '<')
                ADVANCE(204);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(205);
            if (lookahead == '^')
                ADVANCE(200);
            if (lookahead == '|')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 201:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(200);
            LEX_ERROR();
        case 202:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 203:
            if (lookahead == '=')
                ADVANCE(29);
            LEX_ERROR();
        case 204:
            if (lookahead == '<')
                ADVANCE(200);
            LEX_ERROR();
        case 205:
            if (lookahead == '>')
                ADVANCE(200);
            LEX_ERROR();
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(207);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 207:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 208:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(208);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 209:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(209);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(207);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 213:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(213);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(217);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(218);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == '<')
                ADVANCE(219);
            if (lookahead == '=')
                ADVANCE(207);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 217:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 218:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 219:
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(217);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(218);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == '<')
                ADVANCE(219);
            if (lookahead == '=')
                ADVANCE(207);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '|')
                ADVANCE(187);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(175);
            if (lookahead == '&')
                ADVANCE(176);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '+')
                ADVANCE(178);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(179);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '<')
                ADVANCE(181);
            if (lookahead == '=')
                ADVANCE(183);
            if (lookahead == '>')
                ADVANCE(184);
            if (lookahead == '^')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(187);
            if (lookahead == '}')
                ADVANCE(104);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(146);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(231);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(231);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(231);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(231);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(231);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(231);
            LEX_ERROR();
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(231);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(231);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(148);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(88);
            LEX_ERROR();
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 240:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(240);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 105,
    [1] = 114,
    [2] = 115,
    [3] = 138,
    [4] = 115,
    [5] = 115,
    [6] = 139,
    [7] = 139,
    [8] = 139,
    [9] = 140,
    [10] = 114,
    [11] = 141,
    [12] = 142,
    [13] = 142,
    [14] = 142,
    [15] = 142,
    [16] = 139,
    [17] = 143,
    [18] = 144,
    [19] = 139,
    [20] = 139,
    [21] = 149,
    [22] = 144,
    [23] = 150,
    [24] = 151,
    [25] = 151,
    [26] = 152,
    [27] = 144,
    [28] = 153,
    [29] = 158,
    [30] = 138,
    [31] = 139,
    [32] = 144,
    [33] = 139,
    [34] = 139,
    [35] = 144,
    [36] = 139,
    [37] = 144,
    [38] = 159,
    [39] = 159,
    [40] = 149,
    [41] = 144,
    [42] = 150,
    [43] = 151,
    [44] = 151,
    [45] = 152,
    [46] = 144,
    [47] = 153,
    [48] = 160,
    [49] = 138,
    [50] = 159,
    [51] = 144,
    [52] = 159,
    [53] = 159,
    [54] = 144,
    [55] = 159,
    [56] = 144,
    [57] = 159,
    [58] = 144,
    [59] = 159,
    [60] = 161,
    [61] = 139,
    [62] = 162,
    [63] = 159,
    [64] = 163,
    [65] = 164,
    [66] = 161,
    [67] = 143,
    [68] = 165,
    [69] = 166,
    [70] = 164,
    [71] = 167,
    [72] = 166,
    [73] = 166,
    [74] = 149,
    [75] = 143,
    [76] = 144,
    [77] = 150,
    [78] = 151,
    [79] = 151,
    [80] = 152,
    [81] = 144,
    [82] = 153,
    [83] = 168,
    [84] = 138,
    [85] = 166,
    [86] = 144,
    [87] = 166,
    [88] = 166,
    [89] = 144,
    [90] = 166,
    [91] = 144,
    [92] = 159,
    [93] = 144,
    [94] = 166,
    [95] = 161,
    [96] = 162,
    [97] = 166,
    [98] = 166,
    [99] = 169,
    [100] = 144,
    [101] = 139,
    [102] = 162,
    [103] = 138,
    [104] = 166,
    [105] = 170,
    [106] = 139,
    [107] = 144,
    [108] = 138,
    [109] = 139,
    [110] = 171,
    [111] = 144,
    [112] = 172,
    [113] = 139,
    [114] = 166,
    [115] = 169,
    [116] = 162,
    [117] = 172,
    [118] = 149,
    [119] = 144,
    [120] = 150,
    [121] = 151,
    [122] = 151,
    [123] = 152,
    [124] = 144,
    [125] = 153,
    [126] = 173,
    [127] = 138,
    [128] = 172,
    [129] = 144,
    [130] = 172,
    [131] = 172,
    [132] = 144,
    [133] = 172,
    [134] = 144,
    [135] = 159,
    [136] = 144,
    [137] = 172,
    [138] = 161,
    [139] = 162,
    [140] = 172,
    [141] = 172,
    [142] = 169,
    [143] = 162,
    [144] = 172,
    [145] = 172,
    [146] = 151,
    [147] = 174,
    [148] = 174,
    [149] = 174,
    [150] = 149,
    [151] = 159,
    [152] = 144,
    [153] = 151,
    [154] = 152,
    [155] = 188,
    [156] = 174,
    [157] = 174,
    [158] = 174,
    [159] = 189,
    [160] = 151,
    [161] = 190,
    [162] = 190,
    [163] = 192,
    [164] = 162,
    [165] = 193,
    [166] = 190,
    [167] = 149,
    [168] = 189,
    [169] = 174,
    [170] = 194,
    [171] = 190,
    [172] = 190,
    [173] = 190,
    [174] = 189,
    [175] = 162,
    [176] = 190,
    [177] = 190,
    [178] = 162,
    [179] = 192,
    [180] = 192,
    [181] = 195,
    [182] = 143,
    [183] = 165,
    [184] = 195,
    [185] = 195,
    [186] = 151,
    [187] = 151,
    [188] = 190,
    [189] = 143,
    [190] = 149,
    [191] = 144,
    [192] = 150,
    [193] = 151,
    [194] = 196,
    [195] = 151,
    [196] = 152,
    [197] = 144,
    [198] = 153,
    [199] = 198,
    [200] = 138,
    [201] = 151,
    [202] = 144,
    [203] = 151,
    [204] = 151,
    [205] = 144,
    [206] = 151,
    [207] = 144,
    [208] = 159,
    [209] = 144,
    [210] = 151,
    [211] = 161,
    [212] = 162,
    [213] = 151,
    [214] = 151,
    [215] = 139,
    [216] = 199,
    [217] = 151,
    [218] = 139,
    [219] = 206,
    [220] = 206,
    [221] = 206,
    [222] = 162,
    [223] = 149,
    [224] = 190,
    [225] = 208,
    [226] = 209,
    [227] = 206,
    [228] = 206,
    [229] = 206,
    [230] = 189,
    [231] = 162,
    [232] = 206,
    [233] = 206,
    [234] = 139,
    [235] = 151,
    [236] = 210,
    [237] = 210,
    [238] = 210,
    [239] = 149,
    [240] = 211,
    [241] = 210,
    [242] = 210,
    [243] = 210,
    [244] = 189,
    [245] = 162,
    [246] = 210,
    [247] = 210,
    [248] = 195,
    [249] = 151,
    [250] = 210,
    [251] = 196,
    [252] = 162,
    [253] = 210,
    [254] = 210,
    [255] = 210,
    [256] = 139,
    [257] = 208,
    [258] = 208,
    [259] = 208,
    [260] = 208,
    [261] = 208,
    [262] = 208,
    [263] = 208,
    [264] = 210,
    [265] = 210,
    [266] = 210,
    [267] = 210,
    [268] = 210,
    [269] = 210,
    [270] = 139,
    [271] = 165,
    [272] = 151,
    [273] = 212,
    [274] = 212,
    [275] = 212,
    [276] = 149,
    [277] = 213,
    [278] = 212,
    [279] = 212,
    [280] = 212,
    [281] = 189,
    [282] = 162,
    [283] = 212,
    [284] = 212,
    [285] = 195,
    [286] = 151,
    [287] = 212,
    [288] = 196,
    [289] = 162,
    [290] = 212,
    [291] = 212,
    [292] = 212,
    [293] = 165,
    [294] = 208,
    [295] = 208,
    [296] = 208,
    [297] = 208,
    [298] = 208,
    [299] = 208,
    [300] = 208,
    [301] = 212,
    [302] = 212,
    [303] = 212,
    [304] = 212,
    [305] = 212,
    [306] = 212,
    [307] = 165,
    [308] = 165,
    [309] = 212,
    [310] = 210,
    [311] = 195,
    [312] = 151,
    [313] = 206,
    [314] = 196,
    [315] = 162,
    [316] = 206,
    [317] = 206,
    [318] = 206,
    [319] = 190,
    [320] = 199,
    [321] = 208,
    [322] = 208,
    [323] = 208,
    [324] = 208,
    [325] = 139,
    [326] = 139,
    [327] = 208,
    [328] = 208,
    [329] = 208,
    [330] = 208,
    [331] = 206,
    [332] = 206,
    [333] = 206,
    [334] = 206,
    [335] = 206,
    [336] = 151,
    [337] = 214,
    [338] = 214,
    [339] = 214,
    [340] = 149,
    [341] = 215,
    [342] = 214,
    [343] = 214,
    [344] = 214,
    [345] = 189,
    [346] = 162,
    [347] = 214,
    [348] = 214,
    [349] = 195,
    [350] = 151,
    [351] = 214,
    [352] = 196,
    [353] = 162,
    [354] = 214,
    [355] = 214,
    [356] = 214,
    [357] = 208,
    [358] = 208,
    [359] = 208,
    [360] = 208,
    [361] = 208,
    [362] = 208,
    [363] = 214,
    [364] = 214,
    [365] = 214,
    [366] = 214,
    [367] = 214,
    [368] = 165,
    [369] = 214,
    [370] = 151,
    [371] = 216,
    [372] = 216,
    [373] = 216,
    [374] = 149,
    [375] = 220,
    [376] = 216,
    [377] = 216,
    [378] = 216,
    [379] = 189,
    [380] = 162,
    [381] = 216,
    [382] = 216,
    [383] = 195,
    [384] = 151,
    [385] = 216,
    [386] = 196,
    [387] = 162,
    [388] = 216,
    [389] = 216,
    [390] = 216,
    [391] = 199,
    [392] = 208,
    [393] = 208,
    [394] = 208,
    [395] = 208,
    [396] = 208,
    [397] = 208,
    [398] = 216,
    [399] = 216,
    [400] = 216,
    [401] = 216,
    [402] = 216,
    [403] = 165,
    [404] = 216,
    [405] = 165,
    [406] = 206,
    [407] = 196,
    [408] = 162,
    [409] = 208,
    [410] = 208,
    [411] = 139,
    [412] = 139,
    [413] = 169,
    [414] = 162,
    [415] = 151,
    [416] = 151,
    [417] = 174,
    [418] = 144,
    [419] = 151,
    [420] = 208,
    [421] = 208,
    [422] = 144,
    [423] = 208,
    [424] = 208,
    [425] = 208,
    [426] = 208,
    [427] = 174,
    [428] = 174,
    [429] = 174,
    [430] = 174,
    [431] = 174,
    [432] = 151,
    [433] = 165,
    [434] = 174,
    [435] = 151,
    [436] = 195,
    [437] = 151,
    [438] = 165,
    [439] = 151,
    [440] = 151,
    [441] = 190,
    [442] = 189,
    [443] = 162,
    [444] = 174,
    [445] = 221,
    [446] = 151,
    [447] = 222,
    [448] = 222,
    [449] = 193,
    [450] = 222,
    [451] = 149,
    [452] = 189,
    [453] = 223,
    [454] = 222,
    [455] = 222,
    [456] = 222,
    [457] = 189,
    [458] = 162,
    [459] = 222,
    [460] = 222,
    [461] = 162,
    [462] = 193,
    [463] = 193,
    [464] = 195,
    [465] = 151,
    [466] = 222,
    [467] = 196,
    [468] = 162,
    [469] = 222,
    [470] = 222,
    [471] = 222,
    [472] = 208,
    [473] = 208,
    [474] = 208,
    [475] = 208,
    [476] = 208,
    [477] = 208,
    [478] = 222,
    [479] = 222,
    [480] = 222,
    [481] = 222,
    [482] = 222,
    [483] = 165,
    [484] = 222,
    [485] = 208,
    [486] = 208,
    [487] = 208,
    [488] = 208,
    [489] = 208,
    [490] = 208,
    [491] = 190,
    [492] = 190,
    [493] = 190,
    [494] = 190,
    [495] = 190,
    [496] = 165,
    [497] = 190,
    [498] = 144,
    [499] = 159,
    [500] = 144,
    [501] = 151,
    [502] = 151,
    [503] = 149,
    [504] = 144,
    [505] = 150,
    [506] = 151,
    [507] = 144,
    [508] = 153,
    [509] = 198,
    [510] = 138,
    [511] = 151,
    [512] = 144,
    [513] = 151,
    [514] = 151,
    [515] = 144,
    [516] = 151,
    [517] = 161,
    [518] = 162,
    [519] = 151,
    [520] = 151,
    [521] = 174,
    [522] = 144,
    [523] = 151,
    [524] = 144,
    [525] = 151,
    [526] = 151,
    [527] = 195,
    [528] = 143,
    [529] = 165,
    [530] = 195,
    [531] = 195,
    [532] = 151,
    [533] = 143,
    [534] = 165,
    [535] = 151,
    [536] = 151,
    [537] = 169,
    [538] = 162,
    [539] = 151,
    [540] = 151,
    [541] = 172,
    [542] = 195,
    [543] = 151,
    [544] = 174,
    [545] = 196,
    [546] = 162,
    [547] = 174,
    [548] = 174,
    [549] = 174,
    [550] = 144,
    [551] = 172,
    [552] = 172,
    [553] = 224,
    [554] = 143,
    [555] = 165,
    [556] = 224,
    [557] = 224,
    [558] = 172,
    [559] = 143,
    [560] = 165,
    [561] = 172,
    [562] = 172,
    [563] = 174,
    [564] = 144,
    [565] = 166,
    [566] = 144,
    [567] = 166,
    [568] = 166,
    [569] = 165,
    [570] = 225,
    [571] = 143,
    [572] = 165,
    [573] = 225,
    [574] = 225,
    [575] = 166,
    [576] = 143,
    [577] = 165,
    [578] = 166,
    [579] = 166,
    [580] = 164,
    [581] = 162,
    [582] = 139,
    [583] = 143,
    [584] = 165,
    [585] = 139,
    [586] = 139,
    [587] = 159,
    [588] = 169,
    [589] = 162,
    [590] = 159,
    [591] = 159,
    [592] = 174,
    [593] = 144,
    [594] = 159,
    [595] = 144,
    [596] = 159,
    [597] = 159,
    [598] = 226,
    [599] = 143,
    [600] = 165,
    [601] = 226,
    [602] = 226,
    [603] = 159,
    [604] = 143,
    [605] = 165,
    [606] = 159,
    [607] = 159,
    [608] = 144,
    [609] = 139,
    [610] = 161,
    [611] = 162,
    [612] = 139,
    [613] = 139,
    [614] = 169,
    [615] = 162,
    [616] = 139,
    [617] = 139,
    [618] = 174,
    [619] = 144,
    [620] = 139,
    [621] = 144,
    [622] = 139,
    [623] = 139,
    [624] = 164,
    [625] = 139,
    [626] = 139,
    [627] = 165,
    [628] = 139,
    [629] = 139,
    [630] = 143,
    [631] = 165,
    [632] = 138,
    [633] = 143,
    [634] = 149,
    [635] = 227,
    [636] = 143,
    [637] = 165,
    [638] = 227,
    [639] = 227,
    [640] = 228,
    [641] = 228,
    [642] = 139,
    [643] = 143,
    [644] = 149,
    [645] = 144,
    [646] = 150,
    [647] = 151,
    [648] = 196,
    [649] = 151,
    [650] = 152,
    [651] = 144,
    [652] = 153,
    [653] = 229,
    [654] = 138,
    [655] = 228,
    [656] = 144,
    [657] = 228,
    [658] = 228,
    [659] = 144,
    [660] = 228,
    [661] = 144,
    [662] = 159,
    [663] = 144,
    [664] = 228,
    [665] = 161,
    [666] = 162,
    [667] = 228,
    [668] = 228,
    [669] = 162,
    [670] = 139,
    [671] = 139,
    [672] = 169,
    [673] = 162,
    [674] = 228,
    [675] = 228,
    [676] = 174,
    [677] = 144,
    [678] = 228,
    [679] = 144,
    [680] = 228,
    [681] = 228,
    [682] = 227,
    [683] = 228,
    [684] = 165,
    [685] = 228,
    [686] = 228,
    [687] = 139,
    [688] = 165,
    [689] = 138,
    [690] = 138,
    [691] = 149,
    [692] = 227,
    [693] = 228,
    [694] = 139,
    [695] = 139,
    [696] = 139,
    [697] = 230,
    [698] = 143,
    [699] = 232,
    [700] = 230,
    [701] = 138,
    [702] = 232,
    [703] = 230,
    [704] = 139,
    [705] = 165,
    [706] = 139,
    [707] = 139,
    [708] = 143,
    [709] = 165,
    [710] = 233,
    [711] = 233,
    [712] = 208,
    [713] = 149,
    [714] = 144,
    [715] = 150,
    [716] = 151,
    [717] = 151,
    [718] = 152,
    [719] = 144,
    [720] = 153,
    [721] = 234,
    [722] = 138,
    [723] = 233,
    [724] = 144,
    [725] = 233,
    [726] = 233,
    [727] = 144,
    [728] = 233,
    [729] = 144,
    [730] = 159,
    [731] = 144,
    [732] = 233,
    [733] = 161,
    [734] = 162,
    [735] = 233,
    [736] = 233,
    [737] = 169,
    [738] = 162,
    [739] = 233,
    [740] = 233,
    [741] = 174,
    [742] = 144,
    [743] = 233,
    [744] = 144,
    [745] = 233,
    [746] = 233,
    [747] = 235,
    [748] = 143,
    [749] = 165,
    [750] = 235,
    [751] = 235,
    [752] = 233,
    [753] = 143,
    [754] = 165,
    [755] = 233,
    [756] = 233,
    [757] = 139,
    [758] = 208,
    [759] = 139,
    [760] = 139,
    [761] = 230,
    [762] = 143,
    [763] = 139,
    [764] = 165,
    [765] = 139,
    [766] = 139,
    [767] = 143,
    [768] = 165,
    [769] = 236,
    [770] = 236,
    [771] = 208,
    [772] = 149,
    [773] = 144,
    [774] = 150,
    [775] = 151,
    [776] = 151,
    [777] = 152,
    [778] = 144,
    [779] = 153,
    [780] = 237,
    [781] = 138,
    [782] = 236,
    [783] = 144,
    [784] = 236,
    [785] = 236,
    [786] = 144,
    [787] = 236,
    [788] = 144,
    [789] = 159,
    [790] = 144,
    [791] = 236,
    [792] = 161,
    [793] = 162,
    [794] = 236,
    [795] = 236,
    [796] = 169,
    [797] = 162,
    [798] = 236,
    [799] = 236,
    [800] = 174,
    [801] = 144,
    [802] = 236,
    [803] = 144,
    [804] = 236,
    [805] = 236,
    [806] = 238,
    [807] = 143,
    [808] = 165,
    [809] = 238,
    [810] = 238,
    [811] = 236,
    [812] = 143,
    [813] = 165,
    [814] = 236,
    [815] = 236,
    [816] = 139,
    [817] = 208,
    [818] = 139,
    [819] = 115,
    [820] = 115,
    [821] = 239,
    [822] = 240,
    [823] = 115,
    [824] = 115,
    [825] = 139,
    [826] = 139,
    [827] = 165,
    [828] = 115,
    [829] = 240,
    [830] = 139,
    [831] = 115,
    [832] = 239,
    [833] = 165,
    [834] = 114,
    [835] = 140,
    [836] = 114,
    [837] = 140,
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
        [anon_sym_LF] = 44,
        [anon_sym_SEMI] = 44,
        [sym_comment] = 8,
    },
    [7] = {
        [anon_sym_LF] = 46,
        [anon_sym_SEMI] = 46,
        [sym_comment] = 8,
    },
    [8] = {
        [anon_sym_LF] = 48,
        [anon_sym_SEMI] = 48,
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
        [aux_sym_source_file_repeat2] = 50,
        [ts_builtin_sym_end] = 52,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 52,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 54,
        [sym__string_literal] = 56,
        [anon_sym_LPAREN] = 58,
        [anon_sym_DOT] = 60,
        [sym_identifier] = 60,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 64,
        [sym_identifier_list] = 66,
        [anon_sym_LPAREN] = 68,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 72,
        [sym_identifier_list] = 74,
        [anon_sym_LPAREN] = 76,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [14] = {
        [sym_parameters] = 78,
        [anon_sym_LPAREN] = 80,
        [sym_identifier] = 82,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_type_spec] = 84,
        [anon_sym_LPAREN] = 86,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [16] = {
        [anon_sym_LF] = 90,
        [anon_sym_SEMI] = 90,
        [sym_comment] = 8,
    },
    [17] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 94,
        [anon_sym_RPAREN] = 96,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 98,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [19] = {
        [anon_sym_LF] = 120,
        [anon_sym_SEMI] = 120,
        [sym_comment] = 8,
    },
    [20] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [sym_comment] = 8,
    },
    [21] = {
        [sym_parameters] = 124,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__type] = 128,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [23] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 132,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 142,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 154,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACE] = 156,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_LBRACK] = 158,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 160,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 162,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_chan] = 164,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 166,
        [sym_comment] = 8,
    },
    [30] = {
        [sym_identifier] = 168,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_LF] = 170,
        [anon_sym_SEMI] = 170,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 172,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [33] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_LF] = 176,
        [anon_sym_SEMI] = 176,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__type] = 178,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [36] = {
        [anon_sym_LF] = 180,
        [anon_sym_SEMI] = 180,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__type] = 182,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 204,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_parameters] = 206,
        [anon_sym_LPAREN] = 208,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 210,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 212,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 214,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_LBRACE] = 216,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_LBRACE] = 218,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_LBRACK] = 220,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__type] = 222,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 224,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [47] = {
        [anon_sym_chan] = 226,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_DOT] = 228,
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_identifier] = 230,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACK] = 170,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__type] = 232,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RBRACK] = 174,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RBRACK] = 176,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 234,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 180,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 236,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACK] = 238,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__type] = 240,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_RBRACK] = 242,
        [sym_comment] = 8,
    },
    [60] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 246,
        [anon_sym_RBRACE] = 248,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_LF] = 252,
        [anon_sym_SEMI] = 252,
        [sym_comment] = 8,
    },
    [62] = {
        [anon_sym_RBRACE] = 254,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_RBRACK] = 256,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_parameters] = 258,
        [anon_sym_LF] = 252,
        [anon_sym_SEMI] = 252,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_parameters] = 260,
        [sym__type] = 260,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 262,
        [anon_sym_SEMI] = 262,
        [anon_sym_LPAREN] = 264,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [66] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 266,
        [anon_sym_RBRACE] = 268,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__parameter_list] = 270,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 274,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 278,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RPAREN] = 280,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [70] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__type] = 286,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_RPAREN] = 280,
        [anon_sym_func] = 290,
        [anon_sym_COMMA] = 282,
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
    [72] = {
        [anon_sym_RPAREN] = 308,
        [anon_sym_COMMA] = 308,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [74] = {
        [sym_parameters] = 310,
        [anon_sym_LPAREN] = 312,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__parameter_list] = 314,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 316,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 318,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
    [77] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 320,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 322,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_LBRACE] = 324,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_LBRACE] = 326,
        [sym_comment] = 8,
    },
    [80] = {
        [anon_sym_LBRACK] = 328,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__type] = 330,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
        [anon_sym_STAR] = 292,
        [anon_sym_LBRACK] = 294,
        [anon_sym_struct] = 296,
        [anon_sym_interface] = 298,
        [anon_sym_map] = 300,
        [anon_sym_chan] = 302,
        [anon_sym_LT_DASH] = 332,
        [sym_identifier] = 306,
        [sym_comment] = 8,
    },
    [82] = {
        [anon_sym_chan] = 334,
        [sym_comment] = 8,
    },
    [83] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_DOT] = 336,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [84] = {
        [sym_identifier] = 338,
        [sym_comment] = 8,
    },
    [85] = {
        [anon_sym_RPAREN] = 170,
        [anon_sym_COMMA] = 170,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__type] = 340,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
        [anon_sym_RPAREN] = 174,
        [anon_sym_COMMA] = 174,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RPAREN] = 176,
        [anon_sym_COMMA] = 176,
        [sym_comment] = 8,
    },
    [89] = {
        [sym__type] = 342,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
    [90] = {
        [anon_sym_RPAREN] = 180,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__type] = 344,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RBRACK] = 346,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__type] = 348,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
    [94] = {
        [anon_sym_RPAREN] = 242,
        [anon_sym_COMMA] = 242,
        [sym_comment] = 8,
    },
    [95] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 350,
        [anon_sym_RBRACE] = 352,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_RBRACE] = 354,
        [sym_comment] = 8,
    },
    [97] = {
        [anon_sym_RPAREN] = 256,
        [anon_sym_COMMA] = 256,
        [sym_comment] = 8,
    },
    [98] = {
        [anon_sym_RPAREN] = 356,
        [anon_sym_COMMA] = 356,
        [sym_comment] = 8,
    },
    [99] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 362,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 366,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__type] = 370,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [101] = {
        [anon_sym_LF] = 392,
        [anon_sym_SEMI] = 392,
        [sym_comment] = 8,
    },
    [102] = {
        [anon_sym_RBRACE] = 394,
        [sym_comment] = 8,
    },
    [103] = {
        [sym_identifier] = 370,
        [sym_comment] = 8,
    },
    [104] = {
        [anon_sym_RPAREN] = 396,
        [anon_sym_COMMA] = 396,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__type] = 398,
        [sym_pointer_type] = 398,
        [sym_array_type] = 398,
        [sym_slice_type] = 398,
        [sym_struct_type] = 398,
        [sym_interface_type] = 398,
        [sym_map_type] = 398,
        [sym_channel_type] = 398,
        [sym_function_type] = 398,
        [sym_qualified_identifier] = 398,
        [sym__string_literal] = 400,
        [aux_sym_identifier_list_repeat1] = 402,
        [anon_sym_LF] = 404,
        [anon_sym_SEMI] = 404,
        [anon_sym_func] = 398,
        [anon_sym_COMMA] = 406,
        [anon_sym_STAR] = 398,
        [anon_sym_LBRACK] = 398,
        [anon_sym_struct] = 398,
        [anon_sym_interface] = 398,
        [anon_sym_map] = 398,
        [anon_sym_chan] = 398,
        [anon_sym_LT_DASH] = 398,
        [sym_identifier] = 398,
        [sym_raw_string_literal] = 408,
        [sym_interpreted_string_literal] = 408,
        [sym_comment] = 8,
    },
    [106] = {
        [anon_sym_LF] = 410,
        [anon_sym_SEMI] = 410,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__type] = 412,
        [sym_pointer_type] = 412,
        [sym_array_type] = 412,
        [sym_slice_type] = 412,
        [sym_struct_type] = 412,
        [sym_interface_type] = 412,
        [sym_map_type] = 412,
        [sym_channel_type] = 412,
        [sym_function_type] = 412,
        [sym_qualified_identifier] = 412,
        [anon_sym_func] = 412,
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
    [108] = {
        [sym_identifier] = 414,
        [sym_comment] = 8,
    },
    [109] = {
        [anon_sym_LF] = 416,
        [anon_sym_SEMI] = 416,
        [sym_comment] = 8,
    },
    [110] = {
        [sym__type] = 418,
        [sym_pointer_type] = 418,
        [sym_array_type] = 418,
        [sym_slice_type] = 418,
        [sym_struct_type] = 418,
        [sym_interface_type] = 418,
        [sym_map_type] = 418,
        [sym_channel_type] = 418,
        [sym_function_type] = 418,
        [sym_qualified_identifier] = 418,
        [aux_sym_identifier_list_repeat1] = 420,
        [anon_sym_func] = 418,
        [anon_sym_COMMA] = 406,
        [anon_sym_STAR] = 418,
        [anon_sym_LBRACK] = 418,
        [anon_sym_struct] = 418,
        [anon_sym_interface] = 418,
        [anon_sym_map] = 418,
        [anon_sym_chan] = 418,
        [anon_sym_LT_DASH] = 418,
        [sym_identifier] = 418,
        [sym_comment] = 8,
    },
    [111] = {
        [sym__type] = 422,
        [sym_pointer_type] = 422,
        [sym_array_type] = 422,
        [sym_slice_type] = 422,
        [sym_struct_type] = 422,
        [sym_interface_type] = 422,
        [sym_map_type] = 422,
        [sym_channel_type] = 422,
        [sym_function_type] = 422,
        [sym_qualified_identifier] = 422,
        [anon_sym_func] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_LBRACK] = 422,
        [anon_sym_struct] = 422,
        [anon_sym_interface] = 422,
        [anon_sym_map] = 422,
        [anon_sym_chan] = 422,
        [anon_sym_LT_DASH] = 422,
        [sym_identifier] = 422,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__string_literal] = 424,
        [anon_sym_LF] = 410,
        [anon_sym_SEMI] = 410,
        [sym_raw_string_literal] = 408,
        [sym_interpreted_string_literal] = 408,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_RPAREN] = 428,
        [anon_sym_COMMA] = 428,
        [sym_comment] = 8,
    },
    [115] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 430,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 432,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_RBRACE] = 434,
        [sym_comment] = 8,
    },
    [117] = {
        [sym__string_literal] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [118] = {
        [sym_parameters] = 436,
        [anon_sym_LPAREN] = 438,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__type] = 440,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [120] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 442,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 444,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_LBRACE] = 446,
        [sym_comment] = 8,
    },
    [122] = {
        [anon_sym_LBRACE] = 448,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_LBRACK] = 450,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__type] = 452,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 454,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_chan] = 456,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__string_literal] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 458,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [127] = {
        [sym_identifier] = 460,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__string_literal] = 170,
        [anon_sym_LF] = 170,
        [anon_sym_SEMI] = 170,
        [sym_raw_string_literal] = 170,
        [sym_interpreted_string_literal] = 170,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__type] = 462,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__string_literal] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__string_literal] = 176,
        [anon_sym_LF] = 176,
        [anon_sym_SEMI] = 176,
        [sym_raw_string_literal] = 176,
        [sym_interpreted_string_literal] = 176,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__type] = 464,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__string_literal] = 180,
        [anon_sym_LF] = 180,
        [anon_sym_SEMI] = 180,
        [sym_raw_string_literal] = 180,
        [sym_interpreted_string_literal] = 180,
        [sym_comment] = 8,
    },
    [134] = {
        [sym__type] = 466,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [135] = {
        [anon_sym_RBRACK] = 468,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__type] = 470,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__string_literal] = 242,
        [anon_sym_LF] = 242,
        [anon_sym_SEMI] = 242,
        [sym_raw_string_literal] = 242,
        [sym_interpreted_string_literal] = 242,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 472,
        [anon_sym_RBRACE] = 474,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [139] = {
        [anon_sym_RBRACE] = 476,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__string_literal] = 256,
        [anon_sym_LF] = 256,
        [anon_sym_SEMI] = 256,
        [sym_raw_string_literal] = 256,
        [sym_interpreted_string_literal] = 256,
        [sym_comment] = 8,
    },
    [141] = {
        [sym__string_literal] = 356,
        [anon_sym_LF] = 356,
        [anon_sym_SEMI] = 356,
        [sym_raw_string_literal] = 356,
        [sym_interpreted_string_literal] = 356,
        [sym_comment] = 8,
    },
    [142] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 478,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 480,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [143] = {
        [anon_sym_RBRACE] = 482,
        [sym_comment] = 8,
    },
    [144] = {
        [sym__string_literal] = 396,
        [anon_sym_LF] = 396,
        [anon_sym_SEMI] = 396,
        [sym_raw_string_literal] = 396,
        [sym_interpreted_string_literal] = 396,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__string_literal] = 428,
        [anon_sym_LF] = 428,
        [anon_sym_SEMI] = 428,
        [sym_raw_string_literal] = 428,
        [sym_interpreted_string_literal] = 428,
        [sym_comment] = 8,
    },
    [146] = {
        [sym_literal_value] = 484,
        [anon_sym_LBRACE] = 486,
        [sym_comment] = 8,
    },
    [147] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 492,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [148] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACK] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_LPAREN] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_RBRACK] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [150] = {
        [sym_parameters] = 506,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [151] = {
        [anon_sym_RBRACK] = 510,
        [sym_comment] = 8,
    },
    [152] = {
        [sym__type] = 512,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [153] = {
        [anon_sym_LBRACE] = 514,
        [sym_comment] = 8,
    },
    [154] = {
        [anon_sym_LBRACK] = 516,
        [sym_comment] = 8,
    },
    [155] = {
        [sym_literal_value] = 484,
        [anon_sym_LPAREN] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_RBRACK] = 504,
        [anon_sym_LBRACE] = 486,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [156] = {
        [anon_sym_LPAREN] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_RBRACK] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [157] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_RBRACK] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [158] = {
        [anon_sym_LPAREN] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_RBRACK] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [159] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 530,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 540,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [160] = {
        [sym_literal_value] = 548,
        [anon_sym_LBRACE] = 550,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_LPAREN] = 552,
        [anon_sym_COMMA] = 554,
        [anon_sym_STAR] = 556,
        [anon_sym_RBRACE] = 554,
        [anon_sym_COLON] = 558,
        [anon_sym_SLASH] = 556,
        [anon_sym_PERCENT] = 556,
        [anon_sym_LT_LT] = 556,
        [anon_sym_GT_GT] = 556,
        [anon_sym_AMP] = 556,
        [anon_sym_AMP_CARET] = 556,
        [anon_sym_PLUS] = 560,
        [anon_sym_DASH] = 560,
        [anon_sym_PIPE] = 560,
        [anon_sym_CARET] = 560,
        [anon_sym_EQ_EQ] = 562,
        [anon_sym_BANG_EQ] = 562,
        [anon_sym_LT] = 562,
        [anon_sym_LT_EQ] = 562,
        [anon_sym_GT] = 562,
        [anon_sym_GT_EQ] = 562,
        [anon_sym_AMP_AMP] = 564,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [162] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACE] = 502,
        [anon_sym_COLON] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [163] = {
        [anon_sym_COMMA] = 554,
        [anon_sym_RBRACE] = 554,
        [anon_sym_COLON] = 558,
        [sym_comment] = 8,
    },
    [164] = {
        [anon_sym_RBRACE] = 568,
        [sym_comment] = 8,
    },
    [165] = {
        [anon_sym_COMMA] = 570,
        [anon_sym_RBRACE] = 572,
        [sym_comment] = 8,
    },
    [166] = {
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_RBRACE] = 504,
        [anon_sym_COLON] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [167] = {
        [sym_parameters] = 574,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [168] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 576,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 578,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [169] = {
        [anon_sym_LPAREN] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_RBRACK] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [170] = {
        [sym_literal_value] = 548,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 550,
        [anon_sym_RBRACE] = 504,
        [anon_sym_COLON] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [171] = {
        [anon_sym_LPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_RBRACE] = 416,
        [anon_sym_COLON] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [172] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_RBRACE] = 518,
        [anon_sym_COLON] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [173] = {
        [anon_sym_LPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_RBRACE] = 520,
        [anon_sym_COLON] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [174] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 582,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 584,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [175] = {
        [anon_sym_RBRACE] = 586,
        [sym_comment] = 8,
    },
    [176] = {
        [anon_sym_LPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_RBRACE] = 580,
        [anon_sym_COLON] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_LPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_RBRACE] = 588,
        [anon_sym_COLON] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [178] = {
        [anon_sym_RBRACE] = 590,
        [sym_comment] = 8,
    },
    [179] = {
        [anon_sym_COMMA] = 580,
        [anon_sym_RBRACE] = 580,
        [anon_sym_COLON] = 580,
        [sym_comment] = 8,
    },
    [180] = {
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACE] = 588,
        [anon_sym_COLON] = 588,
        [sym_comment] = 8,
    },
    [181] = {
        [sym_parameters] = 592,
        [sym__type] = 592,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 596,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 608,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [182] = {
        [sym__parameter_list] = 620,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 622,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [183] = {
        [anon_sym_RPAREN] = 624,
        [sym_comment] = 8,
    },
    [184] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_block] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_LBRACE] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [185] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_block] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_LBRACE] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [186] = {
        [sym_block] = 628,
        [anon_sym_LBRACE] = 608,
        [sym_comment] = 8,
    },
    [187] = {
        [sym_block] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [188] = {
        [anon_sym_LPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_RBRACE] = 630,
        [anon_sym_COLON] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [189] = {
        [sym__parameter_list] = 632,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 634,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [190] = {
        [sym_parameters] = 636,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__type] = 638,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [192] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 640,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 642,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [193] = {
        [anon_sym_LBRACE] = 644,
        [sym_comment] = 8,
    },
    [194] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 660,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 664,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [195] = {
        [anon_sym_LBRACE] = 674,
        [sym_comment] = 8,
    },
    [196] = {
        [anon_sym_LBRACK] = 676,
        [sym_comment] = 8,
    },
    [197] = {
        [sym__type] = 678,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 680,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [198] = {
        [anon_sym_chan] = 682,
        [sym_comment] = 8,
    },
    [199] = {
        [sym_block] = 122,
        [anon_sym_DOT] = 684,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [200] = {
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [201] = {
        [sym_block] = 170,
        [anon_sym_LBRACE] = 170,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__type] = 688,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [203] = {
        [sym_block] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [204] = {
        [sym_block] = 176,
        [anon_sym_LBRACE] = 176,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__type] = 690,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [206] = {
        [sym_block] = 180,
        [anon_sym_LBRACE] = 180,
        [sym_comment] = 8,
    },
    [207] = {
        [sym__type] = 692,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [208] = {
        [anon_sym_RBRACK] = 694,
        [sym_comment] = 8,
    },
    [209] = {
        [sym__type] = 696,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [210] = {
        [sym_block] = 242,
        [anon_sym_LBRACE] = 242,
        [sym_comment] = 8,
    },
    [211] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 698,
        [anon_sym_RBRACE] = 700,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [212] = {
        [anon_sym_RBRACE] = 702,
        [sym_comment] = 8,
    },
    [213] = {
        [sym_block] = 256,
        [anon_sym_LBRACE] = 256,
        [sym_comment] = 8,
    },
    [214] = {
        [sym_block] = 356,
        [anon_sym_LBRACE] = 356,
        [sym_comment] = 8,
    },
    [215] = {
        [anon_sym_LF] = 704,
        [anon_sym_SEMI] = 704,
        [sym_comment] = 8,
    },
    [216] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 706,
        [anon_sym_COLON_EQ] = 708,
        [sym_comment] = 8,
    },
    [217] = {
        [sym_literal_value] = 710,
        [anon_sym_LBRACE] = 712,
        [sym_comment] = 8,
    },
    [218] = {
        [anon_sym_LF] = 714,
        [anon_sym_SEMI] = 714,
        [sym_comment] = 8,
    },
    [219] = {
        [aux_sym_expression_list_repeat1] = 716,
        [anon_sym_LF] = 704,
        [anon_sym_SEMI] = 704,
        [anon_sym_LPAREN] = 718,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 722,
        [anon_sym_LT_DASH] = 724,
        [anon_sym_PLUS_PLUS] = 726,
        [anon_sym_DASH_DASH] = 728,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 730,
        [anon_sym_COLON_EQ] = 730,
        [anon_sym_SLASH] = 722,
        [anon_sym_PERCENT] = 722,
        [anon_sym_LT_LT] = 722,
        [anon_sym_GT_GT] = 722,
        [anon_sym_AMP] = 722,
        [anon_sym_AMP_CARET] = 722,
        [anon_sym_PLUS] = 732,
        [anon_sym_DASH] = 732,
        [anon_sym_PIPE] = 732,
        [anon_sym_CARET] = 732,
        [anon_sym_EQ_EQ] = 734,
        [anon_sym_BANG_EQ] = 734,
        [anon_sym_LT] = 734,
        [anon_sym_LT_EQ] = 734,
        [anon_sym_GT] = 734,
        [anon_sym_GT_EQ] = 734,
        [anon_sym_AMP_AMP] = 736,
        [anon_sym_PIPE_PIPE] = 738,
        [sym_comment] = 8,
    },
    [220] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LT_DASH] = 502,
        [anon_sym_PLUS_PLUS] = 502,
        [anon_sym_DASH_DASH] = 502,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [221] = {
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LT_DASH] = 504,
        [anon_sym_PLUS_PLUS] = 504,
        [anon_sym_DASH_DASH] = 504,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 504,
        [anon_sym_COLON_EQ] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [222] = {
        [anon_sym_RBRACE] = 740,
        [sym_comment] = 8,
    },
    [223] = {
        [sym_parameters] = 742,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [224] = {
        [anon_sym_LPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_RBRACE] = 744,
        [anon_sym_COLON] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [225] = {
        [sym_expression_list] = 746,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [226] = {
        [sym_literal_value] = 710,
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 712,
        [anon_sym_LT_DASH] = 504,
        [anon_sym_PLUS_PLUS] = 504,
        [anon_sym_DASH_DASH] = 504,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 504,
        [anon_sym_COLON_EQ] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [227] = {
        [aux_sym_expression_list_repeat1] = 416,
        [anon_sym_LF] = 416,
        [anon_sym_SEMI] = 416,
        [anon_sym_LPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_LT_DASH] = 416,
        [anon_sym_PLUS_PLUS] = 416,
        [anon_sym_DASH_DASH] = 416,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 416,
        [anon_sym_COLON_EQ] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [228] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_LT_DASH] = 518,
        [anon_sym_PLUS_PLUS] = 518,
        [anon_sym_DASH_DASH] = 518,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 518,
        [anon_sym_COLON_EQ] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [229] = {
        [aux_sym_expression_list_repeat1] = 520,
        [anon_sym_LF] = 520,
        [anon_sym_SEMI] = 520,
        [anon_sym_LPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_LT_DASH] = 520,
        [anon_sym_PLUS_PLUS] = 520,
        [anon_sym_DASH_DASH] = 520,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 520,
        [anon_sym_COLON_EQ] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [230] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 764,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 766,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [231] = {
        [anon_sym_RBRACE] = 768,
        [sym_comment] = 8,
    },
    [232] = {
        [aux_sym_expression_list_repeat1] = 580,
        [anon_sym_LF] = 580,
        [anon_sym_SEMI] = 580,
        [anon_sym_LPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_LT_DASH] = 580,
        [anon_sym_PLUS_PLUS] = 580,
        [anon_sym_DASH_DASH] = 580,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 580,
        [anon_sym_COLON_EQ] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [233] = {
        [aux_sym_expression_list_repeat1] = 588,
        [anon_sym_LF] = 588,
        [anon_sym_SEMI] = 588,
        [anon_sym_LPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_LT_DASH] = 588,
        [anon_sym_PLUS_PLUS] = 588,
        [anon_sym_DASH_DASH] = 588,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 588,
        [anon_sym_COLON_EQ] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [234] = {
        [anon_sym_LF] = 770,
        [anon_sym_SEMI] = 770,
        [sym_comment] = 8,
    },
    [235] = {
        [sym_literal_value] = 772,
        [anon_sym_LBRACE] = 774,
        [sym_comment] = 8,
    },
    [236] = {
        [aux_sym_expression_list_repeat1] = 776,
        [anon_sym_LF] = 730,
        [anon_sym_SEMI] = 730,
        [anon_sym_LPAREN] = 778,
        [anon_sym_COMMA] = 780,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 784,
        [anon_sym_DASH] = 784,
        [anon_sym_PIPE] = 784,
        [anon_sym_CARET] = 784,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_BANG_EQ] = 786,
        [anon_sym_LT] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_AMP_AMP] = 788,
        [anon_sym_PIPE_PIPE] = 790,
        [sym_comment] = 8,
    },
    [237] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [238] = {
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [239] = {
        [sym_parameters] = 792,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [240] = {
        [sym_literal_value] = 772,
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 774,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [241] = {
        [aux_sym_expression_list_repeat1] = 416,
        [anon_sym_LF] = 416,
        [anon_sym_SEMI] = 416,
        [anon_sym_LPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [242] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [243] = {
        [aux_sym_expression_list_repeat1] = 520,
        [anon_sym_LF] = 520,
        [anon_sym_SEMI] = 520,
        [anon_sym_LPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [244] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 794,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 796,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [245] = {
        [anon_sym_RBRACE] = 798,
        [sym_comment] = 8,
    },
    [246] = {
        [aux_sym_expression_list_repeat1] = 580,
        [anon_sym_LF] = 580,
        [anon_sym_SEMI] = 580,
        [anon_sym_LPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [247] = {
        [aux_sym_expression_list_repeat1] = 588,
        [anon_sym_LF] = 588,
        [anon_sym_SEMI] = 588,
        [anon_sym_LPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [248] = {
        [sym_parameters] = 800,
        [sym__type] = 800,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 802,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 804,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [249] = {
        [sym_block] = 806,
        [anon_sym_LBRACE] = 804,
        [sym_comment] = 8,
    },
    [250] = {
        [aux_sym_expression_list_repeat1] = 630,
        [anon_sym_LF] = 630,
        [anon_sym_SEMI] = 630,
        [anon_sym_LPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [251] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 808,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 810,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [252] = {
        [anon_sym_RBRACE] = 812,
        [sym_comment] = 8,
    },
    [253] = {
        [aux_sym_expression_list_repeat1] = 744,
        [anon_sym_LF] = 744,
        [anon_sym_SEMI] = 744,
        [anon_sym_LPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [254] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [255] = {
        [aux_sym_expression_list_repeat1] = 816,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [256] = {
        [anon_sym_LF] = 818,
        [anon_sym_SEMI] = 818,
        [sym_comment] = 8,
    },
    [257] = {
        [sym_expression_list] = 820,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [258] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 838,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [259] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 840,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [260] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 842,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [261] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 844,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [262] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 846,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [263] = {
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 848,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [264] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 784,
        [anon_sym_DASH] = 784,
        [anon_sym_PIPE] = 784,
        [anon_sym_CARET] = 784,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_BANG_EQ] = 786,
        [anon_sym_LT] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_AMP_AMP] = 788,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [265] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 784,
        [anon_sym_DASH] = 784,
        [anon_sym_PIPE] = 784,
        [anon_sym_CARET] = 784,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_BANG_EQ] = 786,
        [anon_sym_LT] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [266] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 784,
        [anon_sym_DASH] = 784,
        [anon_sym_PIPE] = 784,
        [anon_sym_CARET] = 784,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [267] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [268] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [269] = {
        [aux_sym_expression_list_repeat1] = 854,
        [anon_sym_LF] = 856,
        [anon_sym_SEMI] = 856,
        [anon_sym_LPAREN] = 778,
        [anon_sym_COMMA] = 780,
        [anon_sym_STAR] = 782,
        [anon_sym_SLASH] = 782,
        [anon_sym_PERCENT] = 782,
        [anon_sym_LT_LT] = 782,
        [anon_sym_GT_GT] = 782,
        [anon_sym_AMP] = 782,
        [anon_sym_AMP_CARET] = 782,
        [anon_sym_PLUS] = 784,
        [anon_sym_DASH] = 784,
        [anon_sym_PIPE] = 784,
        [anon_sym_CARET] = 784,
        [anon_sym_EQ_EQ] = 786,
        [anon_sym_BANG_EQ] = 786,
        [anon_sym_LT] = 786,
        [anon_sym_LT_EQ] = 786,
        [anon_sym_GT] = 786,
        [anon_sym_GT_EQ] = 786,
        [anon_sym_AMP_AMP] = 788,
        [anon_sym_PIPE_PIPE] = 790,
        [sym_comment] = 8,
    },
    [270] = {
        [anon_sym_LF] = 858,
        [anon_sym_SEMI] = 858,
        [sym_comment] = 8,
    },
    [271] = {
        [anon_sym_RPAREN] = 860,
        [sym_comment] = 8,
    },
    [272] = {
        [sym_literal_value] = 862,
        [anon_sym_LBRACE] = 864,
        [sym_comment] = 8,
    },
    [273] = {
        [aux_sym_expression_list_repeat1] = 866,
        [anon_sym_LPAREN] = 868,
        [anon_sym_RPAREN] = 730,
        [anon_sym_COMMA] = 870,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 874,
        [anon_sym_DASH] = 874,
        [anon_sym_PIPE] = 874,
        [anon_sym_CARET] = 874,
        [anon_sym_EQ_EQ] = 876,
        [anon_sym_BANG_EQ] = 876,
        [anon_sym_LT] = 876,
        [anon_sym_LT_EQ] = 876,
        [anon_sym_GT] = 876,
        [anon_sym_GT_EQ] = 876,
        [anon_sym_AMP_AMP] = 878,
        [anon_sym_PIPE_PIPE] = 880,
        [sym_comment] = 8,
    },
    [274] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [275] = {
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_RPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [276] = {
        [sym_parameters] = 882,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [277] = {
        [sym_literal_value] = 862,
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_RPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 864,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [278] = {
        [aux_sym_expression_list_repeat1] = 416,
        [anon_sym_LPAREN] = 416,
        [anon_sym_RPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [279] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_RPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [280] = {
        [aux_sym_expression_list_repeat1] = 520,
        [anon_sym_LPAREN] = 520,
        [anon_sym_RPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [281] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 884,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 886,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [282] = {
        [anon_sym_RBRACE] = 888,
        [sym_comment] = 8,
    },
    [283] = {
        [aux_sym_expression_list_repeat1] = 580,
        [anon_sym_LPAREN] = 580,
        [anon_sym_RPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [284] = {
        [aux_sym_expression_list_repeat1] = 588,
        [anon_sym_LPAREN] = 588,
        [anon_sym_RPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [285] = {
        [sym_parameters] = 890,
        [sym__type] = 890,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 892,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 894,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [286] = {
        [sym_block] = 896,
        [anon_sym_LBRACE] = 894,
        [sym_comment] = 8,
    },
    [287] = {
        [aux_sym_expression_list_repeat1] = 630,
        [anon_sym_LPAREN] = 630,
        [anon_sym_RPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [288] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 898,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 900,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [289] = {
        [anon_sym_RBRACE] = 902,
        [sym_comment] = 8,
    },
    [290] = {
        [aux_sym_expression_list_repeat1] = 744,
        [anon_sym_LPAREN] = 744,
        [anon_sym_RPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [291] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_RPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [292] = {
        [aux_sym_expression_list_repeat1] = 816,
        [anon_sym_LPAREN] = 816,
        [anon_sym_RPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [293] = {
        [anon_sym_RPAREN] = 818,
        [sym_comment] = 8,
    },
    [294] = {
        [sym_expression_list] = 904,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [295] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 906,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [296] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 908,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [297] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 910,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [298] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 912,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [299] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 914,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [300] = {
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 916,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [301] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 874,
        [anon_sym_DASH] = 874,
        [anon_sym_PIPE] = 874,
        [anon_sym_CARET] = 874,
        [anon_sym_EQ_EQ] = 876,
        [anon_sym_BANG_EQ] = 876,
        [anon_sym_LT] = 876,
        [anon_sym_LT_EQ] = 876,
        [anon_sym_GT] = 876,
        [anon_sym_GT_EQ] = 876,
        [anon_sym_AMP_AMP] = 878,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [302] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 874,
        [anon_sym_DASH] = 874,
        [anon_sym_PIPE] = 874,
        [anon_sym_CARET] = 874,
        [anon_sym_EQ_EQ] = 876,
        [anon_sym_BANG_EQ] = 876,
        [anon_sym_LT] = 876,
        [anon_sym_LT_EQ] = 876,
        [anon_sym_GT] = 876,
        [anon_sym_GT_EQ] = 876,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [303] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 874,
        [anon_sym_DASH] = 874,
        [anon_sym_PIPE] = 874,
        [anon_sym_CARET] = 874,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [304] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [305] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_RPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [306] = {
        [aux_sym_expression_list_repeat1] = 918,
        [anon_sym_LPAREN] = 868,
        [anon_sym_RPAREN] = 856,
        [anon_sym_COMMA] = 870,
        [anon_sym_STAR] = 872,
        [anon_sym_SLASH] = 872,
        [anon_sym_PERCENT] = 872,
        [anon_sym_LT_LT] = 872,
        [anon_sym_GT_GT] = 872,
        [anon_sym_AMP] = 872,
        [anon_sym_AMP_CARET] = 872,
        [anon_sym_PLUS] = 874,
        [anon_sym_DASH] = 874,
        [anon_sym_PIPE] = 874,
        [anon_sym_CARET] = 874,
        [anon_sym_EQ_EQ] = 876,
        [anon_sym_BANG_EQ] = 876,
        [anon_sym_LT] = 876,
        [anon_sym_LT_EQ] = 876,
        [anon_sym_GT] = 876,
        [anon_sym_GT_EQ] = 876,
        [anon_sym_AMP_AMP] = 878,
        [anon_sym_PIPE_PIPE] = 880,
        [sym_comment] = 8,
    },
    [307] = {
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 8,
    },
    [308] = {
        [anon_sym_RPAREN] = 920,
        [sym_comment] = 8,
    },
    [309] = {
        [aux_sym_expression_list_repeat1] = 922,
        [anon_sym_LPAREN] = 922,
        [anon_sym_RPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [310] = {
        [aux_sym_expression_list_repeat1] = 922,
        [anon_sym_LF] = 922,
        [anon_sym_SEMI] = 922,
        [anon_sym_LPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [311] = {
        [sym_parameters] = 924,
        [sym__type] = 924,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 926,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 928,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [312] = {
        [sym_block] = 930,
        [anon_sym_LBRACE] = 928,
        [sym_comment] = 8,
    },
    [313] = {
        [aux_sym_expression_list_repeat1] = 630,
        [anon_sym_LF] = 630,
        [anon_sym_SEMI] = 630,
        [anon_sym_LPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_LT_DASH] = 630,
        [anon_sym_PLUS_PLUS] = 630,
        [anon_sym_DASH_DASH] = 630,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 630,
        [anon_sym_COLON_EQ] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [314] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 932,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 934,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [315] = {
        [anon_sym_RBRACE] = 936,
        [sym_comment] = 8,
    },
    [316] = {
        [aux_sym_expression_list_repeat1] = 744,
        [anon_sym_LF] = 744,
        [anon_sym_SEMI] = 744,
        [anon_sym_LPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_LT_DASH] = 744,
        [anon_sym_PLUS_PLUS] = 744,
        [anon_sym_DASH_DASH] = 744,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 744,
        [anon_sym_COLON_EQ] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [317] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_LT_DASH] = 814,
        [anon_sym_PLUS_PLUS] = 814,
        [anon_sym_DASH_DASH] = 814,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 814,
        [anon_sym_COLON_EQ] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [318] = {
        [aux_sym_expression_list_repeat1] = 816,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_LT_DASH] = 816,
        [anon_sym_PLUS_PLUS] = 816,
        [anon_sym_DASH_DASH] = 816,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 816,
        [anon_sym_COLON_EQ] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [319] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_RBRACE] = 814,
        [anon_sym_COLON] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [320] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 818,
        [anon_sym_COLON_EQ] = 818,
        [sym_comment] = 8,
    },
    [321] = {
        [sym_expression_list] = 938,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [322] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 942,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [323] = {
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__expression] = 956,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [anon_sym_func] = 662,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [324] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 960,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [325] = {
        [anon_sym_LF] = 974,
        [anon_sym_SEMI] = 974,
        [sym_comment] = 8,
    },
    [326] = {
        [anon_sym_LF] = 976,
        [anon_sym_SEMI] = 976,
        [sym_comment] = 8,
    },
    [327] = {
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__expression] = 978,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [anon_sym_func] = 662,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [328] = {
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__expression] = 980,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [anon_sym_func] = 662,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [329] = {
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__expression] = 982,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [anon_sym_func] = 662,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [330] = {
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__expression] = 984,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [anon_sym_func] = 662,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [331] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 722,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 722,
        [anon_sym_PERCENT] = 722,
        [anon_sym_LT_LT] = 722,
        [anon_sym_GT_GT] = 722,
        [anon_sym_AMP] = 722,
        [anon_sym_AMP_CARET] = 722,
        [anon_sym_PLUS] = 732,
        [anon_sym_DASH] = 732,
        [anon_sym_PIPE] = 732,
        [anon_sym_CARET] = 732,
        [anon_sym_EQ_EQ] = 734,
        [anon_sym_BANG_EQ] = 734,
        [anon_sym_LT] = 734,
        [anon_sym_LT_EQ] = 734,
        [anon_sym_GT] = 734,
        [anon_sym_GT_EQ] = 734,
        [anon_sym_AMP_AMP] = 736,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [332] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 722,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 722,
        [anon_sym_PERCENT] = 722,
        [anon_sym_LT_LT] = 722,
        [anon_sym_GT_GT] = 722,
        [anon_sym_AMP] = 722,
        [anon_sym_AMP_CARET] = 722,
        [anon_sym_PLUS] = 732,
        [anon_sym_DASH] = 732,
        [anon_sym_PIPE] = 732,
        [anon_sym_CARET] = 732,
        [anon_sym_EQ_EQ] = 734,
        [anon_sym_BANG_EQ] = 734,
        [anon_sym_LT] = 734,
        [anon_sym_LT_EQ] = 734,
        [anon_sym_GT] = 734,
        [anon_sym_GT_EQ] = 734,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [333] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 722,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 722,
        [anon_sym_PERCENT] = 722,
        [anon_sym_LT_LT] = 722,
        [anon_sym_GT_GT] = 722,
        [anon_sym_AMP] = 722,
        [anon_sym_AMP_CARET] = 722,
        [anon_sym_PLUS] = 732,
        [anon_sym_DASH] = 732,
        [anon_sym_PIPE] = 732,
        [anon_sym_CARET] = 732,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [334] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 722,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 722,
        [anon_sym_PERCENT] = 722,
        [anon_sym_LT_LT] = 722,
        [anon_sym_GT_GT] = 722,
        [anon_sym_AMP] = 722,
        [anon_sym_AMP_CARET] = 722,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [335] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_LT_DASH] = 852,
        [anon_sym_PLUS_PLUS] = 852,
        [anon_sym_DASH_DASH] = 852,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 852,
        [anon_sym_COLON_EQ] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [336] = {
        [sym_literal_value] = 986,
        [anon_sym_LBRACE] = 988,
        [sym_comment] = 8,
    },
    [337] = {
        [anon_sym_LF] = 990,
        [anon_sym_SEMI] = 990,
        [anon_sym_LPAREN] = 992,
        [anon_sym_STAR] = 994,
        [anon_sym_SLASH] = 994,
        [anon_sym_PERCENT] = 994,
        [anon_sym_LT_LT] = 994,
        [anon_sym_GT_GT] = 994,
        [anon_sym_AMP] = 994,
        [anon_sym_AMP_CARET] = 994,
        [anon_sym_PLUS] = 996,
        [anon_sym_DASH] = 996,
        [anon_sym_PIPE] = 996,
        [anon_sym_CARET] = 996,
        [anon_sym_EQ_EQ] = 998,
        [anon_sym_BANG_EQ] = 998,
        [anon_sym_LT] = 998,
        [anon_sym_LT_EQ] = 998,
        [anon_sym_GT] = 998,
        [anon_sym_GT_EQ] = 998,
        [anon_sym_AMP_AMP] = 1000,
        [anon_sym_PIPE_PIPE] = 1002,
        [sym_comment] = 8,
    },
    [338] = {
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [339] = {
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [340] = {
        [sym_parameters] = 1004,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [341] = {
        [sym_literal_value] = 986,
        [anon_sym_LF] = 504,
        [anon_sym_SEMI] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 988,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [342] = {
        [anon_sym_LF] = 416,
        [anon_sym_SEMI] = 416,
        [anon_sym_LPAREN] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [343] = {
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [344] = {
        [anon_sym_LF] = 520,
        [anon_sym_SEMI] = 520,
        [anon_sym_LPAREN] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [345] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 1006,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 1008,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [346] = {
        [anon_sym_RBRACE] = 1010,
        [sym_comment] = 8,
    },
    [347] = {
        [anon_sym_LF] = 580,
        [anon_sym_SEMI] = 580,
        [anon_sym_LPAREN] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [348] = {
        [anon_sym_LF] = 588,
        [anon_sym_SEMI] = 588,
        [anon_sym_LPAREN] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [349] = {
        [sym_parameters] = 1012,
        [sym__type] = 1012,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 1014,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 1016,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [350] = {
        [sym_block] = 1018,
        [anon_sym_LBRACE] = 1016,
        [sym_comment] = 8,
    },
    [351] = {
        [anon_sym_LF] = 630,
        [anon_sym_SEMI] = 630,
        [anon_sym_LPAREN] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [352] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1020,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1022,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [353] = {
        [anon_sym_RBRACE] = 1024,
        [sym_comment] = 8,
    },
    [354] = {
        [anon_sym_LF] = 744,
        [anon_sym_SEMI] = 744,
        [anon_sym_LPAREN] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [355] = {
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [356] = {
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [357] = {
        [sym_expression_list] = 1026,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [358] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 1028,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [359] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 1030,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [360] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 1032,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [361] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 1034,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [362] = {
        [sym_slice_type] = 958,
        [sym_struct_type] = 958,
        [sym_map_type] = 958,
        [sym__expression] = 1036,
        [sym_call_expression] = 962,
        [sym_composite_literal] = 962,
        [sym_func_literal] = 962,
        [sym_unary_expression] = 962,
        [sym_binary_expression] = 962,
        [sym__primary_expression] = 962,
        [sym__string_literal] = 964,
        [sym_int_literal] = 964,
        [sym_float_literal] = 964,
        [anon_sym_func] = 966,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 968,
        [sym_raw_string_literal] = 970,
        [sym_interpreted_string_literal] = 970,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 972,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 972,
        [sym_comment] = 8,
    },
    [363] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 994,
        [anon_sym_SLASH] = 994,
        [anon_sym_PERCENT] = 994,
        [anon_sym_LT_LT] = 994,
        [anon_sym_GT_GT] = 994,
        [anon_sym_AMP] = 994,
        [anon_sym_AMP_CARET] = 994,
        [anon_sym_PLUS] = 996,
        [anon_sym_DASH] = 996,
        [anon_sym_PIPE] = 996,
        [anon_sym_CARET] = 996,
        [anon_sym_EQ_EQ] = 998,
        [anon_sym_BANG_EQ] = 998,
        [anon_sym_LT] = 998,
        [anon_sym_LT_EQ] = 998,
        [anon_sym_GT] = 998,
        [anon_sym_GT_EQ] = 998,
        [anon_sym_AMP_AMP] = 1000,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [364] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 994,
        [anon_sym_SLASH] = 994,
        [anon_sym_PERCENT] = 994,
        [anon_sym_LT_LT] = 994,
        [anon_sym_GT_GT] = 994,
        [anon_sym_AMP] = 994,
        [anon_sym_AMP_CARET] = 994,
        [anon_sym_PLUS] = 996,
        [anon_sym_DASH] = 996,
        [anon_sym_PIPE] = 996,
        [anon_sym_CARET] = 996,
        [anon_sym_EQ_EQ] = 998,
        [anon_sym_BANG_EQ] = 998,
        [anon_sym_LT] = 998,
        [anon_sym_LT_EQ] = 998,
        [anon_sym_GT] = 998,
        [anon_sym_GT_EQ] = 998,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [365] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 994,
        [anon_sym_SLASH] = 994,
        [anon_sym_PERCENT] = 994,
        [anon_sym_LT_LT] = 994,
        [anon_sym_GT_GT] = 994,
        [anon_sym_AMP] = 994,
        [anon_sym_AMP_CARET] = 994,
        [anon_sym_PLUS] = 996,
        [anon_sym_DASH] = 996,
        [anon_sym_PIPE] = 996,
        [anon_sym_CARET] = 996,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [366] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 994,
        [anon_sym_SLASH] = 994,
        [anon_sym_PERCENT] = 994,
        [anon_sym_LT_LT] = 994,
        [anon_sym_GT_GT] = 994,
        [anon_sym_AMP] = 994,
        [anon_sym_AMP_CARET] = 994,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [367] = {
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [368] = {
        [anon_sym_RPAREN] = 1038,
        [sym_comment] = 8,
    },
    [369] = {
        [anon_sym_LF] = 922,
        [anon_sym_SEMI] = 922,
        [anon_sym_LPAREN] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [370] = {
        [sym_literal_value] = 1040,
        [anon_sym_LBRACE] = 1042,
        [sym_comment] = 8,
    },
    [371] = {
        [aux_sym_expression_list_repeat1] = 1044,
        [anon_sym_LPAREN] = 1046,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 1048,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 856,
        [anon_sym_COLON_EQ] = 856,
        [anon_sym_SLASH] = 1048,
        [anon_sym_PERCENT] = 1048,
        [anon_sym_LT_LT] = 1048,
        [anon_sym_GT_GT] = 1048,
        [anon_sym_AMP] = 1048,
        [anon_sym_AMP_CARET] = 1048,
        [anon_sym_PLUS] = 1050,
        [anon_sym_DASH] = 1050,
        [anon_sym_PIPE] = 1050,
        [anon_sym_CARET] = 1050,
        [anon_sym_EQ_EQ] = 1052,
        [anon_sym_BANG_EQ] = 1052,
        [anon_sym_LT] = 1052,
        [anon_sym_LT_EQ] = 1052,
        [anon_sym_GT] = 1052,
        [anon_sym_GT_EQ] = 1052,
        [anon_sym_AMP_AMP] = 1054,
        [anon_sym_PIPE_PIPE] = 1056,
        [sym_comment] = 8,
    },
    [372] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [373] = {
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 504,
        [anon_sym_COLON_EQ] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [374] = {
        [sym_parameters] = 1058,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [375] = {
        [sym_literal_value] = 1040,
        [aux_sym_expression_list_repeat1] = 504,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 1042,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 504,
        [anon_sym_COLON_EQ] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [376] = {
        [aux_sym_expression_list_repeat1] = 416,
        [anon_sym_LPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 416,
        [anon_sym_COLON_EQ] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [377] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 518,
        [anon_sym_COLON_EQ] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [378] = {
        [aux_sym_expression_list_repeat1] = 520,
        [anon_sym_LPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 520,
        [anon_sym_COLON_EQ] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [379] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 1060,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 1062,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [380] = {
        [anon_sym_RBRACE] = 1064,
        [sym_comment] = 8,
    },
    [381] = {
        [aux_sym_expression_list_repeat1] = 580,
        [anon_sym_LPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 580,
        [anon_sym_COLON_EQ] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [382] = {
        [aux_sym_expression_list_repeat1] = 588,
        [anon_sym_LPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 588,
        [anon_sym_COLON_EQ] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [383] = {
        [sym_parameters] = 1066,
        [sym__type] = 1066,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 1068,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 1070,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [384] = {
        [sym_block] = 1072,
        [anon_sym_LBRACE] = 1070,
        [sym_comment] = 8,
    },
    [385] = {
        [aux_sym_expression_list_repeat1] = 630,
        [anon_sym_LPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 630,
        [anon_sym_COLON_EQ] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [386] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1074,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1076,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [387] = {
        [anon_sym_RBRACE] = 1078,
        [sym_comment] = 8,
    },
    [388] = {
        [aux_sym_expression_list_repeat1] = 744,
        [anon_sym_LPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 744,
        [anon_sym_COLON_EQ] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [389] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 814,
        [anon_sym_COLON_EQ] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [390] = {
        [aux_sym_expression_list_repeat1] = 816,
        [anon_sym_LPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 816,
        [anon_sym_COLON_EQ] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [391] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 858,
        [anon_sym_COLON_EQ] = 858,
        [sym_comment] = 8,
    },
    [392] = {
        [sym_expression_list] = 1080,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [393] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 1082,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [394] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 1084,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [395] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 1086,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [396] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 1088,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [397] = {
        [sym_slice_type] = 940,
        [sym_struct_type] = 940,
        [sym_map_type] = 940,
        [sym__expression] = 1090,
        [sym_call_expression] = 944,
        [sym_composite_literal] = 944,
        [sym_func_literal] = 944,
        [sym_unary_expression] = 944,
        [sym_binary_expression] = 944,
        [sym__primary_expression] = 944,
        [sym__string_literal] = 946,
        [sym_int_literal] = 946,
        [sym_float_literal] = 946,
        [anon_sym_func] = 948,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [398] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1048,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1048,
        [anon_sym_PERCENT] = 1048,
        [anon_sym_LT_LT] = 1048,
        [anon_sym_GT_GT] = 1048,
        [anon_sym_AMP] = 1048,
        [anon_sym_AMP_CARET] = 1048,
        [anon_sym_PLUS] = 1050,
        [anon_sym_DASH] = 1050,
        [anon_sym_PIPE] = 1050,
        [anon_sym_CARET] = 1050,
        [anon_sym_EQ_EQ] = 1052,
        [anon_sym_BANG_EQ] = 1052,
        [anon_sym_LT] = 1052,
        [anon_sym_LT_EQ] = 1052,
        [anon_sym_GT] = 1052,
        [anon_sym_GT_EQ] = 1052,
        [anon_sym_AMP_AMP] = 1054,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [399] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1048,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1048,
        [anon_sym_PERCENT] = 1048,
        [anon_sym_LT_LT] = 1048,
        [anon_sym_GT_GT] = 1048,
        [anon_sym_AMP] = 1048,
        [anon_sym_AMP_CARET] = 1048,
        [anon_sym_PLUS] = 1050,
        [anon_sym_DASH] = 1050,
        [anon_sym_PIPE] = 1050,
        [anon_sym_CARET] = 1050,
        [anon_sym_EQ_EQ] = 1052,
        [anon_sym_BANG_EQ] = 1052,
        [anon_sym_LT] = 1052,
        [anon_sym_LT_EQ] = 1052,
        [anon_sym_GT] = 1052,
        [anon_sym_GT_EQ] = 1052,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [400] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1048,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1048,
        [anon_sym_PERCENT] = 1048,
        [anon_sym_LT_LT] = 1048,
        [anon_sym_GT_GT] = 1048,
        [anon_sym_AMP] = 1048,
        [anon_sym_AMP_CARET] = 1048,
        [anon_sym_PLUS] = 1050,
        [anon_sym_DASH] = 1050,
        [anon_sym_PIPE] = 1050,
        [anon_sym_CARET] = 1050,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [401] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1048,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1048,
        [anon_sym_PERCENT] = 1048,
        [anon_sym_LT_LT] = 1048,
        [anon_sym_GT_GT] = 1048,
        [anon_sym_AMP] = 1048,
        [anon_sym_AMP_CARET] = 1048,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [402] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 852,
        [anon_sym_COLON_EQ] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [403] = {
        [anon_sym_RPAREN] = 1092,
        [sym_comment] = 8,
    },
    [404] = {
        [aux_sym_expression_list_repeat1] = 922,
        [anon_sym_LPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 922,
        [anon_sym_COLON_EQ] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [405] = {
        [anon_sym_RPAREN] = 1094,
        [sym_comment] = 8,
    },
    [406] = {
        [aux_sym_expression_list_repeat1] = 922,
        [anon_sym_LF] = 922,
        [anon_sym_SEMI] = 922,
        [anon_sym_LPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_LT_DASH] = 922,
        [anon_sym_PLUS_PLUS] = 922,
        [anon_sym_DASH_DASH] = 922,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 922,
        [anon_sym_COLON_EQ] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [407] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1096,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1098,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [408] = {
        [anon_sym_RBRACE] = 1100,
        [sym_comment] = 8,
    },
    [409] = {
        [sym_expression_list] = 1102,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [410] = {
        [sym_expression_list] = 1104,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [411] = {
        [anon_sym_LF] = 1106,
        [anon_sym_SEMI] = 1106,
        [sym_comment] = 8,
    },
    [412] = {
        [anon_sym_LF] = 1108,
        [anon_sym_SEMI] = 1108,
        [sym_comment] = 8,
    },
    [413] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1110,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1112,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [414] = {
        [anon_sym_RBRACE] = 1114,
        [sym_comment] = 8,
    },
    [415] = {
        [sym_block] = 396,
        [anon_sym_LBRACE] = 396,
        [sym_comment] = 8,
    },
    [416] = {
        [sym_block] = 428,
        [anon_sym_LBRACE] = 428,
        [sym_comment] = 8,
    },
    [417] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1116,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [418] = {
        [sym__type] = 1118,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [419] = {
        [sym_block] = 1120,
        [anon_sym_LBRACE] = 1120,
        [sym_comment] = 8,
    },
    [420] = {
        [sym_expression_list] = 1122,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [421] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1124,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [422] = {
        [sym__type] = 1126,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_qualified_identifier] = 594,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [423] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1128,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [424] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1130,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [425] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1132,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [426] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1134,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [427] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 850,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [428] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 850,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [429] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 850,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [430] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 850,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [431] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_RBRACK] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [432] = {
        [sym_block] = 1136,
        [anon_sym_LBRACE] = 1136,
        [sym_comment] = 8,
    },
    [433] = {
        [anon_sym_RPAREN] = 1138,
        [sym_comment] = 8,
    },
    [434] = {
        [anon_sym_LPAREN] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_RBRACK] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [435] = {
        [sym_block] = 1140,
        [anon_sym_LBRACE] = 1140,
        [sym_comment] = 8,
    },
    [436] = {
        [sym_parameters] = 1142,
        [sym__type] = 1142,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 1144,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 1144,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [437] = {
        [sym_block] = 1146,
        [anon_sym_LBRACE] = 1146,
        [sym_comment] = 8,
    },
    [438] = {
        [anon_sym_RPAREN] = 1148,
        [sym_comment] = 8,
    },
    [439] = {
        [sym_block] = 284,
        [anon_sym_LBRACE] = 284,
        [sym_comment] = 8,
    },
    [440] = {
        [sym_block] = 626,
        [anon_sym_LBRACE] = 626,
        [sym_comment] = 8,
    },
    [441] = {
        [anon_sym_LPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_RBRACE] = 816,
        [anon_sym_COLON] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [442] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 1150,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 1152,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [443] = {
        [anon_sym_RBRACE] = 1154,
        [sym_comment] = 8,
    },
    [444] = {
        [anon_sym_LPAREN] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_RBRACK] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [445] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1158,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_literal_value] = 1162,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 1168,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [446] = {
        [sym_literal_value] = 1176,
        [anon_sym_LBRACE] = 1178,
        [sym_comment] = 8,
    },
    [447] = {
        [anon_sym_LPAREN] = 1180,
        [anon_sym_COMMA] = 1182,
        [anon_sym_STAR] = 1184,
        [anon_sym_RBRACE] = 1182,
        [anon_sym_SLASH] = 1184,
        [anon_sym_PERCENT] = 1184,
        [anon_sym_LT_LT] = 1184,
        [anon_sym_GT_GT] = 1184,
        [anon_sym_AMP] = 1184,
        [anon_sym_AMP_CARET] = 1184,
        [anon_sym_PLUS] = 1186,
        [anon_sym_DASH] = 1186,
        [anon_sym_PIPE] = 1186,
        [anon_sym_CARET] = 1186,
        [anon_sym_EQ_EQ] = 1188,
        [anon_sym_BANG_EQ] = 1188,
        [anon_sym_LT] = 1188,
        [anon_sym_LT_EQ] = 1188,
        [anon_sym_GT] = 1188,
        [anon_sym_GT_EQ] = 1188,
        [anon_sym_AMP_AMP] = 1190,
        [anon_sym_PIPE_PIPE] = 1192,
        [sym_comment] = 8,
    },
    [448] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACE] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [449] = {
        [anon_sym_COMMA] = 1182,
        [anon_sym_RBRACE] = 1182,
        [sym_comment] = 8,
    },
    [450] = {
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_RBRACE] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [451] = {
        [sym_parameters] = 1194,
        [anon_sym_LPAREN] = 508,
        [sym_comment] = 8,
    },
    [452] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 1196,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 1198,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [453] = {
        [sym_literal_value] = 1176,
        [anon_sym_LPAREN] = 504,
        [anon_sym_COMMA] = 504,
        [anon_sym_STAR] = 504,
        [anon_sym_LBRACE] = 1178,
        [anon_sym_RBRACE] = 504,
        [anon_sym_SLASH] = 504,
        [anon_sym_PERCENT] = 504,
        [anon_sym_LT_LT] = 504,
        [anon_sym_GT_GT] = 504,
        [anon_sym_AMP] = 504,
        [anon_sym_AMP_CARET] = 504,
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
    [454] = {
        [anon_sym_LPAREN] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_RBRACE] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [455] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_RBRACE] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [456] = {
        [anon_sym_LPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [anon_sym_STAR] = 520,
        [anon_sym_RBRACE] = 520,
        [anon_sym_SLASH] = 520,
        [anon_sym_PERCENT] = 520,
        [anon_sym_LT_LT] = 520,
        [anon_sym_GT_GT] = 520,
        [anon_sym_AMP] = 520,
        [anon_sym_AMP_CARET] = 520,
        [anon_sym_PLUS] = 520,
        [anon_sym_DASH] = 520,
        [anon_sym_PIPE] = 520,
        [anon_sym_CARET] = 520,
        [anon_sym_EQ_EQ] = 520,
        [anon_sym_BANG_EQ] = 520,
        [anon_sym_LT] = 520,
        [anon_sym_LT_EQ] = 520,
        [anon_sym_GT] = 520,
        [anon_sym_GT_EQ] = 520,
        [anon_sym_AMP_AMP] = 520,
        [anon_sym_PIPE_PIPE] = 520,
        [sym_comment] = 8,
    },
    [457] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 524,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_literal_value] = 528,
        [sym__element_list] = 1200,
        [sym_element] = 532,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 538,
        [anon_sym_RBRACE] = 1202,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [458] = {
        [anon_sym_RBRACE] = 1204,
        [sym_comment] = 8,
    },
    [459] = {
        [anon_sym_LPAREN] = 580,
        [anon_sym_COMMA] = 580,
        [anon_sym_STAR] = 580,
        [anon_sym_RBRACE] = 580,
        [anon_sym_SLASH] = 580,
        [anon_sym_PERCENT] = 580,
        [anon_sym_LT_LT] = 580,
        [anon_sym_GT_GT] = 580,
        [anon_sym_AMP] = 580,
        [anon_sym_AMP_CARET] = 580,
        [anon_sym_PLUS] = 580,
        [anon_sym_DASH] = 580,
        [anon_sym_PIPE] = 580,
        [anon_sym_CARET] = 580,
        [anon_sym_EQ_EQ] = 580,
        [anon_sym_BANG_EQ] = 580,
        [anon_sym_LT] = 580,
        [anon_sym_LT_EQ] = 580,
        [anon_sym_GT] = 580,
        [anon_sym_GT_EQ] = 580,
        [anon_sym_AMP_AMP] = 580,
        [anon_sym_PIPE_PIPE] = 580,
        [sym_comment] = 8,
    },
    [460] = {
        [anon_sym_LPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 588,
        [anon_sym_RBRACE] = 588,
        [anon_sym_SLASH] = 588,
        [anon_sym_PERCENT] = 588,
        [anon_sym_LT_LT] = 588,
        [anon_sym_GT_GT] = 588,
        [anon_sym_AMP] = 588,
        [anon_sym_AMP_CARET] = 588,
        [anon_sym_PLUS] = 588,
        [anon_sym_DASH] = 588,
        [anon_sym_PIPE] = 588,
        [anon_sym_CARET] = 588,
        [anon_sym_EQ_EQ] = 588,
        [anon_sym_BANG_EQ] = 588,
        [anon_sym_LT] = 588,
        [anon_sym_LT_EQ] = 588,
        [anon_sym_GT] = 588,
        [anon_sym_GT_EQ] = 588,
        [anon_sym_AMP_AMP] = 588,
        [anon_sym_PIPE_PIPE] = 588,
        [sym_comment] = 8,
    },
    [461] = {
        [anon_sym_RBRACE] = 1206,
        [sym_comment] = 8,
    },
    [462] = {
        [anon_sym_COMMA] = 580,
        [anon_sym_RBRACE] = 580,
        [sym_comment] = 8,
    },
    [463] = {
        [anon_sym_COMMA] = 588,
        [anon_sym_RBRACE] = 588,
        [sym_comment] = 8,
    },
    [464] = {
        [sym_parameters] = 1208,
        [sym__type] = 1208,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 1210,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 1212,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [465] = {
        [sym_block] = 1214,
        [anon_sym_LBRACE] = 1212,
        [sym_comment] = 8,
    },
    [466] = {
        [anon_sym_LPAREN] = 630,
        [anon_sym_COMMA] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_RBRACE] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [467] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1216,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1218,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [468] = {
        [anon_sym_RBRACE] = 1220,
        [sym_comment] = 8,
    },
    [469] = {
        [anon_sym_LPAREN] = 744,
        [anon_sym_COMMA] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_RBRACE] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [470] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_COMMA] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_RBRACE] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [471] = {
        [anon_sym_LPAREN] = 816,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_RBRACE] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [472] = {
        [sym_expression_list] = 1222,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [473] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1224,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [474] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1226,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [475] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1228,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [476] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1230,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [477] = {
        [sym_slice_type] = 1156,
        [sym_struct_type] = 1156,
        [sym_map_type] = 1156,
        [sym__expression] = 1232,
        [sym_call_expression] = 1160,
        [sym_composite_literal] = 1160,
        [sym_func_literal] = 1160,
        [sym_unary_expression] = 1160,
        [sym_binary_expression] = 1160,
        [sym__primary_expression] = 1160,
        [sym__string_literal] = 1164,
        [sym_int_literal] = 1164,
        [sym_float_literal] = 1164,
        [anon_sym_func] = 1166,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 1170,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1174,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1174,
        [sym_comment] = 8,
    },
    [478] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1184,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1184,
        [anon_sym_PERCENT] = 1184,
        [anon_sym_LT_LT] = 1184,
        [anon_sym_GT_GT] = 1184,
        [anon_sym_AMP] = 1184,
        [anon_sym_AMP_CARET] = 1184,
        [anon_sym_PLUS] = 1186,
        [anon_sym_DASH] = 1186,
        [anon_sym_PIPE] = 1186,
        [anon_sym_CARET] = 1186,
        [anon_sym_EQ_EQ] = 1188,
        [anon_sym_BANG_EQ] = 1188,
        [anon_sym_LT] = 1188,
        [anon_sym_LT_EQ] = 1188,
        [anon_sym_GT] = 1188,
        [anon_sym_GT_EQ] = 1188,
        [anon_sym_AMP_AMP] = 1190,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [479] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1184,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1184,
        [anon_sym_PERCENT] = 1184,
        [anon_sym_LT_LT] = 1184,
        [anon_sym_GT_GT] = 1184,
        [anon_sym_AMP] = 1184,
        [anon_sym_AMP_CARET] = 1184,
        [anon_sym_PLUS] = 1186,
        [anon_sym_DASH] = 1186,
        [anon_sym_PIPE] = 1186,
        [anon_sym_CARET] = 1186,
        [anon_sym_EQ_EQ] = 1188,
        [anon_sym_BANG_EQ] = 1188,
        [anon_sym_LT] = 1188,
        [anon_sym_LT_EQ] = 1188,
        [anon_sym_GT] = 1188,
        [anon_sym_GT_EQ] = 1188,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [480] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1184,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1184,
        [anon_sym_PERCENT] = 1184,
        [anon_sym_LT_LT] = 1184,
        [anon_sym_GT_GT] = 1184,
        [anon_sym_AMP] = 1184,
        [anon_sym_AMP_CARET] = 1184,
        [anon_sym_PLUS] = 1186,
        [anon_sym_DASH] = 1186,
        [anon_sym_PIPE] = 1186,
        [anon_sym_CARET] = 1186,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [481] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1184,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1184,
        [anon_sym_PERCENT] = 1184,
        [anon_sym_LT_LT] = 1184,
        [anon_sym_GT_GT] = 1184,
        [anon_sym_AMP] = 1184,
        [anon_sym_AMP_CARET] = 1184,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [482] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_RBRACE] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [483] = {
        [anon_sym_RPAREN] = 1234,
        [sym_comment] = 8,
    },
    [484] = {
        [anon_sym_LPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_RBRACE] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [485] = {
        [sym_expression_list] = 1236,
        [sym_slice_type] = 822,
        [sym_struct_type] = 822,
        [sym_map_type] = 822,
        [sym__expression] = 824,
        [sym_call_expression] = 826,
        [sym_composite_literal] = 826,
        [sym_func_literal] = 826,
        [sym_unary_expression] = 826,
        [sym_binary_expression] = 826,
        [sym__primary_expression] = 826,
        [sym__string_literal] = 828,
        [sym_int_literal] = 828,
        [sym_float_literal] = 828,
        [anon_sym_func] = 830,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 832,
        [sym_raw_string_literal] = 834,
        [sym_interpreted_string_literal] = 834,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 836,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 836,
        [sym_comment] = 8,
    },
    [486] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 1238,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [487] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 1240,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [488] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 1242,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [489] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 1244,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [490] = {
        [sym_slice_type] = 522,
        [sym_struct_type] = 522,
        [sym_map_type] = 522,
        [sym__expression] = 1246,
        [sym_call_expression] = 526,
        [sym_composite_literal] = 526,
        [sym_func_literal] = 526,
        [sym_unary_expression] = 526,
        [sym_binary_expression] = 526,
        [sym__primary_expression] = 526,
        [sym__string_literal] = 534,
        [sym_int_literal] = 534,
        [sym_float_literal] = 534,
        [anon_sym_func] = 536,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 542,
        [sym_raw_string_literal] = 544,
        [sym_interpreted_string_literal] = 544,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 546,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 546,
        [sym_comment] = 8,
    },
    [491] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 556,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 556,
        [anon_sym_PERCENT] = 556,
        [anon_sym_LT_LT] = 556,
        [anon_sym_GT_GT] = 556,
        [anon_sym_AMP] = 556,
        [anon_sym_AMP_CARET] = 556,
        [anon_sym_PLUS] = 560,
        [anon_sym_DASH] = 560,
        [anon_sym_PIPE] = 560,
        [anon_sym_CARET] = 560,
        [anon_sym_EQ_EQ] = 562,
        [anon_sym_BANG_EQ] = 562,
        [anon_sym_LT] = 562,
        [anon_sym_LT_EQ] = 562,
        [anon_sym_GT] = 562,
        [anon_sym_GT_EQ] = 562,
        [anon_sym_AMP_AMP] = 564,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [492] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 556,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 556,
        [anon_sym_PERCENT] = 556,
        [anon_sym_LT_LT] = 556,
        [anon_sym_GT_GT] = 556,
        [anon_sym_AMP] = 556,
        [anon_sym_AMP_CARET] = 556,
        [anon_sym_PLUS] = 560,
        [anon_sym_DASH] = 560,
        [anon_sym_PIPE] = 560,
        [anon_sym_CARET] = 560,
        [anon_sym_EQ_EQ] = 562,
        [anon_sym_BANG_EQ] = 562,
        [anon_sym_LT] = 562,
        [anon_sym_LT_EQ] = 562,
        [anon_sym_GT] = 562,
        [anon_sym_GT_EQ] = 562,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [493] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 556,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 556,
        [anon_sym_PERCENT] = 556,
        [anon_sym_LT_LT] = 556,
        [anon_sym_GT_GT] = 556,
        [anon_sym_AMP] = 556,
        [anon_sym_AMP_CARET] = 556,
        [anon_sym_PLUS] = 560,
        [anon_sym_DASH] = 560,
        [anon_sym_PIPE] = 560,
        [anon_sym_CARET] = 560,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [494] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 556,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 556,
        [anon_sym_PERCENT] = 556,
        [anon_sym_LT_LT] = 556,
        [anon_sym_GT_GT] = 556,
        [anon_sym_AMP] = 556,
        [anon_sym_AMP_CARET] = 556,
        [anon_sym_PLUS] = 850,
        [anon_sym_DASH] = 850,
        [anon_sym_PIPE] = 850,
        [anon_sym_CARET] = 850,
        [anon_sym_EQ_EQ] = 850,
        [anon_sym_BANG_EQ] = 850,
        [anon_sym_LT] = 850,
        [anon_sym_LT_EQ] = 850,
        [anon_sym_GT] = 850,
        [anon_sym_GT_EQ] = 850,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [495] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_COMMA] = 852,
        [anon_sym_STAR] = 852,
        [anon_sym_RBRACE] = 852,
        [anon_sym_COLON] = 852,
        [anon_sym_SLASH] = 852,
        [anon_sym_PERCENT] = 852,
        [anon_sym_LT_LT] = 852,
        [anon_sym_GT_GT] = 852,
        [anon_sym_AMP] = 852,
        [anon_sym_AMP_CARET] = 852,
        [anon_sym_PLUS] = 852,
        [anon_sym_DASH] = 852,
        [anon_sym_PIPE] = 852,
        [anon_sym_CARET] = 852,
        [anon_sym_EQ_EQ] = 852,
        [anon_sym_BANG_EQ] = 852,
        [anon_sym_LT] = 852,
        [anon_sym_LT_EQ] = 852,
        [anon_sym_GT] = 852,
        [anon_sym_GT_EQ] = 852,
        [anon_sym_AMP_AMP] = 852,
        [anon_sym_PIPE_PIPE] = 852,
        [sym_comment] = 8,
    },
    [496] = {
        [anon_sym_RPAREN] = 1248,
        [sym_comment] = 8,
    },
    [497] = {
        [anon_sym_LPAREN] = 922,
        [anon_sym_COMMA] = 922,
        [anon_sym_STAR] = 922,
        [anon_sym_RBRACE] = 922,
        [anon_sym_COLON] = 922,
        [anon_sym_SLASH] = 922,
        [anon_sym_PERCENT] = 922,
        [anon_sym_LT_LT] = 922,
        [anon_sym_GT_GT] = 922,
        [anon_sym_AMP] = 922,
        [anon_sym_AMP_CARET] = 922,
        [anon_sym_PLUS] = 922,
        [anon_sym_DASH] = 922,
        [anon_sym_PIPE] = 922,
        [anon_sym_CARET] = 922,
        [anon_sym_EQ_EQ] = 922,
        [anon_sym_BANG_EQ] = 922,
        [anon_sym_LT] = 922,
        [anon_sym_LT_EQ] = 922,
        [anon_sym_GT] = 922,
        [anon_sym_GT_EQ] = 922,
        [anon_sym_AMP_AMP] = 922,
        [anon_sym_PIPE_PIPE] = 922,
        [sym_comment] = 8,
    },
    [498] = {
        [sym__type] = 1250,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [499] = {
        [anon_sym_RBRACK] = 1252,
        [sym_comment] = 8,
    },
    [500] = {
        [sym__type] = 1254,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [501] = {
        [sym_literal_value] = 242,
        [anon_sym_LBRACE] = 242,
        [sym_comment] = 8,
    },
    [502] = {
        [sym_literal_value] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [503] = {
        [sym_parameters] = 1272,
        [anon_sym_LPAREN] = 1274,
        [sym_comment] = 8,
    },
    [504] = {
        [sym__type] = 1276,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [505] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1278,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 510,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [506] = {
        [anon_sym_LBRACE] = 1280,
        [sym_comment] = 8,
    },
    [507] = {
        [sym__type] = 1282,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1284,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [508] = {
        [anon_sym_chan] = 1286,
        [sym_comment] = 8,
    },
    [509] = {
        [sym_literal_value] = 122,
        [anon_sym_DOT] = 1288,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [510] = {
        [sym_identifier] = 1290,
        [sym_comment] = 8,
    },
    [511] = {
        [sym_literal_value] = 170,
        [anon_sym_LBRACE] = 170,
        [sym_comment] = 8,
    },
    [512] = {
        [sym__type] = 1292,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [513] = {
        [sym_literal_value] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [514] = {
        [sym_literal_value] = 176,
        [anon_sym_LBRACE] = 176,
        [sym_comment] = 8,
    },
    [515] = {
        [sym__type] = 1294,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [516] = {
        [sym_literal_value] = 180,
        [anon_sym_LBRACE] = 180,
        [sym_comment] = 8,
    },
    [517] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 1296,
        [anon_sym_RBRACE] = 1298,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [518] = {
        [anon_sym_RBRACE] = 1300,
        [sym_comment] = 8,
    },
    [519] = {
        [sym_literal_value] = 256,
        [anon_sym_LBRACE] = 256,
        [sym_comment] = 8,
    },
    [520] = {
        [sym_literal_value] = 356,
        [anon_sym_LBRACE] = 356,
        [sym_comment] = 8,
    },
    [521] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1302,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [522] = {
        [sym__type] = 1304,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [523] = {
        [sym_literal_value] = 1120,
        [anon_sym_LBRACE] = 1120,
        [sym_comment] = 8,
    },
    [524] = {
        [sym__type] = 1306,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_qualified_identifier] = 1256,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [525] = {
        [sym_literal_value] = 1136,
        [anon_sym_LBRACE] = 1136,
        [sym_comment] = 8,
    },
    [526] = {
        [sym_literal_value] = 1140,
        [anon_sym_LBRACE] = 1140,
        [sym_comment] = 8,
    },
    [527] = {
        [sym_parameters] = 1308,
        [sym__type] = 1308,
        [sym_pointer_type] = 1256,
        [sym_array_type] = 1256,
        [sym_slice_type] = 1256,
        [sym_struct_type] = 1256,
        [sym_interface_type] = 1256,
        [sym_map_type] = 1256,
        [sym_channel_type] = 1256,
        [sym_function_type] = 1256,
        [sym_literal_value] = 1144,
        [sym_qualified_identifier] = 1256,
        [anon_sym_LPAREN] = 1310,
        [anon_sym_func] = 1258,
        [anon_sym_STAR] = 1260,
        [anon_sym_LBRACK] = 1262,
        [anon_sym_struct] = 144,
        [anon_sym_LBRACE] = 1144,
        [anon_sym_interface] = 1264,
        [anon_sym_map] = 146,
        [anon_sym_chan] = 1266,
        [anon_sym_LT_DASH] = 1268,
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [528] = {
        [sym__parameter_list] = 1312,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1314,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [529] = {
        [anon_sym_RPAREN] = 1316,
        [sym_comment] = 8,
    },
    [530] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_literal_value] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_LBRACE] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [531] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_literal_value] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_LBRACE] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [532] = {
        [sym_literal_value] = 1146,
        [anon_sym_LBRACE] = 1146,
        [sym_comment] = 8,
    },
    [533] = {
        [sym__parameter_list] = 1318,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1320,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [534] = {
        [anon_sym_RPAREN] = 1322,
        [sym_comment] = 8,
    },
    [535] = {
        [sym_literal_value] = 284,
        [anon_sym_LBRACE] = 284,
        [sym_comment] = 8,
    },
    [536] = {
        [sym_literal_value] = 626,
        [anon_sym_LBRACE] = 626,
        [sym_comment] = 8,
    },
    [537] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1324,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1326,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [538] = {
        [anon_sym_RBRACE] = 1328,
        [sym_comment] = 8,
    },
    [539] = {
        [sym_literal_value] = 396,
        [anon_sym_LBRACE] = 396,
        [sym_comment] = 8,
    },
    [540] = {
        [sym_literal_value] = 428,
        [anon_sym_LBRACE] = 428,
        [sym_comment] = 8,
    },
    [541] = {
        [sym__string_literal] = 1120,
        [anon_sym_LF] = 1120,
        [anon_sym_SEMI] = 1120,
        [sym_raw_string_literal] = 1120,
        [sym_interpreted_string_literal] = 1120,
        [sym_comment] = 8,
    },
    [542] = {
        [sym_parameters] = 1330,
        [sym__type] = 1330,
        [sym_pointer_type] = 594,
        [sym_array_type] = 594,
        [sym_slice_type] = 594,
        [sym_struct_type] = 594,
        [sym_interface_type] = 594,
        [sym_map_type] = 594,
        [sym_channel_type] = 594,
        [sym_function_type] = 594,
        [sym_block] = 1332,
        [sym_qualified_identifier] = 594,
        [anon_sym_LPAREN] = 598,
        [anon_sym_func] = 600,
        [anon_sym_STAR] = 602,
        [anon_sym_LBRACK] = 604,
        [anon_sym_struct] = 606,
        [anon_sym_LBRACE] = 1334,
        [anon_sym_interface] = 610,
        [anon_sym_map] = 612,
        [anon_sym_chan] = 614,
        [anon_sym_LT_DASH] = 616,
        [sym_identifier] = 618,
        [sym_comment] = 8,
    },
    [543] = {
        [sym_block] = 1336,
        [anon_sym_LBRACE] = 1334,
        [sym_comment] = 8,
    },
    [544] = {
        [anon_sym_LPAREN] = 630,
        [anon_sym_STAR] = 630,
        [anon_sym_RBRACK] = 630,
        [anon_sym_SLASH] = 630,
        [anon_sym_PERCENT] = 630,
        [anon_sym_LT_LT] = 630,
        [anon_sym_GT_GT] = 630,
        [anon_sym_AMP] = 630,
        [anon_sym_AMP_CARET] = 630,
        [anon_sym_PLUS] = 630,
        [anon_sym_DASH] = 630,
        [anon_sym_PIPE] = 630,
        [anon_sym_CARET] = 630,
        [anon_sym_EQ_EQ] = 630,
        [anon_sym_BANG_EQ] = 630,
        [anon_sym_LT] = 630,
        [anon_sym_LT_EQ] = 630,
        [anon_sym_GT] = 630,
        [anon_sym_GT_EQ] = 630,
        [anon_sym_AMP_AMP] = 630,
        [anon_sym_PIPE_PIPE] = 630,
        [sym_comment] = 8,
    },
    [545] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1338,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1340,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [546] = {
        [anon_sym_RBRACE] = 1342,
        [sym_comment] = 8,
    },
    [547] = {
        [anon_sym_LPAREN] = 744,
        [anon_sym_STAR] = 744,
        [anon_sym_RBRACK] = 744,
        [anon_sym_SLASH] = 744,
        [anon_sym_PERCENT] = 744,
        [anon_sym_LT_LT] = 744,
        [anon_sym_GT_GT] = 744,
        [anon_sym_AMP] = 744,
        [anon_sym_AMP_CARET] = 744,
        [anon_sym_PLUS] = 744,
        [anon_sym_DASH] = 744,
        [anon_sym_PIPE] = 744,
        [anon_sym_CARET] = 744,
        [anon_sym_EQ_EQ] = 744,
        [anon_sym_BANG_EQ] = 744,
        [anon_sym_LT] = 744,
        [anon_sym_LT_EQ] = 744,
        [anon_sym_GT] = 744,
        [anon_sym_GT_EQ] = 744,
        [anon_sym_AMP_AMP] = 744,
        [anon_sym_PIPE_PIPE] = 744,
        [sym_comment] = 8,
    },
    [548] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_STAR] = 814,
        [anon_sym_RBRACK] = 814,
        [anon_sym_SLASH] = 814,
        [anon_sym_PERCENT] = 814,
        [anon_sym_LT_LT] = 814,
        [anon_sym_GT_GT] = 814,
        [anon_sym_AMP] = 814,
        [anon_sym_AMP_CARET] = 814,
        [anon_sym_PLUS] = 814,
        [anon_sym_DASH] = 814,
        [anon_sym_PIPE] = 814,
        [anon_sym_CARET] = 814,
        [anon_sym_EQ_EQ] = 814,
        [anon_sym_BANG_EQ] = 814,
        [anon_sym_LT] = 814,
        [anon_sym_LT_EQ] = 814,
        [anon_sym_GT] = 814,
        [anon_sym_GT_EQ] = 814,
        [anon_sym_AMP_AMP] = 814,
        [anon_sym_PIPE_PIPE] = 814,
        [sym_comment] = 8,
    },
    [549] = {
        [anon_sym_LPAREN] = 816,
        [anon_sym_STAR] = 816,
        [anon_sym_RBRACK] = 816,
        [anon_sym_SLASH] = 816,
        [anon_sym_PERCENT] = 816,
        [anon_sym_LT_LT] = 816,
        [anon_sym_GT_GT] = 816,
        [anon_sym_AMP] = 816,
        [anon_sym_AMP_CARET] = 816,
        [anon_sym_PLUS] = 816,
        [anon_sym_DASH] = 816,
        [anon_sym_PIPE] = 816,
        [anon_sym_CARET] = 816,
        [anon_sym_EQ_EQ] = 816,
        [anon_sym_BANG_EQ] = 816,
        [anon_sym_LT] = 816,
        [anon_sym_LT_EQ] = 816,
        [anon_sym_GT] = 816,
        [anon_sym_GT_EQ] = 816,
        [anon_sym_AMP_AMP] = 816,
        [anon_sym_PIPE_PIPE] = 816,
        [sym_comment] = 8,
    },
    [550] = {
        [sym__type] = 1344,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_comment] = 8,
    },
    [551] = {
        [sym__string_literal] = 1136,
        [anon_sym_LF] = 1136,
        [anon_sym_SEMI] = 1136,
        [sym_raw_string_literal] = 1136,
        [sym_interpreted_string_literal] = 1136,
        [sym_comment] = 8,
    },
    [552] = {
        [sym__string_literal] = 1140,
        [anon_sym_LF] = 1140,
        [anon_sym_SEMI] = 1140,
        [sym_raw_string_literal] = 1140,
        [sym_interpreted_string_literal] = 1140,
        [sym_comment] = 8,
    },
    [553] = {
        [sym_parameters] = 1346,
        [sym__type] = 1346,
        [sym_pointer_type] = 372,
        [sym_array_type] = 372,
        [sym_slice_type] = 372,
        [sym_struct_type] = 372,
        [sym_interface_type] = 372,
        [sym_map_type] = 372,
        [sym_channel_type] = 372,
        [sym_function_type] = 372,
        [sym_qualified_identifier] = 372,
        [sym__string_literal] = 1144,
        [anon_sym_LF] = 1144,
        [anon_sym_SEMI] = 1144,
        [anon_sym_LPAREN] = 1348,
        [anon_sym_func] = 374,
        [anon_sym_STAR] = 376,
        [anon_sym_LBRACK] = 378,
        [anon_sym_struct] = 380,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 384,
        [anon_sym_chan] = 386,
        [anon_sym_LT_DASH] = 388,
        [sym_identifier] = 390,
        [sym_raw_string_literal] = 1144,
        [sym_interpreted_string_literal] = 1144,
        [sym_comment] = 8,
    },
    [554] = {
        [sym__parameter_list] = 1350,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1352,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [555] = {
        [anon_sym_RPAREN] = 1354,
        [sym_comment] = 8,
    },
    [556] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [sym__string_literal] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_raw_string_literal] = 284,
        [sym_interpreted_string_literal] = 284,
        [sym_comment] = 8,
    },
    [557] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [sym__string_literal] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_raw_string_literal] = 626,
        [sym_interpreted_string_literal] = 626,
        [sym_comment] = 8,
    },
    [558] = {
        [sym__string_literal] = 1146,
        [anon_sym_LF] = 1146,
        [anon_sym_SEMI] = 1146,
        [sym_raw_string_literal] = 1146,
        [sym_interpreted_string_literal] = 1146,
        [sym_comment] = 8,
    },
    [559] = {
        [sym__parameter_list] = 1356,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1358,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [560] = {
        [anon_sym_RPAREN] = 1360,
        [sym_comment] = 8,
    },
    [561] = {
        [sym__string_literal] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [sym_raw_string_literal] = 284,
        [sym_interpreted_string_literal] = 284,
        [sym_comment] = 8,
    },
    [562] = {
        [sym__string_literal] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [sym_raw_string_literal] = 626,
        [sym_interpreted_string_literal] = 626,
        [sym_comment] = 8,
    },
    [563] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1362,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [564] = {
        [sym__type] = 1364,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
    [565] = {
        [anon_sym_RPAREN] = 1120,
        [anon_sym_COMMA] = 1120,
        [sym_comment] = 8,
    },
    [566] = {
        [sym__type] = 1366,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_func] = 290,
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
    [567] = {
        [anon_sym_RPAREN] = 1136,
        [anon_sym_COMMA] = 1136,
        [sym_comment] = 8,
    },
    [568] = {
        [anon_sym_RPAREN] = 1140,
        [anon_sym_COMMA] = 1140,
        [sym_comment] = 8,
    },
    [569] = {
        [anon_sym_RPAREN] = 1368,
        [sym_comment] = 8,
    },
    [570] = {
        [sym_parameters] = 1370,
        [sym__type] = 1370,
        [sym_pointer_type] = 288,
        [sym_array_type] = 288,
        [sym_slice_type] = 288,
        [sym_struct_type] = 288,
        [sym_interface_type] = 288,
        [sym_map_type] = 288,
        [sym_channel_type] = 288,
        [sym_function_type] = 288,
        [sym_qualified_identifier] = 288,
        [anon_sym_LPAREN] = 1372,
        [anon_sym_RPAREN] = 1144,
        [anon_sym_func] = 290,
        [anon_sym_COMMA] = 1144,
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
    [571] = {
        [sym__parameter_list] = 1374,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1376,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [572] = {
        [anon_sym_RPAREN] = 1378,
        [sym_comment] = 8,
    },
    [573] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_RPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_COMMA] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [574] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_RPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_COMMA] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [575] = {
        [anon_sym_RPAREN] = 1146,
        [anon_sym_COMMA] = 1146,
        [sym_comment] = 8,
    },
    [576] = {
        [sym__parameter_list] = 1380,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1382,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [577] = {
        [anon_sym_RPAREN] = 1384,
        [sym_comment] = 8,
    },
    [578] = {
        [anon_sym_RPAREN] = 284,
        [anon_sym_COMMA] = 284,
        [sym_comment] = 8,
    },
    [579] = {
        [anon_sym_RPAREN] = 626,
        [anon_sym_COMMA] = 626,
        [sym_comment] = 8,
    },
    [580] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [581] = {
        [anon_sym_RBRACE] = 1386,
        [sym_comment] = 8,
    },
    [582] = {
        [anon_sym_LF] = 1388,
        [anon_sym_SEMI] = 1388,
        [sym_comment] = 8,
    },
    [583] = {
        [sym__parameter_list] = 1390,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1392,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [584] = {
        [anon_sym_RPAREN] = 1394,
        [sym_comment] = 8,
    },
    [585] = {
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [sym_comment] = 8,
    },
    [586] = {
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [sym_comment] = 8,
    },
    [587] = {
        [anon_sym_RBRACK] = 356,
        [sym_comment] = 8,
    },
    [588] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1396,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1398,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [589] = {
        [anon_sym_RBRACE] = 1400,
        [sym_comment] = 8,
    },
    [590] = {
        [anon_sym_RBRACK] = 396,
        [sym_comment] = 8,
    },
    [591] = {
        [anon_sym_RBRACK] = 428,
        [sym_comment] = 8,
    },
    [592] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1402,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [593] = {
        [sym__type] = 1404,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [594] = {
        [anon_sym_RBRACK] = 1120,
        [sym_comment] = 8,
    },
    [595] = {
        [sym__type] = 1406,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [596] = {
        [anon_sym_RBRACK] = 1136,
        [sym_comment] = 8,
    },
    [597] = {
        [anon_sym_RBRACK] = 1140,
        [sym_comment] = 8,
    },
    [598] = {
        [sym_parameters] = 1408,
        [sym__type] = 1408,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_LPAREN] = 1410,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_RBRACK] = 1144,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [599] = {
        [sym__parameter_list] = 1412,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1414,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [600] = {
        [anon_sym_RPAREN] = 1416,
        [sym_comment] = 8,
    },
    [601] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_RBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [602] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_RBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [603] = {
        [anon_sym_RBRACK] = 1146,
        [sym_comment] = 8,
    },
    [604] = {
        [sym__parameter_list] = 1418,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1420,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [605] = {
        [anon_sym_RPAREN] = 1422,
        [sym_comment] = 8,
    },
    [606] = {
        [anon_sym_RBRACK] = 284,
        [sym_comment] = 8,
    },
    [607] = {
        [anon_sym_RBRACK] = 626,
        [sym_comment] = 8,
    },
    [608] = {
        [sym__type] = 1424,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [609] = {
        [anon_sym_LF] = 242,
        [anon_sym_SEMI] = 242,
        [sym_comment] = 8,
    },
    [610] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 1426,
        [anon_sym_RBRACE] = 1428,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [611] = {
        [anon_sym_RBRACE] = 1430,
        [sym_comment] = 8,
    },
    [612] = {
        [anon_sym_LF] = 256,
        [anon_sym_SEMI] = 256,
        [sym_comment] = 8,
    },
    [613] = {
        [anon_sym_LF] = 356,
        [anon_sym_SEMI] = 356,
        [sym_comment] = 8,
    },
    [614] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1432,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1434,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [615] = {
        [anon_sym_RBRACE] = 1436,
        [sym_comment] = 8,
    },
    [616] = {
        [anon_sym_LF] = 396,
        [anon_sym_SEMI] = 396,
        [sym_comment] = 8,
    },
    [617] = {
        [anon_sym_LF] = 428,
        [anon_sym_SEMI] = 428,
        [sym_comment] = 8,
    },
    [618] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1438,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [619] = {
        [sym__type] = 1440,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [620] = {
        [anon_sym_LF] = 1120,
        [anon_sym_SEMI] = 1120,
        [sym_comment] = 8,
    },
    [621] = {
        [sym__type] = 1442,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [622] = {
        [anon_sym_LF] = 1136,
        [anon_sym_SEMI] = 1136,
        [sym_comment] = 8,
    },
    [623] = {
        [anon_sym_LF] = 1140,
        [anon_sym_SEMI] = 1140,
        [sym_comment] = 8,
    },
    [624] = {
        [sym_parameters] = 1444,
        [sym__type] = 1444,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 1144,
        [anon_sym_SEMI] = 1144,
        [anon_sym_LPAREN] = 264,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [625] = {
        [anon_sym_LF] = 1146,
        [anon_sym_SEMI] = 1146,
        [sym_comment] = 8,
    },
    [626] = {
        [anon_sym_LF] = 1446,
        [anon_sym_SEMI] = 1446,
        [sym_comment] = 8,
    },
    [627] = {
        [anon_sym_RPAREN] = 1448,
        [sym_comment] = 8,
    },
    [628] = {
        [anon_sym_LF] = 1450,
        [anon_sym_SEMI] = 1450,
        [sym_comment] = 8,
    },
    [629] = {
        [anon_sym_LF] = 1452,
        [anon_sym_SEMI] = 1452,
        [sym_comment] = 8,
    },
    [630] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 1454,
        [anon_sym_RPAREN] = 1456,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [631] = {
        [anon_sym_RPAREN] = 1458,
        [sym_comment] = 8,
    },
    [632] = {
        [sym_identifier] = 1460,
        [sym_comment] = 8,
    },
    [633] = {
        [sym__parameter_list] = 1462,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1464,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [634] = {
        [sym_parameters] = 1466,
        [anon_sym_LPAREN] = 1468,
        [sym_comment] = 8,
    },
    [635] = {
        [sym_parameters] = 1470,
        [sym__type] = 1470,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_block] = 1474,
        [sym_qualified_identifier] = 1472,
        [anon_sym_LF] = 1476,
        [anon_sym_SEMI] = 1476,
        [anon_sym_LPAREN] = 1478,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_LBRACE] = 1488,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [636] = {
        [sym__parameter_list] = 1500,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1502,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [637] = {
        [anon_sym_RPAREN] = 1504,
        [sym_comment] = 8,
    },
    [638] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_block] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_LBRACE] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [639] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_block] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_LBRACE] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [640] = {
        [sym_block] = 1506,
        [anon_sym_LF] = 1508,
        [anon_sym_SEMI] = 1508,
        [anon_sym_LBRACE] = 1488,
        [sym_comment] = 8,
    },
    [641] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [642] = {
        [anon_sym_LF] = 1508,
        [anon_sym_SEMI] = 1508,
        [sym_comment] = 8,
    },
    [643] = {
        [sym__parameter_list] = 1510,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1512,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [644] = {
        [sym_parameters] = 1514,
        [anon_sym_LPAREN] = 1468,
        [sym_comment] = 8,
    },
    [645] = {
        [sym__type] = 1516,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [646] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1518,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 1520,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [647] = {
        [anon_sym_LBRACE] = 1522,
        [sym_comment] = 8,
    },
    [648] = {
        [sym__declaration] = 646,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 648,
        [sym_slice_type] = 650,
        [sym_struct_type] = 650,
        [sym_map_type] = 650,
        [sym__statement] = 652,
        [sym_send_statement] = 646,
        [sym_inc_statement] = 646,
        [sym_dec_statement] = 646,
        [sym_assignment_statement] = 646,
        [sym_short_var_declaration] = 646,
        [sym_return_statement] = 646,
        [sym__expression] = 654,
        [sym_call_expression] = 656,
        [sym_composite_literal] = 656,
        [sym_func_literal] = 656,
        [sym_unary_expression] = 656,
        [sym_binary_expression] = 656,
        [sym__primary_expression] = 656,
        [sym__string_literal] = 658,
        [sym_int_literal] = 658,
        [sym_float_literal] = 658,
        [aux_sym_block_repeat1] = 1524,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 662,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_RBRACE] = 1526,
        [anon_sym_map] = 146,
        [anon_sym_return] = 666,
        [sym_identifier] = 668,
        [sym_raw_string_literal] = 670,
        [sym_interpreted_string_literal] = 670,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 672,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 672,
        [sym_comment] = 8,
    },
    [649] = {
        [anon_sym_LBRACE] = 1528,
        [sym_comment] = 8,
    },
    [650] = {
        [anon_sym_LBRACK] = 1530,
        [sym_comment] = 8,
    },
    [651] = {
        [sym__type] = 1532,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1534,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [652] = {
        [anon_sym_chan] = 1536,
        [sym_comment] = 8,
    },
    [653] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1538,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [654] = {
        [sym_identifier] = 1540,
        [sym_comment] = 8,
    },
    [655] = {
        [sym_block] = 170,
        [anon_sym_LF] = 170,
        [anon_sym_SEMI] = 170,
        [anon_sym_LBRACE] = 170,
        [sym_comment] = 8,
    },
    [656] = {
        [sym__type] = 1542,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [657] = {
        [sym_block] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [658] = {
        [sym_block] = 176,
        [anon_sym_LF] = 176,
        [anon_sym_SEMI] = 176,
        [anon_sym_LBRACE] = 176,
        [sym_comment] = 8,
    },
    [659] = {
        [sym__type] = 1544,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [660] = {
        [sym_block] = 180,
        [anon_sym_LF] = 180,
        [anon_sym_SEMI] = 180,
        [anon_sym_LBRACE] = 180,
        [sym_comment] = 8,
    },
    [661] = {
        [sym__type] = 1546,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [662] = {
        [anon_sym_RBRACK] = 1548,
        [sym_comment] = 8,
    },
    [663] = {
        [sym__type] = 1550,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [664] = {
        [sym_block] = 242,
        [anon_sym_LF] = 242,
        [anon_sym_SEMI] = 242,
        [anon_sym_LBRACE] = 242,
        [sym_comment] = 8,
    },
    [665] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 1552,
        [anon_sym_RBRACE] = 1554,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [666] = {
        [anon_sym_RBRACE] = 1556,
        [sym_comment] = 8,
    },
    [667] = {
        [sym_block] = 256,
        [anon_sym_LF] = 256,
        [anon_sym_SEMI] = 256,
        [anon_sym_LBRACE] = 256,
        [sym_comment] = 8,
    },
    [668] = {
        [sym_block] = 356,
        [anon_sym_LF] = 356,
        [anon_sym_SEMI] = 356,
        [anon_sym_LBRACE] = 356,
        [sym_comment] = 8,
    },
    [669] = {
        [anon_sym_RBRACE] = 1558,
        [sym_comment] = 8,
    },
    [670] = {
        [anon_sym_LF] = 744,
        [anon_sym_SEMI] = 744,
        [sym_comment] = 8,
    },
    [671] = {
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [sym_comment] = 8,
    },
    [672] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1560,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1562,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [673] = {
        [anon_sym_RBRACE] = 1564,
        [sym_comment] = 8,
    },
    [674] = {
        [sym_block] = 396,
        [anon_sym_LF] = 396,
        [anon_sym_SEMI] = 396,
        [anon_sym_LBRACE] = 396,
        [sym_comment] = 8,
    },
    [675] = {
        [sym_block] = 428,
        [anon_sym_LF] = 428,
        [anon_sym_SEMI] = 428,
        [anon_sym_LBRACE] = 428,
        [sym_comment] = 8,
    },
    [676] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1566,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [677] = {
        [sym__type] = 1568,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [678] = {
        [sym_block] = 1120,
        [anon_sym_LF] = 1120,
        [anon_sym_SEMI] = 1120,
        [anon_sym_LBRACE] = 1120,
        [sym_comment] = 8,
    },
    [679] = {
        [sym__type] = 1570,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_qualified_identifier] = 1472,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [680] = {
        [sym_block] = 1136,
        [anon_sym_LF] = 1136,
        [anon_sym_SEMI] = 1136,
        [anon_sym_LBRACE] = 1136,
        [sym_comment] = 8,
    },
    [681] = {
        [sym_block] = 1140,
        [anon_sym_LF] = 1140,
        [anon_sym_SEMI] = 1140,
        [anon_sym_LBRACE] = 1140,
        [sym_comment] = 8,
    },
    [682] = {
        [sym_parameters] = 1572,
        [sym__type] = 1572,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_block] = 1144,
        [sym_qualified_identifier] = 1472,
        [anon_sym_LF] = 1144,
        [anon_sym_SEMI] = 1144,
        [anon_sym_LPAREN] = 1478,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_LBRACE] = 1144,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [683] = {
        [sym_block] = 1146,
        [anon_sym_LF] = 1146,
        [anon_sym_SEMI] = 1146,
        [anon_sym_LBRACE] = 1146,
        [sym_comment] = 8,
    },
    [684] = {
        [anon_sym_RPAREN] = 1574,
        [sym_comment] = 8,
    },
    [685] = {
        [sym_block] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_LBRACE] = 284,
        [sym_comment] = 8,
    },
    [686] = {
        [sym_block] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_LBRACE] = 626,
        [sym_comment] = 8,
    },
    [687] = {
        [anon_sym_LF] = 1576,
        [anon_sym_SEMI] = 1576,
        [sym_comment] = 8,
    },
    [688] = {
        [anon_sym_RPAREN] = 1578,
        [sym_comment] = 8,
    },
    [689] = {
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [690] = {
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [691] = {
        [sym_parameters] = 1580,
        [anon_sym_LPAREN] = 1468,
        [sym_comment] = 8,
    },
    [692] = {
        [sym_parameters] = 1582,
        [sym__type] = 1582,
        [sym_pointer_type] = 1472,
        [sym_array_type] = 1472,
        [sym_slice_type] = 1472,
        [sym_struct_type] = 1472,
        [sym_interface_type] = 1472,
        [sym_map_type] = 1472,
        [sym_channel_type] = 1472,
        [sym_function_type] = 1472,
        [sym_block] = 1584,
        [sym_qualified_identifier] = 1472,
        [anon_sym_LF] = 1586,
        [anon_sym_SEMI] = 1586,
        [anon_sym_LPAREN] = 1478,
        [anon_sym_func] = 1480,
        [anon_sym_STAR] = 1482,
        [anon_sym_LBRACK] = 1484,
        [anon_sym_struct] = 1486,
        [anon_sym_LBRACE] = 1488,
        [anon_sym_interface] = 1490,
        [anon_sym_map] = 1492,
        [anon_sym_chan] = 1494,
        [anon_sym_LT_DASH] = 1496,
        [sym_identifier] = 1498,
        [sym_comment] = 8,
    },
    [693] = {
        [sym_block] = 1588,
        [anon_sym_LF] = 1590,
        [anon_sym_SEMI] = 1590,
        [anon_sym_LBRACE] = 1488,
        [sym_comment] = 8,
    },
    [694] = {
        [anon_sym_LF] = 1590,
        [anon_sym_SEMI] = 1590,
        [sym_comment] = 8,
    },
    [695] = {
        [anon_sym_LF] = 1592,
        [anon_sym_SEMI] = 1592,
        [sym_comment] = 8,
    },
    [696] = {
        [anon_sym_LF] = 1594,
        [anon_sym_SEMI] = 1594,
        [sym_comment] = 8,
    },
    [697] = {
        [sym__type] = 1596,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_EQ] = 1600,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [698] = {
        [sym_var_spec] = 1620,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1622,
        [anon_sym_RPAREN] = 1624,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [699] = {
        [sym__type] = 398,
        [sym_pointer_type] = 398,
        [sym_array_type] = 398,
        [sym_slice_type] = 398,
        [sym_struct_type] = 398,
        [sym_interface_type] = 398,
        [sym_map_type] = 398,
        [sym_channel_type] = 398,
        [sym_function_type] = 398,
        [sym_qualified_identifier] = 398,
        [aux_sym_identifier_list_repeat1] = 1626,
        [anon_sym_EQ] = 398,
        [anon_sym_func] = 398,
        [anon_sym_COMMA] = 1628,
        [anon_sym_STAR] = 398,
        [anon_sym_LBRACK] = 398,
        [anon_sym_struct] = 398,
        [anon_sym_interface] = 398,
        [anon_sym_map] = 398,
        [anon_sym_chan] = 398,
        [anon_sym_LT_DASH] = 398,
        [sym_identifier] = 398,
        [sym_comment] = 8,
    },
    [700] = {
        [sym__type] = 412,
        [sym_pointer_type] = 412,
        [sym_array_type] = 412,
        [sym_slice_type] = 412,
        [sym_struct_type] = 412,
        [sym_interface_type] = 412,
        [sym_map_type] = 412,
        [sym_channel_type] = 412,
        [sym_function_type] = 412,
        [sym_qualified_identifier] = 412,
        [anon_sym_EQ] = 412,
        [anon_sym_func] = 412,
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
    [701] = {
        [sym_identifier] = 1630,
        [sym_comment] = 8,
    },
    [702] = {
        [sym__type] = 418,
        [sym_pointer_type] = 418,
        [sym_array_type] = 418,
        [sym_slice_type] = 418,
        [sym_struct_type] = 418,
        [sym_interface_type] = 418,
        [sym_map_type] = 418,
        [sym_channel_type] = 418,
        [sym_function_type] = 418,
        [sym_qualified_identifier] = 418,
        [aux_sym_identifier_list_repeat1] = 1632,
        [anon_sym_EQ] = 418,
        [anon_sym_func] = 418,
        [anon_sym_COMMA] = 1628,
        [anon_sym_STAR] = 418,
        [anon_sym_LBRACK] = 418,
        [anon_sym_struct] = 418,
        [anon_sym_interface] = 418,
        [anon_sym_map] = 418,
        [anon_sym_chan] = 418,
        [anon_sym_LT_DASH] = 418,
        [sym_identifier] = 418,
        [sym_comment] = 8,
    },
    [703] = {
        [sym__type] = 422,
        [sym_pointer_type] = 422,
        [sym_array_type] = 422,
        [sym_slice_type] = 422,
        [sym_struct_type] = 422,
        [sym_interface_type] = 422,
        [sym_map_type] = 422,
        [sym_channel_type] = 422,
        [sym_function_type] = 422,
        [sym_qualified_identifier] = 422,
        [anon_sym_EQ] = 422,
        [anon_sym_func] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_LBRACK] = 422,
        [anon_sym_struct] = 422,
        [anon_sym_interface] = 422,
        [anon_sym_map] = 422,
        [anon_sym_chan] = 422,
        [anon_sym_LT_DASH] = 422,
        [sym_identifier] = 422,
        [sym_comment] = 8,
    },
    [704] = {
        [anon_sym_LF] = 1634,
        [anon_sym_SEMI] = 1634,
        [sym_comment] = 8,
    },
    [705] = {
        [anon_sym_RPAREN] = 1636,
        [sym_comment] = 8,
    },
    [706] = {
        [anon_sym_LF] = 1638,
        [anon_sym_SEMI] = 1638,
        [sym_comment] = 8,
    },
    [707] = {
        [anon_sym_LF] = 1640,
        [anon_sym_SEMI] = 1640,
        [sym_comment] = 8,
    },
    [708] = {
        [sym_var_spec] = 1620,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1642,
        [anon_sym_RPAREN] = 1644,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [709] = {
        [anon_sym_RPAREN] = 1646,
        [sym_comment] = 8,
    },
    [710] = {
        [anon_sym_LF] = 1648,
        [anon_sym_SEMI] = 1648,
        [anon_sym_EQ] = 1650,
        [sym_comment] = 8,
    },
    [711] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [712] = {
        [sym_expression_list] = 1652,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [713] = {
        [sym_parameters] = 1654,
        [anon_sym_LPAREN] = 1656,
        [sym_comment] = 8,
    },
    [714] = {
        [sym__type] = 1658,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [715] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1660,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 1662,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [716] = {
        [anon_sym_LBRACE] = 1664,
        [sym_comment] = 8,
    },
    [717] = {
        [anon_sym_LBRACE] = 1666,
        [sym_comment] = 8,
    },
    [718] = {
        [anon_sym_LBRACK] = 1668,
        [sym_comment] = 8,
    },
    [719] = {
        [sym__type] = 1670,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1672,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [720] = {
        [anon_sym_chan] = 1674,
        [sym_comment] = 8,
    },
    [721] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1676,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [722] = {
        [sym_identifier] = 1678,
        [sym_comment] = 8,
    },
    [723] = {
        [anon_sym_LF] = 170,
        [anon_sym_SEMI] = 170,
        [anon_sym_EQ] = 170,
        [sym_comment] = 8,
    },
    [724] = {
        [sym__type] = 1680,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [725] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [726] = {
        [anon_sym_LF] = 176,
        [anon_sym_SEMI] = 176,
        [anon_sym_EQ] = 176,
        [sym_comment] = 8,
    },
    [727] = {
        [sym__type] = 1682,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [728] = {
        [anon_sym_LF] = 180,
        [anon_sym_SEMI] = 180,
        [anon_sym_EQ] = 180,
        [sym_comment] = 8,
    },
    [729] = {
        [sym__type] = 1684,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [730] = {
        [anon_sym_RBRACK] = 1686,
        [sym_comment] = 8,
    },
    [731] = {
        [sym__type] = 1688,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [732] = {
        [anon_sym_LF] = 242,
        [anon_sym_SEMI] = 242,
        [anon_sym_EQ] = 242,
        [sym_comment] = 8,
    },
    [733] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 1690,
        [anon_sym_RBRACE] = 1692,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [734] = {
        [anon_sym_RBRACE] = 1694,
        [sym_comment] = 8,
    },
    [735] = {
        [anon_sym_LF] = 256,
        [anon_sym_SEMI] = 256,
        [anon_sym_EQ] = 256,
        [sym_comment] = 8,
    },
    [736] = {
        [anon_sym_LF] = 356,
        [anon_sym_SEMI] = 356,
        [anon_sym_EQ] = 356,
        [sym_comment] = 8,
    },
    [737] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1696,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1698,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [738] = {
        [anon_sym_RBRACE] = 1700,
        [sym_comment] = 8,
    },
    [739] = {
        [anon_sym_LF] = 396,
        [anon_sym_SEMI] = 396,
        [anon_sym_EQ] = 396,
        [sym_comment] = 8,
    },
    [740] = {
        [anon_sym_LF] = 428,
        [anon_sym_SEMI] = 428,
        [anon_sym_EQ] = 428,
        [sym_comment] = 8,
    },
    [741] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1702,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [742] = {
        [sym__type] = 1704,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [743] = {
        [anon_sym_LF] = 1120,
        [anon_sym_SEMI] = 1120,
        [anon_sym_EQ] = 1120,
        [sym_comment] = 8,
    },
    [744] = {
        [sym__type] = 1706,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [745] = {
        [anon_sym_LF] = 1136,
        [anon_sym_SEMI] = 1136,
        [anon_sym_EQ] = 1136,
        [sym_comment] = 8,
    },
    [746] = {
        [anon_sym_LF] = 1140,
        [anon_sym_SEMI] = 1140,
        [anon_sym_EQ] = 1140,
        [sym_comment] = 8,
    },
    [747] = {
        [sym_parameters] = 1708,
        [sym__type] = 1708,
        [sym_pointer_type] = 1598,
        [sym_array_type] = 1598,
        [sym_slice_type] = 1598,
        [sym_struct_type] = 1598,
        [sym_interface_type] = 1598,
        [sym_map_type] = 1598,
        [sym_channel_type] = 1598,
        [sym_function_type] = 1598,
        [sym_qualified_identifier] = 1598,
        [anon_sym_LF] = 1144,
        [anon_sym_SEMI] = 1144,
        [anon_sym_LPAREN] = 1710,
        [anon_sym_EQ] = 1144,
        [anon_sym_func] = 1602,
        [anon_sym_STAR] = 1604,
        [anon_sym_LBRACK] = 1606,
        [anon_sym_struct] = 1608,
        [anon_sym_interface] = 1610,
        [anon_sym_map] = 1612,
        [anon_sym_chan] = 1614,
        [anon_sym_LT_DASH] = 1616,
        [sym_identifier] = 1618,
        [sym_comment] = 8,
    },
    [748] = {
        [sym__parameter_list] = 1712,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1714,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [749] = {
        [anon_sym_RPAREN] = 1716,
        [sym_comment] = 8,
    },
    [750] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_EQ] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [751] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_EQ] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [752] = {
        [anon_sym_LF] = 1146,
        [anon_sym_SEMI] = 1146,
        [anon_sym_EQ] = 1146,
        [sym_comment] = 8,
    },
    [753] = {
        [sym__parameter_list] = 1718,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1720,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [754] = {
        [anon_sym_RPAREN] = 1722,
        [sym_comment] = 8,
    },
    [755] = {
        [anon_sym_LF] = 284,
        [anon_sym_SEMI] = 284,
        [anon_sym_EQ] = 284,
        [sym_comment] = 8,
    },
    [756] = {
        [anon_sym_LF] = 626,
        [anon_sym_SEMI] = 626,
        [anon_sym_EQ] = 626,
        [sym_comment] = 8,
    },
    [757] = {
        [anon_sym_LF] = 1724,
        [anon_sym_SEMI] = 1724,
        [sym_comment] = 8,
    },
    [758] = {
        [sym_expression_list] = 1726,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [759] = {
        [anon_sym_LF] = 1728,
        [anon_sym_SEMI] = 1728,
        [sym_comment] = 8,
    },
    [760] = {
        [anon_sym_LF] = 1730,
        [anon_sym_SEMI] = 1730,
        [sym_comment] = 8,
    },
    [761] = {
        [sym__type] = 1732,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_EQ] = 1736,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [762] = {
        [sym_const_spec] = 1756,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1758,
        [anon_sym_RPAREN] = 1760,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [763] = {
        [anon_sym_LF] = 1762,
        [anon_sym_SEMI] = 1762,
        [sym_comment] = 8,
    },
    [764] = {
        [anon_sym_RPAREN] = 1764,
        [sym_comment] = 8,
    },
    [765] = {
        [anon_sym_LF] = 1766,
        [anon_sym_SEMI] = 1766,
        [sym_comment] = 8,
    },
    [766] = {
        [anon_sym_LF] = 1768,
        [anon_sym_SEMI] = 1768,
        [sym_comment] = 8,
    },
    [767] = {
        [sym_const_spec] = 1756,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1770,
        [anon_sym_RPAREN] = 1772,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [768] = {
        [anon_sym_RPAREN] = 1774,
        [sym_comment] = 8,
    },
    [769] = {
        [anon_sym_EQ] = 1776,
        [sym_comment] = 8,
    },
    [770] = {
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [771] = {
        [sym_expression_list] = 1778,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [772] = {
        [sym_parameters] = 1780,
        [anon_sym_LPAREN] = 1782,
        [sym_comment] = 8,
    },
    [773] = {
        [sym__type] = 1784,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [774] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1786,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_func] = 138,
        [anon_sym_LBRACK] = 140,
        [anon_sym_RBRACK] = 1788,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 148,
        [sym_raw_string_literal] = 150,
        [sym_interpreted_string_literal] = 150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 152,
        [sym_comment] = 8,
    },
    [775] = {
        [anon_sym_LBRACE] = 1790,
        [sym_comment] = 8,
    },
    [776] = {
        [anon_sym_LBRACE] = 1792,
        [sym_comment] = 8,
    },
    [777] = {
        [anon_sym_LBRACK] = 1794,
        [sym_comment] = 8,
    },
    [778] = {
        [sym__type] = 1796,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1798,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [779] = {
        [anon_sym_chan] = 1800,
        [sym_comment] = 8,
    },
    [780] = {
        [anon_sym_DOT] = 1802,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [781] = {
        [sym_identifier] = 1804,
        [sym_comment] = 8,
    },
    [782] = {
        [anon_sym_EQ] = 170,
        [sym_comment] = 8,
    },
    [783] = {
        [sym__type] = 1806,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [784] = {
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [785] = {
        [anon_sym_EQ] = 176,
        [sym_comment] = 8,
    },
    [786] = {
        [sym__type] = 1808,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [787] = {
        [anon_sym_EQ] = 180,
        [sym_comment] = 8,
    },
    [788] = {
        [sym__type] = 1810,
        [sym_pointer_type] = 184,
        [sym_array_type] = 184,
        [sym_slice_type] = 184,
        [sym_struct_type] = 184,
        [sym_interface_type] = 184,
        [sym_map_type] = 184,
        [sym_channel_type] = 184,
        [sym_function_type] = 184,
        [sym_qualified_identifier] = 184,
        [anon_sym_func] = 186,
        [anon_sym_STAR] = 188,
        [anon_sym_LBRACK] = 190,
        [anon_sym_struct] = 192,
        [anon_sym_interface] = 194,
        [anon_sym_map] = 196,
        [anon_sym_chan] = 198,
        [anon_sym_LT_DASH] = 200,
        [sym_identifier] = 202,
        [sym_comment] = 8,
    },
    [789] = {
        [anon_sym_RBRACK] = 1812,
        [sym_comment] = 8,
    },
    [790] = {
        [sym__type] = 1814,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [791] = {
        [anon_sym_EQ] = 242,
        [sym_comment] = 8,
    },
    [792] = {
        [sym_method_spec] = 244,
        [aux_sym_interface_type_repeat1] = 1816,
        [anon_sym_RBRACE] = 1818,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [793] = {
        [anon_sym_RBRACE] = 1820,
        [sym_comment] = 8,
    },
    [794] = {
        [anon_sym_EQ] = 256,
        [sym_comment] = 8,
    },
    [795] = {
        [anon_sym_EQ] = 356,
        [sym_comment] = 8,
    },
    [796] = {
        [sym_identifier_list] = 358,
        [sym_field_declaration] = 360,
        [aux_sym_struct_type_repeat1] = 1822,
        [anon_sym_STAR] = 364,
        [anon_sym_RBRACE] = 1824,
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [797] = {
        [anon_sym_RBRACE] = 1826,
        [sym_comment] = 8,
    },
    [798] = {
        [anon_sym_EQ] = 396,
        [sym_comment] = 8,
    },
    [799] = {
        [anon_sym_EQ] = 428,
        [sym_comment] = 8,
    },
    [800] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1828,
        [anon_sym_SLASH] = 490,
        [anon_sym_PERCENT] = 490,
        [anon_sym_LT_LT] = 490,
        [anon_sym_GT_GT] = 490,
        [anon_sym_AMP] = 490,
        [anon_sym_AMP_CARET] = 490,
        [anon_sym_PLUS] = 494,
        [anon_sym_DASH] = 494,
        [anon_sym_PIPE] = 494,
        [anon_sym_CARET] = 494,
        [anon_sym_EQ_EQ] = 496,
        [anon_sym_BANG_EQ] = 496,
        [anon_sym_LT] = 496,
        [anon_sym_LT_EQ] = 496,
        [anon_sym_GT] = 496,
        [anon_sym_GT_EQ] = 496,
        [anon_sym_AMP_AMP] = 498,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [801] = {
        [sym__type] = 1830,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [802] = {
        [anon_sym_EQ] = 1120,
        [sym_comment] = 8,
    },
    [803] = {
        [sym__type] = 1832,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [804] = {
        [anon_sym_EQ] = 1136,
        [sym_comment] = 8,
    },
    [805] = {
        [anon_sym_EQ] = 1140,
        [sym_comment] = 8,
    },
    [806] = {
        [sym_parameters] = 1834,
        [sym__type] = 1834,
        [sym_pointer_type] = 1734,
        [sym_array_type] = 1734,
        [sym_slice_type] = 1734,
        [sym_struct_type] = 1734,
        [sym_interface_type] = 1734,
        [sym_map_type] = 1734,
        [sym_channel_type] = 1734,
        [sym_function_type] = 1734,
        [sym_qualified_identifier] = 1734,
        [anon_sym_LPAREN] = 1836,
        [anon_sym_EQ] = 1144,
        [anon_sym_func] = 1738,
        [anon_sym_STAR] = 1740,
        [anon_sym_LBRACK] = 1742,
        [anon_sym_struct] = 1744,
        [anon_sym_interface] = 1746,
        [anon_sym_map] = 1748,
        [anon_sym_chan] = 1750,
        [anon_sym_LT_DASH] = 1752,
        [sym_identifier] = 1754,
        [sym_comment] = 8,
    },
    [807] = {
        [sym__parameter_list] = 1838,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1840,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [808] = {
        [anon_sym_RPAREN] = 1842,
        [sym_comment] = 8,
    },
    [809] = {
        [sym_parameters] = 284,
        [sym__type] = 284,
        [sym_pointer_type] = 284,
        [sym_array_type] = 284,
        [sym_slice_type] = 284,
        [sym_struct_type] = 284,
        [sym_interface_type] = 284,
        [sym_map_type] = 284,
        [sym_channel_type] = 284,
        [sym_function_type] = 284,
        [sym_qualified_identifier] = 284,
        [anon_sym_LPAREN] = 284,
        [anon_sym_EQ] = 284,
        [anon_sym_func] = 284,
        [anon_sym_STAR] = 284,
        [anon_sym_LBRACK] = 284,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 284,
        [anon_sym_map] = 284,
        [anon_sym_chan] = 284,
        [anon_sym_LT_DASH] = 284,
        [sym_identifier] = 284,
        [sym_comment] = 8,
    },
    [810] = {
        [sym_parameters] = 626,
        [sym__type] = 626,
        [sym_pointer_type] = 626,
        [sym_array_type] = 626,
        [sym_slice_type] = 626,
        [sym_struct_type] = 626,
        [sym_interface_type] = 626,
        [sym_map_type] = 626,
        [sym_channel_type] = 626,
        [sym_function_type] = 626,
        [sym_qualified_identifier] = 626,
        [anon_sym_LPAREN] = 626,
        [anon_sym_EQ] = 626,
        [anon_sym_func] = 626,
        [anon_sym_STAR] = 626,
        [anon_sym_LBRACK] = 626,
        [anon_sym_struct] = 626,
        [anon_sym_interface] = 626,
        [anon_sym_map] = 626,
        [anon_sym_chan] = 626,
        [anon_sym_LT_DASH] = 626,
        [sym_identifier] = 626,
        [sym_comment] = 8,
    },
    [811] = {
        [anon_sym_EQ] = 1146,
        [sym_comment] = 8,
    },
    [812] = {
        [sym__parameter_list] = 1844,
        [sym_parameter_declaration] = 272,
        [anon_sym_RPAREN] = 1846,
        [sym_identifier] = 276,
        [sym_comment] = 8,
    },
    [813] = {
        [anon_sym_RPAREN] = 1848,
        [sym_comment] = 8,
    },
    [814] = {
        [anon_sym_EQ] = 284,
        [sym_comment] = 8,
    },
    [815] = {
        [anon_sym_EQ] = 626,
        [sym_comment] = 8,
    },
    [816] = {
        [anon_sym_LF] = 1850,
        [anon_sym_SEMI] = 1850,
        [sym_comment] = 8,
    },
    [817] = {
        [sym_expression_list] = 1852,
        [sym_slice_type] = 748,
        [sym_struct_type] = 748,
        [sym_map_type] = 748,
        [sym__expression] = 750,
        [sym_call_expression] = 752,
        [sym_composite_literal] = 752,
        [sym_func_literal] = 752,
        [sym_unary_expression] = 752,
        [sym_binary_expression] = 752,
        [sym__primary_expression] = 752,
        [sym__string_literal] = 754,
        [sym_int_literal] = 754,
        [sym_float_literal] = 754,
        [anon_sym_func] = 756,
        [anon_sym_LBRACK] = 140,
        [anon_sym_struct] = 144,
        [anon_sym_map] = 146,
        [sym_identifier] = 758,
        [sym_raw_string_literal] = 760,
        [sym_interpreted_string_literal] = 760,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 762,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 762,
        [sym_comment] = 8,
    },
    [818] = {
        [anon_sym_LF] = 1854,
        [anon_sym_SEMI] = 1854,
        [sym_comment] = 8,
    },
    [819] = {
        [sym_import_declaration] = 1856,
        [sym__top_level_declaration] = 1856,
        [sym__declaration] = 1856,
        [sym_const_declaration] = 1856,
        [sym_var_declaration] = 1856,
        [sym_function_declaration] = 1856,
        [sym_method_declaration] = 1856,
        [sym_type_declaration] = 1856,
        [aux_sym_source_file_repeat1] = 1856,
        [aux_sym_source_file_repeat2] = 1856,
        [ts_builtin_sym_end] = 1856,
        [anon_sym_import] = 1856,
        [anon_sym_const] = 1856,
        [anon_sym_var] = 1856,
        [anon_sym_func] = 1856,
        [anon_sym_type] = 1856,
        [sym_comment] = 8,
    },
    [820] = {
        [sym_import_declaration] = 1858,
        [sym__top_level_declaration] = 1858,
        [sym__declaration] = 1858,
        [sym_const_declaration] = 1858,
        [sym_var_declaration] = 1858,
        [sym_function_declaration] = 1858,
        [sym_method_declaration] = 1858,
        [sym_type_declaration] = 1858,
        [aux_sym_source_file_repeat1] = 1858,
        [aux_sym_source_file_repeat2] = 1858,
        [ts_builtin_sym_end] = 1858,
        [anon_sym_import] = 1858,
        [anon_sym_const] = 1858,
        [anon_sym_var] = 1858,
        [anon_sym_func] = 1858,
        [anon_sym_type] = 1858,
        [sym_comment] = 8,
    },
    [821] = {
        [sym_import_spec] = 1860,
        [sym__string_literal] = 1862,
        [aux_sym_import_declaration_repeat1] = 1864,
        [anon_sym_RPAREN] = 1866,
        [anon_sym_DOT] = 1868,
        [sym_identifier] = 1868,
        [sym_raw_string_literal] = 408,
        [sym_interpreted_string_literal] = 408,
        [sym_comment] = 8,
    },
    [822] = {
        [sym__string_literal] = 1870,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [823] = {
        [sym_import_declaration] = 416,
        [sym__top_level_declaration] = 416,
        [sym__declaration] = 416,
        [sym_const_declaration] = 416,
        [sym_var_declaration] = 416,
        [sym_function_declaration] = 416,
        [sym_method_declaration] = 416,
        [sym_type_declaration] = 416,
        [aux_sym_source_file_repeat1] = 416,
        [aux_sym_source_file_repeat2] = 416,
        [ts_builtin_sym_end] = 416,
        [anon_sym_import] = 416,
        [anon_sym_const] = 416,
        [anon_sym_var] = 416,
        [anon_sym_func] = 416,
        [anon_sym_type] = 416,
        [sym_comment] = 8,
    },
    [824] = {
        [sym_import_declaration] = 1872,
        [sym__top_level_declaration] = 1872,
        [sym__declaration] = 1872,
        [sym_const_declaration] = 1872,
        [sym_var_declaration] = 1872,
        [sym_function_declaration] = 1872,
        [sym_method_declaration] = 1872,
        [sym_type_declaration] = 1872,
        [aux_sym_source_file_repeat1] = 1872,
        [aux_sym_source_file_repeat2] = 1872,
        [ts_builtin_sym_end] = 1872,
        [anon_sym_import] = 1872,
        [anon_sym_const] = 1872,
        [anon_sym_var] = 1872,
        [anon_sym_func] = 1872,
        [anon_sym_type] = 1872,
        [sym_comment] = 8,
    },
    [825] = {
        [anon_sym_LF] = 1874,
        [anon_sym_SEMI] = 1874,
        [sym_comment] = 8,
    },
    [826] = {
        [anon_sym_LF] = 1858,
        [anon_sym_SEMI] = 1858,
        [sym_comment] = 8,
    },
    [827] = {
        [anon_sym_RPAREN] = 1876,
        [sym_comment] = 8,
    },
    [828] = {
        [sym_import_declaration] = 1878,
        [sym__top_level_declaration] = 1878,
        [sym__declaration] = 1878,
        [sym_const_declaration] = 1878,
        [sym_var_declaration] = 1878,
        [sym_function_declaration] = 1878,
        [sym_method_declaration] = 1878,
        [sym_type_declaration] = 1878,
        [aux_sym_source_file_repeat1] = 1878,
        [aux_sym_source_file_repeat2] = 1878,
        [ts_builtin_sym_end] = 1878,
        [anon_sym_import] = 1878,
        [anon_sym_const] = 1878,
        [anon_sym_var] = 1878,
        [anon_sym_func] = 1878,
        [anon_sym_type] = 1878,
        [sym_comment] = 8,
    },
    [829] = {
        [sym__string_literal] = 1880,
        [sym_raw_string_literal] = 408,
        [sym_interpreted_string_literal] = 408,
        [sym_comment] = 8,
    },
    [830] = {
        [anon_sym_LF] = 1872,
        [anon_sym_SEMI] = 1872,
        [sym_comment] = 8,
    },
    [831] = {
        [sym_import_declaration] = 1882,
        [sym__top_level_declaration] = 1882,
        [sym__declaration] = 1882,
        [sym_const_declaration] = 1882,
        [sym_var_declaration] = 1882,
        [sym_function_declaration] = 1882,
        [sym_method_declaration] = 1882,
        [sym_type_declaration] = 1882,
        [aux_sym_source_file_repeat1] = 1882,
        [aux_sym_source_file_repeat2] = 1882,
        [ts_builtin_sym_end] = 1882,
        [anon_sym_import] = 1882,
        [anon_sym_const] = 1882,
        [anon_sym_var] = 1882,
        [anon_sym_func] = 1882,
        [anon_sym_type] = 1882,
        [sym_comment] = 8,
    },
    [832] = {
        [sym_import_spec] = 1860,
        [sym__string_literal] = 1862,
        [aux_sym_import_declaration_repeat1] = 1884,
        [anon_sym_RPAREN] = 1886,
        [anon_sym_DOT] = 1868,
        [sym_identifier] = 1868,
        [sym_raw_string_literal] = 408,
        [sym_interpreted_string_literal] = 408,
        [sym_comment] = 8,
    },
    [833] = {
        [anon_sym_RPAREN] = 1888,
        [sym_comment] = 8,
    },
    [834] = {
        [ts_builtin_sym_end] = 1890,
        [sym_comment] = 8,
    },
    [835] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 1892,
        [ts_builtin_sym_end] = 1894,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [836] = {
        [ts_builtin_sym_end] = 1896,
        [sym_comment] = 8,
    },
    [837] = {
        [sym__top_level_declaration] = 1898,
        [sym__declaration] = 1898,
        [sym_const_declaration] = 1898,
        [sym_var_declaration] = 1898,
        [sym_function_declaration] = 1898,
        [sym_method_declaration] = 1898,
        [sym_type_declaration] = 1898,
        [aux_sym_source_file_repeat2] = 1898,
        [ts_builtin_sym_end] = 1898,
        [anon_sym_const] = 1898,
        [anon_sym_var] = 1898,
        [anon_sym_func] = 1898,
        [anon_sym_type] = 1898,
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
    [42] = {.count = 1}, SHIFT(837, 0),
    [44] = {.count = 1}, SHIFT(835, 0),
    [46] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [50] = {.count = 1}, SHIFT(834, 0),
    [52] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [54] = {.count = 1}, SHIFT(819, 0),
    [56] = {.count = 1}, SHIFT(820, 0),
    [58] = {.count = 1}, SHIFT(821, 0),
    [60] = {.count = 1}, SHIFT(822, 0),
    [62] = {.count = 1}, SHIFT(823, 0),
    [64] = {.count = 1}, SHIFT(760, 0),
    [66] = {.count = 1}, SHIFT(761, 0),
    [68] = {.count = 1}, SHIFT(762, 0),
    [70] = {.count = 1}, SHIFT(699, 0),
    [72] = {.count = 1}, SHIFT(696, 0),
    [74] = {.count = 1}, SHIFT(697, 0),
    [76] = {.count = 1}, SHIFT(698, 0),
    [78] = {.count = 1}, SHIFT(632, 0),
    [80] = {.count = 1}, SHIFT(633, 0),
    [82] = {.count = 1}, SHIFT(634, 0),
    [84] = {.count = 1}, SHIFT(16, 0),
    [86] = {.count = 1}, SHIFT(17, 0),
    [88] = {.count = 1}, SHIFT(18, 0),
    [90] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [92] = {.count = 1}, SHIFT(626, 0),
    [94] = {.count = 1}, SHIFT(627, 0),
    [96] = {.count = 1}, SHIFT(628, 0),
    [98] = {.count = 1}, SHIFT(19, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, SHIFT(21, 0),
    [104] = {.count = 1}, SHIFT(22, 0),
    [106] = {.count = 1}, SHIFT(23, 0),
    [108] = {.count = 1}, SHIFT(24, 0),
    [110] = {.count = 1}, SHIFT(25, 0),
    [112] = {.count = 1}, SHIFT(26, 0),
    [114] = {.count = 1}, SHIFT(27, 0),
    [116] = {.count = 1}, SHIFT(28, 0),
    [118] = {.count = 1}, SHIFT(29, 0),
    [120] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [122] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [124] = {.count = 1}, SHIFT(624, 0),
    [126] = {.count = 1}, SHIFT(67, 0),
    [128] = {.count = 1}, SHIFT(623, 0),
    [130] = {.count = 1}, SHIFT(146, 0),
    [132] = {.count = 1}, SHIFT(618, 0),
    [134] = {.count = 1}, SHIFT(148, 0),
    [136] = {.count = 1}, SHIFT(149, 0),
    [138] = {.count = 1}, SHIFT(150, 0),
    [140] = {.count = 1}, SHIFT(151, 0),
    [142] = {.count = 1}, SHIFT(619, 0),
    [144] = {.count = 1}, SHIFT(153, 0),
    [146] = {.count = 1}, SHIFT(154, 0),
    [148] = {.count = 1}, SHIFT(155, 0),
    [150] = {.count = 1}, SHIFT(156, 0),
    [152] = {.count = 1}, SHIFT(157, 0),
    [154] = {.count = 1}, SHIFT(614, 0),
    [156] = {.count = 1}, SHIFT(610, 0),
    [158] = {.count = 1}, SHIFT(37, 0),
    [160] = {.count = 1}, SHIFT(34, 0),
    [162] = {.count = 1}, SHIFT(35, 0),
    [164] = {.count = 1}, SHIFT(32, 0),
    [166] = {.count = 1}, SHIFT(30, 0),
    [168] = {.count = 1}, SHIFT(31, 0),
    [170] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [172] = {.count = 1}, SHIFT(33, 0),
    [174] = {.count = 1}, REDUCE(sym_channel_type, 3, FRAGILE),
    [176] = {.count = 1}, REDUCE(sym_channel_type, 2, 0),
    [178] = {.count = 1}, SHIFT(36, 0),
    [180] = {.count = 1}, REDUCE(sym_channel_type, 3, 0),
    [182] = {.count = 1}, SHIFT(38, 0),
    [184] = {.count = 1}, SHIFT(39, 0),
    [186] = {.count = 1}, SHIFT(40, 0),
    [188] = {.count = 1}, SHIFT(41, 0),
    [190] = {.count = 1}, SHIFT(42, 0),
    [192] = {.count = 1}, SHIFT(43, 0),
    [194] = {.count = 1}, SHIFT(44, 0),
    [196] = {.count = 1}, SHIFT(45, 0),
    [198] = {.count = 1}, SHIFT(46, 0),
    [200] = {.count = 1}, SHIFT(47, 0),
    [202] = {.count = 1}, SHIFT(48, 0),
    [204] = {.count = 1}, SHIFT(608, 0),
    [206] = {.count = 1}, SHIFT(598, 0),
    [208] = {.count = 1}, SHIFT(599, 0),
    [210] = {.count = 1}, SHIFT(597, 0),
    [212] = {.count = 1}, SHIFT(592, 0),
    [214] = {.count = 1}, SHIFT(593, 0),
    [216] = {.count = 1}, SHIFT(588, 0),
    [218] = {.count = 1}, SHIFT(60, 0),
    [220] = {.count = 1}, SHIFT(56, 0),
    [222] = {.count = 1}, SHIFT(53, 0),
    [224] = {.count = 1}, SHIFT(54, 0),
    [226] = {.count = 1}, SHIFT(51, 0),
    [228] = {.count = 1}, SHIFT(49, 0),
    [230] = {.count = 1}, SHIFT(50, 0),
    [232] = {.count = 1}, SHIFT(52, 0),
    [234] = {.count = 1}, SHIFT(55, 0),
    [236] = {.count = 1}, SHIFT(57, 0),
    [238] = {.count = 1}, SHIFT(58, 0),
    [240] = {.count = 1}, SHIFT(59, 0),
    [242] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [244] = {.count = 1}, SHIFT(61, 0),
    [246] = {.count = 1}, SHIFT(62, 0),
    [248] = {.count = 1}, SHIFT(63, 0),
    [250] = {.count = 1}, SHIFT(64, 0),
    [252] = {.count = 1}, SHIFT(66, 0),
    [254] = {.count = 1}, SHIFT(587, 0),
    [256] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [258] = {.count = 1}, SHIFT(65, 0),
    [260] = {.count = 1}, SHIFT(582, 0),
    [262] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [264] = {.count = 1}, SHIFT(583, 0),
    [266] = {.count = 1}, SHIFT(581, 0),
    [268] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [270] = {.count = 1}, SHIFT(68, 0),
    [272] = {.count = 1}, SHIFT(69, 0),
    [274] = {.count = 1}, SHIFT(70, 0),
    [276] = {.count = 1}, SHIFT(71, 0),
    [278] = {.count = 1}, SHIFT(580, 0),
    [280] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [282] = {.count = 1}, SHIFT(75, 0),
    [284] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [286] = {.count = 1}, SHIFT(72, 0),
    [288] = {.count = 1}, SHIFT(73, 0),
    [290] = {.count = 1}, SHIFT(74, 0),
    [292] = {.count = 1}, SHIFT(76, 0),
    [294] = {.count = 1}, SHIFT(77, 0),
    [296] = {.count = 1}, SHIFT(78, 0),
    [298] = {.count = 1}, SHIFT(79, 0),
    [300] = {.count = 1}, SHIFT(80, 0),
    [302] = {.count = 1}, SHIFT(81, 0),
    [304] = {.count = 1}, SHIFT(82, 0),
    [306] = {.count = 1}, SHIFT(83, 0),
    [308] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [310] = {.count = 1}, SHIFT(570, 0),
    [312] = {.count = 1}, SHIFT(571, 0),
    [314] = {.count = 1}, SHIFT(569, 0),
    [316] = {.count = 1}, REDUCE(sym__parameter_list, 2, 0),
    [318] = {.count = 1}, SHIFT(568, 0),
    [320] = {.count = 1}, SHIFT(563, 0),
    [322] = {.count = 1}, SHIFT(564, 0),
    [324] = {.count = 1}, SHIFT(99, 0),
    [326] = {.count = 1}, SHIFT(95, 0),
    [328] = {.count = 1}, SHIFT(91, 0),
    [330] = {.count = 1}, SHIFT(88, 0),
    [332] = {.count = 1}, SHIFT(89, 0),
    [334] = {.count = 1}, SHIFT(86, 0),
    [336] = {.count = 1}, SHIFT(84, 0),
    [338] = {.count = 1}, SHIFT(85, 0),
    [340] = {.count = 1}, SHIFT(87, 0),
    [342] = {.count = 1}, SHIFT(90, 0),
    [344] = {.count = 1}, SHIFT(92, 0),
    [346] = {.count = 1}, SHIFT(93, 0),
    [348] = {.count = 1}, SHIFT(94, 0),
    [350] = {.count = 1}, SHIFT(96, 0),
    [352] = {.count = 1}, SHIFT(97, 0),
    [354] = {.count = 1}, SHIFT(98, 0),
    [356] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [358] = {.count = 1}, SHIFT(100, 0),
    [360] = {.count = 1}, SHIFT(101, 0),
    [362] = {.count = 1}, SHIFT(102, 0),
    [364] = {.count = 1}, SHIFT(103, 0),
    [366] = {.count = 1}, SHIFT(104, 0),
    [368] = {.count = 1}, SHIFT(105, 0),
    [370] = {.count = 1}, SHIFT(112, 0),
    [372] = {.count = 1}, SHIFT(117, 0),
    [374] = {.count = 1}, SHIFT(118, 0),
    [376] = {.count = 1}, SHIFT(119, 0),
    [378] = {.count = 1}, SHIFT(120, 0),
    [380] = {.count = 1}, SHIFT(121, 0),
    [382] = {.count = 1}, SHIFT(122, 0),
    [384] = {.count = 1}, SHIFT(123, 0),
    [386] = {.count = 1}, SHIFT(124, 0),
    [388] = {.count = 1}, SHIFT(125, 0),
    [390] = {.count = 1}, SHIFT(126, 0),
    [392] = {.count = 1}, SHIFT(115, 0),
    [394] = {.count = 1}, SHIFT(114, 0),
    [396] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [398] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [400] = {.count = 1}, SHIFT(106, 0),
    [402] = {.count = 1}, SHIFT(107, 0),
    [404] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [406] = {.count = 1}, SHIFT(108, 0),
    [408] = {.count = 1}, SHIFT(109, 0),
    [410] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [412] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [414] = {.count = 1}, SHIFT(110, 0),
    [416] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [418] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [420] = {.count = 1}, SHIFT(111, 0),
    [422] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [424] = {.count = 1}, SHIFT(113, 0),
    [426] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [428] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [430] = {.count = 1}, SHIFT(116, 0),
    [432] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [434] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [436] = {.count = 1}, SHIFT(553, 0),
    [438] = {.count = 1}, SHIFT(554, 0),
    [440] = {.count = 1}, SHIFT(552, 0),
    [442] = {.count = 1}, SHIFT(147, 0),
    [444] = {.count = 1}, SHIFT(152, 0),
    [446] = {.count = 1}, SHIFT(142, 0),
    [448] = {.count = 1}, SHIFT(138, 0),
    [450] = {.count = 1}, SHIFT(134, 0),
    [452] = {.count = 1}, SHIFT(131, 0),
    [454] = {.count = 1}, SHIFT(132, 0),
    [456] = {.count = 1}, SHIFT(129, 0),
    [458] = {.count = 1}, SHIFT(127, 0),
    [460] = {.count = 1}, SHIFT(128, 0),
    [462] = {.count = 1}, SHIFT(130, 0),
    [464] = {.count = 1}, SHIFT(133, 0),
    [466] = {.count = 1}, SHIFT(135, 0),
    [468] = {.count = 1}, SHIFT(136, 0),
    [470] = {.count = 1}, SHIFT(137, 0),
    [472] = {.count = 1}, SHIFT(139, 0),
    [474] = {.count = 1}, SHIFT(140, 0),
    [476] = {.count = 1}, SHIFT(141, 0),
    [478] = {.count = 1}, SHIFT(143, 0),
    [480] = {.count = 1}, SHIFT(144, 0),
    [482] = {.count = 1}, SHIFT(145, 0),
    [484] = {.count = 1}, SHIFT(158, 0),
    [486] = {.count = 1}, SHIFT(159, 0),
    [488] = {.count = 1}, SHIFT(420, 0),
    [490] = {.count = 1}, SHIFT(421, 0),
    [492] = {.count = 1}, SHIFT(550, 0),
    [494] = {.count = 1}, SHIFT(423, 0),
    [496] = {.count = 1}, SHIFT(424, 0),
    [498] = {.count = 1}, SHIFT(425, 0),
    [500] = {.count = 1}, SHIFT(426, 0),
    [502] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [504] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [506] = {.count = 1}, SHIFT(542, 0),
    [508] = {.count = 1}, SHIFT(182, 0),
    [510] = {.count = 1}, SHIFT(522, 0),
    [512] = {.count = 1}, SHIFT(541, 0),
    [514] = {.count = 1}, SHIFT(537, 0),
    [516] = {.count = 1}, SHIFT(498, 0),
    [518] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [520] = {.count = 1}, REDUCE(sym_composite_literal, 2, 0),
    [522] = {.count = 1}, SHIFT(160, 0),
    [524] = {.count = 1}, SHIFT(161, 0),
    [526] = {.count = 1}, SHIFT(162, 0),
    [528] = {.count = 1}, SHIFT(163, 0),
    [530] = {.count = 1}, SHIFT(164, 0),
    [532] = {.count = 1}, SHIFT(165, 0),
    [534] = {.count = 1}, SHIFT(166, 0),
    [536] = {.count = 1}, SHIFT(167, 0),
    [538] = {.count = 1}, SHIFT(168, 0),
    [540] = {.count = 1}, SHIFT(169, 0),
    [542] = {.count = 1}, SHIFT(170, 0),
    [544] = {.count = 1}, SHIFT(171, 0),
    [546] = {.count = 1}, SHIFT(172, 0),
    [548] = {.count = 1}, SHIFT(173, 0),
    [550] = {.count = 1}, SHIFT(174, 0),
    [552] = {.count = 1}, SHIFT(485, 0),
    [554] = {.count = 1}, REDUCE(sym_element, 1, 0),
    [556] = {.count = 1}, SHIFT(486, 0),
    [558] = {.count = 1}, SHIFT(445, 0),
    [560] = {.count = 1}, SHIFT(487, 0),
    [562] = {.count = 1}, SHIFT(488, 0),
    [564] = {.count = 1}, SHIFT(489, 0),
    [566] = {.count = 1}, SHIFT(490, 0),
    [568] = {.count = 1}, SHIFT(444, 0),
    [570] = {.count = 1}, SHIFT(442, 0),
    [572] = {.count = 1}, REDUCE(sym__element_list, 1, 0),
    [574] = {.count = 1}, SHIFT(181, 0),
    [576] = {.count = 1}, SHIFT(178, 0),
    [578] = {.count = 1}, SHIFT(179, 0),
    [580] = {.count = 1}, REDUCE(sym_literal_value, 2, 0),
    [582] = {.count = 1}, SHIFT(175, 0),
    [584] = {.count = 1}, SHIFT(176, 0),
    [586] = {.count = 1}, SHIFT(177, 0),
    [588] = {.count = 1}, REDUCE(sym_literal_value, 3, 0),
    [590] = {.count = 1}, SHIFT(180, 0),
    [592] = {.count = 1}, SHIFT(186, 0),
    [594] = {.count = 1}, SHIFT(187, 0),
    [596] = {.count = 1}, SHIFT(188, 0),
    [598] = {.count = 1}, SHIFT(189, 0),
    [600] = {.count = 1}, SHIFT(190, 0),
    [602] = {.count = 1}, SHIFT(191, 0),
    [604] = {.count = 1}, SHIFT(192, 0),
    [606] = {.count = 1}, SHIFT(193, 0),
    [608] = {.count = 1}, SHIFT(194, 0),
    [610] = {.count = 1}, SHIFT(195, 0),
    [612] = {.count = 1}, SHIFT(196, 0),
    [614] = {.count = 1}, SHIFT(197, 0),
    [616] = {.count = 1}, SHIFT(198, 0),
    [618] = {.count = 1}, SHIFT(199, 0),
    [620] = {.count = 1}, SHIFT(183, 0),
    [622] = {.count = 1}, SHIFT(184, 0),
    [624] = {.count = 1}, SHIFT(185, 0),
    [626] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [628] = {.count = 1}, SHIFT(441, 0),
    [630] = {.count = 1}, REDUCE(sym_func_literal, 3, 0),
    [632] = {.count = 1}, SHIFT(438, 0),
    [634] = {.count = 1}, SHIFT(439, 0),
    [636] = {.count = 1}, SHIFT(436, 0),
    [638] = {.count = 1}, SHIFT(435, 0),
    [640] = {.count = 1}, SHIFT(417, 0),
    [642] = {.count = 1}, SHIFT(418, 0),
    [644] = {.count = 1}, SHIFT(413, 0),
    [646] = {.count = 1}, SHIFT(215, 0),
    [648] = {.count = 1}, SHIFT(216, 0),
    [650] = {.count = 1}, SHIFT(217, 0),
    [652] = {.count = 1}, SHIFT(218, 0),
    [654] = {.count = 1}, SHIFT(219, 0),
    [656] = {.count = 1}, SHIFT(220, 0),
    [658] = {.count = 1}, SHIFT(221, 0),
    [660] = {.count = 1}, SHIFT(222, 0),
    [662] = {.count = 1}, SHIFT(223, 0),
    [664] = {.count = 1}, SHIFT(224, 0),
    [666] = {.count = 1}, SHIFT(225, 0),
    [668] = {.count = 1}, SHIFT(226, 0),
    [670] = {.count = 1}, SHIFT(227, 0),
    [672] = {.count = 1}, SHIFT(228, 0),
    [674] = {.count = 1}, SHIFT(211, 0),
    [676] = {.count = 1}, SHIFT(207, 0),
    [678] = {.count = 1}, SHIFT(204, 0),
    [680] = {.count = 1}, SHIFT(205, 0),
    [682] = {.count = 1}, SHIFT(202, 0),
    [684] = {.count = 1}, SHIFT(200, 0),
    [686] = {.count = 1}, SHIFT(201, 0),
    [688] = {.count = 1}, SHIFT(203, 0),
    [690] = {.count = 1}, SHIFT(206, 0),
    [692] = {.count = 1}, SHIFT(208, 0),
    [694] = {.count = 1}, SHIFT(209, 0),
    [696] = {.count = 1}, SHIFT(210, 0),
    [698] = {.count = 1}, SHIFT(212, 0),
    [700] = {.count = 1}, SHIFT(213, 0),
    [702] = {.count = 1}, SHIFT(214, 0),
    [704] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [706] = {.count = 1}, SHIFT(409, 0),
    [708] = {.count = 1}, SHIFT(410, 0),
    [710] = {.count = 1}, SHIFT(229, 0),
    [712] = {.count = 1}, SHIFT(230, 0),
    [714] = {.count = 1}, SHIFT(407, 0),
    [716] = {.count = 1}, SHIFT(320, 0),
    [718] = {.count = 1}, SHIFT(321, 0),
    [720] = {.count = 1}, SHIFT(322, 0),
    [722] = {.count = 1}, SHIFT(323, 0),
    [724] = {.count = 1}, SHIFT(324, 0),
    [726] = {.count = 1}, SHIFT(325, 0),
    [728] = {.count = 1}, SHIFT(326, 0),
    [730] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [732] = {.count = 1}, SHIFT(327, 0),
    [734] = {.count = 1}, SHIFT(328, 0),
    [736] = {.count = 1}, SHIFT(329, 0),
    [738] = {.count = 1}, SHIFT(330, 0),
    [740] = {.count = 1}, SHIFT(319, 0),
    [742] = {.count = 1}, SHIFT(311, 0),
    [744] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [746] = {.count = 1}, SHIFT(234, 0),
    [748] = {.count = 1}, SHIFT(235, 0),
    [750] = {.count = 1}, SHIFT(236, 0),
    [752] = {.count = 1}, SHIFT(237, 0),
    [754] = {.count = 1}, SHIFT(238, 0),
    [756] = {.count = 1}, SHIFT(239, 0),
    [758] = {.count = 1}, SHIFT(240, 0),
    [760] = {.count = 1}, SHIFT(241, 0),
    [762] = {.count = 1}, SHIFT(242, 0),
    [764] = {.count = 1}, SHIFT(231, 0),
    [766] = {.count = 1}, SHIFT(232, 0),
    [768] = {.count = 1}, SHIFT(233, 0),
    [770] = {.count = 1}, REDUCE(sym_return_statement, 2, 0),
    [772] = {.count = 1}, SHIFT(243, 0),
    [774] = {.count = 1}, SHIFT(244, 0),
    [776] = {.count = 1}, SHIFT(256, 0),
    [778] = {.count = 1}, SHIFT(257, 0),
    [780] = {.count = 1}, SHIFT(258, 0),
    [782] = {.count = 1}, SHIFT(259, 0),
    [784] = {.count = 1}, SHIFT(260, 0),
    [786] = {.count = 1}, SHIFT(261, 0),
    [788] = {.count = 1}, SHIFT(262, 0),
    [790] = {.count = 1}, SHIFT(263, 0),
    [792] = {.count = 1}, SHIFT(248, 0),
    [794] = {.count = 1}, SHIFT(245, 0),
    [796] = {.count = 1}, SHIFT(246, 0),
    [798] = {.count = 1}, SHIFT(247, 0),
    [800] = {.count = 1}, SHIFT(249, 0),
    [802] = {.count = 1}, SHIFT(250, 0),
    [804] = {.count = 1}, SHIFT(251, 0),
    [806] = {.count = 1}, SHIFT(255, 0),
    [808] = {.count = 1}, SHIFT(252, 0),
    [810] = {.count = 1}, SHIFT(253, 0),
    [812] = {.count = 1}, SHIFT(254, 0),
    [814] = {.count = 1}, REDUCE(sym_block, 3, 0),
    [816] = {.count = 1}, REDUCE(sym_func_literal, 4, 0),
    [818] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [820] = {.count = 1}, SHIFT(271, 0),
    [822] = {.count = 1}, SHIFT(272, 0),
    [824] = {.count = 1}, SHIFT(273, 0),
    [826] = {.count = 1}, SHIFT(274, 0),
    [828] = {.count = 1}, SHIFT(275, 0),
    [830] = {.count = 1}, SHIFT(276, 0),
    [832] = {.count = 1}, SHIFT(277, 0),
    [834] = {.count = 1}, SHIFT(278, 0),
    [836] = {.count = 1}, SHIFT(279, 0),
    [838] = {.count = 1}, SHIFT(269, 0),
    [840] = {.count = 1}, SHIFT(268, 0),
    [842] = {.count = 1}, SHIFT(267, 0),
    [844] = {.count = 1}, SHIFT(266, 0),
    [846] = {.count = 1}, SHIFT(265, 0),
    [848] = {.count = 1}, SHIFT(264, 0),
    [850] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [852] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [854] = {.count = 1}, SHIFT(270, 0),
    [856] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [858] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [860] = {.count = 1}, SHIFT(310, 0),
    [862] = {.count = 1}, SHIFT(280, 0),
    [864] = {.count = 1}, SHIFT(281, 0),
    [866] = {.count = 1}, SHIFT(293, 0),
    [868] = {.count = 1}, SHIFT(294, 0),
    [870] = {.count = 1}, SHIFT(295, 0),
    [872] = {.count = 1}, SHIFT(296, 0),
    [874] = {.count = 1}, SHIFT(297, 0),
    [876] = {.count = 1}, SHIFT(298, 0),
    [878] = {.count = 1}, SHIFT(299, 0),
    [880] = {.count = 1}, SHIFT(300, 0),
    [882] = {.count = 1}, SHIFT(285, 0),
    [884] = {.count = 1}, SHIFT(282, 0),
    [886] = {.count = 1}, SHIFT(283, 0),
    [888] = {.count = 1}, SHIFT(284, 0),
    [890] = {.count = 1}, SHIFT(286, 0),
    [892] = {.count = 1}, SHIFT(287, 0),
    [894] = {.count = 1}, SHIFT(288, 0),
    [896] = {.count = 1}, SHIFT(292, 0),
    [898] = {.count = 1}, SHIFT(289, 0),
    [900] = {.count = 1}, SHIFT(290, 0),
    [902] = {.count = 1}, SHIFT(291, 0),
    [904] = {.count = 1}, SHIFT(308, 0),
    [906] = {.count = 1}, SHIFT(306, 0),
    [908] = {.count = 1}, SHIFT(305, 0),
    [910] = {.count = 1}, SHIFT(304, 0),
    [912] = {.count = 1}, SHIFT(303, 0),
    [914] = {.count = 1}, SHIFT(302, 0),
    [916] = {.count = 1}, SHIFT(301, 0),
    [918] = {.count = 1}, SHIFT(307, 0),
    [920] = {.count = 1}, SHIFT(309, 0),
    [922] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [924] = {.count = 1}, SHIFT(312, 0),
    [926] = {.count = 1}, SHIFT(313, 0),
    [928] = {.count = 1}, SHIFT(314, 0),
    [930] = {.count = 1}, SHIFT(318, 0),
    [932] = {.count = 1}, SHIFT(315, 0),
    [934] = {.count = 1}, SHIFT(316, 0),
    [936] = {.count = 1}, SHIFT(317, 0),
    [938] = {.count = 1}, SHIFT(405, 0),
    [940] = {.count = 1}, SHIFT(370, 0),
    [942] = {.count = 1}, SHIFT(371, 0),
    [944] = {.count = 1}, SHIFT(372, 0),
    [946] = {.count = 1}, SHIFT(373, 0),
    [948] = {.count = 1}, SHIFT(374, 0),
    [950] = {.count = 1}, SHIFT(375, 0),
    [952] = {.count = 1}, SHIFT(376, 0),
    [954] = {.count = 1}, SHIFT(377, 0),
    [956] = {.count = 1}, SHIFT(335, 0),
    [958] = {.count = 1}, SHIFT(336, 0),
    [960] = {.count = 1}, SHIFT(337, 0),
    [962] = {.count = 1}, SHIFT(338, 0),
    [964] = {.count = 1}, SHIFT(339, 0),
    [966] = {.count = 1}, SHIFT(340, 0),
    [968] = {.count = 1}, SHIFT(341, 0),
    [970] = {.count = 1}, SHIFT(342, 0),
    [972] = {.count = 1}, SHIFT(343, 0),
    [974] = {.count = 1}, REDUCE(sym_inc_statement, 2, 0),
    [976] = {.count = 1}, REDUCE(sym_dec_statement, 2, 0),
    [978] = {.count = 1}, SHIFT(334, 0),
    [980] = {.count = 1}, SHIFT(333, 0),
    [982] = {.count = 1}, SHIFT(332, 0),
    [984] = {.count = 1}, SHIFT(331, 0),
    [986] = {.count = 1}, SHIFT(344, 0),
    [988] = {.count = 1}, SHIFT(345, 0),
    [990] = {.count = 1}, REDUCE(sym_send_statement, 3, 0),
    [992] = {.count = 1}, SHIFT(357, 0),
    [994] = {.count = 1}, SHIFT(358, 0),
    [996] = {.count = 1}, SHIFT(359, 0),
    [998] = {.count = 1}, SHIFT(360, 0),
    [1000] = {.count = 1}, SHIFT(361, 0),
    [1002] = {.count = 1}, SHIFT(362, 0),
    [1004] = {.count = 1}, SHIFT(349, 0),
    [1006] = {.count = 1}, SHIFT(346, 0),
    [1008] = {.count = 1}, SHIFT(347, 0),
    [1010] = {.count = 1}, SHIFT(348, 0),
    [1012] = {.count = 1}, SHIFT(350, 0),
    [1014] = {.count = 1}, SHIFT(351, 0),
    [1016] = {.count = 1}, SHIFT(352, 0),
    [1018] = {.count = 1}, SHIFT(356, 0),
    [1020] = {.count = 1}, SHIFT(353, 0),
    [1022] = {.count = 1}, SHIFT(354, 0),
    [1024] = {.count = 1}, SHIFT(355, 0),
    [1026] = {.count = 1}, SHIFT(368, 0),
    [1028] = {.count = 1}, SHIFT(367, 0),
    [1030] = {.count = 1}, SHIFT(366, 0),
    [1032] = {.count = 1}, SHIFT(365, 0),
    [1034] = {.count = 1}, SHIFT(364, 0),
    [1036] = {.count = 1}, SHIFT(363, 0),
    [1038] = {.count = 1}, SHIFT(369, 0),
    [1040] = {.count = 1}, SHIFT(378, 0),
    [1042] = {.count = 1}, SHIFT(379, 0),
    [1044] = {.count = 1}, SHIFT(391, 0),
    [1046] = {.count = 1}, SHIFT(392, 0),
    [1048] = {.count = 1}, SHIFT(393, 0),
    [1050] = {.count = 1}, SHIFT(394, 0),
    [1052] = {.count = 1}, SHIFT(395, 0),
    [1054] = {.count = 1}, SHIFT(396, 0),
    [1056] = {.count = 1}, SHIFT(397, 0),
    [1058] = {.count = 1}, SHIFT(383, 0),
    [1060] = {.count = 1}, SHIFT(380, 0),
    [1062] = {.count = 1}, SHIFT(381, 0),
    [1064] = {.count = 1}, SHIFT(382, 0),
    [1066] = {.count = 1}, SHIFT(384, 0),
    [1068] = {.count = 1}, SHIFT(385, 0),
    [1070] = {.count = 1}, SHIFT(386, 0),
    [1072] = {.count = 1}, SHIFT(390, 0),
    [1074] = {.count = 1}, SHIFT(387, 0),
    [1076] = {.count = 1}, SHIFT(388, 0),
    [1078] = {.count = 1}, SHIFT(389, 0),
    [1080] = {.count = 1}, SHIFT(403, 0),
    [1082] = {.count = 1}, SHIFT(402, 0),
    [1084] = {.count = 1}, SHIFT(401, 0),
    [1086] = {.count = 1}, SHIFT(400, 0),
    [1088] = {.count = 1}, SHIFT(399, 0),
    [1090] = {.count = 1}, SHIFT(398, 0),
    [1092] = {.count = 1}, SHIFT(404, 0),
    [1094] = {.count = 1}, SHIFT(406, 0),
    [1096] = {.count = 1}, SHIFT(408, 0),
    [1098] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 2, 0),
    [1100] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 3, 0),
    [1102] = {.count = 1}, SHIFT(412, 0),
    [1104] = {.count = 1}, SHIFT(411, 0),
    [1106] = {.count = 1}, REDUCE(sym_short_var_declaration, 3, 0),
    [1108] = {.count = 1}, REDUCE(sym_assignment_statement, 3, 0),
    [1110] = {.count = 1}, SHIFT(414, 0),
    [1112] = {.count = 1}, SHIFT(415, 0),
    [1114] = {.count = 1}, SHIFT(416, 0),
    [1116] = {.count = 1}, SHIFT(422, 0),
    [1118] = {.count = 1}, SHIFT(419, 0),
    [1120] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [1122] = {.count = 1}, SHIFT(433, 0),
    [1124] = {.count = 1}, SHIFT(431, 0),
    [1126] = {.count = 1}, SHIFT(432, 0),
    [1128] = {.count = 1}, SHIFT(430, 0),
    [1130] = {.count = 1}, SHIFT(429, 0),
    [1132] = {.count = 1}, SHIFT(428, 0),
    [1134] = {.count = 1}, SHIFT(427, 0),
    [1136] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [1138] = {.count = 1}, SHIFT(434, 0),
    [1140] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [1142] = {.count = 1}, SHIFT(437, 0),
    [1144] = {.count = 1}, REDUCE(sym_function_type, 2, 0),
    [1146] = {.count = 1}, REDUCE(sym_function_type, 3, 0),
    [1148] = {.count = 1}, SHIFT(440, 0),
    [1150] = {.count = 1}, SHIFT(443, 0),
    [1152] = {.count = 1}, REDUCE(sym__element_list, 2, 0),
    [1154] = {.count = 1}, REDUCE(sym__element_list, 3, 0),
    [1156] = {.count = 1}, SHIFT(446, 0),
    [1158] = {.count = 1}, SHIFT(447, 0),
    [1160] = {.count = 1}, SHIFT(448, 0),
    [1162] = {.count = 1}, SHIFT(449, 0),
    [1164] = {.count = 1}, SHIFT(450, 0),
    [1166] = {.count = 1}, SHIFT(451, 0),
    [1168] = {.count = 1}, SHIFT(452, 0),
    [1170] = {.count = 1}, SHIFT(453, 0),
    [1172] = {.count = 1}, SHIFT(454, 0),
    [1174] = {.count = 1}, SHIFT(455, 0),
    [1176] = {.count = 1}, SHIFT(456, 0),
    [1178] = {.count = 1}, SHIFT(457, 0),
    [1180] = {.count = 1}, SHIFT(472, 0),
    [1182] = {.count = 1}, REDUCE(sym_element, 3, 0),
    [1184] = {.count = 1}, SHIFT(473, 0),
    [1186] = {.count = 1}, SHIFT(474, 0),
    [1188] = {.count = 1}, SHIFT(475, 0),
    [1190] = {.count = 1}, SHIFT(476, 0),
    [1192] = {.count = 1}, SHIFT(477, 0),
    [1194] = {.count = 1}, SHIFT(464, 0),
    [1196] = {.count = 1}, SHIFT(461, 0),
    [1198] = {.count = 1}, SHIFT(462, 0),
    [1200] = {.count = 1}, SHIFT(458, 0),
    [1202] = {.count = 1}, SHIFT(459, 0),
    [1204] = {.count = 1}, SHIFT(460, 0),
    [1206] = {.count = 1}, SHIFT(463, 0),
    [1208] = {.count = 1}, SHIFT(465, 0),
    [1210] = {.count = 1}, SHIFT(466, 0),
    [1212] = {.count = 1}, SHIFT(467, 0),
    [1214] = {.count = 1}, SHIFT(471, 0),
    [1216] = {.count = 1}, SHIFT(468, 0),
    [1218] = {.count = 1}, SHIFT(469, 0),
    [1220] = {.count = 1}, SHIFT(470, 0),
    [1222] = {.count = 1}, SHIFT(483, 0),
    [1224] = {.count = 1}, SHIFT(482, 0),
    [1226] = {.count = 1}, SHIFT(481, 0),
    [1228] = {.count = 1}, SHIFT(480, 0),
    [1230] = {.count = 1}, SHIFT(479, 0),
    [1232] = {.count = 1}, SHIFT(478, 0),
    [1234] = {.count = 1}, SHIFT(484, 0),
    [1236] = {.count = 1}, SHIFT(496, 0),
    [1238] = {.count = 1}, SHIFT(495, 0),
    [1240] = {.count = 1}, SHIFT(494, 0),
    [1242] = {.count = 1}, SHIFT(493, 0),
    [1244] = {.count = 1}, SHIFT(492, 0),
    [1246] = {.count = 1}, SHIFT(491, 0),
    [1248] = {.count = 1}, SHIFT(497, 0),
    [1250] = {.count = 1}, SHIFT(499, 0),
    [1252] = {.count = 1}, SHIFT(500, 0),
    [1254] = {.count = 1}, SHIFT(501, 0),
    [1256] = {.count = 1}, SHIFT(502, 0),
    [1258] = {.count = 1}, SHIFT(503, 0),
    [1260] = {.count = 1}, SHIFT(504, 0),
    [1262] = {.count = 1}, SHIFT(505, 0),
    [1264] = {.count = 1}, SHIFT(506, 0),
    [1266] = {.count = 1}, SHIFT(507, 0),
    [1268] = {.count = 1}, SHIFT(508, 0),
    [1270] = {.count = 1}, SHIFT(509, 0),
    [1272] = {.count = 1}, SHIFT(527, 0),
    [1274] = {.count = 1}, SHIFT(528, 0),
    [1276] = {.count = 1}, SHIFT(526, 0),
    [1278] = {.count = 1}, SHIFT(521, 0),
    [1280] = {.count = 1}, SHIFT(517, 0),
    [1282] = {.count = 1}, SHIFT(514, 0),
    [1284] = {.count = 1}, SHIFT(515, 0),
    [1286] = {.count = 1}, SHIFT(512, 0),
    [1288] = {.count = 1}, SHIFT(510, 0),
    [1290] = {.count = 1}, SHIFT(511, 0),
    [1292] = {.count = 1}, SHIFT(513, 0),
    [1294] = {.count = 1}, SHIFT(516, 0),
    [1296] = {.count = 1}, SHIFT(518, 0),
    [1298] = {.count = 1}, SHIFT(519, 0),
    [1300] = {.count = 1}, SHIFT(520, 0),
    [1302] = {.count = 1}, SHIFT(524, 0),
    [1304] = {.count = 1}, SHIFT(523, 0),
    [1306] = {.count = 1}, SHIFT(525, 0),
    [1308] = {.count = 1}, SHIFT(532, 0),
    [1310] = {.count = 1}, SHIFT(533, 0),
    [1312] = {.count = 1}, SHIFT(529, 0),
    [1314] = {.count = 1}, SHIFT(530, 0),
    [1316] = {.count = 1}, SHIFT(531, 0),
    [1318] = {.count = 1}, SHIFT(534, 0),
    [1320] = {.count = 1}, SHIFT(535, 0),
    [1322] = {.count = 1}, SHIFT(536, 0),
    [1324] = {.count = 1}, SHIFT(538, 0),
    [1326] = {.count = 1}, SHIFT(539, 0),
    [1328] = {.count = 1}, SHIFT(540, 0),
    [1330] = {.count = 1}, SHIFT(543, 0),
    [1332] = {.count = 1}, SHIFT(544, 0),
    [1334] = {.count = 1}, SHIFT(545, 0),
    [1336] = {.count = 1}, SHIFT(549, 0),
    [1338] = {.count = 1}, SHIFT(546, 0),
    [1340] = {.count = 1}, SHIFT(547, 0),
    [1342] = {.count = 1}, SHIFT(548, 0),
    [1344] = {.count = 1}, SHIFT(551, 0),
    [1346] = {.count = 1}, SHIFT(558, 0),
    [1348] = {.count = 1}, SHIFT(559, 0),
    [1350] = {.count = 1}, SHIFT(555, 0),
    [1352] = {.count = 1}, SHIFT(556, 0),
    [1354] = {.count = 1}, SHIFT(557, 0),
    [1356] = {.count = 1}, SHIFT(560, 0),
    [1358] = {.count = 1}, SHIFT(561, 0),
    [1360] = {.count = 1}, SHIFT(562, 0),
    [1362] = {.count = 1}, SHIFT(566, 0),
    [1364] = {.count = 1}, SHIFT(565, 0),
    [1366] = {.count = 1}, SHIFT(567, 0),
    [1368] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [1370] = {.count = 1}, SHIFT(575, 0),
    [1372] = {.count = 1}, SHIFT(576, 0),
    [1374] = {.count = 1}, SHIFT(572, 0),
    [1376] = {.count = 1}, SHIFT(573, 0),
    [1378] = {.count = 1}, SHIFT(574, 0),
    [1380] = {.count = 1}, SHIFT(577, 0),
    [1382] = {.count = 1}, SHIFT(578, 0),
    [1384] = {.count = 1}, SHIFT(579, 0),
    [1386] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [1388] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [1390] = {.count = 1}, SHIFT(584, 0),
    [1392] = {.count = 1}, SHIFT(585, 0),
    [1394] = {.count = 1}, SHIFT(586, 0),
    [1396] = {.count = 1}, SHIFT(589, 0),
    [1398] = {.count = 1}, SHIFT(590, 0),
    [1400] = {.count = 1}, SHIFT(591, 0),
    [1402] = {.count = 1}, SHIFT(595, 0),
    [1404] = {.count = 1}, SHIFT(594, 0),
    [1406] = {.count = 1}, SHIFT(596, 0),
    [1408] = {.count = 1}, SHIFT(603, 0),
    [1410] = {.count = 1}, SHIFT(604, 0),
    [1412] = {.count = 1}, SHIFT(600, 0),
    [1414] = {.count = 1}, SHIFT(601, 0),
    [1416] = {.count = 1}, SHIFT(602, 0),
    [1418] = {.count = 1}, SHIFT(605, 0),
    [1420] = {.count = 1}, SHIFT(606, 0),
    [1422] = {.count = 1}, SHIFT(607, 0),
    [1424] = {.count = 1}, SHIFT(609, 0),
    [1426] = {.count = 1}, SHIFT(611, 0),
    [1428] = {.count = 1}, SHIFT(612, 0),
    [1430] = {.count = 1}, SHIFT(613, 0),
    [1432] = {.count = 1}, SHIFT(615, 0),
    [1434] = {.count = 1}, SHIFT(616, 0),
    [1436] = {.count = 1}, SHIFT(617, 0),
    [1438] = {.count = 1}, SHIFT(621, 0),
    [1440] = {.count = 1}, SHIFT(620, 0),
    [1442] = {.count = 1}, SHIFT(622, 0),
    [1444] = {.count = 1}, SHIFT(625, 0),
    [1446] = {.count = 1}, SHIFT(630, 0),
    [1448] = {.count = 1}, SHIFT(629, 0),
    [1450] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [1452] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [1454] = {.count = 1}, SHIFT(631, 0),
    [1456] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [1458] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [1460] = {.count = 1}, SHIFT(691, 0),
    [1462] = {.count = 1}, SHIFT(688, 0),
    [1464] = {.count = 1}, SHIFT(689, 0),
    [1466] = {.count = 1}, SHIFT(635, 0),
    [1468] = {.count = 1}, SHIFT(636, 0),
    [1470] = {.count = 1}, SHIFT(640, 0),
    [1472] = {.count = 1}, SHIFT(641, 0),
    [1474] = {.count = 1}, SHIFT(642, 0),
    [1476] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [1478] = {.count = 1}, SHIFT(643, 0),
    [1480] = {.count = 1}, SHIFT(644, 0),
    [1482] = {.count = 1}, SHIFT(645, 0),
    [1484] = {.count = 1}, SHIFT(646, 0),
    [1486] = {.count = 1}, SHIFT(647, 0),
    [1488] = {.count = 1}, SHIFT(648, 0),
    [1490] = {.count = 1}, SHIFT(649, 0),
    [1492] = {.count = 1}, SHIFT(650, 0),
    [1494] = {.count = 1}, SHIFT(651, 0),
    [1496] = {.count = 1}, SHIFT(652, 0),
    [1498] = {.count = 1}, SHIFT(653, 0),
    [1500] = {.count = 1}, SHIFT(637, 0),
    [1502] = {.count = 1}, SHIFT(638, 0),
    [1504] = {.count = 1}, SHIFT(639, 0),
    [1506] = {.count = 1}, SHIFT(687, 0),
    [1508] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [1510] = {.count = 1}, SHIFT(684, 0),
    [1512] = {.count = 1}, SHIFT(685, 0),
    [1514] = {.count = 1}, SHIFT(682, 0),
    [1516] = {.count = 1}, SHIFT(681, 0),
    [1518] = {.count = 1}, SHIFT(676, 0),
    [1520] = {.count = 1}, SHIFT(677, 0),
    [1522] = {.count = 1}, SHIFT(672, 0),
    [1524] = {.count = 1}, SHIFT(669, 0),
    [1526] = {.count = 1}, SHIFT(670, 0),
    [1528] = {.count = 1}, SHIFT(665, 0),
    [1530] = {.count = 1}, SHIFT(661, 0),
    [1532] = {.count = 1}, SHIFT(658, 0),
    [1534] = {.count = 1}, SHIFT(659, 0),
    [1536] = {.count = 1}, SHIFT(656, 0),
    [1538] = {.count = 1}, SHIFT(654, 0),
    [1540] = {.count = 1}, SHIFT(655, 0),
    [1542] = {.count = 1}, SHIFT(657, 0),
    [1544] = {.count = 1}, SHIFT(660, 0),
    [1546] = {.count = 1}, SHIFT(662, 0),
    [1548] = {.count = 1}, SHIFT(663, 0),
    [1550] = {.count = 1}, SHIFT(664, 0),
    [1552] = {.count = 1}, SHIFT(666, 0),
    [1554] = {.count = 1}, SHIFT(667, 0),
    [1556] = {.count = 1}, SHIFT(668, 0),
    [1558] = {.count = 1}, SHIFT(671, 0),
    [1560] = {.count = 1}, SHIFT(673, 0),
    [1562] = {.count = 1}, SHIFT(674, 0),
    [1564] = {.count = 1}, SHIFT(675, 0),
    [1566] = {.count = 1}, SHIFT(679, 0),
    [1568] = {.count = 1}, SHIFT(678, 0),
    [1570] = {.count = 1}, SHIFT(680, 0),
    [1572] = {.count = 1}, SHIFT(683, 0),
    [1574] = {.count = 1}, SHIFT(686, 0),
    [1576] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [1578] = {.count = 1}, SHIFT(690, 0),
    [1580] = {.count = 1}, SHIFT(692, 0),
    [1582] = {.count = 1}, SHIFT(693, 0),
    [1584] = {.count = 1}, SHIFT(694, 0),
    [1586] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1588] = {.count = 1}, SHIFT(695, 0),
    [1590] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1592] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1594] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [1596] = {.count = 1}, SHIFT(710, 0),
    [1598] = {.count = 1}, SHIFT(711, 0),
    [1600] = {.count = 1}, SHIFT(712, 0),
    [1602] = {.count = 1}, SHIFT(713, 0),
    [1604] = {.count = 1}, SHIFT(714, 0),
    [1606] = {.count = 1}, SHIFT(715, 0),
    [1608] = {.count = 1}, SHIFT(716, 0),
    [1610] = {.count = 1}, SHIFT(717, 0),
    [1612] = {.count = 1}, SHIFT(718, 0),
    [1614] = {.count = 1}, SHIFT(719, 0),
    [1616] = {.count = 1}, SHIFT(720, 0),
    [1618] = {.count = 1}, SHIFT(721, 0),
    [1620] = {.count = 1}, SHIFT(704, 0),
    [1622] = {.count = 1}, SHIFT(705, 0),
    [1624] = {.count = 1}, SHIFT(706, 0),
    [1626] = {.count = 1}, SHIFT(700, 0),
    [1628] = {.count = 1}, SHIFT(701, 0),
    [1630] = {.count = 1}, SHIFT(702, 0),
    [1632] = {.count = 1}, SHIFT(703, 0),
    [1634] = {.count = 1}, SHIFT(708, 0),
    [1636] = {.count = 1}, SHIFT(707, 0),
    [1638] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [1640] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [1642] = {.count = 1}, SHIFT(709, 0),
    [1644] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [1646] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [1648] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [1650] = {.count = 1}, SHIFT(758, 0),
    [1652] = {.count = 1}, SHIFT(757, 0),
    [1654] = {.count = 1}, SHIFT(747, 0),
    [1656] = {.count = 1}, SHIFT(748, 0),
    [1658] = {.count = 1}, SHIFT(746, 0),
    [1660] = {.count = 1}, SHIFT(741, 0),
    [1662] = {.count = 1}, SHIFT(742, 0),
    [1664] = {.count = 1}, SHIFT(737, 0),
    [1666] = {.count = 1}, SHIFT(733, 0),
    [1668] = {.count = 1}, SHIFT(729, 0),
    [1670] = {.count = 1}, SHIFT(726, 0),
    [1672] = {.count = 1}, SHIFT(727, 0),
    [1674] = {.count = 1}, SHIFT(724, 0),
    [1676] = {.count = 1}, SHIFT(722, 0),
    [1678] = {.count = 1}, SHIFT(723, 0),
    [1680] = {.count = 1}, SHIFT(725, 0),
    [1682] = {.count = 1}, SHIFT(728, 0),
    [1684] = {.count = 1}, SHIFT(730, 0),
    [1686] = {.count = 1}, SHIFT(731, 0),
    [1688] = {.count = 1}, SHIFT(732, 0),
    [1690] = {.count = 1}, SHIFT(734, 0),
    [1692] = {.count = 1}, SHIFT(735, 0),
    [1694] = {.count = 1}, SHIFT(736, 0),
    [1696] = {.count = 1}, SHIFT(738, 0),
    [1698] = {.count = 1}, SHIFT(739, 0),
    [1700] = {.count = 1}, SHIFT(740, 0),
    [1702] = {.count = 1}, SHIFT(744, 0),
    [1704] = {.count = 1}, SHIFT(743, 0),
    [1706] = {.count = 1}, SHIFT(745, 0),
    [1708] = {.count = 1}, SHIFT(752, 0),
    [1710] = {.count = 1}, SHIFT(753, 0),
    [1712] = {.count = 1}, SHIFT(749, 0),
    [1714] = {.count = 1}, SHIFT(750, 0),
    [1716] = {.count = 1}, SHIFT(751, 0),
    [1718] = {.count = 1}, SHIFT(754, 0),
    [1720] = {.count = 1}, SHIFT(755, 0),
    [1722] = {.count = 1}, SHIFT(756, 0),
    [1724] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [1726] = {.count = 1}, SHIFT(759, 0),
    [1728] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [1730] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [1732] = {.count = 1}, SHIFT(769, 0),
    [1734] = {.count = 1}, SHIFT(770, 0),
    [1736] = {.count = 1}, SHIFT(771, 0),
    [1738] = {.count = 1}, SHIFT(772, 0),
    [1740] = {.count = 1}, SHIFT(773, 0),
    [1742] = {.count = 1}, SHIFT(774, 0),
    [1744] = {.count = 1}, SHIFT(775, 0),
    [1746] = {.count = 1}, SHIFT(776, 0),
    [1748] = {.count = 1}, SHIFT(777, 0),
    [1750] = {.count = 1}, SHIFT(778, 0),
    [1752] = {.count = 1}, SHIFT(779, 0),
    [1754] = {.count = 1}, SHIFT(780, 0),
    [1756] = {.count = 1}, SHIFT(763, 0),
    [1758] = {.count = 1}, SHIFT(764, 0),
    [1760] = {.count = 1}, SHIFT(765, 0),
    [1762] = {.count = 1}, SHIFT(767, 0),
    [1764] = {.count = 1}, SHIFT(766, 0),
    [1766] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [1768] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [1770] = {.count = 1}, SHIFT(768, 0),
    [1772] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1774] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1776] = {.count = 1}, SHIFT(817, 0),
    [1778] = {.count = 1}, SHIFT(816, 0),
    [1780] = {.count = 1}, SHIFT(806, 0),
    [1782] = {.count = 1}, SHIFT(807, 0),
    [1784] = {.count = 1}, SHIFT(805, 0),
    [1786] = {.count = 1}, SHIFT(800, 0),
    [1788] = {.count = 1}, SHIFT(801, 0),
    [1790] = {.count = 1}, SHIFT(796, 0),
    [1792] = {.count = 1}, SHIFT(792, 0),
    [1794] = {.count = 1}, SHIFT(788, 0),
    [1796] = {.count = 1}, SHIFT(785, 0),
    [1798] = {.count = 1}, SHIFT(786, 0),
    [1800] = {.count = 1}, SHIFT(783, 0),
    [1802] = {.count = 1}, SHIFT(781, 0),
    [1804] = {.count = 1}, SHIFT(782, 0),
    [1806] = {.count = 1}, SHIFT(784, 0),
    [1808] = {.count = 1}, SHIFT(787, 0),
    [1810] = {.count = 1}, SHIFT(789, 0),
    [1812] = {.count = 1}, SHIFT(790, 0),
    [1814] = {.count = 1}, SHIFT(791, 0),
    [1816] = {.count = 1}, SHIFT(793, 0),
    [1818] = {.count = 1}, SHIFT(794, 0),
    [1820] = {.count = 1}, SHIFT(795, 0),
    [1822] = {.count = 1}, SHIFT(797, 0),
    [1824] = {.count = 1}, SHIFT(798, 0),
    [1826] = {.count = 1}, SHIFT(799, 0),
    [1828] = {.count = 1}, SHIFT(803, 0),
    [1830] = {.count = 1}, SHIFT(802, 0),
    [1832] = {.count = 1}, SHIFT(804, 0),
    [1834] = {.count = 1}, SHIFT(811, 0),
    [1836] = {.count = 1}, SHIFT(812, 0),
    [1838] = {.count = 1}, SHIFT(808, 0),
    [1840] = {.count = 1}, SHIFT(809, 0),
    [1842] = {.count = 1}, SHIFT(810, 0),
    [1844] = {.count = 1}, SHIFT(813, 0),
    [1846] = {.count = 1}, SHIFT(814, 0),
    [1848] = {.count = 1}, SHIFT(815, 0),
    [1850] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1852] = {.count = 1}, SHIFT(818, 0),
    [1854] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1856] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1858] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1860] = {.count = 1}, SHIFT(825, 0),
    [1862] = {.count = 1}, SHIFT(826, 0),
    [1864] = {.count = 1}, SHIFT(827, 0),
    [1866] = {.count = 1}, SHIFT(828, 0),
    [1868] = {.count = 1}, SHIFT(829, 0),
    [1870] = {.count = 1}, SHIFT(824, 0),
    [1872] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1874] = {.count = 1}, SHIFT(832, 0),
    [1876] = {.count = 1}, SHIFT(831, 0),
    [1878] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1880] = {.count = 1}, SHIFT(830, 0),
    [1882] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1884] = {.count = 1}, SHIFT(833, 0),
    [1886] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1888] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1890] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1892] = {.count = 1}, SHIFT(836, 0),
    [1894] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1896] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 3, 0),
    [1898] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
