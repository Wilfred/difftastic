#include "tree_sitter/parser.h"

#define STATE_COUNT 854
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
    sym_selector_expression,
    sym_composite_literal,
    sym_literal_value,
    sym__element_list,
    sym_element,
    sym_func_literal,
    sym_unary_expression,
    sym_binary_expression,
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
    [sym_selector_expression] = "selector_expression",
    [sym_composite_literal] = "composite_literal",
    [sym_literal_value] = "literal_value",
    [sym__element_list] = "_element_list",
    [sym_element] = "element",
    [sym_func_literal] = "func_literal",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
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
    [sym_selector_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_composite_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_literal_value] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__element_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_element] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_func_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(13);
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
            if (lookahead == '.')
                ADVANCE(20);
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
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
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
            if (lookahead == '.')
                ADVANCE(20);
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
            if (lookahead == '.')
                ADVANCE(20);
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
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
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
            if (lookahead == '.')
                ADVANCE(20);
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
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
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
                ADVANCE(218);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(219);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == '<')
                ADVANCE(220);
            if (lookahead == '=')
                ADVANCE(207);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 218:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 219:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 220:
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
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
                ADVANCE(218);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(219);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(203);
            if (lookahead == '<')
                ADVANCE(220);
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
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
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
            if (lookahead == '.')
                ADVANCE(20);
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
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
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
            if (lookahead == '.')
                ADVANCE(20);
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
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
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
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
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
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
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
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
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
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '\n')
                ADVANCE(2);
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
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
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
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(232);
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
        case 232:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(232);
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
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
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
                ADVANCE(232);
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
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(106);
            if (lookahead == '<')
                ADVANCE(146);
            if (lookahead == '=')
                ADVANCE(232);
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
        case 240:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(240);
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
        case 241:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(241);
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
    [149] = 149,
    [150] = 159,
    [151] = 144,
    [152] = 151,
    [153] = 152,
    [154] = 188,
    [155] = 174,
    [156] = 174,
    [157] = 174,
    [158] = 189,
    [159] = 151,
    [160] = 190,
    [161] = 190,
    [162] = 192,
    [163] = 162,
    [164] = 193,
    [165] = 149,
    [166] = 189,
    [167] = 174,
    [168] = 194,
    [169] = 190,
    [170] = 190,
    [171] = 190,
    [172] = 189,
    [173] = 162,
    [174] = 190,
    [175] = 190,
    [176] = 162,
    [177] = 192,
    [178] = 192,
    [179] = 195,
    [180] = 143,
    [181] = 165,
    [182] = 195,
    [183] = 195,
    [184] = 151,
    [185] = 151,
    [186] = 190,
    [187] = 143,
    [188] = 149,
    [189] = 144,
    [190] = 150,
    [191] = 151,
    [192] = 196,
    [193] = 151,
    [194] = 152,
    [195] = 144,
    [196] = 153,
    [197] = 198,
    [198] = 138,
    [199] = 151,
    [200] = 144,
    [201] = 151,
    [202] = 151,
    [203] = 144,
    [204] = 151,
    [205] = 144,
    [206] = 159,
    [207] = 144,
    [208] = 151,
    [209] = 161,
    [210] = 162,
    [211] = 151,
    [212] = 151,
    [213] = 139,
    [214] = 199,
    [215] = 151,
    [216] = 139,
    [217] = 206,
    [218] = 206,
    [219] = 162,
    [220] = 149,
    [221] = 190,
    [222] = 208,
    [223] = 209,
    [224] = 206,
    [225] = 206,
    [226] = 206,
    [227] = 189,
    [228] = 162,
    [229] = 206,
    [230] = 206,
    [231] = 139,
    [232] = 151,
    [233] = 210,
    [234] = 210,
    [235] = 149,
    [236] = 211,
    [237] = 210,
    [238] = 210,
    [239] = 210,
    [240] = 189,
    [241] = 162,
    [242] = 210,
    [243] = 210,
    [244] = 195,
    [245] = 151,
    [246] = 210,
    [247] = 196,
    [248] = 162,
    [249] = 210,
    [250] = 210,
    [251] = 210,
    [252] = 139,
    [253] = 212,
    [254] = 138,
    [255] = 208,
    [256] = 208,
    [257] = 208,
    [258] = 208,
    [259] = 208,
    [260] = 208,
    [261] = 210,
    [262] = 210,
    [263] = 210,
    [264] = 210,
    [265] = 210,
    [266] = 210,
    [267] = 139,
    [268] = 210,
    [269] = 165,
    [270] = 151,
    [271] = 213,
    [272] = 213,
    [273] = 210,
    [274] = 149,
    [275] = 214,
    [276] = 213,
    [277] = 213,
    [278] = 213,
    [279] = 189,
    [280] = 162,
    [281] = 213,
    [282] = 213,
    [283] = 195,
    [284] = 151,
    [285] = 213,
    [286] = 196,
    [287] = 162,
    [288] = 213,
    [289] = 213,
    [290] = 213,
    [291] = 165,
    [292] = 212,
    [293] = 138,
    [294] = 208,
    [295] = 208,
    [296] = 208,
    [297] = 208,
    [298] = 208,
    [299] = 208,
    [300] = 213,
    [301] = 213,
    [302] = 213,
    [303] = 213,
    [304] = 213,
    [305] = 213,
    [306] = 165,
    [307] = 213,
    [308] = 165,
    [309] = 213,
    [310] = 213,
    [311] = 210,
    [312] = 195,
    [313] = 151,
    [314] = 206,
    [315] = 196,
    [316] = 162,
    [317] = 206,
    [318] = 206,
    [319] = 206,
    [320] = 190,
    [321] = 199,
    [322] = 212,
    [323] = 138,
    [324] = 208,
    [325] = 208,
    [326] = 208,
    [327] = 139,
    [328] = 139,
    [329] = 208,
    [330] = 208,
    [331] = 208,
    [332] = 208,
    [333] = 206,
    [334] = 206,
    [335] = 206,
    [336] = 206,
    [337] = 206,
    [338] = 151,
    [339] = 215,
    [340] = 215,
    [341] = 149,
    [342] = 216,
    [343] = 215,
    [344] = 215,
    [345] = 215,
    [346] = 189,
    [347] = 162,
    [348] = 215,
    [349] = 215,
    [350] = 195,
    [351] = 151,
    [352] = 215,
    [353] = 196,
    [354] = 162,
    [355] = 215,
    [356] = 215,
    [357] = 215,
    [358] = 212,
    [359] = 138,
    [360] = 208,
    [361] = 208,
    [362] = 208,
    [363] = 208,
    [364] = 208,
    [365] = 215,
    [366] = 215,
    [367] = 215,
    [368] = 215,
    [369] = 215,
    [370] = 215,
    [371] = 165,
    [372] = 215,
    [373] = 215,
    [374] = 151,
    [375] = 217,
    [376] = 217,
    [377] = 149,
    [378] = 221,
    [379] = 217,
    [380] = 217,
    [381] = 217,
    [382] = 189,
    [383] = 162,
    [384] = 217,
    [385] = 217,
    [386] = 195,
    [387] = 151,
    [388] = 217,
    [389] = 196,
    [390] = 162,
    [391] = 217,
    [392] = 217,
    [393] = 217,
    [394] = 199,
    [395] = 212,
    [396] = 138,
    [397] = 208,
    [398] = 208,
    [399] = 208,
    [400] = 208,
    [401] = 208,
    [402] = 217,
    [403] = 217,
    [404] = 217,
    [405] = 217,
    [406] = 217,
    [407] = 217,
    [408] = 165,
    [409] = 217,
    [410] = 217,
    [411] = 206,
    [412] = 165,
    [413] = 206,
    [414] = 206,
    [415] = 196,
    [416] = 162,
    [417] = 208,
    [418] = 208,
    [419] = 139,
    [420] = 139,
    [421] = 169,
    [422] = 162,
    [423] = 151,
    [424] = 151,
    [425] = 174,
    [426] = 144,
    [427] = 151,
    [428] = 212,
    [429] = 138,
    [430] = 208,
    [431] = 144,
    [432] = 208,
    [433] = 208,
    [434] = 208,
    [435] = 208,
    [436] = 174,
    [437] = 174,
    [438] = 174,
    [439] = 174,
    [440] = 174,
    [441] = 151,
    [442] = 174,
    [443] = 165,
    [444] = 174,
    [445] = 174,
    [446] = 151,
    [447] = 195,
    [448] = 151,
    [449] = 165,
    [450] = 151,
    [451] = 151,
    [452] = 190,
    [453] = 189,
    [454] = 162,
    [455] = 174,
    [456] = 222,
    [457] = 151,
    [458] = 223,
    [459] = 223,
    [460] = 193,
    [461] = 149,
    [462] = 189,
    [463] = 224,
    [464] = 223,
    [465] = 223,
    [466] = 223,
    [467] = 189,
    [468] = 162,
    [469] = 223,
    [470] = 223,
    [471] = 162,
    [472] = 193,
    [473] = 193,
    [474] = 195,
    [475] = 151,
    [476] = 223,
    [477] = 196,
    [478] = 162,
    [479] = 223,
    [480] = 223,
    [481] = 223,
    [482] = 212,
    [483] = 138,
    [484] = 208,
    [485] = 208,
    [486] = 208,
    [487] = 208,
    [488] = 208,
    [489] = 223,
    [490] = 223,
    [491] = 223,
    [492] = 223,
    [493] = 223,
    [494] = 223,
    [495] = 165,
    [496] = 223,
    [497] = 223,
    [498] = 212,
    [499] = 138,
    [500] = 208,
    [501] = 208,
    [502] = 208,
    [503] = 208,
    [504] = 208,
    [505] = 190,
    [506] = 190,
    [507] = 190,
    [508] = 190,
    [509] = 190,
    [510] = 190,
    [511] = 165,
    [512] = 190,
    [513] = 190,
    [514] = 144,
    [515] = 159,
    [516] = 144,
    [517] = 151,
    [518] = 151,
    [519] = 149,
    [520] = 144,
    [521] = 150,
    [522] = 151,
    [523] = 144,
    [524] = 153,
    [525] = 198,
    [526] = 138,
    [527] = 151,
    [528] = 144,
    [529] = 151,
    [530] = 151,
    [531] = 144,
    [532] = 151,
    [533] = 161,
    [534] = 162,
    [535] = 151,
    [536] = 151,
    [537] = 174,
    [538] = 144,
    [539] = 151,
    [540] = 144,
    [541] = 151,
    [542] = 151,
    [543] = 195,
    [544] = 143,
    [545] = 165,
    [546] = 195,
    [547] = 195,
    [548] = 151,
    [549] = 143,
    [550] = 165,
    [551] = 151,
    [552] = 151,
    [553] = 169,
    [554] = 162,
    [555] = 151,
    [556] = 151,
    [557] = 172,
    [558] = 195,
    [559] = 151,
    [560] = 174,
    [561] = 196,
    [562] = 162,
    [563] = 174,
    [564] = 174,
    [565] = 174,
    [566] = 144,
    [567] = 172,
    [568] = 172,
    [569] = 225,
    [570] = 143,
    [571] = 165,
    [572] = 225,
    [573] = 225,
    [574] = 172,
    [575] = 143,
    [576] = 165,
    [577] = 172,
    [578] = 172,
    [579] = 174,
    [580] = 144,
    [581] = 166,
    [582] = 144,
    [583] = 166,
    [584] = 166,
    [585] = 165,
    [586] = 226,
    [587] = 143,
    [588] = 165,
    [589] = 226,
    [590] = 226,
    [591] = 166,
    [592] = 143,
    [593] = 165,
    [594] = 166,
    [595] = 166,
    [596] = 164,
    [597] = 162,
    [598] = 139,
    [599] = 143,
    [600] = 165,
    [601] = 139,
    [602] = 139,
    [603] = 159,
    [604] = 169,
    [605] = 162,
    [606] = 159,
    [607] = 159,
    [608] = 174,
    [609] = 144,
    [610] = 159,
    [611] = 144,
    [612] = 159,
    [613] = 159,
    [614] = 227,
    [615] = 143,
    [616] = 165,
    [617] = 227,
    [618] = 227,
    [619] = 159,
    [620] = 143,
    [621] = 165,
    [622] = 159,
    [623] = 159,
    [624] = 144,
    [625] = 139,
    [626] = 161,
    [627] = 162,
    [628] = 139,
    [629] = 139,
    [630] = 169,
    [631] = 162,
    [632] = 139,
    [633] = 139,
    [634] = 174,
    [635] = 144,
    [636] = 139,
    [637] = 144,
    [638] = 139,
    [639] = 139,
    [640] = 164,
    [641] = 139,
    [642] = 139,
    [643] = 165,
    [644] = 139,
    [645] = 139,
    [646] = 143,
    [647] = 165,
    [648] = 138,
    [649] = 143,
    [650] = 149,
    [651] = 228,
    [652] = 143,
    [653] = 165,
    [654] = 228,
    [655] = 228,
    [656] = 229,
    [657] = 229,
    [658] = 139,
    [659] = 143,
    [660] = 149,
    [661] = 144,
    [662] = 150,
    [663] = 151,
    [664] = 196,
    [665] = 151,
    [666] = 152,
    [667] = 144,
    [668] = 153,
    [669] = 230,
    [670] = 138,
    [671] = 229,
    [672] = 144,
    [673] = 229,
    [674] = 229,
    [675] = 144,
    [676] = 229,
    [677] = 144,
    [678] = 159,
    [679] = 144,
    [680] = 229,
    [681] = 161,
    [682] = 162,
    [683] = 229,
    [684] = 229,
    [685] = 162,
    [686] = 139,
    [687] = 139,
    [688] = 169,
    [689] = 162,
    [690] = 229,
    [691] = 229,
    [692] = 174,
    [693] = 144,
    [694] = 229,
    [695] = 144,
    [696] = 229,
    [697] = 229,
    [698] = 228,
    [699] = 229,
    [700] = 165,
    [701] = 229,
    [702] = 229,
    [703] = 139,
    [704] = 165,
    [705] = 138,
    [706] = 138,
    [707] = 149,
    [708] = 228,
    [709] = 229,
    [710] = 139,
    [711] = 139,
    [712] = 139,
    [713] = 231,
    [714] = 143,
    [715] = 233,
    [716] = 231,
    [717] = 138,
    [718] = 233,
    [719] = 231,
    [720] = 139,
    [721] = 165,
    [722] = 139,
    [723] = 139,
    [724] = 143,
    [725] = 165,
    [726] = 234,
    [727] = 234,
    [728] = 208,
    [729] = 149,
    [730] = 144,
    [731] = 150,
    [732] = 151,
    [733] = 151,
    [734] = 152,
    [735] = 144,
    [736] = 153,
    [737] = 235,
    [738] = 138,
    [739] = 234,
    [740] = 144,
    [741] = 234,
    [742] = 234,
    [743] = 144,
    [744] = 234,
    [745] = 144,
    [746] = 159,
    [747] = 144,
    [748] = 234,
    [749] = 161,
    [750] = 162,
    [751] = 234,
    [752] = 234,
    [753] = 169,
    [754] = 162,
    [755] = 234,
    [756] = 234,
    [757] = 174,
    [758] = 144,
    [759] = 234,
    [760] = 144,
    [761] = 234,
    [762] = 234,
    [763] = 236,
    [764] = 143,
    [765] = 165,
    [766] = 236,
    [767] = 236,
    [768] = 234,
    [769] = 143,
    [770] = 165,
    [771] = 234,
    [772] = 234,
    [773] = 139,
    [774] = 208,
    [775] = 139,
    [776] = 139,
    [777] = 231,
    [778] = 143,
    [779] = 139,
    [780] = 165,
    [781] = 139,
    [782] = 139,
    [783] = 143,
    [784] = 165,
    [785] = 237,
    [786] = 237,
    [787] = 208,
    [788] = 149,
    [789] = 144,
    [790] = 150,
    [791] = 151,
    [792] = 151,
    [793] = 152,
    [794] = 144,
    [795] = 153,
    [796] = 238,
    [797] = 138,
    [798] = 237,
    [799] = 144,
    [800] = 237,
    [801] = 237,
    [802] = 144,
    [803] = 237,
    [804] = 144,
    [805] = 159,
    [806] = 144,
    [807] = 237,
    [808] = 161,
    [809] = 162,
    [810] = 237,
    [811] = 237,
    [812] = 169,
    [813] = 162,
    [814] = 237,
    [815] = 237,
    [816] = 174,
    [817] = 144,
    [818] = 237,
    [819] = 144,
    [820] = 237,
    [821] = 237,
    [822] = 239,
    [823] = 143,
    [824] = 165,
    [825] = 239,
    [826] = 239,
    [827] = 237,
    [828] = 143,
    [829] = 165,
    [830] = 237,
    [831] = 237,
    [832] = 139,
    [833] = 208,
    [834] = 139,
    [835] = 115,
    [836] = 115,
    [837] = 240,
    [838] = 241,
    [839] = 115,
    [840] = 115,
    [841] = 139,
    [842] = 139,
    [843] = 165,
    [844] = 115,
    [845] = 241,
    [846] = 139,
    [847] = 115,
    [848] = 240,
    [849] = 165,
    [850] = 114,
    [851] = 140,
    [852] = 114,
    [853] = 140,
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
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 140,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 152,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACE] = 154,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_LBRACK] = 156,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 158,
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
        [anon_sym_LT_DASH] = 160,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_chan] = 162,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 164,
        [sym_comment] = 8,
    },
    [30] = {
        [sym_identifier] = 166,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 170,
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
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__type] = 176,
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
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__type] = 180,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 202,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_parameters] = 204,
        [anon_sym_LPAREN] = 206,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 208,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 210,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 212,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_LBRACE] = 214,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_LBRACE] = 216,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_LBRACK] = 218,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__type] = 220,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 222,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [47] = {
        [anon_sym_chan] = 224,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_DOT] = 226,
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_identifier] = 228,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACK] = 168,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__type] = 230,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RBRACK] = 172,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RBRACK] = 174,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 232,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 178,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 234,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACK] = 236,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__type] = 238,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_RBRACK] = 240,
        [sym_comment] = 8,
    },
    [60] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 244,
        [anon_sym_RBRACE] = 246,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_LF] = 250,
        [anon_sym_SEMI] = 250,
        [sym_comment] = 8,
    },
    [62] = {
        [anon_sym_RBRACE] = 252,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_RBRACK] = 254,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_parameters] = 256,
        [anon_sym_LF] = 250,
        [anon_sym_SEMI] = 250,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_parameters] = 258,
        [sym__type] = 258,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 260,
        [anon_sym_SEMI] = 260,
        [anon_sym_LPAREN] = 262,
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
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 264,
        [anon_sym_RBRACE] = 266,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__parameter_list] = 268,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 272,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 276,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RPAREN] = 278,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 8,
    },
    [70] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__type] = 284,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_RPAREN] = 278,
        [anon_sym_func] = 288,
        [anon_sym_COMMA] = 280,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 306,
        [anon_sym_COMMA] = 306,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [74] = {
        [sym_parameters] = 308,
        [anon_sym_LPAREN] = 310,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__parameter_list] = 312,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 314,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 316,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [77] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 318,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 320,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_LBRACE] = 322,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_LBRACE] = 324,
        [sym_comment] = 8,
    },
    [80] = {
        [anon_sym_LBRACK] = 326,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__type] = 328,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 330,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [82] = {
        [anon_sym_chan] = 332,
        [sym_comment] = 8,
    },
    [83] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_DOT] = 334,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [84] = {
        [sym_identifier] = 336,
        [sym_comment] = 8,
    },
    [85] = {
        [anon_sym_RPAREN] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__type] = 338,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RPAREN] = 172,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RPAREN] = 174,
        [anon_sym_COMMA] = 174,
        [sym_comment] = 8,
    },
    [89] = {
        [sym__type] = 340,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RPAREN] = 178,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__type] = 342,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RBRACK] = 344,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__type] = 346,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [94] = {
        [anon_sym_RPAREN] = 240,
        [anon_sym_COMMA] = 240,
        [sym_comment] = 8,
    },
    [95] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 348,
        [anon_sym_RBRACE] = 350,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_RBRACE] = 352,
        [sym_comment] = 8,
    },
    [97] = {
        [anon_sym_RPAREN] = 254,
        [anon_sym_COMMA] = 254,
        [sym_comment] = 8,
    },
    [98] = {
        [anon_sym_RPAREN] = 354,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 8,
    },
    [99] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 360,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 364,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__type] = 368,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [101] = {
        [anon_sym_LF] = 390,
        [anon_sym_SEMI] = 390,
        [sym_comment] = 8,
    },
    [102] = {
        [anon_sym_RBRACE] = 392,
        [sym_comment] = 8,
    },
    [103] = {
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [104] = {
        [anon_sym_RPAREN] = 394,
        [anon_sym_COMMA] = 394,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [sym__string_literal] = 398,
        [aux_sym_identifier_list_repeat1] = 400,
        [anon_sym_LF] = 402,
        [anon_sym_SEMI] = 402,
        [anon_sym_func] = 396,
        [anon_sym_COMMA] = 404,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [106] = {
        [anon_sym_LF] = 408,
        [anon_sym_SEMI] = 408,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__type] = 410,
        [sym_pointer_type] = 410,
        [sym_array_type] = 410,
        [sym_slice_type] = 410,
        [sym_struct_type] = 410,
        [sym_interface_type] = 410,
        [sym_map_type] = 410,
        [sym_channel_type] = 410,
        [sym_function_type] = 410,
        [sym_qualified_identifier] = 410,
        [anon_sym_func] = 410,
        [anon_sym_STAR] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_struct] = 410,
        [anon_sym_interface] = 410,
        [anon_sym_map] = 410,
        [anon_sym_chan] = 410,
        [anon_sym_LT_DASH] = 410,
        [sym_identifier] = 410,
        [sym_comment] = 8,
    },
    [108] = {
        [sym_identifier] = 412,
        [sym_comment] = 8,
    },
    [109] = {
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [sym_comment] = 8,
    },
    [110] = {
        [sym__type] = 416,
        [sym_pointer_type] = 416,
        [sym_array_type] = 416,
        [sym_slice_type] = 416,
        [sym_struct_type] = 416,
        [sym_interface_type] = 416,
        [sym_map_type] = 416,
        [sym_channel_type] = 416,
        [sym_function_type] = 416,
        [sym_qualified_identifier] = 416,
        [aux_sym_identifier_list_repeat1] = 418,
        [anon_sym_func] = 416,
        [anon_sym_COMMA] = 404,
        [anon_sym_STAR] = 416,
        [anon_sym_LBRACK] = 416,
        [anon_sym_struct] = 416,
        [anon_sym_interface] = 416,
        [anon_sym_map] = 416,
        [anon_sym_chan] = 416,
        [anon_sym_LT_DASH] = 416,
        [sym_identifier] = 416,
        [sym_comment] = 8,
    },
    [111] = {
        [sym__type] = 420,
        [sym_pointer_type] = 420,
        [sym_array_type] = 420,
        [sym_slice_type] = 420,
        [sym_struct_type] = 420,
        [sym_interface_type] = 420,
        [sym_map_type] = 420,
        [sym_channel_type] = 420,
        [sym_function_type] = 420,
        [sym_qualified_identifier] = 420,
        [anon_sym_func] = 420,
        [anon_sym_STAR] = 420,
        [anon_sym_LBRACK] = 420,
        [anon_sym_struct] = 420,
        [anon_sym_interface] = 420,
        [anon_sym_map] = 420,
        [anon_sym_chan] = 420,
        [anon_sym_LT_DASH] = 420,
        [sym_identifier] = 420,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__string_literal] = 422,
        [anon_sym_LF] = 408,
        [anon_sym_SEMI] = 408,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_LF] = 424,
        [anon_sym_SEMI] = 424,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_RPAREN] = 426,
        [anon_sym_COMMA] = 426,
        [sym_comment] = 8,
    },
    [115] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 428,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 430,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_RBRACE] = 432,
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
        [sym_parameters] = 434,
        [anon_sym_LPAREN] = 436,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__type] = 438,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [120] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 440,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 442,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_LBRACE] = 444,
        [sym_comment] = 8,
    },
    [122] = {
        [anon_sym_LBRACE] = 446,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__type] = 450,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 452,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_chan] = 454,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__string_literal] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 456,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [127] = {
        [sym_identifier] = 458,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__string_literal] = 168,
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [sym_raw_string_literal] = 168,
        [sym_interpreted_string_literal] = 168,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__type] = 460,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__string_literal] = 172,
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [sym_raw_string_literal] = 172,
        [sym_interpreted_string_literal] = 172,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__string_literal] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__type] = 462,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__string_literal] = 178,
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [sym_raw_string_literal] = 178,
        [sym_interpreted_string_literal] = 178,
        [sym_comment] = 8,
    },
    [134] = {
        [sym__type] = 464,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [135] = {
        [anon_sym_RBRACK] = 466,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__type] = 468,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__string_literal] = 240,
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [sym_raw_string_literal] = 240,
        [sym_interpreted_string_literal] = 240,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 470,
        [anon_sym_RBRACE] = 472,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [139] = {
        [anon_sym_RBRACE] = 474,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__string_literal] = 254,
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [sym_raw_string_literal] = 254,
        [sym_interpreted_string_literal] = 254,
        [sym_comment] = 8,
    },
    [141] = {
        [sym__string_literal] = 354,
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [sym_raw_string_literal] = 354,
        [sym_interpreted_string_literal] = 354,
        [sym_comment] = 8,
    },
    [142] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 476,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 478,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [143] = {
        [anon_sym_RBRACE] = 480,
        [sym_comment] = 8,
    },
    [144] = {
        [sym__string_literal] = 394,
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [sym_raw_string_literal] = 394,
        [sym_interpreted_string_literal] = 394,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__string_literal] = 426,
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [sym_raw_string_literal] = 426,
        [sym_interpreted_string_literal] = 426,
        [sym_comment] = 8,
    },
    [146] = {
        [sym_literal_value] = 482,
        [anon_sym_LBRACE] = 484,
        [sym_comment] = 8,
    },
    [147] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
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
        [anon_sym_DOT] = 502,
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
        [sym_parameters] = 504,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_RBRACK] = 508,
        [sym_comment] = 8,
    },
    [151] = {
        [sym__type] = 510,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [152] = {
        [anon_sym_LBRACE] = 512,
        [sym_comment] = 8,
    },
    [153] = {
        [anon_sym_LBRACK] = 514,
        [sym_comment] = 8,
    },
    [154] = {
        [sym_literal_value] = 482,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACK] = 502,
        [anon_sym_LBRACE] = 484,
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
    [155] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACK] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [156] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_RBRACK] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [157] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 528,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 536,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [159] = {
        [sym_literal_value] = 544,
        [anon_sym_LBRACE] = 546,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_LPAREN] = 548,
        [anon_sym_DOT] = 550,
        [anon_sym_COMMA] = 552,
        [anon_sym_STAR] = 554,
        [anon_sym_RBRACE] = 552,
        [anon_sym_COLON] = 556,
        [anon_sym_SLASH] = 554,
        [anon_sym_PERCENT] = 554,
        [anon_sym_LT_LT] = 554,
        [anon_sym_GT_GT] = 554,
        [anon_sym_AMP] = 554,
        [anon_sym_AMP_CARET] = 554,
        [anon_sym_PLUS] = 558,
        [anon_sym_DASH] = 558,
        [anon_sym_PIPE] = 558,
        [anon_sym_CARET] = 558,
        [anon_sym_EQ_EQ] = 560,
        [anon_sym_BANG_EQ] = 560,
        [anon_sym_LT] = 560,
        [anon_sym_LT_EQ] = 560,
        [anon_sym_GT] = 560,
        [anon_sym_GT_EQ] = 560,
        [anon_sym_AMP_AMP] = 562,
        [anon_sym_PIPE_PIPE] = 564,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [162] = {
        [anon_sym_COMMA] = 552,
        [anon_sym_RBRACE] = 552,
        [anon_sym_COLON] = 556,
        [sym_comment] = 8,
    },
    [163] = {
        [anon_sym_RBRACE] = 566,
        [sym_comment] = 8,
    },
    [164] = {
        [anon_sym_COMMA] = 568,
        [anon_sym_RBRACE] = 570,
        [sym_comment] = 8,
    },
    [165] = {
        [sym_parameters] = 572,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [166] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 574,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 576,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [167] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACK] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [168] = {
        [sym_literal_value] = 544,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 546,
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
    [169] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACE] = 414,
        [anon_sym_COLON] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [170] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_RBRACE] = 516,
        [anon_sym_COLON] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [171] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [172] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 580,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 582,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [173] = {
        [anon_sym_RBRACE] = 584,
        [sym_comment] = 8,
    },
    [174] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_COLON] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [175] = {
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_RBRACE] = 586,
        [anon_sym_COLON] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [176] = {
        [anon_sym_RBRACE] = 588,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_COMMA] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_COLON] = 578,
        [sym_comment] = 8,
    },
    [178] = {
        [anon_sym_COMMA] = 586,
        [anon_sym_RBRACE] = 586,
        [anon_sym_COLON] = 586,
        [sym_comment] = 8,
    },
    [179] = {
        [sym_parameters] = 590,
        [sym__type] = 590,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 594,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 606,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [180] = {
        [sym__parameter_list] = 618,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 620,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [181] = {
        [anon_sym_RPAREN] = 622,
        [sym_comment] = 8,
    },
    [182] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_block] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [183] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_block] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_LBRACE] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [184] = {
        [sym_block] = 626,
        [anon_sym_LBRACE] = 606,
        [sym_comment] = 8,
    },
    [185] = {
        [sym_block] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [186] = {
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_RBRACE] = 628,
        [anon_sym_COLON] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [187] = {
        [sym__parameter_list] = 630,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 632,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [188] = {
        [sym_parameters] = 634,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [189] = {
        [sym__type] = 636,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [190] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 638,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 640,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [191] = {
        [anon_sym_LBRACE] = 642,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 656,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 660,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [193] = {
        [anon_sym_LBRACE] = 670,
        [sym_comment] = 8,
    },
    [194] = {
        [anon_sym_LBRACK] = 672,
        [sym_comment] = 8,
    },
    [195] = {
        [sym__type] = 674,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 676,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [196] = {
        [anon_sym_chan] = 678,
        [sym_comment] = 8,
    },
    [197] = {
        [sym_block] = 122,
        [anon_sym_DOT] = 680,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [198] = {
        [sym_identifier] = 682,
        [sym_comment] = 8,
    },
    [199] = {
        [sym_block] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [200] = {
        [sym__type] = 684,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [201] = {
        [sym_block] = 172,
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [202] = {
        [sym_block] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [203] = {
        [sym__type] = 686,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [204] = {
        [sym_block] = 178,
        [anon_sym_LBRACE] = 178,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__type] = 688,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [206] = {
        [anon_sym_RBRACK] = 690,
        [sym_comment] = 8,
    },
    [207] = {
        [sym__type] = 692,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [208] = {
        [sym_block] = 240,
        [anon_sym_LBRACE] = 240,
        [sym_comment] = 8,
    },
    [209] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 694,
        [anon_sym_RBRACE] = 696,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [210] = {
        [anon_sym_RBRACE] = 698,
        [sym_comment] = 8,
    },
    [211] = {
        [sym_block] = 254,
        [anon_sym_LBRACE] = 254,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_block] = 354,
        [anon_sym_LBRACE] = 354,
        [sym_comment] = 8,
    },
    [213] = {
        [anon_sym_LF] = 700,
        [anon_sym_SEMI] = 700,
        [sym_comment] = 8,
    },
    [214] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 702,
        [anon_sym_COLON_EQ] = 704,
        [sym_comment] = 8,
    },
    [215] = {
        [sym_literal_value] = 706,
        [anon_sym_LBRACE] = 708,
        [sym_comment] = 8,
    },
    [216] = {
        [anon_sym_LF] = 710,
        [anon_sym_SEMI] = 710,
        [sym_comment] = 8,
    },
    [217] = {
        [aux_sym_expression_list_repeat1] = 712,
        [anon_sym_LF] = 700,
        [anon_sym_SEMI] = 700,
        [anon_sym_LPAREN] = 714,
        [anon_sym_DOT] = 716,
        [anon_sym_COMMA] = 718,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 722,
        [anon_sym_PLUS_PLUS] = 724,
        [anon_sym_DASH_DASH] = 726,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 728,
        [anon_sym_COLON_EQ] = 728,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 730,
        [anon_sym_DASH] = 730,
        [anon_sym_PIPE] = 730,
        [anon_sym_CARET] = 730,
        [anon_sym_EQ_EQ] = 732,
        [anon_sym_BANG_EQ] = 732,
        [anon_sym_LT] = 732,
        [anon_sym_LT_EQ] = 732,
        [anon_sym_GT] = 732,
        [anon_sym_GT_EQ] = 732,
        [anon_sym_AMP_AMP] = 734,
        [anon_sym_PIPE_PIPE] = 736,
        [sym_comment] = 8,
    },
    [218] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [219] = {
        [anon_sym_RBRACE] = 738,
        [sym_comment] = 8,
    },
    [220] = {
        [sym_parameters] = 740,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [221] = {
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_RBRACE] = 742,
        [anon_sym_COLON] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [222] = {
        [sym_expression_list] = 744,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [223] = {
        [sym_literal_value] = 706,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 708,
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
    [224] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_LT_DASH] = 414,
        [anon_sym_PLUS_PLUS] = 414,
        [anon_sym_DASH_DASH] = 414,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 414,
        [anon_sym_COLON_EQ] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [225] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LF] = 516,
        [anon_sym_SEMI] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_LT_DASH] = 516,
        [anon_sym_PLUS_PLUS] = 516,
        [anon_sym_DASH_DASH] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [226] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [227] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 760,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 762,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [228] = {
        [anon_sym_RBRACE] = 764,
        [sym_comment] = 8,
    },
    [229] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_LT_DASH] = 578,
        [anon_sym_PLUS_PLUS] = 578,
        [anon_sym_DASH_DASH] = 578,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 578,
        [anon_sym_COLON_EQ] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [230] = {
        [aux_sym_expression_list_repeat1] = 586,
        [anon_sym_LF] = 586,
        [anon_sym_SEMI] = 586,
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_LT_DASH] = 586,
        [anon_sym_PLUS_PLUS] = 586,
        [anon_sym_DASH_DASH] = 586,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 586,
        [anon_sym_COLON_EQ] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [231] = {
        [anon_sym_LF] = 766,
        [anon_sym_SEMI] = 766,
        [sym_comment] = 8,
    },
    [232] = {
        [sym_literal_value] = 768,
        [anon_sym_LBRACE] = 770,
        [sym_comment] = 8,
    },
    [233] = {
        [aux_sym_expression_list_repeat1] = 772,
        [anon_sym_LF] = 728,
        [anon_sym_SEMI] = 728,
        [anon_sym_LPAREN] = 774,
        [anon_sym_DOT] = 776,
        [anon_sym_COMMA] = 778,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
        [anon_sym_PLUS] = 782,
        [anon_sym_DASH] = 782,
        [anon_sym_PIPE] = 782,
        [anon_sym_CARET] = 782,
        [anon_sym_EQ_EQ] = 784,
        [anon_sym_BANG_EQ] = 784,
        [anon_sym_LT] = 784,
        [anon_sym_LT_EQ] = 784,
        [anon_sym_GT] = 784,
        [anon_sym_GT_EQ] = 784,
        [anon_sym_AMP_AMP] = 786,
        [anon_sym_PIPE_PIPE] = 788,
        [sym_comment] = 8,
    },
    [234] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [235] = {
        [sym_parameters] = 790,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [236] = {
        [sym_literal_value] = 768,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 770,
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
    [237] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [238] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LF] = 516,
        [anon_sym_SEMI] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [239] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [240] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 792,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 794,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [241] = {
        [anon_sym_RBRACE] = 796,
        [sym_comment] = 8,
    },
    [242] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [243] = {
        [aux_sym_expression_list_repeat1] = 586,
        [anon_sym_LF] = 586,
        [anon_sym_SEMI] = 586,
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [244] = {
        [sym_parameters] = 798,
        [sym__type] = 798,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 800,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 802,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [245] = {
        [sym_block] = 804,
        [anon_sym_LBRACE] = 802,
        [sym_comment] = 8,
    },
    [246] = {
        [aux_sym_expression_list_repeat1] = 628,
        [anon_sym_LF] = 628,
        [anon_sym_SEMI] = 628,
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 806,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 808,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [248] = {
        [anon_sym_RBRACE] = 810,
        [sym_comment] = 8,
    },
    [249] = {
        [aux_sym_expression_list_repeat1] = 742,
        [anon_sym_LF] = 742,
        [anon_sym_SEMI] = 742,
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [250] = {
        [aux_sym_expression_list_repeat1] = 812,
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [251] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [252] = {
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [sym_comment] = 8,
    },
    [253] = {
        [sym_expression_list] = 818,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 826,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [254] = {
        [sym_identifier] = 836,
        [sym_comment] = 8,
    },
    [255] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 838,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [256] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 840,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [257] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 842,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [258] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 844,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [259] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 846,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [260] = {
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 848,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [261] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
        [anon_sym_PLUS] = 782,
        [anon_sym_DASH] = 782,
        [anon_sym_PIPE] = 782,
        [anon_sym_CARET] = 782,
        [anon_sym_EQ_EQ] = 784,
        [anon_sym_BANG_EQ] = 784,
        [anon_sym_LT] = 784,
        [anon_sym_LT_EQ] = 784,
        [anon_sym_GT] = 784,
        [anon_sym_GT_EQ] = 784,
        [anon_sym_AMP_AMP] = 786,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [262] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
        [anon_sym_PLUS] = 782,
        [anon_sym_DASH] = 782,
        [anon_sym_PIPE] = 782,
        [anon_sym_CARET] = 782,
        [anon_sym_EQ_EQ] = 784,
        [anon_sym_BANG_EQ] = 784,
        [anon_sym_LT] = 784,
        [anon_sym_LT_EQ] = 784,
        [anon_sym_GT] = 784,
        [anon_sym_GT_EQ] = 784,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [263] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
        [anon_sym_PLUS] = 782,
        [anon_sym_DASH] = 782,
        [anon_sym_PIPE] = 782,
        [anon_sym_CARET] = 782,
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
    [264] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
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
    [265] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [266] = {
        [aux_sym_expression_list_repeat1] = 854,
        [anon_sym_LF] = 856,
        [anon_sym_SEMI] = 856,
        [anon_sym_LPAREN] = 774,
        [anon_sym_DOT] = 776,
        [anon_sym_COMMA] = 778,
        [anon_sym_STAR] = 780,
        [anon_sym_SLASH] = 780,
        [anon_sym_PERCENT] = 780,
        [anon_sym_LT_LT] = 780,
        [anon_sym_GT_GT] = 780,
        [anon_sym_AMP] = 780,
        [anon_sym_AMP_CARET] = 780,
        [anon_sym_PLUS] = 782,
        [anon_sym_DASH] = 782,
        [anon_sym_PIPE] = 782,
        [anon_sym_CARET] = 782,
        [anon_sym_EQ_EQ] = 784,
        [anon_sym_BANG_EQ] = 784,
        [anon_sym_LT] = 784,
        [anon_sym_LT_EQ] = 784,
        [anon_sym_GT] = 784,
        [anon_sym_GT_EQ] = 784,
        [anon_sym_AMP_AMP] = 786,
        [anon_sym_PIPE_PIPE] = 788,
        [sym_comment] = 8,
    },
    [267] = {
        [anon_sym_LF] = 858,
        [anon_sym_SEMI] = 858,
        [sym_comment] = 8,
    },
    [268] = {
        [aux_sym_expression_list_repeat1] = 860,
        [anon_sym_LF] = 860,
        [anon_sym_SEMI] = 860,
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [269] = {
        [anon_sym_RPAREN] = 862,
        [sym_comment] = 8,
    },
    [270] = {
        [sym_literal_value] = 864,
        [anon_sym_LBRACE] = 866,
        [sym_comment] = 8,
    },
    [271] = {
        [aux_sym_expression_list_repeat1] = 868,
        [anon_sym_LPAREN] = 870,
        [anon_sym_RPAREN] = 728,
        [anon_sym_DOT] = 872,
        [anon_sym_COMMA] = 874,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
        [anon_sym_PLUS] = 878,
        [anon_sym_DASH] = 878,
        [anon_sym_PIPE] = 878,
        [anon_sym_CARET] = 878,
        [anon_sym_EQ_EQ] = 880,
        [anon_sym_BANG_EQ] = 880,
        [anon_sym_LT] = 880,
        [anon_sym_LT_EQ] = 880,
        [anon_sym_GT] = 880,
        [anon_sym_GT_EQ] = 880,
        [anon_sym_AMP_AMP] = 882,
        [anon_sym_PIPE_PIPE] = 884,
        [sym_comment] = 8,
    },
    [272] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [273] = {
        [aux_sym_expression_list_repeat1] = 886,
        [anon_sym_LF] = 886,
        [anon_sym_SEMI] = 886,
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [274] = {
        [sym_parameters] = 888,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [275] = {
        [sym_literal_value] = 864,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 866,
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
    [276] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_RPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [277] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_RPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [278] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_RPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [279] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 890,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 892,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [280] = {
        [anon_sym_RBRACE] = 894,
        [sym_comment] = 8,
    },
    [281] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_RPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [282] = {
        [aux_sym_expression_list_repeat1] = 586,
        [anon_sym_LPAREN] = 586,
        [anon_sym_RPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [283] = {
        [sym_parameters] = 896,
        [sym__type] = 896,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 898,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 900,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [284] = {
        [sym_block] = 902,
        [anon_sym_LBRACE] = 900,
        [sym_comment] = 8,
    },
    [285] = {
        [aux_sym_expression_list_repeat1] = 628,
        [anon_sym_LPAREN] = 628,
        [anon_sym_RPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [286] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 904,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 906,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [287] = {
        [anon_sym_RBRACE] = 908,
        [sym_comment] = 8,
    },
    [288] = {
        [aux_sym_expression_list_repeat1] = 742,
        [anon_sym_LPAREN] = 742,
        [anon_sym_RPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [289] = {
        [aux_sym_expression_list_repeat1] = 812,
        [anon_sym_LPAREN] = 812,
        [anon_sym_RPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [290] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_RPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [291] = {
        [anon_sym_RPAREN] = 816,
        [sym_comment] = 8,
    },
    [292] = {
        [sym_expression_list] = 910,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 912,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [293] = {
        [sym_identifier] = 914,
        [sym_comment] = 8,
    },
    [294] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 916,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [295] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 918,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [296] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 920,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [297] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 922,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [298] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 924,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [299] = {
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 926,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [300] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
        [anon_sym_PLUS] = 878,
        [anon_sym_DASH] = 878,
        [anon_sym_PIPE] = 878,
        [anon_sym_CARET] = 878,
        [anon_sym_EQ_EQ] = 880,
        [anon_sym_BANG_EQ] = 880,
        [anon_sym_LT] = 880,
        [anon_sym_LT_EQ] = 880,
        [anon_sym_GT] = 880,
        [anon_sym_GT_EQ] = 880,
        [anon_sym_AMP_AMP] = 882,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [301] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
        [anon_sym_PLUS] = 878,
        [anon_sym_DASH] = 878,
        [anon_sym_PIPE] = 878,
        [anon_sym_CARET] = 878,
        [anon_sym_EQ_EQ] = 880,
        [anon_sym_BANG_EQ] = 880,
        [anon_sym_LT] = 880,
        [anon_sym_LT_EQ] = 880,
        [anon_sym_GT] = 880,
        [anon_sym_GT_EQ] = 880,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [302] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
        [anon_sym_PLUS] = 878,
        [anon_sym_DASH] = 878,
        [anon_sym_PIPE] = 878,
        [anon_sym_CARET] = 878,
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
    [303] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_RPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
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
    [304] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_RPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [305] = {
        [aux_sym_expression_list_repeat1] = 928,
        [anon_sym_LPAREN] = 870,
        [anon_sym_RPAREN] = 856,
        [anon_sym_DOT] = 872,
        [anon_sym_COMMA] = 874,
        [anon_sym_STAR] = 876,
        [anon_sym_SLASH] = 876,
        [anon_sym_PERCENT] = 876,
        [anon_sym_LT_LT] = 876,
        [anon_sym_GT_GT] = 876,
        [anon_sym_AMP] = 876,
        [anon_sym_AMP_CARET] = 876,
        [anon_sym_PLUS] = 878,
        [anon_sym_DASH] = 878,
        [anon_sym_PIPE] = 878,
        [anon_sym_CARET] = 878,
        [anon_sym_EQ_EQ] = 880,
        [anon_sym_BANG_EQ] = 880,
        [anon_sym_LT] = 880,
        [anon_sym_LT_EQ] = 880,
        [anon_sym_GT] = 880,
        [anon_sym_GT_EQ] = 880,
        [anon_sym_AMP_AMP] = 882,
        [anon_sym_PIPE_PIPE] = 884,
        [sym_comment] = 8,
    },
    [306] = {
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 8,
    },
    [307] = {
        [aux_sym_expression_list_repeat1] = 860,
        [anon_sym_LPAREN] = 860,
        [anon_sym_RPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [308] = {
        [anon_sym_RPAREN] = 930,
        [sym_comment] = 8,
    },
    [309] = {
        [aux_sym_expression_list_repeat1] = 886,
        [anon_sym_LPAREN] = 886,
        [anon_sym_RPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [310] = {
        [aux_sym_expression_list_repeat1] = 932,
        [anon_sym_LPAREN] = 932,
        [anon_sym_RPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [311] = {
        [aux_sym_expression_list_repeat1] = 932,
        [anon_sym_LF] = 932,
        [anon_sym_SEMI] = 932,
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [312] = {
        [sym_parameters] = 934,
        [sym__type] = 934,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 936,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 938,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [313] = {
        [sym_block] = 940,
        [anon_sym_LBRACE] = 938,
        [sym_comment] = 8,
    },
    [314] = {
        [aux_sym_expression_list_repeat1] = 628,
        [anon_sym_LF] = 628,
        [anon_sym_SEMI] = 628,
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_LT_DASH] = 628,
        [anon_sym_PLUS_PLUS] = 628,
        [anon_sym_DASH_DASH] = 628,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 628,
        [anon_sym_COLON_EQ] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [315] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 942,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 944,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [316] = {
        [anon_sym_RBRACE] = 946,
        [sym_comment] = 8,
    },
    [317] = {
        [aux_sym_expression_list_repeat1] = 742,
        [anon_sym_LF] = 742,
        [anon_sym_SEMI] = 742,
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_LT_DASH] = 742,
        [anon_sym_PLUS_PLUS] = 742,
        [anon_sym_DASH_DASH] = 742,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 742,
        [anon_sym_COLON_EQ] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [318] = {
        [aux_sym_expression_list_repeat1] = 812,
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_LT_DASH] = 812,
        [anon_sym_PLUS_PLUS] = 812,
        [anon_sym_DASH_DASH] = 812,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 812,
        [anon_sym_COLON_EQ] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [319] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [320] = {
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_RBRACE] = 812,
        [anon_sym_COLON] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [321] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 816,
        [anon_sym_COLON_EQ] = 816,
        [sym_comment] = 8,
    },
    [322] = {
        [sym_expression_list] = 948,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 950,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [323] = {
        [sym_identifier] = 952,
        [sym_comment] = 8,
    },
    [324] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 956,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [325] = {
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__expression] = 968,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [anon_sym_func] = 658,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [326] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 972,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [327] = {
        [anon_sym_LF] = 984,
        [anon_sym_SEMI] = 984,
        [sym_comment] = 8,
    },
    [328] = {
        [anon_sym_LF] = 986,
        [anon_sym_SEMI] = 986,
        [sym_comment] = 8,
    },
    [329] = {
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__expression] = 988,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [anon_sym_func] = 658,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [330] = {
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__expression] = 990,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [anon_sym_func] = 658,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [331] = {
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__expression] = 992,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [anon_sym_func] = 658,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [332] = {
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__expression] = 994,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [anon_sym_func] = 658,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [333] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 730,
        [anon_sym_DASH] = 730,
        [anon_sym_PIPE] = 730,
        [anon_sym_CARET] = 730,
        [anon_sym_EQ_EQ] = 732,
        [anon_sym_BANG_EQ] = 732,
        [anon_sym_LT] = 732,
        [anon_sym_LT_EQ] = 732,
        [anon_sym_GT] = 732,
        [anon_sym_GT_EQ] = 732,
        [anon_sym_AMP_AMP] = 734,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [334] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 730,
        [anon_sym_DASH] = 730,
        [anon_sym_PIPE] = 730,
        [anon_sym_CARET] = 730,
        [anon_sym_EQ_EQ] = 732,
        [anon_sym_BANG_EQ] = 732,
        [anon_sym_LT] = 732,
        [anon_sym_LT_EQ] = 732,
        [anon_sym_GT] = 732,
        [anon_sym_GT_EQ] = 732,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [335] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 730,
        [anon_sym_DASH] = 730,
        [anon_sym_PIPE] = 730,
        [anon_sym_CARET] = 730,
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
    [336] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 850,
        [anon_sym_PLUS_PLUS] = 850,
        [anon_sym_DASH_DASH] = 850,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
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
    [337] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [338] = {
        [sym_literal_value] = 996,
        [anon_sym_LBRACE] = 998,
        [sym_comment] = 8,
    },
    [339] = {
        [anon_sym_LF] = 1000,
        [anon_sym_SEMI] = 1000,
        [anon_sym_LPAREN] = 1002,
        [anon_sym_DOT] = 1004,
        [anon_sym_STAR] = 1006,
        [anon_sym_SLASH] = 1006,
        [anon_sym_PERCENT] = 1006,
        [anon_sym_LT_LT] = 1006,
        [anon_sym_GT_GT] = 1006,
        [anon_sym_AMP] = 1006,
        [anon_sym_AMP_CARET] = 1006,
        [anon_sym_PLUS] = 1008,
        [anon_sym_DASH] = 1008,
        [anon_sym_PIPE] = 1008,
        [anon_sym_CARET] = 1008,
        [anon_sym_EQ_EQ] = 1010,
        [anon_sym_BANG_EQ] = 1010,
        [anon_sym_LT] = 1010,
        [anon_sym_LT_EQ] = 1010,
        [anon_sym_GT] = 1010,
        [anon_sym_GT_EQ] = 1010,
        [anon_sym_AMP_AMP] = 1012,
        [anon_sym_PIPE_PIPE] = 1014,
        [sym_comment] = 8,
    },
    [340] = {
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [341] = {
        [sym_parameters] = 1016,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [342] = {
        [sym_literal_value] = 996,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 998,
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
    [343] = {
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [344] = {
        [anon_sym_LF] = 516,
        [anon_sym_SEMI] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [345] = {
        [anon_sym_LF] = 518,
        [anon_sym_SEMI] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [346] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 1018,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 1020,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [347] = {
        [anon_sym_RBRACE] = 1022,
        [sym_comment] = 8,
    },
    [348] = {
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [349] = {
        [anon_sym_LF] = 586,
        [anon_sym_SEMI] = 586,
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [350] = {
        [sym_parameters] = 1024,
        [sym__type] = 1024,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 1026,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 1028,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [351] = {
        [sym_block] = 1030,
        [anon_sym_LBRACE] = 1028,
        [sym_comment] = 8,
    },
    [352] = {
        [anon_sym_LF] = 628,
        [anon_sym_SEMI] = 628,
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [353] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1032,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1034,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [354] = {
        [anon_sym_RBRACE] = 1036,
        [sym_comment] = 8,
    },
    [355] = {
        [anon_sym_LF] = 742,
        [anon_sym_SEMI] = 742,
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [356] = {
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [357] = {
        [anon_sym_LF] = 814,
        [anon_sym_SEMI] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [358] = {
        [sym_expression_list] = 1038,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 1040,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [359] = {
        [sym_identifier] = 1042,
        [sym_comment] = 8,
    },
    [360] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 1044,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [361] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 1046,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [362] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 1048,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [363] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 1050,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [364] = {
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_map_type] = 970,
        [sym__expression] = 1052,
        [sym_call_expression] = 974,
        [sym_selector_expression] = 974,
        [sym_composite_literal] = 974,
        [sym_func_literal] = 974,
        [sym_unary_expression] = 974,
        [sym_binary_expression] = 974,
        [sym__string_literal] = 974,
        [sym_int_literal] = 974,
        [sym_float_literal] = 974,
        [anon_sym_func] = 976,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 978,
        [sym_raw_string_literal] = 980,
        [sym_interpreted_string_literal] = 980,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 982,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 982,
        [sym_comment] = 8,
    },
    [365] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_STAR] = 1006,
        [anon_sym_SLASH] = 1006,
        [anon_sym_PERCENT] = 1006,
        [anon_sym_LT_LT] = 1006,
        [anon_sym_GT_GT] = 1006,
        [anon_sym_AMP] = 1006,
        [anon_sym_AMP_CARET] = 1006,
        [anon_sym_PLUS] = 1008,
        [anon_sym_DASH] = 1008,
        [anon_sym_PIPE] = 1008,
        [anon_sym_CARET] = 1008,
        [anon_sym_EQ_EQ] = 1010,
        [anon_sym_BANG_EQ] = 1010,
        [anon_sym_LT] = 1010,
        [anon_sym_LT_EQ] = 1010,
        [anon_sym_GT] = 1010,
        [anon_sym_GT_EQ] = 1010,
        [anon_sym_AMP_AMP] = 1012,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [366] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_STAR] = 1006,
        [anon_sym_SLASH] = 1006,
        [anon_sym_PERCENT] = 1006,
        [anon_sym_LT_LT] = 1006,
        [anon_sym_GT_GT] = 1006,
        [anon_sym_AMP] = 1006,
        [anon_sym_AMP_CARET] = 1006,
        [anon_sym_PLUS] = 1008,
        [anon_sym_DASH] = 1008,
        [anon_sym_PIPE] = 1008,
        [anon_sym_CARET] = 1008,
        [anon_sym_EQ_EQ] = 1010,
        [anon_sym_BANG_EQ] = 1010,
        [anon_sym_LT] = 1010,
        [anon_sym_LT_EQ] = 1010,
        [anon_sym_GT] = 1010,
        [anon_sym_GT_EQ] = 1010,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [367] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_STAR] = 1006,
        [anon_sym_SLASH] = 1006,
        [anon_sym_PERCENT] = 1006,
        [anon_sym_LT_LT] = 1006,
        [anon_sym_GT_GT] = 1006,
        [anon_sym_AMP] = 1006,
        [anon_sym_AMP_CARET] = 1006,
        [anon_sym_PLUS] = 1008,
        [anon_sym_DASH] = 1008,
        [anon_sym_PIPE] = 1008,
        [anon_sym_CARET] = 1008,
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
    [368] = {
        [anon_sym_LF] = 850,
        [anon_sym_SEMI] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_STAR] = 1006,
        [anon_sym_SLASH] = 1006,
        [anon_sym_PERCENT] = 1006,
        [anon_sym_LT_LT] = 1006,
        [anon_sym_GT_GT] = 1006,
        [anon_sym_AMP] = 1006,
        [anon_sym_AMP_CARET] = 1006,
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
    [369] = {
        [anon_sym_LF] = 852,
        [anon_sym_SEMI] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [370] = {
        [anon_sym_LF] = 860,
        [anon_sym_SEMI] = 860,
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [371] = {
        [anon_sym_RPAREN] = 1054,
        [sym_comment] = 8,
    },
    [372] = {
        [anon_sym_LF] = 886,
        [anon_sym_SEMI] = 886,
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [373] = {
        [anon_sym_LF] = 932,
        [anon_sym_SEMI] = 932,
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [374] = {
        [sym_literal_value] = 1056,
        [anon_sym_LBRACE] = 1058,
        [sym_comment] = 8,
    },
    [375] = {
        [aux_sym_expression_list_repeat1] = 1060,
        [anon_sym_LPAREN] = 1062,
        [anon_sym_DOT] = 1064,
        [anon_sym_COMMA] = 718,
        [anon_sym_STAR] = 1066,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 856,
        [anon_sym_COLON_EQ] = 856,
        [anon_sym_SLASH] = 1066,
        [anon_sym_PERCENT] = 1066,
        [anon_sym_LT_LT] = 1066,
        [anon_sym_GT_GT] = 1066,
        [anon_sym_AMP] = 1066,
        [anon_sym_AMP_CARET] = 1066,
        [anon_sym_PLUS] = 1068,
        [anon_sym_DASH] = 1068,
        [anon_sym_PIPE] = 1068,
        [anon_sym_CARET] = 1068,
        [anon_sym_EQ_EQ] = 1070,
        [anon_sym_BANG_EQ] = 1070,
        [anon_sym_LT] = 1070,
        [anon_sym_LT_EQ] = 1070,
        [anon_sym_GT] = 1070,
        [anon_sym_GT_EQ] = 1070,
        [anon_sym_AMP_AMP] = 1072,
        [anon_sym_PIPE_PIPE] = 1074,
        [sym_comment] = 8,
    },
    [376] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [377] = {
        [sym_parameters] = 1076,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [378] = {
        [sym_literal_value] = 1056,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1058,
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
    [379] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 414,
        [anon_sym_COLON_EQ] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [380] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [381] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [382] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 1078,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 1080,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [383] = {
        [anon_sym_RBRACE] = 1082,
        [sym_comment] = 8,
    },
    [384] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 578,
        [anon_sym_COLON_EQ] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [385] = {
        [aux_sym_expression_list_repeat1] = 586,
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 586,
        [anon_sym_COLON_EQ] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [386] = {
        [sym_parameters] = 1084,
        [sym__type] = 1084,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 1086,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 1088,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [387] = {
        [sym_block] = 1090,
        [anon_sym_LBRACE] = 1088,
        [sym_comment] = 8,
    },
    [388] = {
        [aux_sym_expression_list_repeat1] = 628,
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 628,
        [anon_sym_COLON_EQ] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [389] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1092,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1094,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [390] = {
        [anon_sym_RBRACE] = 1096,
        [sym_comment] = 8,
    },
    [391] = {
        [aux_sym_expression_list_repeat1] = 742,
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 742,
        [anon_sym_COLON_EQ] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [392] = {
        [aux_sym_expression_list_repeat1] = 812,
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 812,
        [anon_sym_COLON_EQ] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [393] = {
        [aux_sym_expression_list_repeat1] = 814,
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [394] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 858,
        [anon_sym_COLON_EQ] = 858,
        [sym_comment] = 8,
    },
    [395] = {
        [sym_expression_list] = 1098,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 1100,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [396] = {
        [sym_identifier] = 1102,
        [sym_comment] = 8,
    },
    [397] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 1104,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [398] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 1106,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [399] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 1108,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [400] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 1110,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [401] = {
        [sym_slice_type] = 954,
        [sym_struct_type] = 954,
        [sym_map_type] = 954,
        [sym__expression] = 1112,
        [sym_call_expression] = 958,
        [sym_selector_expression] = 958,
        [sym_composite_literal] = 958,
        [sym_func_literal] = 958,
        [sym_unary_expression] = 958,
        [sym_binary_expression] = 958,
        [sym__string_literal] = 958,
        [sym_int_literal] = 958,
        [sym_float_literal] = 958,
        [anon_sym_func] = 960,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 962,
        [sym_raw_string_literal] = 964,
        [sym_interpreted_string_literal] = 964,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 966,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 966,
        [sym_comment] = 8,
    },
    [402] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1066,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1066,
        [anon_sym_PERCENT] = 1066,
        [anon_sym_LT_LT] = 1066,
        [anon_sym_GT_GT] = 1066,
        [anon_sym_AMP] = 1066,
        [anon_sym_AMP_CARET] = 1066,
        [anon_sym_PLUS] = 1068,
        [anon_sym_DASH] = 1068,
        [anon_sym_PIPE] = 1068,
        [anon_sym_CARET] = 1068,
        [anon_sym_EQ_EQ] = 1070,
        [anon_sym_BANG_EQ] = 1070,
        [anon_sym_LT] = 1070,
        [anon_sym_LT_EQ] = 1070,
        [anon_sym_GT] = 1070,
        [anon_sym_GT_EQ] = 1070,
        [anon_sym_AMP_AMP] = 1072,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [403] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1066,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1066,
        [anon_sym_PERCENT] = 1066,
        [anon_sym_LT_LT] = 1066,
        [anon_sym_GT_GT] = 1066,
        [anon_sym_AMP] = 1066,
        [anon_sym_AMP_CARET] = 1066,
        [anon_sym_PLUS] = 1068,
        [anon_sym_DASH] = 1068,
        [anon_sym_PIPE] = 1068,
        [anon_sym_CARET] = 1068,
        [anon_sym_EQ_EQ] = 1070,
        [anon_sym_BANG_EQ] = 1070,
        [anon_sym_LT] = 1070,
        [anon_sym_LT_EQ] = 1070,
        [anon_sym_GT] = 1070,
        [anon_sym_GT_EQ] = 1070,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [404] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1066,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1066,
        [anon_sym_PERCENT] = 1066,
        [anon_sym_LT_LT] = 1066,
        [anon_sym_GT_GT] = 1066,
        [anon_sym_AMP] = 1066,
        [anon_sym_AMP_CARET] = 1066,
        [anon_sym_PLUS] = 1068,
        [anon_sym_DASH] = 1068,
        [anon_sym_PIPE] = 1068,
        [anon_sym_CARET] = 1068,
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
    [405] = {
        [aux_sym_expression_list_repeat1] = 850,
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1066,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 850,
        [anon_sym_COLON_EQ] = 850,
        [anon_sym_SLASH] = 1066,
        [anon_sym_PERCENT] = 1066,
        [anon_sym_LT_LT] = 1066,
        [anon_sym_GT_GT] = 1066,
        [anon_sym_AMP] = 1066,
        [anon_sym_AMP_CARET] = 1066,
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
    [406] = {
        [aux_sym_expression_list_repeat1] = 852,
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [407] = {
        [aux_sym_expression_list_repeat1] = 860,
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 860,
        [anon_sym_COLON_EQ] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [408] = {
        [anon_sym_RPAREN] = 1114,
        [sym_comment] = 8,
    },
    [409] = {
        [aux_sym_expression_list_repeat1] = 886,
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 886,
        [anon_sym_COLON_EQ] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [410] = {
        [aux_sym_expression_list_repeat1] = 932,
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 932,
        [anon_sym_COLON_EQ] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [411] = {
        [aux_sym_expression_list_repeat1] = 860,
        [anon_sym_LF] = 860,
        [anon_sym_SEMI] = 860,
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_LT_DASH] = 860,
        [anon_sym_PLUS_PLUS] = 860,
        [anon_sym_DASH_DASH] = 860,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 860,
        [anon_sym_COLON_EQ] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [412] = {
        [anon_sym_RPAREN] = 1116,
        [sym_comment] = 8,
    },
    [413] = {
        [aux_sym_expression_list_repeat1] = 886,
        [anon_sym_LF] = 886,
        [anon_sym_SEMI] = 886,
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_LT_DASH] = 886,
        [anon_sym_PLUS_PLUS] = 886,
        [anon_sym_DASH_DASH] = 886,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 886,
        [anon_sym_COLON_EQ] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [414] = {
        [aux_sym_expression_list_repeat1] = 932,
        [anon_sym_LF] = 932,
        [anon_sym_SEMI] = 932,
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_LT_DASH] = 932,
        [anon_sym_PLUS_PLUS] = 932,
        [anon_sym_DASH_DASH] = 932,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 932,
        [anon_sym_COLON_EQ] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [415] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1118,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1120,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [416] = {
        [anon_sym_RBRACE] = 1122,
        [sym_comment] = 8,
    },
    [417] = {
        [sym_expression_list] = 1124,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [418] = {
        [sym_expression_list] = 1126,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [419] = {
        [anon_sym_LF] = 1128,
        [anon_sym_SEMI] = 1128,
        [sym_comment] = 8,
    },
    [420] = {
        [anon_sym_LF] = 1130,
        [anon_sym_SEMI] = 1130,
        [sym_comment] = 8,
    },
    [421] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1132,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1134,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [422] = {
        [anon_sym_RBRACE] = 1136,
        [sym_comment] = 8,
    },
    [423] = {
        [sym_block] = 394,
        [anon_sym_LBRACE] = 394,
        [sym_comment] = 8,
    },
    [424] = {
        [sym_block] = 426,
        [anon_sym_LBRACE] = 426,
        [sym_comment] = 8,
    },
    [425] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1138,
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
    [426] = {
        [sym__type] = 1140,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [427] = {
        [sym_block] = 1142,
        [anon_sym_LBRACE] = 1142,
        [sym_comment] = 8,
    },
    [428] = {
        [sym_expression_list] = 1144,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 1146,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [429] = {
        [sym_identifier] = 1148,
        [sym_comment] = 8,
    },
    [430] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1150,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [431] = {
        [sym__type] = 1152,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_qualified_identifier] = 592,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [432] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1154,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [433] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1156,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [434] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1158,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [435] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1160,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [436] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
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
    [437] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
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
    [438] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
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
    [439] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
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
    [440] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [441] = {
        [sym_block] = 1162,
        [anon_sym_LBRACE] = 1162,
        [sym_comment] = 8,
    },
    [442] = {
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_RBRACK] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [443] = {
        [anon_sym_RPAREN] = 1164,
        [sym_comment] = 8,
    },
    [444] = {
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_RBRACK] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [445] = {
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_RBRACK] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [446] = {
        [sym_block] = 1166,
        [anon_sym_LBRACE] = 1166,
        [sym_comment] = 8,
    },
    [447] = {
        [sym_parameters] = 1168,
        [sym__type] = 1168,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 1170,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 1170,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [448] = {
        [sym_block] = 1172,
        [anon_sym_LBRACE] = 1172,
        [sym_comment] = 8,
    },
    [449] = {
        [anon_sym_RPAREN] = 1174,
        [sym_comment] = 8,
    },
    [450] = {
        [sym_block] = 282,
        [anon_sym_LBRACE] = 282,
        [sym_comment] = 8,
    },
    [451] = {
        [sym_block] = 624,
        [anon_sym_LBRACE] = 624,
        [sym_comment] = 8,
    },
    [452] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [453] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 1176,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 1178,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [454] = {
        [anon_sym_RBRACE] = 1180,
        [sym_comment] = 8,
    },
    [455] = {
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_RBRACK] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [456] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1184,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_literal_value] = 1188,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 1192,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [457] = {
        [sym_literal_value] = 1200,
        [anon_sym_LBRACE] = 1202,
        [sym_comment] = 8,
    },
    [458] = {
        [anon_sym_LPAREN] = 1204,
        [anon_sym_DOT] = 1206,
        [anon_sym_COMMA] = 1208,
        [anon_sym_STAR] = 1210,
        [anon_sym_RBRACE] = 1208,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_AMP_CARET] = 1210,
        [anon_sym_PLUS] = 1212,
        [anon_sym_DASH] = 1212,
        [anon_sym_PIPE] = 1212,
        [anon_sym_CARET] = 1212,
        [anon_sym_EQ_EQ] = 1214,
        [anon_sym_BANG_EQ] = 1214,
        [anon_sym_LT] = 1214,
        [anon_sym_LT_EQ] = 1214,
        [anon_sym_GT] = 1214,
        [anon_sym_GT_EQ] = 1214,
        [anon_sym_AMP_AMP] = 1216,
        [anon_sym_PIPE_PIPE] = 1218,
        [sym_comment] = 8,
    },
    [459] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
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
    [460] = {
        [anon_sym_COMMA] = 1208,
        [anon_sym_RBRACE] = 1208,
        [sym_comment] = 8,
    },
    [461] = {
        [sym_parameters] = 1220,
        [anon_sym_LPAREN] = 506,
        [sym_comment] = 8,
    },
    [462] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 1222,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 1224,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [463] = {
        [sym_literal_value] = 1200,
        [anon_sym_LPAREN] = 502,
        [anon_sym_DOT] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1202,
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
    [464] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_DOT] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACE] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [465] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_DOT] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 516,
        [anon_sym_RBRACE] = 516,
        [anon_sym_SLASH] = 516,
        [anon_sym_PERCENT] = 516,
        [anon_sym_LT_LT] = 516,
        [anon_sym_GT_GT] = 516,
        [anon_sym_AMP] = 516,
        [anon_sym_AMP_CARET] = 516,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [466] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_DOT] = 518,
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
    [467] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 522,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_literal_value] = 526,
        [sym__element_list] = 1226,
        [sym_element] = 530,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 534,
        [anon_sym_RBRACE] = 1228,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [468] = {
        [anon_sym_RBRACE] = 1230,
        [sym_comment] = 8,
    },
    [469] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_DOT] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [470] = {
        [anon_sym_LPAREN] = 586,
        [anon_sym_DOT] = 586,
        [anon_sym_COMMA] = 586,
        [anon_sym_STAR] = 586,
        [anon_sym_RBRACE] = 586,
        [anon_sym_SLASH] = 586,
        [anon_sym_PERCENT] = 586,
        [anon_sym_LT_LT] = 586,
        [anon_sym_GT_GT] = 586,
        [anon_sym_AMP] = 586,
        [anon_sym_AMP_CARET] = 586,
        [anon_sym_PLUS] = 586,
        [anon_sym_DASH] = 586,
        [anon_sym_PIPE] = 586,
        [anon_sym_CARET] = 586,
        [anon_sym_EQ_EQ] = 586,
        [anon_sym_BANG_EQ] = 586,
        [anon_sym_LT] = 586,
        [anon_sym_LT_EQ] = 586,
        [anon_sym_GT] = 586,
        [anon_sym_GT_EQ] = 586,
        [anon_sym_AMP_AMP] = 586,
        [anon_sym_PIPE_PIPE] = 586,
        [sym_comment] = 8,
    },
    [471] = {
        [anon_sym_RBRACE] = 1232,
        [sym_comment] = 8,
    },
    [472] = {
        [anon_sym_COMMA] = 578,
        [anon_sym_RBRACE] = 578,
        [sym_comment] = 8,
    },
    [473] = {
        [anon_sym_COMMA] = 586,
        [anon_sym_RBRACE] = 586,
        [sym_comment] = 8,
    },
    [474] = {
        [sym_parameters] = 1234,
        [sym__type] = 1234,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 1236,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 1238,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [475] = {
        [sym_block] = 1240,
        [anon_sym_LBRACE] = 1238,
        [sym_comment] = 8,
    },
    [476] = {
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_RBRACE] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [477] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1242,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1244,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [478] = {
        [anon_sym_RBRACE] = 1246,
        [sym_comment] = 8,
    },
    [479] = {
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_COMMA] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_RBRACE] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [480] = {
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_COMMA] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_RBRACE] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [481] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [482] = {
        [sym_expression_list] = 1248,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 1250,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [483] = {
        [sym_identifier] = 1252,
        [sym_comment] = 8,
    },
    [484] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1254,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [485] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1256,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [486] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1258,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [487] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1260,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [488] = {
        [sym_slice_type] = 1182,
        [sym_struct_type] = 1182,
        [sym_map_type] = 1182,
        [sym__expression] = 1262,
        [sym_call_expression] = 1186,
        [sym_selector_expression] = 1186,
        [sym_composite_literal] = 1186,
        [sym_func_literal] = 1186,
        [sym_unary_expression] = 1186,
        [sym_binary_expression] = 1186,
        [sym__string_literal] = 1186,
        [sym_int_literal] = 1186,
        [sym_float_literal] = 1186,
        [anon_sym_func] = 1190,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1194,
        [sym_raw_string_literal] = 1196,
        [sym_interpreted_string_literal] = 1196,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1198,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [489] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1210,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_AMP_CARET] = 1210,
        [anon_sym_PLUS] = 1212,
        [anon_sym_DASH] = 1212,
        [anon_sym_PIPE] = 1212,
        [anon_sym_CARET] = 1212,
        [anon_sym_EQ_EQ] = 1214,
        [anon_sym_BANG_EQ] = 1214,
        [anon_sym_LT] = 1214,
        [anon_sym_LT_EQ] = 1214,
        [anon_sym_GT] = 1214,
        [anon_sym_GT_EQ] = 1214,
        [anon_sym_AMP_AMP] = 1216,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [490] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1210,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_AMP_CARET] = 1210,
        [anon_sym_PLUS] = 1212,
        [anon_sym_DASH] = 1212,
        [anon_sym_PIPE] = 1212,
        [anon_sym_CARET] = 1212,
        [anon_sym_EQ_EQ] = 1214,
        [anon_sym_BANG_EQ] = 1214,
        [anon_sym_LT] = 1214,
        [anon_sym_LT_EQ] = 1214,
        [anon_sym_GT] = 1214,
        [anon_sym_GT_EQ] = 1214,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [491] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1210,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_AMP_CARET] = 1210,
        [anon_sym_PLUS] = 1212,
        [anon_sym_DASH] = 1212,
        [anon_sym_PIPE] = 1212,
        [anon_sym_CARET] = 1212,
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
    [492] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 1210,
        [anon_sym_RBRACE] = 850,
        [anon_sym_SLASH] = 1210,
        [anon_sym_PERCENT] = 1210,
        [anon_sym_LT_LT] = 1210,
        [anon_sym_GT_GT] = 1210,
        [anon_sym_AMP] = 1210,
        [anon_sym_AMP_CARET] = 1210,
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
    [493] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [494] = {
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_RBRACE] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [495] = {
        [anon_sym_RPAREN] = 1264,
        [sym_comment] = 8,
    },
    [496] = {
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_RBRACE] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [497] = {
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_RBRACE] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [498] = {
        [sym_expression_list] = 1266,
        [sym_slice_type] = 820,
        [sym_struct_type] = 820,
        [sym_map_type] = 820,
        [sym__expression] = 822,
        [sym_call_expression] = 824,
        [sym_selector_expression] = 824,
        [sym_composite_literal] = 824,
        [sym_func_literal] = 824,
        [sym_unary_expression] = 824,
        [sym_binary_expression] = 824,
        [sym__string_literal] = 824,
        [sym_int_literal] = 824,
        [sym_float_literal] = 824,
        [anon_sym_RPAREN] = 1268,
        [anon_sym_func] = 828,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 830,
        [sym_raw_string_literal] = 832,
        [sym_interpreted_string_literal] = 832,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 834,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 834,
        [sym_comment] = 8,
    },
    [499] = {
        [sym_identifier] = 1270,
        [sym_comment] = 8,
    },
    [500] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 1272,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [501] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 1274,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [502] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 1276,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [503] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 1278,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [504] = {
        [sym_slice_type] = 520,
        [sym_struct_type] = 520,
        [sym_map_type] = 520,
        [sym__expression] = 1280,
        [sym_call_expression] = 524,
        [sym_selector_expression] = 524,
        [sym_composite_literal] = 524,
        [sym_func_literal] = 524,
        [sym_unary_expression] = 524,
        [sym_binary_expression] = 524,
        [sym__string_literal] = 524,
        [sym_int_literal] = 524,
        [sym_float_literal] = 524,
        [anon_sym_func] = 532,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 538,
        [sym_raw_string_literal] = 540,
        [sym_interpreted_string_literal] = 540,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 542,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 542,
        [sym_comment] = 8,
    },
    [505] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 554,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 554,
        [anon_sym_PERCENT] = 554,
        [anon_sym_LT_LT] = 554,
        [anon_sym_GT_GT] = 554,
        [anon_sym_AMP] = 554,
        [anon_sym_AMP_CARET] = 554,
        [anon_sym_PLUS] = 558,
        [anon_sym_DASH] = 558,
        [anon_sym_PIPE] = 558,
        [anon_sym_CARET] = 558,
        [anon_sym_EQ_EQ] = 560,
        [anon_sym_BANG_EQ] = 560,
        [anon_sym_LT] = 560,
        [anon_sym_LT_EQ] = 560,
        [anon_sym_GT] = 560,
        [anon_sym_GT_EQ] = 560,
        [anon_sym_AMP_AMP] = 562,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [506] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 554,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 554,
        [anon_sym_PERCENT] = 554,
        [anon_sym_LT_LT] = 554,
        [anon_sym_GT_GT] = 554,
        [anon_sym_AMP] = 554,
        [anon_sym_AMP_CARET] = 554,
        [anon_sym_PLUS] = 558,
        [anon_sym_DASH] = 558,
        [anon_sym_PIPE] = 558,
        [anon_sym_CARET] = 558,
        [anon_sym_EQ_EQ] = 560,
        [anon_sym_BANG_EQ] = 560,
        [anon_sym_LT] = 560,
        [anon_sym_LT_EQ] = 560,
        [anon_sym_GT] = 560,
        [anon_sym_GT_EQ] = 560,
        [anon_sym_AMP_AMP] = 850,
        [anon_sym_PIPE_PIPE] = 850,
        [sym_comment] = 8,
    },
    [507] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 554,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 554,
        [anon_sym_PERCENT] = 554,
        [anon_sym_LT_LT] = 554,
        [anon_sym_GT_GT] = 554,
        [anon_sym_AMP] = 554,
        [anon_sym_AMP_CARET] = 554,
        [anon_sym_PLUS] = 558,
        [anon_sym_DASH] = 558,
        [anon_sym_PIPE] = 558,
        [anon_sym_CARET] = 558,
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
    [508] = {
        [anon_sym_LPAREN] = 850,
        [anon_sym_DOT] = 850,
        [anon_sym_COMMA] = 850,
        [anon_sym_STAR] = 554,
        [anon_sym_RBRACE] = 850,
        [anon_sym_COLON] = 850,
        [anon_sym_SLASH] = 554,
        [anon_sym_PERCENT] = 554,
        [anon_sym_LT_LT] = 554,
        [anon_sym_GT_GT] = 554,
        [anon_sym_AMP] = 554,
        [anon_sym_AMP_CARET] = 554,
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
    [509] = {
        [anon_sym_LPAREN] = 852,
        [anon_sym_DOT] = 852,
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
    [510] = {
        [anon_sym_LPAREN] = 860,
        [anon_sym_DOT] = 860,
        [anon_sym_COMMA] = 860,
        [anon_sym_STAR] = 860,
        [anon_sym_RBRACE] = 860,
        [anon_sym_COLON] = 860,
        [anon_sym_SLASH] = 860,
        [anon_sym_PERCENT] = 860,
        [anon_sym_LT_LT] = 860,
        [anon_sym_GT_GT] = 860,
        [anon_sym_AMP] = 860,
        [anon_sym_AMP_CARET] = 860,
        [anon_sym_PLUS] = 860,
        [anon_sym_DASH] = 860,
        [anon_sym_PIPE] = 860,
        [anon_sym_CARET] = 860,
        [anon_sym_EQ_EQ] = 860,
        [anon_sym_BANG_EQ] = 860,
        [anon_sym_LT] = 860,
        [anon_sym_LT_EQ] = 860,
        [anon_sym_GT] = 860,
        [anon_sym_GT_EQ] = 860,
        [anon_sym_AMP_AMP] = 860,
        [anon_sym_PIPE_PIPE] = 860,
        [sym_comment] = 8,
    },
    [511] = {
        [anon_sym_RPAREN] = 1282,
        [sym_comment] = 8,
    },
    [512] = {
        [anon_sym_LPAREN] = 886,
        [anon_sym_DOT] = 886,
        [anon_sym_COMMA] = 886,
        [anon_sym_STAR] = 886,
        [anon_sym_RBRACE] = 886,
        [anon_sym_COLON] = 886,
        [anon_sym_SLASH] = 886,
        [anon_sym_PERCENT] = 886,
        [anon_sym_LT_LT] = 886,
        [anon_sym_GT_GT] = 886,
        [anon_sym_AMP] = 886,
        [anon_sym_AMP_CARET] = 886,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 886,
        [anon_sym_BANG_EQ] = 886,
        [anon_sym_LT] = 886,
        [anon_sym_LT_EQ] = 886,
        [anon_sym_GT] = 886,
        [anon_sym_GT_EQ] = 886,
        [anon_sym_AMP_AMP] = 886,
        [anon_sym_PIPE_PIPE] = 886,
        [sym_comment] = 8,
    },
    [513] = {
        [anon_sym_LPAREN] = 932,
        [anon_sym_DOT] = 932,
        [anon_sym_COMMA] = 932,
        [anon_sym_STAR] = 932,
        [anon_sym_RBRACE] = 932,
        [anon_sym_COLON] = 932,
        [anon_sym_SLASH] = 932,
        [anon_sym_PERCENT] = 932,
        [anon_sym_LT_LT] = 932,
        [anon_sym_GT_GT] = 932,
        [anon_sym_AMP] = 932,
        [anon_sym_AMP_CARET] = 932,
        [anon_sym_PLUS] = 932,
        [anon_sym_DASH] = 932,
        [anon_sym_PIPE] = 932,
        [anon_sym_CARET] = 932,
        [anon_sym_EQ_EQ] = 932,
        [anon_sym_BANG_EQ] = 932,
        [anon_sym_LT] = 932,
        [anon_sym_LT_EQ] = 932,
        [anon_sym_GT] = 932,
        [anon_sym_GT_EQ] = 932,
        [anon_sym_AMP_AMP] = 932,
        [anon_sym_PIPE_PIPE] = 932,
        [sym_comment] = 8,
    },
    [514] = {
        [sym__type] = 1284,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [515] = {
        [anon_sym_RBRACK] = 1286,
        [sym_comment] = 8,
    },
    [516] = {
        [sym__type] = 1288,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [517] = {
        [sym_literal_value] = 240,
        [anon_sym_LBRACE] = 240,
        [sym_comment] = 8,
    },
    [518] = {
        [sym_literal_value] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [519] = {
        [sym_parameters] = 1306,
        [anon_sym_LPAREN] = 1308,
        [sym_comment] = 8,
    },
    [520] = {
        [sym__type] = 1310,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [521] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1312,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 508,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [522] = {
        [anon_sym_LBRACE] = 1314,
        [sym_comment] = 8,
    },
    [523] = {
        [sym__type] = 1316,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1318,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [524] = {
        [anon_sym_chan] = 1320,
        [sym_comment] = 8,
    },
    [525] = {
        [sym_literal_value] = 122,
        [anon_sym_DOT] = 1322,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [526] = {
        [sym_identifier] = 1324,
        [sym_comment] = 8,
    },
    [527] = {
        [sym_literal_value] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [528] = {
        [sym__type] = 1326,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [529] = {
        [sym_literal_value] = 172,
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [530] = {
        [sym_literal_value] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [531] = {
        [sym__type] = 1328,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [532] = {
        [sym_literal_value] = 178,
        [anon_sym_LBRACE] = 178,
        [sym_comment] = 8,
    },
    [533] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1330,
        [anon_sym_RBRACE] = 1332,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [534] = {
        [anon_sym_RBRACE] = 1334,
        [sym_comment] = 8,
    },
    [535] = {
        [sym_literal_value] = 254,
        [anon_sym_LBRACE] = 254,
        [sym_comment] = 8,
    },
    [536] = {
        [sym_literal_value] = 354,
        [anon_sym_LBRACE] = 354,
        [sym_comment] = 8,
    },
    [537] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1336,
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
    [538] = {
        [sym__type] = 1338,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [539] = {
        [sym_literal_value] = 1142,
        [anon_sym_LBRACE] = 1142,
        [sym_comment] = 8,
    },
    [540] = {
        [sym__type] = 1340,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_qualified_identifier] = 1290,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [541] = {
        [sym_literal_value] = 1162,
        [anon_sym_LBRACE] = 1162,
        [sym_comment] = 8,
    },
    [542] = {
        [sym_literal_value] = 1166,
        [anon_sym_LBRACE] = 1166,
        [sym_comment] = 8,
    },
    [543] = {
        [sym_parameters] = 1342,
        [sym__type] = 1342,
        [sym_pointer_type] = 1290,
        [sym_array_type] = 1290,
        [sym_slice_type] = 1290,
        [sym_struct_type] = 1290,
        [sym_interface_type] = 1290,
        [sym_map_type] = 1290,
        [sym_channel_type] = 1290,
        [sym_function_type] = 1290,
        [sym_literal_value] = 1170,
        [sym_qualified_identifier] = 1290,
        [anon_sym_LPAREN] = 1344,
        [anon_sym_func] = 1292,
        [anon_sym_STAR] = 1294,
        [anon_sym_LBRACK] = 1296,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 1170,
        [anon_sym_interface] = 1298,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 1300,
        [anon_sym_LT_DASH] = 1302,
        [sym_identifier] = 1304,
        [sym_comment] = 8,
    },
    [544] = {
        [sym__parameter_list] = 1346,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1348,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [545] = {
        [anon_sym_RPAREN] = 1350,
        [sym_comment] = 8,
    },
    [546] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_literal_value] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [547] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_literal_value] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_LBRACE] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [548] = {
        [sym_literal_value] = 1172,
        [anon_sym_LBRACE] = 1172,
        [sym_comment] = 8,
    },
    [549] = {
        [sym__parameter_list] = 1352,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1354,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [550] = {
        [anon_sym_RPAREN] = 1356,
        [sym_comment] = 8,
    },
    [551] = {
        [sym_literal_value] = 282,
        [anon_sym_LBRACE] = 282,
        [sym_comment] = 8,
    },
    [552] = {
        [sym_literal_value] = 624,
        [anon_sym_LBRACE] = 624,
        [sym_comment] = 8,
    },
    [553] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1358,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1360,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [554] = {
        [anon_sym_RBRACE] = 1362,
        [sym_comment] = 8,
    },
    [555] = {
        [sym_literal_value] = 394,
        [anon_sym_LBRACE] = 394,
        [sym_comment] = 8,
    },
    [556] = {
        [sym_literal_value] = 426,
        [anon_sym_LBRACE] = 426,
        [sym_comment] = 8,
    },
    [557] = {
        [sym__string_literal] = 1142,
        [anon_sym_LF] = 1142,
        [anon_sym_SEMI] = 1142,
        [sym_raw_string_literal] = 1142,
        [sym_interpreted_string_literal] = 1142,
        [sym_comment] = 8,
    },
    [558] = {
        [sym_parameters] = 1364,
        [sym__type] = 1364,
        [sym_pointer_type] = 592,
        [sym_array_type] = 592,
        [sym_slice_type] = 592,
        [sym_struct_type] = 592,
        [sym_interface_type] = 592,
        [sym_map_type] = 592,
        [sym_channel_type] = 592,
        [sym_function_type] = 592,
        [sym_block] = 1366,
        [sym_qualified_identifier] = 592,
        [anon_sym_LPAREN] = 596,
        [anon_sym_func] = 598,
        [anon_sym_STAR] = 600,
        [anon_sym_LBRACK] = 602,
        [anon_sym_struct] = 604,
        [anon_sym_LBRACE] = 1368,
        [anon_sym_interface] = 608,
        [anon_sym_map] = 610,
        [anon_sym_chan] = 612,
        [anon_sym_LT_DASH] = 614,
        [sym_identifier] = 616,
        [sym_comment] = 8,
    },
    [559] = {
        [sym_block] = 1370,
        [anon_sym_LBRACE] = 1368,
        [sym_comment] = 8,
    },
    [560] = {
        [anon_sym_LPAREN] = 628,
        [anon_sym_DOT] = 628,
        [anon_sym_STAR] = 628,
        [anon_sym_RBRACK] = 628,
        [anon_sym_SLASH] = 628,
        [anon_sym_PERCENT] = 628,
        [anon_sym_LT_LT] = 628,
        [anon_sym_GT_GT] = 628,
        [anon_sym_AMP] = 628,
        [anon_sym_AMP_CARET] = 628,
        [anon_sym_PLUS] = 628,
        [anon_sym_DASH] = 628,
        [anon_sym_PIPE] = 628,
        [anon_sym_CARET] = 628,
        [anon_sym_EQ_EQ] = 628,
        [anon_sym_BANG_EQ] = 628,
        [anon_sym_LT] = 628,
        [anon_sym_LT_EQ] = 628,
        [anon_sym_GT] = 628,
        [anon_sym_GT_EQ] = 628,
        [anon_sym_AMP_AMP] = 628,
        [anon_sym_PIPE_PIPE] = 628,
        [sym_comment] = 8,
    },
    [561] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1372,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1374,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [562] = {
        [anon_sym_RBRACE] = 1376,
        [sym_comment] = 8,
    },
    [563] = {
        [anon_sym_LPAREN] = 742,
        [anon_sym_DOT] = 742,
        [anon_sym_STAR] = 742,
        [anon_sym_RBRACK] = 742,
        [anon_sym_SLASH] = 742,
        [anon_sym_PERCENT] = 742,
        [anon_sym_LT_LT] = 742,
        [anon_sym_GT_GT] = 742,
        [anon_sym_AMP] = 742,
        [anon_sym_AMP_CARET] = 742,
        [anon_sym_PLUS] = 742,
        [anon_sym_DASH] = 742,
        [anon_sym_PIPE] = 742,
        [anon_sym_CARET] = 742,
        [anon_sym_EQ_EQ] = 742,
        [anon_sym_BANG_EQ] = 742,
        [anon_sym_LT] = 742,
        [anon_sym_LT_EQ] = 742,
        [anon_sym_GT] = 742,
        [anon_sym_GT_EQ] = 742,
        [anon_sym_AMP_AMP] = 742,
        [anon_sym_PIPE_PIPE] = 742,
        [sym_comment] = 8,
    },
    [564] = {
        [anon_sym_LPAREN] = 812,
        [anon_sym_DOT] = 812,
        [anon_sym_STAR] = 812,
        [anon_sym_RBRACK] = 812,
        [anon_sym_SLASH] = 812,
        [anon_sym_PERCENT] = 812,
        [anon_sym_LT_LT] = 812,
        [anon_sym_GT_GT] = 812,
        [anon_sym_AMP] = 812,
        [anon_sym_AMP_CARET] = 812,
        [anon_sym_PLUS] = 812,
        [anon_sym_DASH] = 812,
        [anon_sym_PIPE] = 812,
        [anon_sym_CARET] = 812,
        [anon_sym_EQ_EQ] = 812,
        [anon_sym_BANG_EQ] = 812,
        [anon_sym_LT] = 812,
        [anon_sym_LT_EQ] = 812,
        [anon_sym_GT] = 812,
        [anon_sym_GT_EQ] = 812,
        [anon_sym_AMP_AMP] = 812,
        [anon_sym_PIPE_PIPE] = 812,
        [sym_comment] = 8,
    },
    [565] = {
        [anon_sym_LPAREN] = 814,
        [anon_sym_DOT] = 814,
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
    [566] = {
        [sym__type] = 1378,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [567] = {
        [sym__string_literal] = 1162,
        [anon_sym_LF] = 1162,
        [anon_sym_SEMI] = 1162,
        [sym_raw_string_literal] = 1162,
        [sym_interpreted_string_literal] = 1162,
        [sym_comment] = 8,
    },
    [568] = {
        [sym__string_literal] = 1166,
        [anon_sym_LF] = 1166,
        [anon_sym_SEMI] = 1166,
        [sym_raw_string_literal] = 1166,
        [sym_interpreted_string_literal] = 1166,
        [sym_comment] = 8,
    },
    [569] = {
        [sym_parameters] = 1380,
        [sym__type] = 1380,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [sym__string_literal] = 1170,
        [anon_sym_LF] = 1170,
        [anon_sym_SEMI] = 1170,
        [anon_sym_LPAREN] = 1382,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_raw_string_literal] = 1170,
        [sym_interpreted_string_literal] = 1170,
        [sym_comment] = 8,
    },
    [570] = {
        [sym__parameter_list] = 1384,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1386,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [571] = {
        [anon_sym_RPAREN] = 1388,
        [sym_comment] = 8,
    },
    [572] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [sym__string_literal] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_raw_string_literal] = 282,
        [sym_interpreted_string_literal] = 282,
        [sym_comment] = 8,
    },
    [573] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [sym__string_literal] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_raw_string_literal] = 624,
        [sym_interpreted_string_literal] = 624,
        [sym_comment] = 8,
    },
    [574] = {
        [sym__string_literal] = 1172,
        [anon_sym_LF] = 1172,
        [anon_sym_SEMI] = 1172,
        [sym_raw_string_literal] = 1172,
        [sym_interpreted_string_literal] = 1172,
        [sym_comment] = 8,
    },
    [575] = {
        [sym__parameter_list] = 1390,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1392,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [576] = {
        [anon_sym_RPAREN] = 1394,
        [sym_comment] = 8,
    },
    [577] = {
        [sym__string_literal] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [sym_raw_string_literal] = 282,
        [sym_interpreted_string_literal] = 282,
        [sym_comment] = 8,
    },
    [578] = {
        [sym__string_literal] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [sym_raw_string_literal] = 624,
        [sym_interpreted_string_literal] = 624,
        [sym_comment] = 8,
    },
    [579] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1396,
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
    [580] = {
        [sym__type] = 1398,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [581] = {
        [anon_sym_RPAREN] = 1142,
        [anon_sym_COMMA] = 1142,
        [sym_comment] = 8,
    },
    [582] = {
        [sym__type] = 1400,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [583] = {
        [anon_sym_RPAREN] = 1162,
        [anon_sym_COMMA] = 1162,
        [sym_comment] = 8,
    },
    [584] = {
        [anon_sym_RPAREN] = 1166,
        [anon_sym_COMMA] = 1166,
        [sym_comment] = 8,
    },
    [585] = {
        [anon_sym_RPAREN] = 1402,
        [sym_comment] = 8,
    },
    [586] = {
        [sym_parameters] = 1404,
        [sym__type] = 1404,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_LPAREN] = 1406,
        [anon_sym_RPAREN] = 1170,
        [anon_sym_func] = 288,
        [anon_sym_COMMA] = 1170,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [587] = {
        [sym__parameter_list] = 1408,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1410,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [588] = {
        [anon_sym_RPAREN] = 1412,
        [sym_comment] = 8,
    },
    [589] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_RPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_COMMA] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [590] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_RPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_COMMA] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [591] = {
        [anon_sym_RPAREN] = 1172,
        [anon_sym_COMMA] = 1172,
        [sym_comment] = 8,
    },
    [592] = {
        [sym__parameter_list] = 1414,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1416,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [593] = {
        [anon_sym_RPAREN] = 1418,
        [sym_comment] = 8,
    },
    [594] = {
        [anon_sym_RPAREN] = 282,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [595] = {
        [anon_sym_RPAREN] = 624,
        [anon_sym_COMMA] = 624,
        [sym_comment] = 8,
    },
    [596] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [597] = {
        [anon_sym_RBRACE] = 1420,
        [sym_comment] = 8,
    },
    [598] = {
        [anon_sym_LF] = 1422,
        [anon_sym_SEMI] = 1422,
        [sym_comment] = 8,
    },
    [599] = {
        [sym__parameter_list] = 1424,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1426,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [600] = {
        [anon_sym_RPAREN] = 1428,
        [sym_comment] = 8,
    },
    [601] = {
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [sym_comment] = 8,
    },
    [602] = {
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [sym_comment] = 8,
    },
    [603] = {
        [anon_sym_RBRACK] = 354,
        [sym_comment] = 8,
    },
    [604] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1430,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1432,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [605] = {
        [anon_sym_RBRACE] = 1434,
        [sym_comment] = 8,
    },
    [606] = {
        [anon_sym_RBRACK] = 394,
        [sym_comment] = 8,
    },
    [607] = {
        [anon_sym_RBRACK] = 426,
        [sym_comment] = 8,
    },
    [608] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1436,
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
    [609] = {
        [sym__type] = 1438,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [610] = {
        [anon_sym_RBRACK] = 1142,
        [sym_comment] = 8,
    },
    [611] = {
        [sym__type] = 1440,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [612] = {
        [anon_sym_RBRACK] = 1162,
        [sym_comment] = 8,
    },
    [613] = {
        [anon_sym_RBRACK] = 1166,
        [sym_comment] = 8,
    },
    [614] = {
        [sym_parameters] = 1442,
        [sym__type] = 1442,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_LPAREN] = 1444,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_RBRACK] = 1170,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [615] = {
        [sym__parameter_list] = 1446,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1448,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [616] = {
        [anon_sym_RPAREN] = 1450,
        [sym_comment] = 8,
    },
    [617] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_RBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [618] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_RBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [619] = {
        [anon_sym_RBRACK] = 1172,
        [sym_comment] = 8,
    },
    [620] = {
        [sym__parameter_list] = 1452,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1454,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [621] = {
        [anon_sym_RPAREN] = 1456,
        [sym_comment] = 8,
    },
    [622] = {
        [anon_sym_RBRACK] = 282,
        [sym_comment] = 8,
    },
    [623] = {
        [anon_sym_RBRACK] = 624,
        [sym_comment] = 8,
    },
    [624] = {
        [sym__type] = 1458,
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
    [625] = {
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [sym_comment] = 8,
    },
    [626] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1460,
        [anon_sym_RBRACE] = 1462,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [627] = {
        [anon_sym_RBRACE] = 1464,
        [sym_comment] = 8,
    },
    [628] = {
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [sym_comment] = 8,
    },
    [629] = {
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [sym_comment] = 8,
    },
    [630] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1466,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1468,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [631] = {
        [anon_sym_RBRACE] = 1470,
        [sym_comment] = 8,
    },
    [632] = {
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [sym_comment] = 8,
    },
    [633] = {
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [sym_comment] = 8,
    },
    [634] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1472,
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
    [635] = {
        [sym__type] = 1474,
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
    [636] = {
        [anon_sym_LF] = 1142,
        [anon_sym_SEMI] = 1142,
        [sym_comment] = 8,
    },
    [637] = {
        [sym__type] = 1476,
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
    [638] = {
        [anon_sym_LF] = 1162,
        [anon_sym_SEMI] = 1162,
        [sym_comment] = 8,
    },
    [639] = {
        [anon_sym_LF] = 1166,
        [anon_sym_SEMI] = 1166,
        [sym_comment] = 8,
    },
    [640] = {
        [sym_parameters] = 1478,
        [sym__type] = 1478,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 1170,
        [anon_sym_SEMI] = 1170,
        [anon_sym_LPAREN] = 262,
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
    [641] = {
        [anon_sym_LF] = 1172,
        [anon_sym_SEMI] = 1172,
        [sym_comment] = 8,
    },
    [642] = {
        [anon_sym_LF] = 1480,
        [anon_sym_SEMI] = 1480,
        [sym_comment] = 8,
    },
    [643] = {
        [anon_sym_RPAREN] = 1482,
        [sym_comment] = 8,
    },
    [644] = {
        [anon_sym_LF] = 1484,
        [anon_sym_SEMI] = 1484,
        [sym_comment] = 8,
    },
    [645] = {
        [anon_sym_LF] = 1486,
        [anon_sym_SEMI] = 1486,
        [sym_comment] = 8,
    },
    [646] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 1488,
        [anon_sym_RPAREN] = 1490,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [647] = {
        [anon_sym_RPAREN] = 1492,
        [sym_comment] = 8,
    },
    [648] = {
        [sym_identifier] = 1494,
        [sym_comment] = 8,
    },
    [649] = {
        [sym__parameter_list] = 1496,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1498,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [650] = {
        [sym_parameters] = 1500,
        [anon_sym_LPAREN] = 1502,
        [sym_comment] = 8,
    },
    [651] = {
        [sym_parameters] = 1504,
        [sym__type] = 1504,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_block] = 1508,
        [sym_qualified_identifier] = 1506,
        [anon_sym_LF] = 1510,
        [anon_sym_SEMI] = 1510,
        [anon_sym_LPAREN] = 1512,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_LBRACE] = 1522,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [652] = {
        [sym__parameter_list] = 1534,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1536,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [653] = {
        [anon_sym_RPAREN] = 1538,
        [sym_comment] = 8,
    },
    [654] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_block] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [655] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_block] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_LBRACE] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [656] = {
        [sym_block] = 1540,
        [anon_sym_LF] = 1542,
        [anon_sym_SEMI] = 1542,
        [anon_sym_LBRACE] = 1522,
        [sym_comment] = 8,
    },
    [657] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [658] = {
        [anon_sym_LF] = 1542,
        [anon_sym_SEMI] = 1542,
        [sym_comment] = 8,
    },
    [659] = {
        [sym__parameter_list] = 1544,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1546,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [660] = {
        [sym_parameters] = 1548,
        [anon_sym_LPAREN] = 1502,
        [sym_comment] = 8,
    },
    [661] = {
        [sym__type] = 1550,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [662] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1552,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1554,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [663] = {
        [anon_sym_LBRACE] = 1556,
        [sym_comment] = 8,
    },
    [664] = {
        [sym__declaration] = 644,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 646,
        [sym_slice_type] = 648,
        [sym_struct_type] = 648,
        [sym_map_type] = 648,
        [sym__statement] = 650,
        [sym_send_statement] = 644,
        [sym_inc_statement] = 644,
        [sym_dec_statement] = 644,
        [sym_assignment_statement] = 644,
        [sym_short_var_declaration] = 644,
        [sym_return_statement] = 644,
        [sym__expression] = 652,
        [sym_call_expression] = 654,
        [sym_selector_expression] = 654,
        [sym_composite_literal] = 654,
        [sym_func_literal] = 654,
        [sym_unary_expression] = 654,
        [sym_binary_expression] = 654,
        [sym__string_literal] = 654,
        [sym_int_literal] = 654,
        [sym_float_literal] = 654,
        [aux_sym_block_repeat1] = 1558,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 658,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1560,
        [anon_sym_map] = 144,
        [anon_sym_return] = 662,
        [sym_identifier] = 664,
        [sym_raw_string_literal] = 666,
        [sym_interpreted_string_literal] = 666,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 668,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 668,
        [sym_comment] = 8,
    },
    [665] = {
        [anon_sym_LBRACE] = 1562,
        [sym_comment] = 8,
    },
    [666] = {
        [anon_sym_LBRACK] = 1564,
        [sym_comment] = 8,
    },
    [667] = {
        [sym__type] = 1566,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1568,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [668] = {
        [anon_sym_chan] = 1570,
        [sym_comment] = 8,
    },
    [669] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1572,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [670] = {
        [sym_identifier] = 1574,
        [sym_comment] = 8,
    },
    [671] = {
        [sym_block] = 168,
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [672] = {
        [sym__type] = 1576,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [673] = {
        [sym_block] = 172,
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [674] = {
        [sym_block] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [675] = {
        [sym__type] = 1578,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [676] = {
        [sym_block] = 178,
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [anon_sym_LBRACE] = 178,
        [sym_comment] = 8,
    },
    [677] = {
        [sym__type] = 1580,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [678] = {
        [anon_sym_RBRACK] = 1582,
        [sym_comment] = 8,
    },
    [679] = {
        [sym__type] = 1584,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [680] = {
        [sym_block] = 240,
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [anon_sym_LBRACE] = 240,
        [sym_comment] = 8,
    },
    [681] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1586,
        [anon_sym_RBRACE] = 1588,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [682] = {
        [anon_sym_RBRACE] = 1590,
        [sym_comment] = 8,
    },
    [683] = {
        [sym_block] = 254,
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [anon_sym_LBRACE] = 254,
        [sym_comment] = 8,
    },
    [684] = {
        [sym_block] = 354,
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [anon_sym_LBRACE] = 354,
        [sym_comment] = 8,
    },
    [685] = {
        [anon_sym_RBRACE] = 1592,
        [sym_comment] = 8,
    },
    [686] = {
        [anon_sym_LF] = 742,
        [anon_sym_SEMI] = 742,
        [sym_comment] = 8,
    },
    [687] = {
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [sym_comment] = 8,
    },
    [688] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1594,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1596,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [689] = {
        [anon_sym_RBRACE] = 1598,
        [sym_comment] = 8,
    },
    [690] = {
        [sym_block] = 394,
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [anon_sym_LBRACE] = 394,
        [sym_comment] = 8,
    },
    [691] = {
        [sym_block] = 426,
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [anon_sym_LBRACE] = 426,
        [sym_comment] = 8,
    },
    [692] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1600,
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
    [693] = {
        [sym__type] = 1602,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [694] = {
        [sym_block] = 1142,
        [anon_sym_LF] = 1142,
        [anon_sym_SEMI] = 1142,
        [anon_sym_LBRACE] = 1142,
        [sym_comment] = 8,
    },
    [695] = {
        [sym__type] = 1604,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_qualified_identifier] = 1506,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [696] = {
        [sym_block] = 1162,
        [anon_sym_LF] = 1162,
        [anon_sym_SEMI] = 1162,
        [anon_sym_LBRACE] = 1162,
        [sym_comment] = 8,
    },
    [697] = {
        [sym_block] = 1166,
        [anon_sym_LF] = 1166,
        [anon_sym_SEMI] = 1166,
        [anon_sym_LBRACE] = 1166,
        [sym_comment] = 8,
    },
    [698] = {
        [sym_parameters] = 1606,
        [sym__type] = 1606,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_block] = 1170,
        [sym_qualified_identifier] = 1506,
        [anon_sym_LF] = 1170,
        [anon_sym_SEMI] = 1170,
        [anon_sym_LPAREN] = 1512,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_LBRACE] = 1170,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [699] = {
        [sym_block] = 1172,
        [anon_sym_LF] = 1172,
        [anon_sym_SEMI] = 1172,
        [anon_sym_LBRACE] = 1172,
        [sym_comment] = 8,
    },
    [700] = {
        [anon_sym_RPAREN] = 1608,
        [sym_comment] = 8,
    },
    [701] = {
        [sym_block] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LBRACE] = 282,
        [sym_comment] = 8,
    },
    [702] = {
        [sym_block] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_LBRACE] = 624,
        [sym_comment] = 8,
    },
    [703] = {
        [anon_sym_LF] = 1610,
        [anon_sym_SEMI] = 1610,
        [sym_comment] = 8,
    },
    [704] = {
        [anon_sym_RPAREN] = 1612,
        [sym_comment] = 8,
    },
    [705] = {
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [706] = {
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [707] = {
        [sym_parameters] = 1614,
        [anon_sym_LPAREN] = 1502,
        [sym_comment] = 8,
    },
    [708] = {
        [sym_parameters] = 1616,
        [sym__type] = 1616,
        [sym_pointer_type] = 1506,
        [sym_array_type] = 1506,
        [sym_slice_type] = 1506,
        [sym_struct_type] = 1506,
        [sym_interface_type] = 1506,
        [sym_map_type] = 1506,
        [sym_channel_type] = 1506,
        [sym_function_type] = 1506,
        [sym_block] = 1618,
        [sym_qualified_identifier] = 1506,
        [anon_sym_LF] = 1620,
        [anon_sym_SEMI] = 1620,
        [anon_sym_LPAREN] = 1512,
        [anon_sym_func] = 1514,
        [anon_sym_STAR] = 1516,
        [anon_sym_LBRACK] = 1518,
        [anon_sym_struct] = 1520,
        [anon_sym_LBRACE] = 1522,
        [anon_sym_interface] = 1524,
        [anon_sym_map] = 1526,
        [anon_sym_chan] = 1528,
        [anon_sym_LT_DASH] = 1530,
        [sym_identifier] = 1532,
        [sym_comment] = 8,
    },
    [709] = {
        [sym_block] = 1622,
        [anon_sym_LF] = 1624,
        [anon_sym_SEMI] = 1624,
        [anon_sym_LBRACE] = 1522,
        [sym_comment] = 8,
    },
    [710] = {
        [anon_sym_LF] = 1624,
        [anon_sym_SEMI] = 1624,
        [sym_comment] = 8,
    },
    [711] = {
        [anon_sym_LF] = 1626,
        [anon_sym_SEMI] = 1626,
        [sym_comment] = 8,
    },
    [712] = {
        [anon_sym_LF] = 1628,
        [anon_sym_SEMI] = 1628,
        [sym_comment] = 8,
    },
    [713] = {
        [sym__type] = 1630,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_EQ] = 1634,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [714] = {
        [sym_var_spec] = 1654,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1656,
        [anon_sym_RPAREN] = 1658,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [715] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [aux_sym_identifier_list_repeat1] = 1660,
        [anon_sym_EQ] = 396,
        [anon_sym_func] = 396,
        [anon_sym_COMMA] = 1662,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_comment] = 8,
    },
    [716] = {
        [sym__type] = 410,
        [sym_pointer_type] = 410,
        [sym_array_type] = 410,
        [sym_slice_type] = 410,
        [sym_struct_type] = 410,
        [sym_interface_type] = 410,
        [sym_map_type] = 410,
        [sym_channel_type] = 410,
        [sym_function_type] = 410,
        [sym_qualified_identifier] = 410,
        [anon_sym_EQ] = 410,
        [anon_sym_func] = 410,
        [anon_sym_STAR] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_struct] = 410,
        [anon_sym_interface] = 410,
        [anon_sym_map] = 410,
        [anon_sym_chan] = 410,
        [anon_sym_LT_DASH] = 410,
        [sym_identifier] = 410,
        [sym_comment] = 8,
    },
    [717] = {
        [sym_identifier] = 1664,
        [sym_comment] = 8,
    },
    [718] = {
        [sym__type] = 416,
        [sym_pointer_type] = 416,
        [sym_array_type] = 416,
        [sym_slice_type] = 416,
        [sym_struct_type] = 416,
        [sym_interface_type] = 416,
        [sym_map_type] = 416,
        [sym_channel_type] = 416,
        [sym_function_type] = 416,
        [sym_qualified_identifier] = 416,
        [aux_sym_identifier_list_repeat1] = 1666,
        [anon_sym_EQ] = 416,
        [anon_sym_func] = 416,
        [anon_sym_COMMA] = 1662,
        [anon_sym_STAR] = 416,
        [anon_sym_LBRACK] = 416,
        [anon_sym_struct] = 416,
        [anon_sym_interface] = 416,
        [anon_sym_map] = 416,
        [anon_sym_chan] = 416,
        [anon_sym_LT_DASH] = 416,
        [sym_identifier] = 416,
        [sym_comment] = 8,
    },
    [719] = {
        [sym__type] = 420,
        [sym_pointer_type] = 420,
        [sym_array_type] = 420,
        [sym_slice_type] = 420,
        [sym_struct_type] = 420,
        [sym_interface_type] = 420,
        [sym_map_type] = 420,
        [sym_channel_type] = 420,
        [sym_function_type] = 420,
        [sym_qualified_identifier] = 420,
        [anon_sym_EQ] = 420,
        [anon_sym_func] = 420,
        [anon_sym_STAR] = 420,
        [anon_sym_LBRACK] = 420,
        [anon_sym_struct] = 420,
        [anon_sym_interface] = 420,
        [anon_sym_map] = 420,
        [anon_sym_chan] = 420,
        [anon_sym_LT_DASH] = 420,
        [sym_identifier] = 420,
        [sym_comment] = 8,
    },
    [720] = {
        [anon_sym_LF] = 1668,
        [anon_sym_SEMI] = 1668,
        [sym_comment] = 8,
    },
    [721] = {
        [anon_sym_RPAREN] = 1670,
        [sym_comment] = 8,
    },
    [722] = {
        [anon_sym_LF] = 1672,
        [anon_sym_SEMI] = 1672,
        [sym_comment] = 8,
    },
    [723] = {
        [anon_sym_LF] = 1674,
        [anon_sym_SEMI] = 1674,
        [sym_comment] = 8,
    },
    [724] = {
        [sym_var_spec] = 1654,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1676,
        [anon_sym_RPAREN] = 1678,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [725] = {
        [anon_sym_RPAREN] = 1680,
        [sym_comment] = 8,
    },
    [726] = {
        [anon_sym_LF] = 1682,
        [anon_sym_SEMI] = 1682,
        [anon_sym_EQ] = 1684,
        [sym_comment] = 8,
    },
    [727] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [728] = {
        [sym_expression_list] = 1686,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [729] = {
        [sym_parameters] = 1688,
        [anon_sym_LPAREN] = 1690,
        [sym_comment] = 8,
    },
    [730] = {
        [sym__type] = 1692,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [731] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1694,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1696,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [732] = {
        [anon_sym_LBRACE] = 1698,
        [sym_comment] = 8,
    },
    [733] = {
        [anon_sym_LBRACE] = 1700,
        [sym_comment] = 8,
    },
    [734] = {
        [anon_sym_LBRACK] = 1702,
        [sym_comment] = 8,
    },
    [735] = {
        [sym__type] = 1704,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1706,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [736] = {
        [anon_sym_chan] = 1708,
        [sym_comment] = 8,
    },
    [737] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1710,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [738] = {
        [sym_identifier] = 1712,
        [sym_comment] = 8,
    },
    [739] = {
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [740] = {
        [sym__type] = 1714,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [741] = {
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [742] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [743] = {
        [sym__type] = 1716,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [744] = {
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [anon_sym_EQ] = 178,
        [sym_comment] = 8,
    },
    [745] = {
        [sym__type] = 1718,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [746] = {
        [anon_sym_RBRACK] = 1720,
        [sym_comment] = 8,
    },
    [747] = {
        [sym__type] = 1722,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [748] = {
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [anon_sym_EQ] = 240,
        [sym_comment] = 8,
    },
    [749] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1724,
        [anon_sym_RBRACE] = 1726,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [750] = {
        [anon_sym_RBRACE] = 1728,
        [sym_comment] = 8,
    },
    [751] = {
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [anon_sym_EQ] = 254,
        [sym_comment] = 8,
    },
    [752] = {
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [anon_sym_EQ] = 354,
        [sym_comment] = 8,
    },
    [753] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1730,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1732,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [754] = {
        [anon_sym_RBRACE] = 1734,
        [sym_comment] = 8,
    },
    [755] = {
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [anon_sym_EQ] = 394,
        [sym_comment] = 8,
    },
    [756] = {
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [anon_sym_EQ] = 426,
        [sym_comment] = 8,
    },
    [757] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1736,
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
    [758] = {
        [sym__type] = 1738,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [759] = {
        [anon_sym_LF] = 1142,
        [anon_sym_SEMI] = 1142,
        [anon_sym_EQ] = 1142,
        [sym_comment] = 8,
    },
    [760] = {
        [sym__type] = 1740,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [761] = {
        [anon_sym_LF] = 1162,
        [anon_sym_SEMI] = 1162,
        [anon_sym_EQ] = 1162,
        [sym_comment] = 8,
    },
    [762] = {
        [anon_sym_LF] = 1166,
        [anon_sym_SEMI] = 1166,
        [anon_sym_EQ] = 1166,
        [sym_comment] = 8,
    },
    [763] = {
        [sym_parameters] = 1742,
        [sym__type] = 1742,
        [sym_pointer_type] = 1632,
        [sym_array_type] = 1632,
        [sym_slice_type] = 1632,
        [sym_struct_type] = 1632,
        [sym_interface_type] = 1632,
        [sym_map_type] = 1632,
        [sym_channel_type] = 1632,
        [sym_function_type] = 1632,
        [sym_qualified_identifier] = 1632,
        [anon_sym_LF] = 1170,
        [anon_sym_SEMI] = 1170,
        [anon_sym_LPAREN] = 1744,
        [anon_sym_EQ] = 1170,
        [anon_sym_func] = 1636,
        [anon_sym_STAR] = 1638,
        [anon_sym_LBRACK] = 1640,
        [anon_sym_struct] = 1642,
        [anon_sym_interface] = 1644,
        [anon_sym_map] = 1646,
        [anon_sym_chan] = 1648,
        [anon_sym_LT_DASH] = 1650,
        [sym_identifier] = 1652,
        [sym_comment] = 8,
    },
    [764] = {
        [sym__parameter_list] = 1746,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1748,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [765] = {
        [anon_sym_RPAREN] = 1750,
        [sym_comment] = 8,
    },
    [766] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_EQ] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [767] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_EQ] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [768] = {
        [anon_sym_LF] = 1172,
        [anon_sym_SEMI] = 1172,
        [anon_sym_EQ] = 1172,
        [sym_comment] = 8,
    },
    [769] = {
        [sym__parameter_list] = 1752,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1754,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [770] = {
        [anon_sym_RPAREN] = 1756,
        [sym_comment] = 8,
    },
    [771] = {
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [772] = {
        [anon_sym_LF] = 624,
        [anon_sym_SEMI] = 624,
        [anon_sym_EQ] = 624,
        [sym_comment] = 8,
    },
    [773] = {
        [anon_sym_LF] = 1758,
        [anon_sym_SEMI] = 1758,
        [sym_comment] = 8,
    },
    [774] = {
        [sym_expression_list] = 1760,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [775] = {
        [anon_sym_LF] = 1762,
        [anon_sym_SEMI] = 1762,
        [sym_comment] = 8,
    },
    [776] = {
        [anon_sym_LF] = 1764,
        [anon_sym_SEMI] = 1764,
        [sym_comment] = 8,
    },
    [777] = {
        [sym__type] = 1766,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_EQ] = 1770,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [778] = {
        [sym_const_spec] = 1790,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1792,
        [anon_sym_RPAREN] = 1794,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [779] = {
        [anon_sym_LF] = 1796,
        [anon_sym_SEMI] = 1796,
        [sym_comment] = 8,
    },
    [780] = {
        [anon_sym_RPAREN] = 1798,
        [sym_comment] = 8,
    },
    [781] = {
        [anon_sym_LF] = 1800,
        [anon_sym_SEMI] = 1800,
        [sym_comment] = 8,
    },
    [782] = {
        [anon_sym_LF] = 1802,
        [anon_sym_SEMI] = 1802,
        [sym_comment] = 8,
    },
    [783] = {
        [sym_const_spec] = 1790,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1804,
        [anon_sym_RPAREN] = 1806,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [784] = {
        [anon_sym_RPAREN] = 1808,
        [sym_comment] = 8,
    },
    [785] = {
        [anon_sym_EQ] = 1810,
        [sym_comment] = 8,
    },
    [786] = {
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [787] = {
        [sym_expression_list] = 1812,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [788] = {
        [sym_parameters] = 1814,
        [anon_sym_LPAREN] = 1816,
        [sym_comment] = 8,
    },
    [789] = {
        [sym__type] = 1818,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [790] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1820,
        [sym_call_expression] = 134,
        [sym_selector_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_func_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_func] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1822,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [791] = {
        [anon_sym_LBRACE] = 1824,
        [sym_comment] = 8,
    },
    [792] = {
        [anon_sym_LBRACE] = 1826,
        [sym_comment] = 8,
    },
    [793] = {
        [anon_sym_LBRACK] = 1828,
        [sym_comment] = 8,
    },
    [794] = {
        [sym__type] = 1830,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1832,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [795] = {
        [anon_sym_chan] = 1834,
        [sym_comment] = 8,
    },
    [796] = {
        [anon_sym_DOT] = 1836,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [797] = {
        [sym_identifier] = 1838,
        [sym_comment] = 8,
    },
    [798] = {
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [799] = {
        [sym__type] = 1840,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [800] = {
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [801] = {
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [802] = {
        [sym__type] = 1842,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [803] = {
        [anon_sym_EQ] = 178,
        [sym_comment] = 8,
    },
    [804] = {
        [sym__type] = 1844,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [805] = {
        [anon_sym_RBRACK] = 1846,
        [sym_comment] = 8,
    },
    [806] = {
        [sym__type] = 1848,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [807] = {
        [anon_sym_EQ] = 240,
        [sym_comment] = 8,
    },
    [808] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1850,
        [anon_sym_RBRACE] = 1852,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [809] = {
        [anon_sym_RBRACE] = 1854,
        [sym_comment] = 8,
    },
    [810] = {
        [anon_sym_EQ] = 254,
        [sym_comment] = 8,
    },
    [811] = {
        [anon_sym_EQ] = 354,
        [sym_comment] = 8,
    },
    [812] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1856,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1858,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [813] = {
        [anon_sym_RBRACE] = 1860,
        [sym_comment] = 8,
    },
    [814] = {
        [anon_sym_EQ] = 394,
        [sym_comment] = 8,
    },
    [815] = {
        [anon_sym_EQ] = 426,
        [sym_comment] = 8,
    },
    [816] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_DOT] = 488,
        [anon_sym_STAR] = 490,
        [anon_sym_RBRACK] = 1862,
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
    [817] = {
        [sym__type] = 1864,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [818] = {
        [anon_sym_EQ] = 1142,
        [sym_comment] = 8,
    },
    [819] = {
        [sym__type] = 1866,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [820] = {
        [anon_sym_EQ] = 1162,
        [sym_comment] = 8,
    },
    [821] = {
        [anon_sym_EQ] = 1166,
        [sym_comment] = 8,
    },
    [822] = {
        [sym_parameters] = 1868,
        [sym__type] = 1868,
        [sym_pointer_type] = 1768,
        [sym_array_type] = 1768,
        [sym_slice_type] = 1768,
        [sym_struct_type] = 1768,
        [sym_interface_type] = 1768,
        [sym_map_type] = 1768,
        [sym_channel_type] = 1768,
        [sym_function_type] = 1768,
        [sym_qualified_identifier] = 1768,
        [anon_sym_LPAREN] = 1870,
        [anon_sym_EQ] = 1170,
        [anon_sym_func] = 1772,
        [anon_sym_STAR] = 1774,
        [anon_sym_LBRACK] = 1776,
        [anon_sym_struct] = 1778,
        [anon_sym_interface] = 1780,
        [anon_sym_map] = 1782,
        [anon_sym_chan] = 1784,
        [anon_sym_LT_DASH] = 1786,
        [sym_identifier] = 1788,
        [sym_comment] = 8,
    },
    [823] = {
        [sym__parameter_list] = 1872,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1874,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [824] = {
        [anon_sym_RPAREN] = 1876,
        [sym_comment] = 8,
    },
    [825] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_EQ] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [826] = {
        [sym_parameters] = 624,
        [sym__type] = 624,
        [sym_pointer_type] = 624,
        [sym_array_type] = 624,
        [sym_slice_type] = 624,
        [sym_struct_type] = 624,
        [sym_interface_type] = 624,
        [sym_map_type] = 624,
        [sym_channel_type] = 624,
        [sym_function_type] = 624,
        [sym_qualified_identifier] = 624,
        [anon_sym_LPAREN] = 624,
        [anon_sym_EQ] = 624,
        [anon_sym_func] = 624,
        [anon_sym_STAR] = 624,
        [anon_sym_LBRACK] = 624,
        [anon_sym_struct] = 624,
        [anon_sym_interface] = 624,
        [anon_sym_map] = 624,
        [anon_sym_chan] = 624,
        [anon_sym_LT_DASH] = 624,
        [sym_identifier] = 624,
        [sym_comment] = 8,
    },
    [827] = {
        [anon_sym_EQ] = 1172,
        [sym_comment] = 8,
    },
    [828] = {
        [sym__parameter_list] = 1878,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1880,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [829] = {
        [anon_sym_RPAREN] = 1882,
        [sym_comment] = 8,
    },
    [830] = {
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [831] = {
        [anon_sym_EQ] = 624,
        [sym_comment] = 8,
    },
    [832] = {
        [anon_sym_LF] = 1884,
        [anon_sym_SEMI] = 1884,
        [sym_comment] = 8,
    },
    [833] = {
        [sym_expression_list] = 1886,
        [sym_slice_type] = 746,
        [sym_struct_type] = 746,
        [sym_map_type] = 746,
        [sym__expression] = 748,
        [sym_call_expression] = 750,
        [sym_selector_expression] = 750,
        [sym_composite_literal] = 750,
        [sym_func_literal] = 750,
        [sym_unary_expression] = 750,
        [sym_binary_expression] = 750,
        [sym__string_literal] = 750,
        [sym_int_literal] = 750,
        [sym_float_literal] = 750,
        [anon_sym_func] = 752,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 754,
        [sym_raw_string_literal] = 756,
        [sym_interpreted_string_literal] = 756,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 758,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 758,
        [sym_comment] = 8,
    },
    [834] = {
        [anon_sym_LF] = 1888,
        [anon_sym_SEMI] = 1888,
        [sym_comment] = 8,
    },
    [835] = {
        [sym_import_declaration] = 1890,
        [sym__top_level_declaration] = 1890,
        [sym__declaration] = 1890,
        [sym_const_declaration] = 1890,
        [sym_var_declaration] = 1890,
        [sym_function_declaration] = 1890,
        [sym_method_declaration] = 1890,
        [sym_type_declaration] = 1890,
        [aux_sym_source_file_repeat1] = 1890,
        [aux_sym_source_file_repeat2] = 1890,
        [ts_builtin_sym_end] = 1890,
        [anon_sym_import] = 1890,
        [anon_sym_const] = 1890,
        [anon_sym_var] = 1890,
        [anon_sym_func] = 1890,
        [anon_sym_type] = 1890,
        [sym_comment] = 8,
    },
    [836] = {
        [sym_import_declaration] = 1892,
        [sym__top_level_declaration] = 1892,
        [sym__declaration] = 1892,
        [sym_const_declaration] = 1892,
        [sym_var_declaration] = 1892,
        [sym_function_declaration] = 1892,
        [sym_method_declaration] = 1892,
        [sym_type_declaration] = 1892,
        [aux_sym_source_file_repeat1] = 1892,
        [aux_sym_source_file_repeat2] = 1892,
        [ts_builtin_sym_end] = 1892,
        [anon_sym_import] = 1892,
        [anon_sym_const] = 1892,
        [anon_sym_var] = 1892,
        [anon_sym_func] = 1892,
        [anon_sym_type] = 1892,
        [sym_comment] = 8,
    },
    [837] = {
        [sym_import_spec] = 1894,
        [sym__string_literal] = 1896,
        [aux_sym_import_declaration_repeat1] = 1898,
        [anon_sym_RPAREN] = 1900,
        [anon_sym_DOT] = 1902,
        [sym_identifier] = 1902,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [838] = {
        [sym__string_literal] = 1904,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [839] = {
        [sym_import_declaration] = 414,
        [sym__top_level_declaration] = 414,
        [sym__declaration] = 414,
        [sym_const_declaration] = 414,
        [sym_var_declaration] = 414,
        [sym_function_declaration] = 414,
        [sym_method_declaration] = 414,
        [sym_type_declaration] = 414,
        [aux_sym_source_file_repeat1] = 414,
        [aux_sym_source_file_repeat2] = 414,
        [ts_builtin_sym_end] = 414,
        [anon_sym_import] = 414,
        [anon_sym_const] = 414,
        [anon_sym_var] = 414,
        [anon_sym_func] = 414,
        [anon_sym_type] = 414,
        [sym_comment] = 8,
    },
    [840] = {
        [sym_import_declaration] = 1906,
        [sym__top_level_declaration] = 1906,
        [sym__declaration] = 1906,
        [sym_const_declaration] = 1906,
        [sym_var_declaration] = 1906,
        [sym_function_declaration] = 1906,
        [sym_method_declaration] = 1906,
        [sym_type_declaration] = 1906,
        [aux_sym_source_file_repeat1] = 1906,
        [aux_sym_source_file_repeat2] = 1906,
        [ts_builtin_sym_end] = 1906,
        [anon_sym_import] = 1906,
        [anon_sym_const] = 1906,
        [anon_sym_var] = 1906,
        [anon_sym_func] = 1906,
        [anon_sym_type] = 1906,
        [sym_comment] = 8,
    },
    [841] = {
        [anon_sym_LF] = 1908,
        [anon_sym_SEMI] = 1908,
        [sym_comment] = 8,
    },
    [842] = {
        [anon_sym_LF] = 1892,
        [anon_sym_SEMI] = 1892,
        [sym_comment] = 8,
    },
    [843] = {
        [anon_sym_RPAREN] = 1910,
        [sym_comment] = 8,
    },
    [844] = {
        [sym_import_declaration] = 1912,
        [sym__top_level_declaration] = 1912,
        [sym__declaration] = 1912,
        [sym_const_declaration] = 1912,
        [sym_var_declaration] = 1912,
        [sym_function_declaration] = 1912,
        [sym_method_declaration] = 1912,
        [sym_type_declaration] = 1912,
        [aux_sym_source_file_repeat1] = 1912,
        [aux_sym_source_file_repeat2] = 1912,
        [ts_builtin_sym_end] = 1912,
        [anon_sym_import] = 1912,
        [anon_sym_const] = 1912,
        [anon_sym_var] = 1912,
        [anon_sym_func] = 1912,
        [anon_sym_type] = 1912,
        [sym_comment] = 8,
    },
    [845] = {
        [sym__string_literal] = 1914,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [846] = {
        [anon_sym_LF] = 1906,
        [anon_sym_SEMI] = 1906,
        [sym_comment] = 8,
    },
    [847] = {
        [sym_import_declaration] = 1916,
        [sym__top_level_declaration] = 1916,
        [sym__declaration] = 1916,
        [sym_const_declaration] = 1916,
        [sym_var_declaration] = 1916,
        [sym_function_declaration] = 1916,
        [sym_method_declaration] = 1916,
        [sym_type_declaration] = 1916,
        [aux_sym_source_file_repeat1] = 1916,
        [aux_sym_source_file_repeat2] = 1916,
        [ts_builtin_sym_end] = 1916,
        [anon_sym_import] = 1916,
        [anon_sym_const] = 1916,
        [anon_sym_var] = 1916,
        [anon_sym_func] = 1916,
        [anon_sym_type] = 1916,
        [sym_comment] = 8,
    },
    [848] = {
        [sym_import_spec] = 1894,
        [sym__string_literal] = 1896,
        [aux_sym_import_declaration_repeat1] = 1918,
        [anon_sym_RPAREN] = 1920,
        [anon_sym_DOT] = 1902,
        [sym_identifier] = 1902,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [849] = {
        [anon_sym_RPAREN] = 1922,
        [sym_comment] = 8,
    },
    [850] = {
        [ts_builtin_sym_end] = 1924,
        [sym_comment] = 8,
    },
    [851] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 1926,
        [ts_builtin_sym_end] = 1928,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [852] = {
        [ts_builtin_sym_end] = 1930,
        [sym_comment] = 8,
    },
    [853] = {
        [sym__top_level_declaration] = 1932,
        [sym__declaration] = 1932,
        [sym_const_declaration] = 1932,
        [sym_var_declaration] = 1932,
        [sym_function_declaration] = 1932,
        [sym_method_declaration] = 1932,
        [sym_type_declaration] = 1932,
        [aux_sym_source_file_repeat2] = 1932,
        [ts_builtin_sym_end] = 1932,
        [anon_sym_const] = 1932,
        [anon_sym_var] = 1932,
        [anon_sym_func] = 1932,
        [anon_sym_type] = 1932,
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
    [42] = {.count = 1}, SHIFT(853, 0),
    [44] = {.count = 1}, SHIFT(851, 0),
    [46] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [50] = {.count = 1}, SHIFT(850, 0),
    [52] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [54] = {.count = 1}, SHIFT(835, 0),
    [56] = {.count = 1}, SHIFT(836, 0),
    [58] = {.count = 1}, SHIFT(837, 0),
    [60] = {.count = 1}, SHIFT(838, 0),
    [62] = {.count = 1}, SHIFT(839, 0),
    [64] = {.count = 1}, SHIFT(776, 0),
    [66] = {.count = 1}, SHIFT(777, 0),
    [68] = {.count = 1}, SHIFT(778, 0),
    [70] = {.count = 1}, SHIFT(715, 0),
    [72] = {.count = 1}, SHIFT(712, 0),
    [74] = {.count = 1}, SHIFT(713, 0),
    [76] = {.count = 1}, SHIFT(714, 0),
    [78] = {.count = 1}, SHIFT(648, 0),
    [80] = {.count = 1}, SHIFT(649, 0),
    [82] = {.count = 1}, SHIFT(650, 0),
    [84] = {.count = 1}, SHIFT(16, 0),
    [86] = {.count = 1}, SHIFT(17, 0),
    [88] = {.count = 1}, SHIFT(18, 0),
    [90] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [92] = {.count = 1}, SHIFT(642, 0),
    [94] = {.count = 1}, SHIFT(643, 0),
    [96] = {.count = 1}, SHIFT(644, 0),
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
    [124] = {.count = 1}, SHIFT(640, 0),
    [126] = {.count = 1}, SHIFT(67, 0),
    [128] = {.count = 1}, SHIFT(639, 0),
    [130] = {.count = 1}, SHIFT(146, 0),
    [132] = {.count = 1}, SHIFT(634, 0),
    [134] = {.count = 1}, SHIFT(148, 0),
    [136] = {.count = 1}, SHIFT(149, 0),
    [138] = {.count = 1}, SHIFT(150, 0),
    [140] = {.count = 1}, SHIFT(635, 0),
    [142] = {.count = 1}, SHIFT(152, 0),
    [144] = {.count = 1}, SHIFT(153, 0),
    [146] = {.count = 1}, SHIFT(154, 0),
    [148] = {.count = 1}, SHIFT(155, 0),
    [150] = {.count = 1}, SHIFT(156, 0),
    [152] = {.count = 1}, SHIFT(630, 0),
    [154] = {.count = 1}, SHIFT(626, 0),
    [156] = {.count = 1}, SHIFT(37, 0),
    [158] = {.count = 1}, SHIFT(34, 0),
    [160] = {.count = 1}, SHIFT(35, 0),
    [162] = {.count = 1}, SHIFT(32, 0),
    [164] = {.count = 1}, SHIFT(30, 0),
    [166] = {.count = 1}, SHIFT(31, 0),
    [168] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [170] = {.count = 1}, SHIFT(33, 0),
    [172] = {.count = 1}, REDUCE(sym_channel_type, 3, FRAGILE),
    [174] = {.count = 1}, REDUCE(sym_channel_type, 2, 0),
    [176] = {.count = 1}, SHIFT(36, 0),
    [178] = {.count = 1}, REDUCE(sym_channel_type, 3, 0),
    [180] = {.count = 1}, SHIFT(38, 0),
    [182] = {.count = 1}, SHIFT(39, 0),
    [184] = {.count = 1}, SHIFT(40, 0),
    [186] = {.count = 1}, SHIFT(41, 0),
    [188] = {.count = 1}, SHIFT(42, 0),
    [190] = {.count = 1}, SHIFT(43, 0),
    [192] = {.count = 1}, SHIFT(44, 0),
    [194] = {.count = 1}, SHIFT(45, 0),
    [196] = {.count = 1}, SHIFT(46, 0),
    [198] = {.count = 1}, SHIFT(47, 0),
    [200] = {.count = 1}, SHIFT(48, 0),
    [202] = {.count = 1}, SHIFT(624, 0),
    [204] = {.count = 1}, SHIFT(614, 0),
    [206] = {.count = 1}, SHIFT(615, 0),
    [208] = {.count = 1}, SHIFT(613, 0),
    [210] = {.count = 1}, SHIFT(608, 0),
    [212] = {.count = 1}, SHIFT(609, 0),
    [214] = {.count = 1}, SHIFT(604, 0),
    [216] = {.count = 1}, SHIFT(60, 0),
    [218] = {.count = 1}, SHIFT(56, 0),
    [220] = {.count = 1}, SHIFT(53, 0),
    [222] = {.count = 1}, SHIFT(54, 0),
    [224] = {.count = 1}, SHIFT(51, 0),
    [226] = {.count = 1}, SHIFT(49, 0),
    [228] = {.count = 1}, SHIFT(50, 0),
    [230] = {.count = 1}, SHIFT(52, 0),
    [232] = {.count = 1}, SHIFT(55, 0),
    [234] = {.count = 1}, SHIFT(57, 0),
    [236] = {.count = 1}, SHIFT(58, 0),
    [238] = {.count = 1}, SHIFT(59, 0),
    [240] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [242] = {.count = 1}, SHIFT(61, 0),
    [244] = {.count = 1}, SHIFT(62, 0),
    [246] = {.count = 1}, SHIFT(63, 0),
    [248] = {.count = 1}, SHIFT(64, 0),
    [250] = {.count = 1}, SHIFT(66, 0),
    [252] = {.count = 1}, SHIFT(603, 0),
    [254] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [256] = {.count = 1}, SHIFT(65, 0),
    [258] = {.count = 1}, SHIFT(598, 0),
    [260] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [262] = {.count = 1}, SHIFT(599, 0),
    [264] = {.count = 1}, SHIFT(597, 0),
    [266] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [268] = {.count = 1}, SHIFT(68, 0),
    [270] = {.count = 1}, SHIFT(69, 0),
    [272] = {.count = 1}, SHIFT(70, 0),
    [274] = {.count = 1}, SHIFT(71, 0),
    [276] = {.count = 1}, SHIFT(596, 0),
    [278] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [280] = {.count = 1}, SHIFT(75, 0),
    [282] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [284] = {.count = 1}, SHIFT(72, 0),
    [286] = {.count = 1}, SHIFT(73, 0),
    [288] = {.count = 1}, SHIFT(74, 0),
    [290] = {.count = 1}, SHIFT(76, 0),
    [292] = {.count = 1}, SHIFT(77, 0),
    [294] = {.count = 1}, SHIFT(78, 0),
    [296] = {.count = 1}, SHIFT(79, 0),
    [298] = {.count = 1}, SHIFT(80, 0),
    [300] = {.count = 1}, SHIFT(81, 0),
    [302] = {.count = 1}, SHIFT(82, 0),
    [304] = {.count = 1}, SHIFT(83, 0),
    [306] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [308] = {.count = 1}, SHIFT(586, 0),
    [310] = {.count = 1}, SHIFT(587, 0),
    [312] = {.count = 1}, SHIFT(585, 0),
    [314] = {.count = 1}, REDUCE(sym__parameter_list, 2, 0),
    [316] = {.count = 1}, SHIFT(584, 0),
    [318] = {.count = 1}, SHIFT(579, 0),
    [320] = {.count = 1}, SHIFT(580, 0),
    [322] = {.count = 1}, SHIFT(99, 0),
    [324] = {.count = 1}, SHIFT(95, 0),
    [326] = {.count = 1}, SHIFT(91, 0),
    [328] = {.count = 1}, SHIFT(88, 0),
    [330] = {.count = 1}, SHIFT(89, 0),
    [332] = {.count = 1}, SHIFT(86, 0),
    [334] = {.count = 1}, SHIFT(84, 0),
    [336] = {.count = 1}, SHIFT(85, 0),
    [338] = {.count = 1}, SHIFT(87, 0),
    [340] = {.count = 1}, SHIFT(90, 0),
    [342] = {.count = 1}, SHIFT(92, 0),
    [344] = {.count = 1}, SHIFT(93, 0),
    [346] = {.count = 1}, SHIFT(94, 0),
    [348] = {.count = 1}, SHIFT(96, 0),
    [350] = {.count = 1}, SHIFT(97, 0),
    [352] = {.count = 1}, SHIFT(98, 0),
    [354] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [356] = {.count = 1}, SHIFT(100, 0),
    [358] = {.count = 1}, SHIFT(101, 0),
    [360] = {.count = 1}, SHIFT(102, 0),
    [362] = {.count = 1}, SHIFT(103, 0),
    [364] = {.count = 1}, SHIFT(104, 0),
    [366] = {.count = 1}, SHIFT(105, 0),
    [368] = {.count = 1}, SHIFT(112, 0),
    [370] = {.count = 1}, SHIFT(117, 0),
    [372] = {.count = 1}, SHIFT(118, 0),
    [374] = {.count = 1}, SHIFT(119, 0),
    [376] = {.count = 1}, SHIFT(120, 0),
    [378] = {.count = 1}, SHIFT(121, 0),
    [380] = {.count = 1}, SHIFT(122, 0),
    [382] = {.count = 1}, SHIFT(123, 0),
    [384] = {.count = 1}, SHIFT(124, 0),
    [386] = {.count = 1}, SHIFT(125, 0),
    [388] = {.count = 1}, SHIFT(126, 0),
    [390] = {.count = 1}, SHIFT(115, 0),
    [392] = {.count = 1}, SHIFT(114, 0),
    [394] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [396] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [398] = {.count = 1}, SHIFT(106, 0),
    [400] = {.count = 1}, SHIFT(107, 0),
    [402] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [404] = {.count = 1}, SHIFT(108, 0),
    [406] = {.count = 1}, SHIFT(109, 0),
    [408] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [410] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [412] = {.count = 1}, SHIFT(110, 0),
    [414] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [416] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [418] = {.count = 1}, SHIFT(111, 0),
    [420] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [422] = {.count = 1}, SHIFT(113, 0),
    [424] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [426] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [428] = {.count = 1}, SHIFT(116, 0),
    [430] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [432] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [434] = {.count = 1}, SHIFT(569, 0),
    [436] = {.count = 1}, SHIFT(570, 0),
    [438] = {.count = 1}, SHIFT(568, 0),
    [440] = {.count = 1}, SHIFT(147, 0),
    [442] = {.count = 1}, SHIFT(151, 0),
    [444] = {.count = 1}, SHIFT(142, 0),
    [446] = {.count = 1}, SHIFT(138, 0),
    [448] = {.count = 1}, SHIFT(134, 0),
    [450] = {.count = 1}, SHIFT(131, 0),
    [452] = {.count = 1}, SHIFT(132, 0),
    [454] = {.count = 1}, SHIFT(129, 0),
    [456] = {.count = 1}, SHIFT(127, 0),
    [458] = {.count = 1}, SHIFT(128, 0),
    [460] = {.count = 1}, SHIFT(130, 0),
    [462] = {.count = 1}, SHIFT(133, 0),
    [464] = {.count = 1}, SHIFT(135, 0),
    [466] = {.count = 1}, SHIFT(136, 0),
    [468] = {.count = 1}, SHIFT(137, 0),
    [470] = {.count = 1}, SHIFT(139, 0),
    [472] = {.count = 1}, SHIFT(140, 0),
    [474] = {.count = 1}, SHIFT(141, 0),
    [476] = {.count = 1}, SHIFT(143, 0),
    [478] = {.count = 1}, SHIFT(144, 0),
    [480] = {.count = 1}, SHIFT(145, 0),
    [482] = {.count = 1}, SHIFT(157, 0),
    [484] = {.count = 1}, SHIFT(158, 0),
    [486] = {.count = 1}, SHIFT(428, 0),
    [488] = {.count = 1}, SHIFT(429, 0),
    [490] = {.count = 1}, SHIFT(430, 0),
    [492] = {.count = 1}, SHIFT(566, 0),
    [494] = {.count = 1}, SHIFT(432, 0),
    [496] = {.count = 1}, SHIFT(433, 0),
    [498] = {.count = 1}, SHIFT(434, 0),
    [500] = {.count = 1}, SHIFT(435, 0),
    [502] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [504] = {.count = 1}, SHIFT(558, 0),
    [506] = {.count = 1}, SHIFT(180, 0),
    [508] = {.count = 1}, SHIFT(538, 0),
    [510] = {.count = 1}, SHIFT(557, 0),
    [512] = {.count = 1}, SHIFT(553, 0),
    [514] = {.count = 1}, SHIFT(514, 0),
    [516] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [518] = {.count = 1}, REDUCE(sym_composite_literal, 2, 0),
    [520] = {.count = 1}, SHIFT(159, 0),
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
    [548] = {.count = 1}, SHIFT(498, 0),
    [550] = {.count = 1}, SHIFT(499, 0),
    [552] = {.count = 1}, REDUCE(sym_element, 1, 0),
    [554] = {.count = 1}, SHIFT(500, 0),
    [556] = {.count = 1}, SHIFT(456, 0),
    [558] = {.count = 1}, SHIFT(501, 0),
    [560] = {.count = 1}, SHIFT(502, 0),
    [562] = {.count = 1}, SHIFT(503, 0),
    [564] = {.count = 1}, SHIFT(504, 0),
    [566] = {.count = 1}, SHIFT(455, 0),
    [568] = {.count = 1}, SHIFT(453, 0),
    [570] = {.count = 1}, REDUCE(sym__element_list, 1, 0),
    [572] = {.count = 1}, SHIFT(179, 0),
    [574] = {.count = 1}, SHIFT(176, 0),
    [576] = {.count = 1}, SHIFT(177, 0),
    [578] = {.count = 1}, REDUCE(sym_literal_value, 2, 0),
    [580] = {.count = 1}, SHIFT(173, 0),
    [582] = {.count = 1}, SHIFT(174, 0),
    [584] = {.count = 1}, SHIFT(175, 0),
    [586] = {.count = 1}, REDUCE(sym_literal_value, 3, 0),
    [588] = {.count = 1}, SHIFT(178, 0),
    [590] = {.count = 1}, SHIFT(184, 0),
    [592] = {.count = 1}, SHIFT(185, 0),
    [594] = {.count = 1}, SHIFT(186, 0),
    [596] = {.count = 1}, SHIFT(187, 0),
    [598] = {.count = 1}, SHIFT(188, 0),
    [600] = {.count = 1}, SHIFT(189, 0),
    [602] = {.count = 1}, SHIFT(190, 0),
    [604] = {.count = 1}, SHIFT(191, 0),
    [606] = {.count = 1}, SHIFT(192, 0),
    [608] = {.count = 1}, SHIFT(193, 0),
    [610] = {.count = 1}, SHIFT(194, 0),
    [612] = {.count = 1}, SHIFT(195, 0),
    [614] = {.count = 1}, SHIFT(196, 0),
    [616] = {.count = 1}, SHIFT(197, 0),
    [618] = {.count = 1}, SHIFT(181, 0),
    [620] = {.count = 1}, SHIFT(182, 0),
    [622] = {.count = 1}, SHIFT(183, 0),
    [624] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [626] = {.count = 1}, SHIFT(452, 0),
    [628] = {.count = 1}, REDUCE(sym_func_literal, 3, 0),
    [630] = {.count = 1}, SHIFT(449, 0),
    [632] = {.count = 1}, SHIFT(450, 0),
    [634] = {.count = 1}, SHIFT(447, 0),
    [636] = {.count = 1}, SHIFT(446, 0),
    [638] = {.count = 1}, SHIFT(425, 0),
    [640] = {.count = 1}, SHIFT(426, 0),
    [642] = {.count = 1}, SHIFT(421, 0),
    [644] = {.count = 1}, SHIFT(213, 0),
    [646] = {.count = 1}, SHIFT(214, 0),
    [648] = {.count = 1}, SHIFT(215, 0),
    [650] = {.count = 1}, SHIFT(216, 0),
    [652] = {.count = 1}, SHIFT(217, 0),
    [654] = {.count = 1}, SHIFT(218, 0),
    [656] = {.count = 1}, SHIFT(219, 0),
    [658] = {.count = 1}, SHIFT(220, 0),
    [660] = {.count = 1}, SHIFT(221, 0),
    [662] = {.count = 1}, SHIFT(222, 0),
    [664] = {.count = 1}, SHIFT(223, 0),
    [666] = {.count = 1}, SHIFT(224, 0),
    [668] = {.count = 1}, SHIFT(225, 0),
    [670] = {.count = 1}, SHIFT(209, 0),
    [672] = {.count = 1}, SHIFT(205, 0),
    [674] = {.count = 1}, SHIFT(202, 0),
    [676] = {.count = 1}, SHIFT(203, 0),
    [678] = {.count = 1}, SHIFT(200, 0),
    [680] = {.count = 1}, SHIFT(198, 0),
    [682] = {.count = 1}, SHIFT(199, 0),
    [684] = {.count = 1}, SHIFT(201, 0),
    [686] = {.count = 1}, SHIFT(204, 0),
    [688] = {.count = 1}, SHIFT(206, 0),
    [690] = {.count = 1}, SHIFT(207, 0),
    [692] = {.count = 1}, SHIFT(208, 0),
    [694] = {.count = 1}, SHIFT(210, 0),
    [696] = {.count = 1}, SHIFT(211, 0),
    [698] = {.count = 1}, SHIFT(212, 0),
    [700] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [702] = {.count = 1}, SHIFT(417, 0),
    [704] = {.count = 1}, SHIFT(418, 0),
    [706] = {.count = 1}, SHIFT(226, 0),
    [708] = {.count = 1}, SHIFT(227, 0),
    [710] = {.count = 1}, SHIFT(415, 0),
    [712] = {.count = 1}, SHIFT(321, 0),
    [714] = {.count = 1}, SHIFT(322, 0),
    [716] = {.count = 1}, SHIFT(323, 0),
    [718] = {.count = 1}, SHIFT(324, 0),
    [720] = {.count = 1}, SHIFT(325, 0),
    [722] = {.count = 1}, SHIFT(326, 0),
    [724] = {.count = 1}, SHIFT(327, 0),
    [726] = {.count = 1}, SHIFT(328, 0),
    [728] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [730] = {.count = 1}, SHIFT(329, 0),
    [732] = {.count = 1}, SHIFT(330, 0),
    [734] = {.count = 1}, SHIFT(331, 0),
    [736] = {.count = 1}, SHIFT(332, 0),
    [738] = {.count = 1}, SHIFT(320, 0),
    [740] = {.count = 1}, SHIFT(312, 0),
    [742] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [744] = {.count = 1}, SHIFT(231, 0),
    [746] = {.count = 1}, SHIFT(232, 0),
    [748] = {.count = 1}, SHIFT(233, 0),
    [750] = {.count = 1}, SHIFT(234, 0),
    [752] = {.count = 1}, SHIFT(235, 0),
    [754] = {.count = 1}, SHIFT(236, 0),
    [756] = {.count = 1}, SHIFT(237, 0),
    [758] = {.count = 1}, SHIFT(238, 0),
    [760] = {.count = 1}, SHIFT(228, 0),
    [762] = {.count = 1}, SHIFT(229, 0),
    [764] = {.count = 1}, SHIFT(230, 0),
    [766] = {.count = 1}, REDUCE(sym_return_statement, 2, 0),
    [768] = {.count = 1}, SHIFT(239, 0),
    [770] = {.count = 1}, SHIFT(240, 0),
    [772] = {.count = 1}, SHIFT(252, 0),
    [774] = {.count = 1}, SHIFT(253, 0),
    [776] = {.count = 1}, SHIFT(254, 0),
    [778] = {.count = 1}, SHIFT(255, 0),
    [780] = {.count = 1}, SHIFT(256, 0),
    [782] = {.count = 1}, SHIFT(257, 0),
    [784] = {.count = 1}, SHIFT(258, 0),
    [786] = {.count = 1}, SHIFT(259, 0),
    [788] = {.count = 1}, SHIFT(260, 0),
    [790] = {.count = 1}, SHIFT(244, 0),
    [792] = {.count = 1}, SHIFT(241, 0),
    [794] = {.count = 1}, SHIFT(242, 0),
    [796] = {.count = 1}, SHIFT(243, 0),
    [798] = {.count = 1}, SHIFT(245, 0),
    [800] = {.count = 1}, SHIFT(246, 0),
    [802] = {.count = 1}, SHIFT(247, 0),
    [804] = {.count = 1}, SHIFT(251, 0),
    [806] = {.count = 1}, SHIFT(248, 0),
    [808] = {.count = 1}, SHIFT(249, 0),
    [810] = {.count = 1}, SHIFT(250, 0),
    [812] = {.count = 1}, REDUCE(sym_block, 3, 0),
    [814] = {.count = 1}, REDUCE(sym_func_literal, 4, 0),
    [816] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [818] = {.count = 1}, SHIFT(269, 0),
    [820] = {.count = 1}, SHIFT(270, 0),
    [822] = {.count = 1}, SHIFT(271, 0),
    [824] = {.count = 1}, SHIFT(272, 0),
    [826] = {.count = 1}, SHIFT(273, 0),
    [828] = {.count = 1}, SHIFT(274, 0),
    [830] = {.count = 1}, SHIFT(275, 0),
    [832] = {.count = 1}, SHIFT(276, 0),
    [834] = {.count = 1}, SHIFT(277, 0),
    [836] = {.count = 1}, SHIFT(268, 0),
    [838] = {.count = 1}, SHIFT(266, 0),
    [840] = {.count = 1}, SHIFT(265, 0),
    [842] = {.count = 1}, SHIFT(264, 0),
    [844] = {.count = 1}, SHIFT(263, 0),
    [846] = {.count = 1}, SHIFT(262, 0),
    [848] = {.count = 1}, SHIFT(261, 0),
    [850] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [852] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [854] = {.count = 1}, SHIFT(267, 0),
    [856] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [858] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [860] = {.count = 1}, REDUCE(sym_selector_expression, 3, 0),
    [862] = {.count = 1}, SHIFT(311, 0),
    [864] = {.count = 1}, SHIFT(278, 0),
    [866] = {.count = 1}, SHIFT(279, 0),
    [868] = {.count = 1}, SHIFT(291, 0),
    [870] = {.count = 1}, SHIFT(292, 0),
    [872] = {.count = 1}, SHIFT(293, 0),
    [874] = {.count = 1}, SHIFT(294, 0),
    [876] = {.count = 1}, SHIFT(295, 0),
    [878] = {.count = 1}, SHIFT(296, 0),
    [880] = {.count = 1}, SHIFT(297, 0),
    [882] = {.count = 1}, SHIFT(298, 0),
    [884] = {.count = 1}, SHIFT(299, 0),
    [886] = {.count = 1}, REDUCE(sym_call_expression, 3, 0),
    [888] = {.count = 1}, SHIFT(283, 0),
    [890] = {.count = 1}, SHIFT(280, 0),
    [892] = {.count = 1}, SHIFT(281, 0),
    [894] = {.count = 1}, SHIFT(282, 0),
    [896] = {.count = 1}, SHIFT(284, 0),
    [898] = {.count = 1}, SHIFT(285, 0),
    [900] = {.count = 1}, SHIFT(286, 0),
    [902] = {.count = 1}, SHIFT(290, 0),
    [904] = {.count = 1}, SHIFT(287, 0),
    [906] = {.count = 1}, SHIFT(288, 0),
    [908] = {.count = 1}, SHIFT(289, 0),
    [910] = {.count = 1}, SHIFT(308, 0),
    [912] = {.count = 1}, SHIFT(309, 0),
    [914] = {.count = 1}, SHIFT(307, 0),
    [916] = {.count = 1}, SHIFT(305, 0),
    [918] = {.count = 1}, SHIFT(304, 0),
    [920] = {.count = 1}, SHIFT(303, 0),
    [922] = {.count = 1}, SHIFT(302, 0),
    [924] = {.count = 1}, SHIFT(301, 0),
    [926] = {.count = 1}, SHIFT(300, 0),
    [928] = {.count = 1}, SHIFT(306, 0),
    [930] = {.count = 1}, SHIFT(310, 0),
    [932] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [934] = {.count = 1}, SHIFT(313, 0),
    [936] = {.count = 1}, SHIFT(314, 0),
    [938] = {.count = 1}, SHIFT(315, 0),
    [940] = {.count = 1}, SHIFT(319, 0),
    [942] = {.count = 1}, SHIFT(316, 0),
    [944] = {.count = 1}, SHIFT(317, 0),
    [946] = {.count = 1}, SHIFT(318, 0),
    [948] = {.count = 1}, SHIFT(412, 0),
    [950] = {.count = 1}, SHIFT(413, 0),
    [952] = {.count = 1}, SHIFT(411, 0),
    [954] = {.count = 1}, SHIFT(374, 0),
    [956] = {.count = 1}, SHIFT(375, 0),
    [958] = {.count = 1}, SHIFT(376, 0),
    [960] = {.count = 1}, SHIFT(377, 0),
    [962] = {.count = 1}, SHIFT(378, 0),
    [964] = {.count = 1}, SHIFT(379, 0),
    [966] = {.count = 1}, SHIFT(380, 0),
    [968] = {.count = 1}, SHIFT(337, 0),
    [970] = {.count = 1}, SHIFT(338, 0),
    [972] = {.count = 1}, SHIFT(339, 0),
    [974] = {.count = 1}, SHIFT(340, 0),
    [976] = {.count = 1}, SHIFT(341, 0),
    [978] = {.count = 1}, SHIFT(342, 0),
    [980] = {.count = 1}, SHIFT(343, 0),
    [982] = {.count = 1}, SHIFT(344, 0),
    [984] = {.count = 1}, REDUCE(sym_inc_statement, 2, 0),
    [986] = {.count = 1}, REDUCE(sym_dec_statement, 2, 0),
    [988] = {.count = 1}, SHIFT(336, 0),
    [990] = {.count = 1}, SHIFT(335, 0),
    [992] = {.count = 1}, SHIFT(334, 0),
    [994] = {.count = 1}, SHIFT(333, 0),
    [996] = {.count = 1}, SHIFT(345, 0),
    [998] = {.count = 1}, SHIFT(346, 0),
    [1000] = {.count = 1}, REDUCE(sym_send_statement, 3, 0),
    [1002] = {.count = 1}, SHIFT(358, 0),
    [1004] = {.count = 1}, SHIFT(359, 0),
    [1006] = {.count = 1}, SHIFT(360, 0),
    [1008] = {.count = 1}, SHIFT(361, 0),
    [1010] = {.count = 1}, SHIFT(362, 0),
    [1012] = {.count = 1}, SHIFT(363, 0),
    [1014] = {.count = 1}, SHIFT(364, 0),
    [1016] = {.count = 1}, SHIFT(350, 0),
    [1018] = {.count = 1}, SHIFT(347, 0),
    [1020] = {.count = 1}, SHIFT(348, 0),
    [1022] = {.count = 1}, SHIFT(349, 0),
    [1024] = {.count = 1}, SHIFT(351, 0),
    [1026] = {.count = 1}, SHIFT(352, 0),
    [1028] = {.count = 1}, SHIFT(353, 0),
    [1030] = {.count = 1}, SHIFT(357, 0),
    [1032] = {.count = 1}, SHIFT(354, 0),
    [1034] = {.count = 1}, SHIFT(355, 0),
    [1036] = {.count = 1}, SHIFT(356, 0),
    [1038] = {.count = 1}, SHIFT(371, 0),
    [1040] = {.count = 1}, SHIFT(372, 0),
    [1042] = {.count = 1}, SHIFT(370, 0),
    [1044] = {.count = 1}, SHIFT(369, 0),
    [1046] = {.count = 1}, SHIFT(368, 0),
    [1048] = {.count = 1}, SHIFT(367, 0),
    [1050] = {.count = 1}, SHIFT(366, 0),
    [1052] = {.count = 1}, SHIFT(365, 0),
    [1054] = {.count = 1}, SHIFT(373, 0),
    [1056] = {.count = 1}, SHIFT(381, 0),
    [1058] = {.count = 1}, SHIFT(382, 0),
    [1060] = {.count = 1}, SHIFT(394, 0),
    [1062] = {.count = 1}, SHIFT(395, 0),
    [1064] = {.count = 1}, SHIFT(396, 0),
    [1066] = {.count = 1}, SHIFT(397, 0),
    [1068] = {.count = 1}, SHIFT(398, 0),
    [1070] = {.count = 1}, SHIFT(399, 0),
    [1072] = {.count = 1}, SHIFT(400, 0),
    [1074] = {.count = 1}, SHIFT(401, 0),
    [1076] = {.count = 1}, SHIFT(386, 0),
    [1078] = {.count = 1}, SHIFT(383, 0),
    [1080] = {.count = 1}, SHIFT(384, 0),
    [1082] = {.count = 1}, SHIFT(385, 0),
    [1084] = {.count = 1}, SHIFT(387, 0),
    [1086] = {.count = 1}, SHIFT(388, 0),
    [1088] = {.count = 1}, SHIFT(389, 0),
    [1090] = {.count = 1}, SHIFT(393, 0),
    [1092] = {.count = 1}, SHIFT(390, 0),
    [1094] = {.count = 1}, SHIFT(391, 0),
    [1096] = {.count = 1}, SHIFT(392, 0),
    [1098] = {.count = 1}, SHIFT(408, 0),
    [1100] = {.count = 1}, SHIFT(409, 0),
    [1102] = {.count = 1}, SHIFT(407, 0),
    [1104] = {.count = 1}, SHIFT(406, 0),
    [1106] = {.count = 1}, SHIFT(405, 0),
    [1108] = {.count = 1}, SHIFT(404, 0),
    [1110] = {.count = 1}, SHIFT(403, 0),
    [1112] = {.count = 1}, SHIFT(402, 0),
    [1114] = {.count = 1}, SHIFT(410, 0),
    [1116] = {.count = 1}, SHIFT(414, 0),
    [1118] = {.count = 1}, SHIFT(416, 0),
    [1120] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 2, 0),
    [1122] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 3, 0),
    [1124] = {.count = 1}, SHIFT(420, 0),
    [1126] = {.count = 1}, SHIFT(419, 0),
    [1128] = {.count = 1}, REDUCE(sym_short_var_declaration, 3, 0),
    [1130] = {.count = 1}, REDUCE(sym_assignment_statement, 3, 0),
    [1132] = {.count = 1}, SHIFT(422, 0),
    [1134] = {.count = 1}, SHIFT(423, 0),
    [1136] = {.count = 1}, SHIFT(424, 0),
    [1138] = {.count = 1}, SHIFT(431, 0),
    [1140] = {.count = 1}, SHIFT(427, 0),
    [1142] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [1144] = {.count = 1}, SHIFT(443, 0),
    [1146] = {.count = 1}, SHIFT(444, 0),
    [1148] = {.count = 1}, SHIFT(442, 0),
    [1150] = {.count = 1}, SHIFT(440, 0),
    [1152] = {.count = 1}, SHIFT(441, 0),
    [1154] = {.count = 1}, SHIFT(439, 0),
    [1156] = {.count = 1}, SHIFT(438, 0),
    [1158] = {.count = 1}, SHIFT(437, 0),
    [1160] = {.count = 1}, SHIFT(436, 0),
    [1162] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [1164] = {.count = 1}, SHIFT(445, 0),
    [1166] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [1168] = {.count = 1}, SHIFT(448, 0),
    [1170] = {.count = 1}, REDUCE(sym_function_type, 2, 0),
    [1172] = {.count = 1}, REDUCE(sym_function_type, 3, 0),
    [1174] = {.count = 1}, SHIFT(451, 0),
    [1176] = {.count = 1}, SHIFT(454, 0),
    [1178] = {.count = 1}, REDUCE(sym__element_list, 2, 0),
    [1180] = {.count = 1}, REDUCE(sym__element_list, 3, 0),
    [1182] = {.count = 1}, SHIFT(457, 0),
    [1184] = {.count = 1}, SHIFT(458, 0),
    [1186] = {.count = 1}, SHIFT(459, 0),
    [1188] = {.count = 1}, SHIFT(460, 0),
    [1190] = {.count = 1}, SHIFT(461, 0),
    [1192] = {.count = 1}, SHIFT(462, 0),
    [1194] = {.count = 1}, SHIFT(463, 0),
    [1196] = {.count = 1}, SHIFT(464, 0),
    [1198] = {.count = 1}, SHIFT(465, 0),
    [1200] = {.count = 1}, SHIFT(466, 0),
    [1202] = {.count = 1}, SHIFT(467, 0),
    [1204] = {.count = 1}, SHIFT(482, 0),
    [1206] = {.count = 1}, SHIFT(483, 0),
    [1208] = {.count = 1}, REDUCE(sym_element, 3, 0),
    [1210] = {.count = 1}, SHIFT(484, 0),
    [1212] = {.count = 1}, SHIFT(485, 0),
    [1214] = {.count = 1}, SHIFT(486, 0),
    [1216] = {.count = 1}, SHIFT(487, 0),
    [1218] = {.count = 1}, SHIFT(488, 0),
    [1220] = {.count = 1}, SHIFT(474, 0),
    [1222] = {.count = 1}, SHIFT(471, 0),
    [1224] = {.count = 1}, SHIFT(472, 0),
    [1226] = {.count = 1}, SHIFT(468, 0),
    [1228] = {.count = 1}, SHIFT(469, 0),
    [1230] = {.count = 1}, SHIFT(470, 0),
    [1232] = {.count = 1}, SHIFT(473, 0),
    [1234] = {.count = 1}, SHIFT(475, 0),
    [1236] = {.count = 1}, SHIFT(476, 0),
    [1238] = {.count = 1}, SHIFT(477, 0),
    [1240] = {.count = 1}, SHIFT(481, 0),
    [1242] = {.count = 1}, SHIFT(478, 0),
    [1244] = {.count = 1}, SHIFT(479, 0),
    [1246] = {.count = 1}, SHIFT(480, 0),
    [1248] = {.count = 1}, SHIFT(495, 0),
    [1250] = {.count = 1}, SHIFT(496, 0),
    [1252] = {.count = 1}, SHIFT(494, 0),
    [1254] = {.count = 1}, SHIFT(493, 0),
    [1256] = {.count = 1}, SHIFT(492, 0),
    [1258] = {.count = 1}, SHIFT(491, 0),
    [1260] = {.count = 1}, SHIFT(490, 0),
    [1262] = {.count = 1}, SHIFT(489, 0),
    [1264] = {.count = 1}, SHIFT(497, 0),
    [1266] = {.count = 1}, SHIFT(511, 0),
    [1268] = {.count = 1}, SHIFT(512, 0),
    [1270] = {.count = 1}, SHIFT(510, 0),
    [1272] = {.count = 1}, SHIFT(509, 0),
    [1274] = {.count = 1}, SHIFT(508, 0),
    [1276] = {.count = 1}, SHIFT(507, 0),
    [1278] = {.count = 1}, SHIFT(506, 0),
    [1280] = {.count = 1}, SHIFT(505, 0),
    [1282] = {.count = 1}, SHIFT(513, 0),
    [1284] = {.count = 1}, SHIFT(515, 0),
    [1286] = {.count = 1}, SHIFT(516, 0),
    [1288] = {.count = 1}, SHIFT(517, 0),
    [1290] = {.count = 1}, SHIFT(518, 0),
    [1292] = {.count = 1}, SHIFT(519, 0),
    [1294] = {.count = 1}, SHIFT(520, 0),
    [1296] = {.count = 1}, SHIFT(521, 0),
    [1298] = {.count = 1}, SHIFT(522, 0),
    [1300] = {.count = 1}, SHIFT(523, 0),
    [1302] = {.count = 1}, SHIFT(524, 0),
    [1304] = {.count = 1}, SHIFT(525, 0),
    [1306] = {.count = 1}, SHIFT(543, 0),
    [1308] = {.count = 1}, SHIFT(544, 0),
    [1310] = {.count = 1}, SHIFT(542, 0),
    [1312] = {.count = 1}, SHIFT(537, 0),
    [1314] = {.count = 1}, SHIFT(533, 0),
    [1316] = {.count = 1}, SHIFT(530, 0),
    [1318] = {.count = 1}, SHIFT(531, 0),
    [1320] = {.count = 1}, SHIFT(528, 0),
    [1322] = {.count = 1}, SHIFT(526, 0),
    [1324] = {.count = 1}, SHIFT(527, 0),
    [1326] = {.count = 1}, SHIFT(529, 0),
    [1328] = {.count = 1}, SHIFT(532, 0),
    [1330] = {.count = 1}, SHIFT(534, 0),
    [1332] = {.count = 1}, SHIFT(535, 0),
    [1334] = {.count = 1}, SHIFT(536, 0),
    [1336] = {.count = 1}, SHIFT(540, 0),
    [1338] = {.count = 1}, SHIFT(539, 0),
    [1340] = {.count = 1}, SHIFT(541, 0),
    [1342] = {.count = 1}, SHIFT(548, 0),
    [1344] = {.count = 1}, SHIFT(549, 0),
    [1346] = {.count = 1}, SHIFT(545, 0),
    [1348] = {.count = 1}, SHIFT(546, 0),
    [1350] = {.count = 1}, SHIFT(547, 0),
    [1352] = {.count = 1}, SHIFT(550, 0),
    [1354] = {.count = 1}, SHIFT(551, 0),
    [1356] = {.count = 1}, SHIFT(552, 0),
    [1358] = {.count = 1}, SHIFT(554, 0),
    [1360] = {.count = 1}, SHIFT(555, 0),
    [1362] = {.count = 1}, SHIFT(556, 0),
    [1364] = {.count = 1}, SHIFT(559, 0),
    [1366] = {.count = 1}, SHIFT(560, 0),
    [1368] = {.count = 1}, SHIFT(561, 0),
    [1370] = {.count = 1}, SHIFT(565, 0),
    [1372] = {.count = 1}, SHIFT(562, 0),
    [1374] = {.count = 1}, SHIFT(563, 0),
    [1376] = {.count = 1}, SHIFT(564, 0),
    [1378] = {.count = 1}, SHIFT(567, 0),
    [1380] = {.count = 1}, SHIFT(574, 0),
    [1382] = {.count = 1}, SHIFT(575, 0),
    [1384] = {.count = 1}, SHIFT(571, 0),
    [1386] = {.count = 1}, SHIFT(572, 0),
    [1388] = {.count = 1}, SHIFT(573, 0),
    [1390] = {.count = 1}, SHIFT(576, 0),
    [1392] = {.count = 1}, SHIFT(577, 0),
    [1394] = {.count = 1}, SHIFT(578, 0),
    [1396] = {.count = 1}, SHIFT(582, 0),
    [1398] = {.count = 1}, SHIFT(581, 0),
    [1400] = {.count = 1}, SHIFT(583, 0),
    [1402] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [1404] = {.count = 1}, SHIFT(591, 0),
    [1406] = {.count = 1}, SHIFT(592, 0),
    [1408] = {.count = 1}, SHIFT(588, 0),
    [1410] = {.count = 1}, SHIFT(589, 0),
    [1412] = {.count = 1}, SHIFT(590, 0),
    [1414] = {.count = 1}, SHIFT(593, 0),
    [1416] = {.count = 1}, SHIFT(594, 0),
    [1418] = {.count = 1}, SHIFT(595, 0),
    [1420] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [1422] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [1424] = {.count = 1}, SHIFT(600, 0),
    [1426] = {.count = 1}, SHIFT(601, 0),
    [1428] = {.count = 1}, SHIFT(602, 0),
    [1430] = {.count = 1}, SHIFT(605, 0),
    [1432] = {.count = 1}, SHIFT(606, 0),
    [1434] = {.count = 1}, SHIFT(607, 0),
    [1436] = {.count = 1}, SHIFT(611, 0),
    [1438] = {.count = 1}, SHIFT(610, 0),
    [1440] = {.count = 1}, SHIFT(612, 0),
    [1442] = {.count = 1}, SHIFT(619, 0),
    [1444] = {.count = 1}, SHIFT(620, 0),
    [1446] = {.count = 1}, SHIFT(616, 0),
    [1448] = {.count = 1}, SHIFT(617, 0),
    [1450] = {.count = 1}, SHIFT(618, 0),
    [1452] = {.count = 1}, SHIFT(621, 0),
    [1454] = {.count = 1}, SHIFT(622, 0),
    [1456] = {.count = 1}, SHIFT(623, 0),
    [1458] = {.count = 1}, SHIFT(625, 0),
    [1460] = {.count = 1}, SHIFT(627, 0),
    [1462] = {.count = 1}, SHIFT(628, 0),
    [1464] = {.count = 1}, SHIFT(629, 0),
    [1466] = {.count = 1}, SHIFT(631, 0),
    [1468] = {.count = 1}, SHIFT(632, 0),
    [1470] = {.count = 1}, SHIFT(633, 0),
    [1472] = {.count = 1}, SHIFT(637, 0),
    [1474] = {.count = 1}, SHIFT(636, 0),
    [1476] = {.count = 1}, SHIFT(638, 0),
    [1478] = {.count = 1}, SHIFT(641, 0),
    [1480] = {.count = 1}, SHIFT(646, 0),
    [1482] = {.count = 1}, SHIFT(645, 0),
    [1484] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [1486] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [1488] = {.count = 1}, SHIFT(647, 0),
    [1490] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [1492] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [1494] = {.count = 1}, SHIFT(707, 0),
    [1496] = {.count = 1}, SHIFT(704, 0),
    [1498] = {.count = 1}, SHIFT(705, 0),
    [1500] = {.count = 1}, SHIFT(651, 0),
    [1502] = {.count = 1}, SHIFT(652, 0),
    [1504] = {.count = 1}, SHIFT(656, 0),
    [1506] = {.count = 1}, SHIFT(657, 0),
    [1508] = {.count = 1}, SHIFT(658, 0),
    [1510] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [1512] = {.count = 1}, SHIFT(659, 0),
    [1514] = {.count = 1}, SHIFT(660, 0),
    [1516] = {.count = 1}, SHIFT(661, 0),
    [1518] = {.count = 1}, SHIFT(662, 0),
    [1520] = {.count = 1}, SHIFT(663, 0),
    [1522] = {.count = 1}, SHIFT(664, 0),
    [1524] = {.count = 1}, SHIFT(665, 0),
    [1526] = {.count = 1}, SHIFT(666, 0),
    [1528] = {.count = 1}, SHIFT(667, 0),
    [1530] = {.count = 1}, SHIFT(668, 0),
    [1532] = {.count = 1}, SHIFT(669, 0),
    [1534] = {.count = 1}, SHIFT(653, 0),
    [1536] = {.count = 1}, SHIFT(654, 0),
    [1538] = {.count = 1}, SHIFT(655, 0),
    [1540] = {.count = 1}, SHIFT(703, 0),
    [1542] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [1544] = {.count = 1}, SHIFT(700, 0),
    [1546] = {.count = 1}, SHIFT(701, 0),
    [1548] = {.count = 1}, SHIFT(698, 0),
    [1550] = {.count = 1}, SHIFT(697, 0),
    [1552] = {.count = 1}, SHIFT(692, 0),
    [1554] = {.count = 1}, SHIFT(693, 0),
    [1556] = {.count = 1}, SHIFT(688, 0),
    [1558] = {.count = 1}, SHIFT(685, 0),
    [1560] = {.count = 1}, SHIFT(686, 0),
    [1562] = {.count = 1}, SHIFT(681, 0),
    [1564] = {.count = 1}, SHIFT(677, 0),
    [1566] = {.count = 1}, SHIFT(674, 0),
    [1568] = {.count = 1}, SHIFT(675, 0),
    [1570] = {.count = 1}, SHIFT(672, 0),
    [1572] = {.count = 1}, SHIFT(670, 0),
    [1574] = {.count = 1}, SHIFT(671, 0),
    [1576] = {.count = 1}, SHIFT(673, 0),
    [1578] = {.count = 1}, SHIFT(676, 0),
    [1580] = {.count = 1}, SHIFT(678, 0),
    [1582] = {.count = 1}, SHIFT(679, 0),
    [1584] = {.count = 1}, SHIFT(680, 0),
    [1586] = {.count = 1}, SHIFT(682, 0),
    [1588] = {.count = 1}, SHIFT(683, 0),
    [1590] = {.count = 1}, SHIFT(684, 0),
    [1592] = {.count = 1}, SHIFT(687, 0),
    [1594] = {.count = 1}, SHIFT(689, 0),
    [1596] = {.count = 1}, SHIFT(690, 0),
    [1598] = {.count = 1}, SHIFT(691, 0),
    [1600] = {.count = 1}, SHIFT(695, 0),
    [1602] = {.count = 1}, SHIFT(694, 0),
    [1604] = {.count = 1}, SHIFT(696, 0),
    [1606] = {.count = 1}, SHIFT(699, 0),
    [1608] = {.count = 1}, SHIFT(702, 0),
    [1610] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [1612] = {.count = 1}, SHIFT(706, 0),
    [1614] = {.count = 1}, SHIFT(708, 0),
    [1616] = {.count = 1}, SHIFT(709, 0),
    [1618] = {.count = 1}, SHIFT(710, 0),
    [1620] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1622] = {.count = 1}, SHIFT(711, 0),
    [1624] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1626] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1628] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [1630] = {.count = 1}, SHIFT(726, 0),
    [1632] = {.count = 1}, SHIFT(727, 0),
    [1634] = {.count = 1}, SHIFT(728, 0),
    [1636] = {.count = 1}, SHIFT(729, 0),
    [1638] = {.count = 1}, SHIFT(730, 0),
    [1640] = {.count = 1}, SHIFT(731, 0),
    [1642] = {.count = 1}, SHIFT(732, 0),
    [1644] = {.count = 1}, SHIFT(733, 0),
    [1646] = {.count = 1}, SHIFT(734, 0),
    [1648] = {.count = 1}, SHIFT(735, 0),
    [1650] = {.count = 1}, SHIFT(736, 0),
    [1652] = {.count = 1}, SHIFT(737, 0),
    [1654] = {.count = 1}, SHIFT(720, 0),
    [1656] = {.count = 1}, SHIFT(721, 0),
    [1658] = {.count = 1}, SHIFT(722, 0),
    [1660] = {.count = 1}, SHIFT(716, 0),
    [1662] = {.count = 1}, SHIFT(717, 0),
    [1664] = {.count = 1}, SHIFT(718, 0),
    [1666] = {.count = 1}, SHIFT(719, 0),
    [1668] = {.count = 1}, SHIFT(724, 0),
    [1670] = {.count = 1}, SHIFT(723, 0),
    [1672] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [1674] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [1676] = {.count = 1}, SHIFT(725, 0),
    [1678] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [1680] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [1682] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [1684] = {.count = 1}, SHIFT(774, 0),
    [1686] = {.count = 1}, SHIFT(773, 0),
    [1688] = {.count = 1}, SHIFT(763, 0),
    [1690] = {.count = 1}, SHIFT(764, 0),
    [1692] = {.count = 1}, SHIFT(762, 0),
    [1694] = {.count = 1}, SHIFT(757, 0),
    [1696] = {.count = 1}, SHIFT(758, 0),
    [1698] = {.count = 1}, SHIFT(753, 0),
    [1700] = {.count = 1}, SHIFT(749, 0),
    [1702] = {.count = 1}, SHIFT(745, 0),
    [1704] = {.count = 1}, SHIFT(742, 0),
    [1706] = {.count = 1}, SHIFT(743, 0),
    [1708] = {.count = 1}, SHIFT(740, 0),
    [1710] = {.count = 1}, SHIFT(738, 0),
    [1712] = {.count = 1}, SHIFT(739, 0),
    [1714] = {.count = 1}, SHIFT(741, 0),
    [1716] = {.count = 1}, SHIFT(744, 0),
    [1718] = {.count = 1}, SHIFT(746, 0),
    [1720] = {.count = 1}, SHIFT(747, 0),
    [1722] = {.count = 1}, SHIFT(748, 0),
    [1724] = {.count = 1}, SHIFT(750, 0),
    [1726] = {.count = 1}, SHIFT(751, 0),
    [1728] = {.count = 1}, SHIFT(752, 0),
    [1730] = {.count = 1}, SHIFT(754, 0),
    [1732] = {.count = 1}, SHIFT(755, 0),
    [1734] = {.count = 1}, SHIFT(756, 0),
    [1736] = {.count = 1}, SHIFT(760, 0),
    [1738] = {.count = 1}, SHIFT(759, 0),
    [1740] = {.count = 1}, SHIFT(761, 0),
    [1742] = {.count = 1}, SHIFT(768, 0),
    [1744] = {.count = 1}, SHIFT(769, 0),
    [1746] = {.count = 1}, SHIFT(765, 0),
    [1748] = {.count = 1}, SHIFT(766, 0),
    [1750] = {.count = 1}, SHIFT(767, 0),
    [1752] = {.count = 1}, SHIFT(770, 0),
    [1754] = {.count = 1}, SHIFT(771, 0),
    [1756] = {.count = 1}, SHIFT(772, 0),
    [1758] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [1760] = {.count = 1}, SHIFT(775, 0),
    [1762] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [1764] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [1766] = {.count = 1}, SHIFT(785, 0),
    [1768] = {.count = 1}, SHIFT(786, 0),
    [1770] = {.count = 1}, SHIFT(787, 0),
    [1772] = {.count = 1}, SHIFT(788, 0),
    [1774] = {.count = 1}, SHIFT(789, 0),
    [1776] = {.count = 1}, SHIFT(790, 0),
    [1778] = {.count = 1}, SHIFT(791, 0),
    [1780] = {.count = 1}, SHIFT(792, 0),
    [1782] = {.count = 1}, SHIFT(793, 0),
    [1784] = {.count = 1}, SHIFT(794, 0),
    [1786] = {.count = 1}, SHIFT(795, 0),
    [1788] = {.count = 1}, SHIFT(796, 0),
    [1790] = {.count = 1}, SHIFT(779, 0),
    [1792] = {.count = 1}, SHIFT(780, 0),
    [1794] = {.count = 1}, SHIFT(781, 0),
    [1796] = {.count = 1}, SHIFT(783, 0),
    [1798] = {.count = 1}, SHIFT(782, 0),
    [1800] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [1802] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [1804] = {.count = 1}, SHIFT(784, 0),
    [1806] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1808] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1810] = {.count = 1}, SHIFT(833, 0),
    [1812] = {.count = 1}, SHIFT(832, 0),
    [1814] = {.count = 1}, SHIFT(822, 0),
    [1816] = {.count = 1}, SHIFT(823, 0),
    [1818] = {.count = 1}, SHIFT(821, 0),
    [1820] = {.count = 1}, SHIFT(816, 0),
    [1822] = {.count = 1}, SHIFT(817, 0),
    [1824] = {.count = 1}, SHIFT(812, 0),
    [1826] = {.count = 1}, SHIFT(808, 0),
    [1828] = {.count = 1}, SHIFT(804, 0),
    [1830] = {.count = 1}, SHIFT(801, 0),
    [1832] = {.count = 1}, SHIFT(802, 0),
    [1834] = {.count = 1}, SHIFT(799, 0),
    [1836] = {.count = 1}, SHIFT(797, 0),
    [1838] = {.count = 1}, SHIFT(798, 0),
    [1840] = {.count = 1}, SHIFT(800, 0),
    [1842] = {.count = 1}, SHIFT(803, 0),
    [1844] = {.count = 1}, SHIFT(805, 0),
    [1846] = {.count = 1}, SHIFT(806, 0),
    [1848] = {.count = 1}, SHIFT(807, 0),
    [1850] = {.count = 1}, SHIFT(809, 0),
    [1852] = {.count = 1}, SHIFT(810, 0),
    [1854] = {.count = 1}, SHIFT(811, 0),
    [1856] = {.count = 1}, SHIFT(813, 0),
    [1858] = {.count = 1}, SHIFT(814, 0),
    [1860] = {.count = 1}, SHIFT(815, 0),
    [1862] = {.count = 1}, SHIFT(819, 0),
    [1864] = {.count = 1}, SHIFT(818, 0),
    [1866] = {.count = 1}, SHIFT(820, 0),
    [1868] = {.count = 1}, SHIFT(827, 0),
    [1870] = {.count = 1}, SHIFT(828, 0),
    [1872] = {.count = 1}, SHIFT(824, 0),
    [1874] = {.count = 1}, SHIFT(825, 0),
    [1876] = {.count = 1}, SHIFT(826, 0),
    [1878] = {.count = 1}, SHIFT(829, 0),
    [1880] = {.count = 1}, SHIFT(830, 0),
    [1882] = {.count = 1}, SHIFT(831, 0),
    [1884] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1886] = {.count = 1}, SHIFT(834, 0),
    [1888] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1890] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1892] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1894] = {.count = 1}, SHIFT(841, 0),
    [1896] = {.count = 1}, SHIFT(842, 0),
    [1898] = {.count = 1}, SHIFT(843, 0),
    [1900] = {.count = 1}, SHIFT(844, 0),
    [1902] = {.count = 1}, SHIFT(845, 0),
    [1904] = {.count = 1}, SHIFT(840, 0),
    [1906] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1908] = {.count = 1}, SHIFT(848, 0),
    [1910] = {.count = 1}, SHIFT(847, 0),
    [1912] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1914] = {.count = 1}, SHIFT(846, 0),
    [1916] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1918] = {.count = 1}, SHIFT(849, 0),
    [1920] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1922] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1924] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1926] = {.count = 1}, SHIFT(852, 0),
    [1928] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1930] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 3, 0),
    [1932] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
