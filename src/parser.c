#include "tree_sitter/parser.h"

#define STATE_COUNT 634
#define SYMBOL_COUNT 107

enum {
    ts_sym_program = ts_builtin_sym_start,
    ts_sym_preproc_include,
    ts_sym_preproc_define,
    ts_sym_preproc_call,
    ts_sym_preproc_ifdef,
    ts_sym_preproc_ifndef,
    ts_sym_typedef,
    ts_sym_var_declaration,
    ts_sym_function_declaration,
    ts_sym_statement_block,
    ts_sym_statement,
    ts_sym_return_statement,
    ts_sym_expression_statement,
    ts_sym_if_statement,
    ts_sym_for_statement,
    ts_sym_while_statement,
    ts_sym_type,
    ts_sym_primitive_type,
    ts_sym_formal_parameters,
    ts_sym_type_expression,
    ts_sym_pointer_type,
    ts_sym_struct_declaration,
    ts_sym_struct_type,
    ts_sym_union_declaration,
    ts_sym_union_type,
    ts_sym_enum_declaration,
    ts_sym_enum_type,
    ts_sym_enum_value,
    ts_sym_field,
    ts_sym_var_assignment,
    ts_sym_expression,
    ts_sym_field_access,
    ts_sym_deref_field_access,
    ts_sym_function_call,
    ts_sym_math_op,
    ts_sym_bool_op,
    ts_sym_rel_op,
    ts_sym_assignment,
    ts_sym_compound_literal,
    ts_sym_struct_literal_field,
    ts_sym_preproc_else,
    ts_sym_preproc_endif,
    ts_sym_preproc_directive,
    ts_sym_number,
    ts_sym_char,
    ts_sym_string,
    ts_sym_system_lib_string,
    ts_sym_identifier,
    ts_sym_comment,
    ts_aux_sym_program_repeat0,
    ts_aux_sym_var_declaration_repeat0,
    ts_aux_sym_var_declaration_repeat1,
    ts_aux_sym_statement_block_repeat0,
    ts_aux_sym_primitive_type_repeat0,
    ts_aux_sym_formal_parameters_repeat0,
    ts_aux_sym_struct_type_repeat0,
    ts_aux_sym_union_type_repeat0,
    ts_aux_sym_enum_type_repeat0,
    ts_aux_sym_function_call_repeat0,
    ts_aux_sym_compound_literal_repeat0,
    ts_aux_sym_include,
    ts_aux_sym_define,
    ts_aux_sym_seq,
    ts_aux_sym_1,
    ts_aux_sym_ifdef,
    ts_aux_sym_ifndef,
    ts_aux_sym_typedef1,
    ts_aux_sym_2,
    ts_aux_sym_static,
    ts_aux_sym_extern,
    ts_aux_sym_3,
    ts_aux_sym_4,
    ts_aux_sym_5,
    ts_aux_sym_6,
    ts_aux_sym_7,
    ts_aux_sym_return,
    ts_aux_sym_if,
    ts_aux_sym_else,
    ts_aux_sym_for,
    ts_aux_sym_while,
    ts_aux_sym_const,
    ts_aux_sym_unsigned,
    ts_aux_sym_short,
    ts_aux_sym_long,
    ts_aux_sym_8,
    ts_aux_sym_struct,
    ts_aux_sym_union,
    ts_aux_sym_enum,
    ts_aux_sym_9,
    ts_aux_sym_10,
    ts_aux_sym_11,
    ts_aux_sym_12,
    ts_aux_sym_13,
    ts_aux_sym_14,
    ts_aux_sym_15,
    ts_aux_sym_16,
    ts_aux_sym_17,
    ts_aux_sym_18,
    ts_aux_sym_19,
    ts_aux_sym_20,
    ts_aux_sym_21,
    ts_aux_sym_22,
    ts_aux_sym_23,
    ts_aux_sym_24,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_document] = "DOCUMENT",
    [ts_sym_program] = "program",
    [ts_sym_preproc_include] = "preproc_include",
    [ts_sym_preproc_define] = "preproc_define",
    [ts_sym_preproc_call] = "preproc_call",
    [ts_sym_preproc_ifdef] = "preproc_ifdef",
    [ts_sym_preproc_ifndef] = "preproc_ifndef",
    [ts_sym_typedef] = "typedef",
    [ts_sym_var_declaration] = "var_declaration",
    [ts_sym_function_declaration] = "function_declaration",
    [ts_sym_statement_block] = "statement_block",
    [ts_sym_statement] = "statement",
    [ts_sym_return_statement] = "return_statement",
    [ts_sym_expression_statement] = "expression_statement",
    [ts_sym_if_statement] = "if_statement",
    [ts_sym_for_statement] = "for_statement",
    [ts_sym_while_statement] = "while_statement",
    [ts_sym_type] = "type",
    [ts_sym_primitive_type] = "primitive_type",
    [ts_sym_formal_parameters] = "formal_parameters",
    [ts_sym_type_expression] = "type_expression",
    [ts_sym_pointer_type] = "pointer_type",
    [ts_sym_struct_declaration] = "struct_declaration",
    [ts_sym_struct_type] = "struct_type",
    [ts_sym_union_declaration] = "union_declaration",
    [ts_sym_union_type] = "union_type",
    [ts_sym_enum_declaration] = "enum_declaration",
    [ts_sym_enum_type] = "enum_type",
    [ts_sym_enum_value] = "enum_value",
    [ts_sym_field] = "field",
    [ts_sym_var_assignment] = "var_assignment",
    [ts_sym_expression] = "expression",
    [ts_sym_field_access] = "field_access",
    [ts_sym_deref_field_access] = "deref_field_access",
    [ts_sym_function_call] = "function_call",
    [ts_sym_math_op] = "math_op",
    [ts_sym_bool_op] = "bool_op",
    [ts_sym_rel_op] = "rel_op",
    [ts_sym_assignment] = "assignment",
    [ts_sym_compound_literal] = "compound_literal",
    [ts_sym_struct_literal_field] = "struct_literal_field",
    [ts_builtin_sym_error] = "error",
    [ts_builtin_sym_end] = "end",
    [ts_sym_preproc_else] = "preproc_else",
    [ts_sym_preproc_endif] = "preproc_endif",
    [ts_sym_preproc_directive] = "preproc_directive",
    [ts_sym_number] = "number",
    [ts_sym_char] = "char",
    [ts_sym_string] = "string",
    [ts_sym_system_lib_string] = "system_lib_string",
    [ts_sym_identifier] = "identifier",
    [ts_sym_comment] = "comment",
    [ts_aux_sym_program_repeat0] = "program_repeat0",
    [ts_aux_sym_var_declaration_repeat0] = "var_declaration_repeat0",
    [ts_aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [ts_aux_sym_statement_block_repeat0] = "statement_block_repeat0",
    [ts_aux_sym_primitive_type_repeat0] = "primitive_type_repeat0",
    [ts_aux_sym_formal_parameters_repeat0] = "formal_parameters_repeat0",
    [ts_aux_sym_struct_type_repeat0] = "struct_type_repeat0",
    [ts_aux_sym_union_type_repeat0] = "union_type_repeat0",
    [ts_aux_sym_enum_type_repeat0] = "enum_type_repeat0",
    [ts_aux_sym_function_call_repeat0] = "function_call_repeat0",
    [ts_aux_sym_compound_literal_repeat0] = "compound_literal_repeat0",
    [ts_aux_sym_include] = "'#include'",
    [ts_aux_sym_define] = "'#define'",
    [ts_aux_sym_seq] = "(seq /.+/ )",
    [ts_aux_sym_1] = "/.*/",
    [ts_aux_sym_ifdef] = "'#ifdef'",
    [ts_aux_sym_ifndef] = "'#ifndef'",
    [ts_aux_sym_typedef1] = "'typedef'",
    [ts_aux_sym_2] = "';'",
    [ts_aux_sym_static] = "'static'",
    [ts_aux_sym_extern] = "'extern'",
    [ts_aux_sym_3] = "','",
    [ts_aux_sym_4] = "'('",
    [ts_aux_sym_5] = "')'",
    [ts_aux_sym_6] = "'{'",
    [ts_aux_sym_7] = "'}'",
    [ts_aux_sym_return] = "'return'",
    [ts_aux_sym_if] = "'if'",
    [ts_aux_sym_else] = "'else'",
    [ts_aux_sym_for] = "'for'",
    [ts_aux_sym_while] = "'while'",
    [ts_aux_sym_const] = "'const'",
    [ts_aux_sym_unsigned] = "'unsigned'",
    [ts_aux_sym_short] = "'short'",
    [ts_aux_sym_long] = "'long'",
    [ts_aux_sym_8] = "'*'",
    [ts_aux_sym_struct] = "'struct'",
    [ts_aux_sym_union] = "'union'",
    [ts_aux_sym_enum] = "'enum'",
    [ts_aux_sym_9] = "'='",
    [ts_aux_sym_10] = "'.'",
    [ts_aux_sym_11] = "'->'",
    [ts_aux_sym_12] = "'++'",
    [ts_aux_sym_13] = "'-'",
    [ts_aux_sym_14] = "'/'",
    [ts_aux_sym_15] = "'+'",
    [ts_aux_sym_16] = "'!'",
    [ts_aux_sym_17] = "'&&'",
    [ts_aux_sym_18] = "'||'",
    [ts_aux_sym_19] = "'<'",
    [ts_aux_sym_20] = "'<='",
    [ts_aux_sym_21] = "'=='",
    [ts_aux_sym_22] = "'!='",
    [ts_aux_sym_23] = "'>='",
    [ts_aux_sym_24] = "'>'",
};

static const int ts_hidden_symbol_flags[SYMBOL_COUNT] = {
    [ts_aux_sym_program_repeat0] = 1,
    [ts_aux_sym_var_declaration_repeat0] = 1,
    [ts_aux_sym_var_declaration_repeat1] = 1,
    [ts_aux_sym_statement_block_repeat0] = 1,
    [ts_aux_sym_primitive_type_repeat0] = 1,
    [ts_aux_sym_formal_parameters_repeat0] = 1,
    [ts_aux_sym_struct_type_repeat0] = 1,
    [ts_aux_sym_union_type_repeat0] = 1,
    [ts_aux_sym_enum_type_repeat0] = 1,
    [ts_aux_sym_function_call_repeat0] = 1,
    [ts_aux_sym_compound_literal_repeat0] = 1,
    [ts_aux_sym_include] = 1,
    [ts_aux_sym_define] = 1,
    [ts_aux_sym_seq] = 1,
    [ts_aux_sym_1] = 1,
    [ts_aux_sym_ifdef] = 1,
    [ts_aux_sym_ifndef] = 1,
    [ts_aux_sym_typedef1] = 1,
    [ts_aux_sym_2] = 1,
    [ts_aux_sym_static] = 1,
    [ts_aux_sym_extern] = 1,
    [ts_aux_sym_3] = 1,
    [ts_aux_sym_4] = 1,
    [ts_aux_sym_5] = 1,
    [ts_aux_sym_6] = 1,
    [ts_aux_sym_7] = 1,
    [ts_aux_sym_return] = 1,
    [ts_aux_sym_if] = 1,
    [ts_aux_sym_else] = 1,
    [ts_aux_sym_for] = 1,
    [ts_aux_sym_while] = 1,
    [ts_aux_sym_const] = 1,
    [ts_aux_sym_unsigned] = 1,
    [ts_aux_sym_short] = 1,
    [ts_aux_sym_long] = 1,
    [ts_aux_sym_8] = 1,
    [ts_aux_sym_struct] = 1,
    [ts_aux_sym_union] = 1,
    [ts_aux_sym_enum] = 1,
    [ts_aux_sym_9] = 1,
    [ts_aux_sym_10] = 1,
    [ts_aux_sym_11] = 1,
    [ts_aux_sym_12] = 1,
    [ts_aux_sym_13] = 1,
    [ts_aux_sym_14] = 1,
    [ts_aux_sym_15] = 1,
    [ts_aux_sym_16] = 1,
    [ts_aux_sym_17] = 1,
    [ts_aux_sym_18] = 1,
    [ts_aux_sym_19] = 1,
    [ts_aux_sym_20] = 1,
    [ts_aux_sym_21] = 1,
    [ts_aux_sym_22] = 1,
    [ts_aux_sym_23] = 1,
    [ts_aux_sym_24] = 1,
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId lex_state) {
    START_LEXER();
    switch (lex_state) {
        case 1:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(1);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 't')
                ADVANCE(73);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            if (lookahead == 'd')
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(12);
            if (lookahead == 'i')
                ADVANCE(20);
            LEX_ERROR();
        case 4:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 6:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(8);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 8:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(9);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(10);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(11);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_define);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(13);
            if (lookahead == 'n')
                ADVANCE(16);
            LEX_ERROR();
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(14);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(15);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_sym_preproc_else);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(17);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(18);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(19);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_sym_preproc_endif);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(29);
            LEX_ERROR();
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'n')
                ADVANCE(25);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(24);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_ifdef);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(26);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(28);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_ifndef);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'c')
                ADVANCE(30);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(32);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(33);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(34);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_include);
        case 35:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            LEX_ERROR();
        case 36:
            if (lookahead == '*')
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(36);
            LEX_ERROR();
        case 37:
            if (lookahead == '/')
                ADVANCE(38);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(36);
            LEX_ERROR();
        case 38:
            ACCEPT_TOKEN(ts_sym_comment);
        case 39:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(39);
            ACCEPT_TOKEN(ts_sym_comment);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(44);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_const);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(48);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(49);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_enum);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(51);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(54);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_extern);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(56);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(57);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(58);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_long);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_short);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(65);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(67);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(68);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_static);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(70);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(71);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(72);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_struct);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(74);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(75);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(77);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(78);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(79);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_typedef1);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(81);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(83);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(84);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_union);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(86);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(87);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(88);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(90);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_unsigned);
        case 91:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 93:
            ACCEPT_TOKEN(ts_aux_sym_8);
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(ts_aux_sym_2);
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '\n')
                ADVANCE(96);
            if (lookahead == '/')
                ADVANCE(98);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '\n')
                ADVANCE(96);
            if (lookahead == '/')
                ADVANCE(98);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 98:
            if (lookahead == '*')
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(103);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 99:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(100);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(99);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 100:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(101);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/')))
                ADVANCE(99);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 101:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 102:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 103:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(103);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(107);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 108:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '<')
                ADVANCE(114);
            LEX_ERROR();
        case 110:
            if (lookahead == '\"')
                ADVANCE(111);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(ts_sym_string);
        case 112:
            if (lookahead == '\"')
                ADVANCE(113);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            LEX_ERROR();
        case 113:
            if (lookahead == '\"')
                ADVANCE(111);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            ACCEPT_TOKEN(ts_sym_string);
        case 114:
            if (lookahead == '>')
                ADVANCE(115);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(ts_sym_system_lib_string);
        case 116:
            if (lookahead == '>')
                ADVANCE(117);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            LEX_ERROR();
        case 117:
            if (lookahead == '>')
                ADVANCE(115);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            ACCEPT_TOKEN(ts_sym_system_lib_string);
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(121);
            if (lookahead == 'u')
                ADVANCE(122);
            LEX_ERROR();
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(123);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 124:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            ACCEPT_TOKEN(ts_aux_sym_6);
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(ts_aux_sym_7);
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(ts_aux_sym_3);
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(133);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(ts_aux_sym_9);
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 135:
            ACCEPT_TOKEN(ts_aux_sym_16);
        case 136:
            if (lookahead == '\\')
                ADVANCE(137);
            if (!((lookahead == 0) ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(140);
            LEX_ERROR();
        case 137:
            if (lookahead == '\'')
                ADVANCE(138);
            if (!((lookahead == 0) ||
                (lookahead == '\'')))
                ADVANCE(140);
            LEX_ERROR();
        case 138:
            if (lookahead == '\'')
                ADVANCE(139);
            ACCEPT_TOKEN(ts_sym_char);
        case 139:
            ACCEPT_TOKEN(ts_sym_char);
        case 140:
            if (lookahead == '\'')
                ADVANCE(139);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(ts_aux_sym_4);
        case 142:
            ACCEPT_TOKEN(ts_aux_sym_13);
        case 143:
            if (lookahead == '.')
                ADVANCE(144);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            ACCEPT_TOKEN(ts_sym_number);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(145);
            ACCEPT_TOKEN(ts_sym_number);
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 147:
            if (lookahead == '=')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(ts_aux_sym_22);
        case 149:
            if (lookahead == '&')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            ACCEPT_TOKEN(ts_aux_sym_17);
        case 151:
            if (lookahead == '+')
                ADVANCE(152);
            ACCEPT_TOKEN(ts_aux_sym_15);
        case 152:
            ACCEPT_TOKEN(ts_aux_sym_12);
        case 153:
            if (lookahead == '>')
                ADVANCE(154);
            ACCEPT_TOKEN(ts_aux_sym_13);
        case 154:
            ACCEPT_TOKEN(ts_aux_sym_11);
        case 155:
            ACCEPT_TOKEN(ts_aux_sym_10);
        case 156:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            ACCEPT_TOKEN(ts_aux_sym_14);
        case 157:
            if (lookahead == '=')
                ADVANCE(158);
            ACCEPT_TOKEN(ts_aux_sym_19);
        case 158:
            ACCEPT_TOKEN(ts_aux_sym_20);
        case 159:
            if (lookahead == '=')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            ACCEPT_TOKEN(ts_aux_sym_21);
        case 161:
            if (lookahead == '=')
                ADVANCE(162);
            ACCEPT_TOKEN(ts_aux_sym_24);
        case 162:
            ACCEPT_TOKEN(ts_aux_sym_23);
        case 163:
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            ACCEPT_TOKEN(ts_aux_sym_18);
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 166:
            if (lookahead == '=')
                ADVANCE(160);
            ACCEPT_TOKEN(ts_aux_sym_9);
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(ts_aux_sym_5);
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '\n')
                ADVANCE(181);
            if (lookahead == '/')
                ADVANCE(183);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(189);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '\n')
                ADVANCE(181);
            if (lookahead == '/')
                ADVANCE(183);
            if (lookahead == '\\')
                ADVANCE(194);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 183:
            if (lookahead == '*')
                ADVANCE(184);
            if (lookahead == '/')
                ADVANCE(192);
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 184:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(185);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(184);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 185:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(186);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(184);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 186:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 187:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 188:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 190:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '*')
                ADVANCE(185);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(184);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 191:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(185);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(184);
            LEX_ERROR();
        case 192:
            if (lookahead == '\\')
                ADVANCE(193);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 193:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(193);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 194:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(204);
            if (lookahead == 'i')
                ADVANCE(207);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(215);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(205);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(206);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_for);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(208);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_if);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(210);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(211);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(212);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(213);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(214);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_return);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(216);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(217);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(218);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(219);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_while);
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == '!')
                ADVANCE(147);
            if (lookahead == '&')
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(151);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(156);
            if (lookahead == '<')
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(166);
            if (lookahead == '>')
                ADVANCE(161);
            if (lookahead == '|')
                ADVANCE(163);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(204);
            if (lookahead == 'i')
                ADVANCE(207);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(215);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(143);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(230);
            if (lookahead == 'f')
                ADVANCE(204);
            if (lookahead == 'i')
                ADVANCE(207);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(215);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(231);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(232);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_else);
        case 234:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\n')
                ADVANCE(235);
            if (lookahead == '!')
                ADVANCE(236);
            if (lookahead == '\"')
                ADVANCE(240);
            if (lookahead == '#')
                ADVANCE(250);
            if (lookahead == '&')
                ADVANCE(282);
            if (lookahead == '\'')
                ADVANCE(284);
            if (lookahead == '(')
                ADVANCE(292);
            if (lookahead == ')')
                ADVANCE(293);
            if (lookahead == '*')
                ADVANCE(294);
            if (lookahead == '+')
                ADVANCE(295);
            if (lookahead == ',')
                ADVANCE(297);
            if (lookahead == '-')
                ADVANCE(298);
            if (lookahead == '.')
                ADVANCE(300);
            if (lookahead == '/')
                ADVANCE(301);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(308);
            if (lookahead == ';')
                ADVANCE(311);
            if (lookahead == '<')
                ADVANCE(312);
            if (lookahead == '=')
                ADVANCE(324);
            if (lookahead == '>')
                ADVANCE(326);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(402);
            if (lookahead == 'c')
                ADVANCE(329);
            if (lookahead == 'e')
                ADVANCE(334);
            if (lookahead == 'f')
                ADVANCE(346);
            if (lookahead == 'i')
                ADVANCE(349);
            if (lookahead == 'l')
                ADVANCE(351);
            if (lookahead == 'r')
                ADVANCE(355);
            if (lookahead == 's')
                ADVANCE(361);
            if (lookahead == 't')
                ADVANCE(375);
            if (lookahead == 'u')
                ADVANCE(382);
            if (lookahead == 'w')
                ADVANCE(393);
            if (lookahead == '{')
                ADVANCE(398);
            if (lookahead == '|')
                ADVANCE(399);
            if (lookahead == '}')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 235:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\n')
                ADVANCE(235);
            if (lookahead == '!')
                ADVANCE(236);
            if (lookahead == '\"')
                ADVANCE(240);
            if (lookahead == '#')
                ADVANCE(250);
            if (lookahead == '&')
                ADVANCE(282);
            if (lookahead == '\'')
                ADVANCE(284);
            if (lookahead == '(')
                ADVANCE(292);
            if (lookahead == ')')
                ADVANCE(293);
            if (lookahead == '*')
                ADVANCE(294);
            if (lookahead == '+')
                ADVANCE(295);
            if (lookahead == ',')
                ADVANCE(297);
            if (lookahead == '-')
                ADVANCE(298);
            if (lookahead == '.')
                ADVANCE(300);
            if (lookahead == '/')
                ADVANCE(301);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(308);
            if (lookahead == ';')
                ADVANCE(311);
            if (lookahead == '<')
                ADVANCE(312);
            if (lookahead == '=')
                ADVANCE(324);
            if (lookahead == '>')
                ADVANCE(326);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == 'c')
                ADVANCE(329);
            if (lookahead == 'e')
                ADVANCE(334);
            if (lookahead == 'f')
                ADVANCE(346);
            if (lookahead == 'i')
                ADVANCE(349);
            if (lookahead == 'l')
                ADVANCE(351);
            if (lookahead == 'r')
                ADVANCE(355);
            if (lookahead == 's')
                ADVANCE(361);
            if (lookahead == 't')
                ADVANCE(375);
            if (lookahead == 'u')
                ADVANCE(382);
            if (lookahead == 'w')
                ADVANCE(393);
            if (lookahead == '{')
                ADVANCE(398);
            if (lookahead == '|')
                ADVANCE(399);
            if (lookahead == '}')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 236:
            if (lookahead == '=')
                ADVANCE(237);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 237:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 238:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 239:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 240:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(241);
            if (lookahead == '\\')
                ADVANCE(242);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 241:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 242:
            if (lookahead == '\n')
                ADVANCE(243);
            if (lookahead == '\"')
                ADVANCE(249);
            if (lookahead == '\\')
                ADVANCE(242);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 243:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(244);
            if (lookahead == '\\')
                ADVANCE(245);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(248);
            LEX_ERROR();
        case 244:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 245:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(247);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(248);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 246:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(244);
            if (lookahead == '\\')
                ADVANCE(247);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(248);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 247:
            if (lookahead == '\n')
                ADVANCE(243);
            if (lookahead == '\"')
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(247);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(248);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 248:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(244);
            if (lookahead == '\\')
                ADVANCE(247);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(248);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 249:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(241);
            if (lookahead == '\\')
                ADVANCE(242);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 250:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(251);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(253);
            if (lookahead == 'e')
                ADVANCE(259);
            if (lookahead == 'i')
                ADVANCE(267);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(254);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(255);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(256);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(257);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(258);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_define);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'l')
                ADVANCE(260);
            if (lookahead == 'n')
                ADVANCE(263);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 's')
                ADVANCE(261);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(262);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_else);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(264);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(265);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(266);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_endif);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(268);
            if (lookahead == 'n')
                ADVANCE(276);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(269);
            if (lookahead == 'n')
                ADVANCE(272);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(270);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(271);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_ifdef);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(273);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(274);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(275);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_ifndef);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'c')
                ADVANCE(277);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'l')
                ADVANCE(278);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'u')
                ADVANCE(279);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(280);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(281);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_include);
        case 282:
            if (lookahead == '&')
                ADVANCE(283);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '&') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 283:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 284:
            if (lookahead == '\n')
                ADVANCE(140);
            if (lookahead == '\'')
                ADVANCE(239);
            if (lookahead == '\\')
                ADVANCE(285);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(291);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 285:
            if (lookahead == '\n')
                ADVANCE(286);
            if (lookahead == '\'')
                ADVANCE(288);
            if (lookahead == '\\')
                ADVANCE(290);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(291);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 286:
            if (lookahead == '\'')
                ADVANCE(287);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'')))
                ADVANCE(189);
            LEX_ERROR();
        case 287:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 288:
            if (lookahead == '\'')
                ADVANCE(289);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 289:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 290:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\'')
                ADVANCE(289);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 291:
            if (lookahead == '\'')
                ADVANCE(289);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 292:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 293:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 294:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 295:
            if (lookahead == '+')
                ADVANCE(296);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '+') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 296:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 297:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 298:
            if (lookahead == '>')
                ADVANCE(299);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 299:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 300:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 301:
            if (lookahead == '*')
                ADVANCE(302);
            if (lookahead == '/')
                ADVANCE(306);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 302:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == '\\')
                ADVANCE(305);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(302);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 303:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(304);
            if (lookahead == '\\')
                ADVANCE(305);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(302);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 304:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 305:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == '\\')
                ADVANCE(305);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(302);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 306:
            if (lookahead == '\\')
                ADVANCE(307);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(306);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 307:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(307);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(306);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 308:
            if (lookahead == '.')
                ADVANCE(309);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 309:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(310);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(310);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 311:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 312:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '=')
                ADVANCE(313);
            if (lookahead == '>')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(315);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(323);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 313:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(315);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(323);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 314:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 315:
            if (lookahead == '\n')
                ADVANCE(316);
            if (lookahead == '>')
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(315);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(323);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 316:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(317);
            if (lookahead == '\\')
                ADVANCE(318);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(321);
            LEX_ERROR();
        case 317:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(189);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 318:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(319);
            if (lookahead == '\\')
                ADVANCE(320);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(321);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 319:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(317);
            if (lookahead == '\\')
                ADVANCE(320);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(321);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 320:
            if (lookahead == '\n')
                ADVANCE(316);
            if (lookahead == '>')
                ADVANCE(319);
            if (lookahead == '\\')
                ADVANCE(320);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(321);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 321:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(317);
            if (lookahead == '\\')
                ADVANCE(320);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(321);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 322:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(315);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(323);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 323:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(315);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(323);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 324:
            if (lookahead == '=')
                ADVANCE(325);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 325:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 326:
            if (lookahead == '=')
                ADVANCE(327);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 327:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'o')
                ADVANCE(330);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(331);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 's')
                ADVANCE(332);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(333);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_const);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'l')
                ADVANCE(335);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'x')
                ADVANCE(341);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 's')
                ADVANCE(336);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(337);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_else);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'u')
                ADVANCE(339);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'm')
                ADVANCE(340);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_enum);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(342);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(343);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'r')
                ADVANCE(344);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(345);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_extern);
        case 346:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'o')
                ADVANCE(347);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'r')
                ADVANCE(348);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_for);
        case 349:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(350);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_if);
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'o')
                ADVANCE(352);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 352:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(353);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'g')
                ADVANCE(354);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_long);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(356);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(357);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 357:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'u')
                ADVANCE(358);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 358:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'r')
                ADVANCE(359);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 359:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(360);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_return);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'h')
                ADVANCE(362);
            if (lookahead == 't')
                ADVANCE(366);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 362:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'o')
                ADVANCE(363);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'r')
                ADVANCE(364);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 364:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(365);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 365:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_short);
        case 366:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'a')
                ADVANCE(367);
            if (lookahead == 'r')
                ADVANCE(371);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 367:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(368);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(369);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 369:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'c')
                ADVANCE(370);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 370:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_static);
        case 371:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'u')
                ADVANCE(372);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 372:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'c')
                ADVANCE(373);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 373:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 't')
                ADVANCE(374);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_struct);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'y')
                ADVANCE(376);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'p')
                ADVANCE(377);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(378);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(379);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(380);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'f')
                ADVANCE(381);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_typedef1);
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(383);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(384);
            if (lookahead == 's')
                ADVANCE(387);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 384:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'o')
                ADVANCE(385);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 385:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(386);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_union);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(388);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 388:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'g')
                ADVANCE(389);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'n')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 390:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'd')
                ADVANCE(392);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 392:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_unsigned);
        case 393:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'h')
                ADVANCE(394);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 394:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 395:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'l')
                ADVANCE(396);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == 'e')
                ADVANCE(397);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 397:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_while);
        case 398:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 399:
            if (lookahead == '\\')
                ADVANCE(238);
            if (lookahead == '|')
                ADVANCE(400);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\') ||
                (lookahead == '|')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 400:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 401:
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 402:
            if (lookahead == '\n')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(238);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\n')
                ADVANCE(235);
            if (lookahead == '!')
                ADVANCE(236);
            if (lookahead == '\"')
                ADVANCE(240);
            if (lookahead == '#')
                ADVANCE(250);
            if (lookahead == '&')
                ADVANCE(282);
            if (lookahead == '\'')
                ADVANCE(284);
            if (lookahead == '(')
                ADVANCE(292);
            if (lookahead == ')')
                ADVANCE(293);
            if (lookahead == '*')
                ADVANCE(294);
            if (lookahead == '+')
                ADVANCE(295);
            if (lookahead == ',')
                ADVANCE(297);
            if (lookahead == '-')
                ADVANCE(298);
            if (lookahead == '.')
                ADVANCE(300);
            if (lookahead == '/')
                ADVANCE(301);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(308);
            if (lookahead == ';')
                ADVANCE(311);
            if (lookahead == '<')
                ADVANCE(312);
            if (lookahead == '=')
                ADVANCE(324);
            if (lookahead == '>')
                ADVANCE(326);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(328);
            if (lookahead == 'c')
                ADVANCE(329);
            if (lookahead == 'e')
                ADVANCE(334);
            if (lookahead == 'f')
                ADVANCE(346);
            if (lookahead == 'i')
                ADVANCE(349);
            if (lookahead == 'l')
                ADVANCE(351);
            if (lookahead == 'r')
                ADVANCE(355);
            if (lookahead == 's')
                ADVANCE(361);
            if (lookahead == 't')
                ADVANCE(375);
            if (lookahead == 'u')
                ADVANCE(382);
            if (lookahead == 'w')
                ADVANCE(393);
            if (lookahead == '{')
                ADVANCE(398);
            if (lookahead == '|')
                ADVANCE(399);
            if (lookahead == '}')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(239);
            ACCEPT_TOKEN(ts_aux_sym_1);
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 91,
    [2] = 1,
    [3] = 92,
    [4] = 92,
    [5] = 94,
    [6] = 94,
    [7] = 94,
    [8] = 96,
    [9] = 92,
    [10] = 91,
    [11] = 104,
    [12] = 108,
    [13] = 109,
    [14] = 108,
    [15] = 108,
    [16] = 108,
    [17] = 104,
    [18] = 118,
    [19] = 119,
    [20] = 120,
    [21] = 124,
    [22] = 124,
    [23] = 124,
    [24] = 126,
    [25] = 127,
    [26] = 129,
    [27] = 131,
    [28] = 132,
    [29] = 94,
    [30] = 134,
    [31] = 146,
    [32] = 165,
    [33] = 146,
    [34] = 104,
    [35] = 134,
    [36] = 134,
    [37] = 146,
    [38] = 146,
    [39] = 146,
    [40] = 167,
    [41] = 167,
    [42] = 167,
    [43] = 108,
    [44] = 119,
    [45] = 124,
    [46] = 124,
    [47] = 124,
    [48] = 169,
    [49] = 127,
    [50] = 129,
    [51] = 131,
    [52] = 167,
    [53] = 167,
    [54] = 131,
    [55] = 108,
    [56] = 129,
    [57] = 131,
    [58] = 167,
    [59] = 127,
    [60] = 129,
    [61] = 131,
    [62] = 167,
    [63] = 169,
    [64] = 170,
    [65] = 92,
    [66] = 92,
    [67] = 171,
    [68] = 131,
    [69] = 92,
    [70] = 108,
    [71] = 167,
    [72] = 119,
    [73] = 124,
    [74] = 124,
    [75] = 124,
    [76] = 172,
    [77] = 127,
    [78] = 129,
    [79] = 131,
    [80] = 92,
    [81] = 92,
    [82] = 131,
    [83] = 92,
    [84] = 127,
    [85] = 129,
    [86] = 131,
    [87] = 92,
    [88] = 172,
    [89] = 170,
    [90] = 131,
    [91] = 92,
    [92] = 92,
    [93] = 170,
    [94] = 131,
    [95] = 92,
    [96] = 172,
    [97] = 170,
    [98] = 171,
    [99] = 131,
    [100] = 92,
    [101] = 92,
    [102] = 170,
    [103] = 131,
    [104] = 170,
    [105] = 131,
    [106] = 92,
    [107] = 92,
    [108] = 92,
    [109] = 167,
    [110] = 170,
    [111] = 131,
    [112] = 171,
    [113] = 171,
    [114] = 92,
    [115] = 171,
    [116] = 170,
    [117] = 131,
    [118] = 167,
    [119] = 169,
    [120] = 170,
    [121] = 131,
    [122] = 167,
    [123] = 167,
    [124] = 170,
    [125] = 131,
    [126] = 167,
    [127] = 167,
    [128] = 167,
    [129] = 173,
    [130] = 174,
    [131] = 146,
    [132] = 165,
    [133] = 146,
    [134] = 129,
    [135] = 131,
    [136] = 104,
    [137] = 146,
    [138] = 108,
    [139] = 134,
    [140] = 134,
    [141] = 146,
    [142] = 146,
    [143] = 146,
    [144] = 175,
    [145] = 134,
    [146] = 146,
    [147] = 176,
    [148] = 134,
    [149] = 108,
    [150] = 108,
    [151] = 134,
    [152] = 134,
    [153] = 134,
    [154] = 134,
    [155] = 146,
    [156] = 146,
    [157] = 146,
    [158] = 146,
    [159] = 165,
    [160] = 165,
    [161] = 146,
    [162] = 177,
    [163] = 178,
    [164] = 177,
    [165] = 167,
    [166] = 104,
    [167] = 146,
    [168] = 134,
    [169] = 134,
    [170] = 177,
    [171] = 177,
    [172] = 177,
    [173] = 167,
    [174] = 173,
    [175] = 174,
    [176] = 146,
    [177] = 129,
    [178] = 131,
    [179] = 177,
    [180] = 177,
    [181] = 129,
    [182] = 179,
    [183] = 146,
    [184] = 129,
    [185] = 177,
    [186] = 129,
    [187] = 180,
    [188] = 131,
    [189] = 177,
    [190] = 146,
    [191] = 134,
    [192] = 177,
    [193] = 176,
    [194] = 134,
    [195] = 108,
    [196] = 108,
    [197] = 134,
    [198] = 134,
    [199] = 134,
    [200] = 134,
    [201] = 177,
    [202] = 177,
    [203] = 177,
    [204] = 177,
    [205] = 178,
    [206] = 178,
    [207] = 177,
    [208] = 177,
    [209] = 167,
    [210] = 177,
    [211] = 177,
    [212] = 167,
    [213] = 134,
    [214] = 177,
    [215] = 167,
    [216] = 177,
    [217] = 167,
    [218] = 146,
    [219] = 167,
    [220] = 173,
    [221] = 174,
    [222] = 146,
    [223] = 129,
    [224] = 131,
    [225] = 146,
    [226] = 146,
    [227] = 129,
    [228] = 179,
    [229] = 146,
    [230] = 131,
    [231] = 146,
    [232] = 146,
    [233] = 129,
    [234] = 179,
    [235] = 146,
    [236] = 131,
    [237] = 146,
    [238] = 134,
    [239] = 146,
    [240] = 134,
    [241] = 146,
    [242] = 176,
    [243] = 134,
    [244] = 108,
    [245] = 108,
    [246] = 134,
    [247] = 134,
    [248] = 134,
    [249] = 134,
    [250] = 146,
    [251] = 146,
    [252] = 146,
    [253] = 146,
    [254] = 165,
    [255] = 165,
    [256] = 146,
    [257] = 177,
    [258] = 167,
    [259] = 146,
    [260] = 146,
    [261] = 167,
    [262] = 146,
    [263] = 94,
    [264] = 131,
    [265] = 94,
    [266] = 127,
    [267] = 129,
    [268] = 131,
    [269] = 94,
    [270] = 126,
    [271] = 170,
    [272] = 131,
    [273] = 94,
    [274] = 94,
    [275] = 170,
    [276] = 131,
    [277] = 94,
    [278] = 126,
    [279] = 170,
    [280] = 131,
    [281] = 94,
    [282] = 94,
    [283] = 170,
    [284] = 131,
    [285] = 94,
    [286] = 108,
    [287] = 92,
    [288] = 124,
    [289] = 124,
    [290] = 124,
    [291] = 172,
    [292] = 127,
    [293] = 129,
    [294] = 131,
    [295] = 92,
    [296] = 92,
    [297] = 131,
    [298] = 92,
    [299] = 127,
    [300] = 129,
    [301] = 131,
    [302] = 92,
    [303] = 172,
    [304] = 170,
    [305] = 131,
    [306] = 92,
    [307] = 92,
    [308] = 170,
    [309] = 131,
    [310] = 92,
    [311] = 172,
    [312] = 170,
    [313] = 131,
    [314] = 92,
    [315] = 92,
    [316] = 170,
    [317] = 131,
    [318] = 92,
    [319] = 104,
    [320] = 92,
    [321] = 171,
    [322] = 1,
    [323] = 1,
    [324] = 1,
    [325] = 181,
    [326] = 1,
    [327] = 1,
    [328] = 92,
    [329] = 92,
    [330] = 195,
    [331] = 195,
    [332] = 196,
    [333] = 92,
    [334] = 195,
    [335] = 171,
    [336] = 1,
    [337] = 92,
    [338] = 195,
    [339] = 196,
    [340] = 171,
    [341] = 134,
    [342] = 197,
    [343] = 198,
    [344] = 197,
    [345] = 104,
    [346] = 134,
    [347] = 134,
    [348] = 197,
    [349] = 197,
    [350] = 197,
    [351] = 167,
    [352] = 173,
    [353] = 174,
    [354] = 146,
    [355] = 129,
    [356] = 131,
    [357] = 197,
    [358] = 197,
    [359] = 129,
    [360] = 179,
    [361] = 197,
    [362] = 131,
    [363] = 197,
    [364] = 134,
    [365] = 197,
    [366] = 176,
    [367] = 134,
    [368] = 108,
    [369] = 108,
    [370] = 134,
    [371] = 134,
    [372] = 134,
    [373] = 134,
    [374] = 197,
    [375] = 197,
    [376] = 197,
    [377] = 197,
    [378] = 198,
    [379] = 198,
    [380] = 197,
    [381] = 177,
    [382] = 167,
    [383] = 197,
    [384] = 197,
    [385] = 167,
    [386] = 197,
    [387] = 1,
    [388] = 1,
    [389] = 1,
    [390] = 1,
    [391] = 1,
    [392] = 199,
    [393] = 199,
    [394] = 196,
    [395] = 92,
    [396] = 199,
    [397] = 171,
    [398] = 1,
    [399] = 200,
    [400] = 92,
    [401] = 167,
    [402] = 201,
    [403] = 167,
    [404] = 167,
    [405] = 104,
    [406] = 201,
    [407] = 167,
    [408] = 202,
    [409] = 1,
    [410] = 203,
    [411] = 203,
    [412] = 203,
    [413] = 92,
    [414] = 220,
    [415] = 221,
    [416] = 220,
    [417] = 131,
    [418] = 222,
    [419] = 104,
    [420] = 104,
    [421] = 203,
    [422] = 1,
    [423] = 134,
    [424] = 223,
    [425] = 223,
    [426] = 223,
    [427] = 134,
    [428] = 134,
    [429] = 220,
    [430] = 220,
    [431] = 220,
    [432] = 134,
    [433] = 224,
    [434] = 225,
    [435] = 224,
    [436] = 104,
    [437] = 134,
    [438] = 134,
    [439] = 224,
    [440] = 224,
    [441] = 224,
    [442] = 167,
    [443] = 173,
    [444] = 174,
    [445] = 146,
    [446] = 129,
    [447] = 131,
    [448] = 224,
    [449] = 224,
    [450] = 129,
    [451] = 179,
    [452] = 224,
    [453] = 131,
    [454] = 224,
    [455] = 134,
    [456] = 224,
    [457] = 176,
    [458] = 134,
    [459] = 108,
    [460] = 108,
    [461] = 134,
    [462] = 134,
    [463] = 134,
    [464] = 134,
    [465] = 224,
    [466] = 224,
    [467] = 224,
    [468] = 224,
    [469] = 225,
    [470] = 225,
    [471] = 224,
    [472] = 177,
    [473] = 167,
    [474] = 224,
    [475] = 224,
    [476] = 167,
    [477] = 224,
    [478] = 226,
    [479] = 203,
    [480] = 227,
    [481] = 228,
    [482] = 92,
    [483] = 220,
    [484] = 104,
    [485] = 92,
    [486] = 195,
    [487] = 196,
    [488] = 171,
    [489] = 228,
    [490] = 228,
    [491] = 228,
    [492] = 176,
    [493] = 134,
    [494] = 108,
    [495] = 108,
    [496] = 134,
    [497] = 134,
    [498] = 134,
    [499] = 134,
    [500] = 220,
    [501] = 220,
    [502] = 220,
    [503] = 220,
    [504] = 221,
    [505] = 221,
    [506] = 220,
    [507] = 177,
    [508] = 167,
    [509] = 220,
    [510] = 220,
    [511] = 167,
    [512] = 220,
    [513] = 220,
    [514] = 176,
    [515] = 224,
    [516] = 226,
    [517] = 203,
    [518] = 226,
    [519] = 203,
    [520] = 176,
    [521] = 224,
    [522] = 226,
    [523] = 203,
    [524] = 195,
    [525] = 196,
    [526] = 171,
    [527] = 228,
    [528] = 220,
    [529] = 176,
    [530] = 224,
    [531] = 226,
    [532] = 203,
    [533] = 134,
    [534] = 224,
    [535] = 167,
    [536] = 226,
    [537] = 229,
    [538] = 229,
    [539] = 92,
    [540] = 220,
    [541] = 104,
    [542] = 203,
    [543] = 134,
    [544] = 223,
    [545] = 223,
    [546] = 223,
    [547] = 134,
    [548] = 224,
    [549] = 226,
    [550] = 229,
    [551] = 227,
    [552] = 228,
    [553] = 220,
    [554] = 228,
    [555] = 220,
    [556] = 176,
    [557] = 224,
    [558] = 226,
    [559] = 229,
    [560] = 226,
    [561] = 229,
    [562] = 176,
    [563] = 224,
    [564] = 226,
    [565] = 229,
    [566] = 220,
    [567] = 176,
    [568] = 224,
    [569] = 226,
    [570] = 229,
    [571] = 134,
    [572] = 224,
    [573] = 167,
    [574] = 226,
    [575] = 229,
    [576] = 226,
    [577] = 229,
    [578] = 220,
    [579] = 229,
    [580] = 131,
    [581] = 229,
    [582] = 229,
    [583] = 92,
    [584] = 195,
    [585] = 196,
    [586] = 171,
    [587] = 229,
    [588] = 229,
    [589] = 229,
    [590] = 195,
    [591] = 196,
    [592] = 171,
    [593] = 229,
    [594] = 226,
    [595] = 203,
    [596] = 220,
    [597] = 203,
    [598] = 131,
    [599] = 203,
    [600] = 203,
    [601] = 167,
    [602] = 173,
    [603] = 174,
    [604] = 146,
    [605] = 129,
    [606] = 131,
    [607] = 220,
    [608] = 220,
    [609] = 129,
    [610] = 179,
    [611] = 220,
    [612] = 131,
    [613] = 220,
    [614] = 92,
    [615] = 195,
    [616] = 196,
    [617] = 171,
    [618] = 203,
    [619] = 203,
    [620] = 134,
    [621] = 220,
    [622] = 1,
    [623] = 203,
    [624] = 195,
    [625] = 196,
    [626] = 171,
    [627] = 203,
    [628] = 131,
    [629] = 201,
    [630] = 201,
    [631] = 92,
    [632] = 201,
    [633] = 91,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_sym_program] = SHIFT(1),
        [ts_sym_preproc_include] = SHIFT(2),
        [ts_sym_preproc_define] = SHIFT(2),
        [ts_sym_preproc_call] = SHIFT(2),
        [ts_sym_preproc_ifdef] = SHIFT(2),
        [ts_sym_preproc_ifndef] = SHIFT(2),
        [ts_sym_typedef] = SHIFT(2),
        [ts_sym_var_declaration] = SHIFT(2),
        [ts_sym_function_declaration] = SHIFT(2),
        [ts_sym_type] = SHIFT(3),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_declaration] = SHIFT(2),
        [ts_sym_struct_type] = SHIFT(5),
        [ts_sym_union_declaration] = SHIFT(2),
        [ts_sym_union_type] = SHIFT(6),
        [ts_sym_enum_declaration] = SHIFT(2),
        [ts_sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 0),
        [ts_sym_preproc_else] = SHIFT(2),
        [ts_sym_preproc_endif] = SHIFT(2),
        [ts_sym_preproc_directive] = SHIFT(8),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = SHIFT(10),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(11),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_include] = SHIFT(13),
        [ts_aux_sym_define] = SHIFT(14),
        [ts_aux_sym_ifdef] = SHIFT(15),
        [ts_aux_sym_ifndef] = SHIFT(16),
        [ts_aux_sym_typedef1] = SHIFT(17),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(21),
        [ts_aux_sym_union] = SHIFT(22),
        [ts_aux_sym_enum] = SHIFT(23),
    },
    [1] = {
        [ts_builtin_sym_end] = ACCEPT_INPUT(),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [2] = {
        [ts_sym_preproc_include] = SHIFT(2),
        [ts_sym_preproc_define] = SHIFT(2),
        [ts_sym_preproc_call] = SHIFT(2),
        [ts_sym_preproc_ifdef] = SHIFT(2),
        [ts_sym_preproc_ifndef] = SHIFT(2),
        [ts_sym_typedef] = SHIFT(2),
        [ts_sym_var_declaration] = SHIFT(2),
        [ts_sym_function_declaration] = SHIFT(2),
        [ts_sym_type] = SHIFT(3),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_declaration] = SHIFT(2),
        [ts_sym_struct_type] = SHIFT(5),
        [ts_sym_union_declaration] = SHIFT(2),
        [ts_sym_union_type] = SHIFT(6),
        [ts_sym_enum_declaration] = SHIFT(2),
        [ts_sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 1),
        [ts_sym_preproc_else] = SHIFT(2),
        [ts_sym_preproc_endif] = SHIFT(2),
        [ts_sym_preproc_directive] = SHIFT(8),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = SHIFT(633),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(11),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_include] = SHIFT(13),
        [ts_aux_sym_define] = SHIFT(14),
        [ts_aux_sym_ifdef] = SHIFT(15),
        [ts_aux_sym_ifndef] = SHIFT(16),
        [ts_aux_sym_typedef1] = SHIFT(17),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(21),
        [ts_aux_sym_union] = SHIFT(22),
        [ts_aux_sym_enum] = SHIFT(23),
    },
    [3] = {
        [ts_sym_type_expression] = SHIFT(392),
        [ts_sym_pointer_type] = SHIFT(393),
        [ts_sym_var_assignment] = SHIFT(394),
        [ts_sym_identifier] = SHIFT(393),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(395),
    },
    [4] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [5] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(391),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [6] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(390),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [7] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(389),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [8] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_1] = SHIFT(388),
    },
    [9] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
    },
    [10] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [11] = {
        [ts_sym_type] = SHIFT(329),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
    },
    [12] = {
        [ts_sym_identifier] = SHIFT(328),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [13] = {
        [ts_sym_string] = SHIFT(327),
        [ts_sym_system_lib_string] = SHIFT(327),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [14] = {
        [ts_sym_identifier] = SHIFT(325),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [15] = {
        [ts_sym_identifier] = SHIFT(324),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [16] = {
        [ts_sym_identifier] = SHIFT(323),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [17] = {
        [ts_sym_type] = SHIFT(320),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [18] = {
        [ts_sym_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_primitive_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_struct_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_union_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_enum_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_identifier] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(319),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_short] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_long] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_union] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_enum] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
    },
    [19] = {
        [ts_sym_primitive_type] = SHIFT(287),
        [ts_sym_struct_type] = SHIFT(287),
        [ts_sym_union_type] = SHIFT(287),
        [ts_sym_enum_type] = SHIFT(287),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
    },
    [20] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(286),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
    },
    [21] = {
        [ts_sym_identifier] = SHIFT(278),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(279),
    },
    [22] = {
        [ts_sym_identifier] = SHIFT(270),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(271),
    },
    [23] = {
        [ts_sym_identifier] = SHIFT(24),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(25),
    },
    [24] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 2),
        [ts_aux_sym_6] = SHIFT(266),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [25] = {
        [ts_sym_enum_value] = SHIFT(26),
        [ts_builtin_sym_error] = SHIFT(27),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(29),
    },
    [26] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(264),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(263),
    },
    [27] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(263),
    },
    [28] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_9] = SHIFT(30),
    },
    [29] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [30] = {
        [ts_sym_expression] = SHIFT(31),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [31] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_4] = SHIFT(242),
        [ts_aux_sym_7] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = SHIFT(244),
        [ts_aux_sym_11] = SHIFT(245),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = SHIFT(246),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = SHIFT(246),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = SHIFT(248),
        [ts_aux_sym_19] = SHIFT(249),
        [ts_aux_sym_20] = SHIFT(249),
        [ts_aux_sym_21] = SHIFT(249),
        [ts_aux_sym_22] = SHIFT(249),
        [ts_aux_sym_23] = SHIFT(249),
        [ts_aux_sym_24] = SHIFT(249),
    },
    [32] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(240),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [33] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [34] = {
        [ts_sym_type] = SHIFT(40),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [35] = {
        [ts_sym_expression] = SHIFT(39),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [36] = {
        [ts_sym_expression] = SHIFT(37),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [37] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [38] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [39] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [40] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(129),
    },
    [41] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_type, 1),
    },
    [42] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_primitive_type, 1),
    },
    [43] = {
        [ts_sym_identifier] = SHIFT(128),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [44] = {
        [ts_sym_primitive_type] = SHIFT(127),
        [ts_sym_struct_type] = SHIFT(127),
        [ts_sym_union_type] = SHIFT(127),
        [ts_sym_enum_type] = SHIFT(127),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [45] = {
        [ts_sym_identifier] = SHIFT(119),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(120),
    },
    [46] = {
        [ts_sym_identifier] = SHIFT(63),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(64),
    },
    [47] = {
        [ts_sym_identifier] = SHIFT(48),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(49),
    },
    [48] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 2),
        [ts_aux_sym_6] = SHIFT(59),
    },
    [49] = {
        [ts_sym_enum_value] = SHIFT(50),
        [ts_builtin_sym_error] = SHIFT(51),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(52),
    },
    [50] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(54),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(53),
    },
    [51] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(53),
    },
    [52] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 3),
    },
    [53] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 4),
    },
    [54] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(58),
    },
    [55] = {
        [ts_sym_enum_value] = SHIFT(56),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [56] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(57),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 2),
    },
    [57] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 3),
    },
    [58] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 5),
    },
    [59] = {
        [ts_sym_enum_value] = SHIFT(60),
        [ts_builtin_sym_error] = SHIFT(54),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(53),
    },
    [60] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(61),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(58),
    },
    [61] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(62),
    },
    [62] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 6),
    },
    [63] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 2),
        [ts_aux_sym_6] = SHIFT(116),
    },
    [64] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(68),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(68),
        [ts_aux_sym_7] = SHIFT(71),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [65] = {
        [ts_sym_type_expression] = SHIFT(112),
        [ts_sym_pointer_type] = SHIFT(113),
        [ts_sym_identifier] = SHIFT(113),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(114),
    },
    [66] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [67] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(110),
    },
    [68] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(109),
    },
    [69] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
    },
    [70] = {
        [ts_sym_identifier] = SHIFT(108),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [71] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 3),
    },
    [72] = {
        [ts_sym_primitive_type] = SHIFT(107),
        [ts_sym_struct_type] = SHIFT(107),
        [ts_sym_union_type] = SHIFT(107),
        [ts_sym_enum_type] = SHIFT(107),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [73] = {
        [ts_sym_identifier] = SHIFT(96),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(97),
    },
    [74] = {
        [ts_sym_identifier] = SHIFT(88),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(89),
    },
    [75] = {
        [ts_sym_identifier] = SHIFT(76),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(77),
    },
    [76] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(84),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [77] = {
        [ts_sym_enum_value] = SHIFT(78),
        [ts_builtin_sym_error] = SHIFT(79),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(80),
    },
    [78] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(82),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(81),
    },
    [79] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(81),
    },
    [80] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [81] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [82] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(83),
    },
    [83] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [84] = {
        [ts_sym_enum_value] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(82),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(81),
    },
    [85] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(86),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(83),
    },
    [86] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(87),
    },
    [87] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [88] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [89] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(90),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(90),
        [ts_aux_sym_7] = SHIFT(91),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [90] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(92),
    },
    [91] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [92] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [93] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(94),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(94),
        [ts_aux_sym_7] = SHIFT(92),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [94] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(95),
    },
    [95] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [96] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(104),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [97] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(99),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(99),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [98] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(102),
    },
    [99] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(101),
    },
    [100] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [101] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [102] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(103),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [103] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 3),
    },
    [104] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(105),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(105),
        [ts_aux_sym_7] = SHIFT(101),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [105] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(106),
    },
    [106] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [107] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [108] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [109] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 4),
    },
    [110] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(111),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [111] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 3),
    },
    [112] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_field, 2),
    },
    [113] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
    },
    [114] = {
        [ts_sym_type_expression] = SHIFT(115),
        [ts_sym_pointer_type] = SHIFT(113),
        [ts_sym_identifier] = SHIFT(113),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(114),
    },
    [115] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
    },
    [116] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(117),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(117),
        [ts_aux_sym_7] = SHIFT(109),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [117] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(118),
    },
    [118] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 5),
    },
    [119] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 2),
        [ts_aux_sym_6] = SHIFT(124),
    },
    [120] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(121),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(121),
        [ts_aux_sym_7] = SHIFT(122),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [121] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(123),
    },
    [122] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 3),
    },
    [123] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 4),
    },
    [124] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(125),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(125),
        [ts_aux_sym_7] = SHIFT(123),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [125] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(126),
    },
    [126] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 5),
    },
    [127] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_type, 2),
    },
    [128] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_primitive_type, 2),
    },
    [129] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(130),
    },
    [130] = {
        [ts_sym_expression] = SHIFT(131),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(134),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(135),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(137),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [131] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(233),
        [ts_aux_sym_3] = SHIFT(234),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(232),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [132] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(238),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [133] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [134] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(233),
        [ts_aux_sym_3] = SHIFT(234),
        [ts_aux_sym_7] = SHIFT(232),
    },
    [135] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(232),
    },
    [136] = {
        [ts_sym_type] = SHIFT(219),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [137] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [138] = {
        [ts_sym_identifier] = SHIFT(144),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [139] = {
        [ts_sym_expression] = SHIFT(143),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [140] = {
        [ts_sym_expression] = SHIFT(141),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [141] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [142] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [143] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [144] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_9] = SHIFT(145),
    },
    [145] = {
        [ts_sym_expression] = SHIFT(146),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [146] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [147] = {
        [ts_sym_expression] = SHIFT(162),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(165),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(167),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [148] = {
        [ts_sym_expression] = SHIFT(161),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [149] = {
        [ts_sym_identifier] = SHIFT(160),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [150] = {
        [ts_sym_identifier] = SHIFT(159),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [151] = {
        [ts_sym_expression] = SHIFT(158),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [152] = {
        [ts_sym_expression] = SHIFT(157),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [153] = {
        [ts_sym_expression] = SHIFT(156),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [154] = {
        [ts_sym_expression] = SHIFT(155),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [155] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [156] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [157] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [158] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [159] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [160] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [161] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [162] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(217),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(190),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [163] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(191),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [164] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [165] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(190),
    },
    [166] = {
        [ts_sym_type] = SHIFT(173),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [167] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [168] = {
        [ts_sym_expression] = SHIFT(172),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [169] = {
        [ts_sym_expression] = SHIFT(170),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [170] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [171] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [172] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [173] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(174),
    },
    [174] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(175),
    },
    [175] = {
        [ts_sym_expression] = SHIFT(176),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(177),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(178),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(179),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [176] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(181),
        [ts_aux_sym_3] = SHIFT(182),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(180),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [177] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(181),
        [ts_aux_sym_3] = SHIFT(182),
        [ts_aux_sym_7] = SHIFT(180),
    },
    [178] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(180),
    },
    [179] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [180] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [181] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(188),
        [ts_aux_sym_7] = SHIFT(185),
    },
    [182] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(185),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [183] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(186),
        [ts_aux_sym_3] = SHIFT(187),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 2),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [184] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(186),
        [ts_aux_sym_3] = SHIFT(187),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 2),
    },
    [185] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [186] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = REDUCE(ts_aux_sym_compound_literal_repeat0, 3),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 3),
    },
    [187] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [188] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(189),
    },
    [189] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [190] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [191] = {
        [ts_sym_expression] = SHIFT(192),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [192] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [193] = {
        [ts_sym_expression] = SHIFT(208),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(209),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(210),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [194] = {
        [ts_sym_expression] = SHIFT(207),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [195] = {
        [ts_sym_identifier] = SHIFT(206),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [196] = {
        [ts_sym_identifier] = SHIFT(205),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [197] = {
        [ts_sym_expression] = SHIFT(204),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [198] = {
        [ts_sym_expression] = SHIFT(203),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [199] = {
        [ts_sym_expression] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [200] = {
        [ts_sym_expression] = SHIFT(201),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [201] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [202] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [203] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [204] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [205] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [206] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [207] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [208] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(212),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(211),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [209] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(211),
    },
    [210] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [211] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [212] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(216),
    },
    [213] = {
        [ts_sym_expression] = SHIFT(214),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [214] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(215),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 2),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [215] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 3),
    },
    [216] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [217] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(218),
    },
    [218] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [219] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(220),
    },
    [220] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(221),
    },
    [221] = {
        [ts_sym_expression] = SHIFT(222),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(223),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(224),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(225),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [222] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(227),
        [ts_aux_sym_3] = SHIFT(228),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(226),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [223] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(227),
        [ts_aux_sym_3] = SHIFT(228),
        [ts_aux_sym_7] = SHIFT(226),
    },
    [224] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(226),
    },
    [225] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [226] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [227] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(230),
        [ts_aux_sym_7] = SHIFT(229),
    },
    [228] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(229),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [229] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [230] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(231),
    },
    [231] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [232] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [233] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(236),
        [ts_aux_sym_7] = SHIFT(235),
    },
    [234] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(235),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [235] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [236] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(237),
    },
    [237] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [238] = {
        [ts_sym_expression] = SHIFT(239),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [239] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [240] = {
        [ts_sym_expression] = SHIFT(241),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [241] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(242),
        [ts_aux_sym_7] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = SHIFT(244),
        [ts_aux_sym_11] = SHIFT(245),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = SHIFT(246),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = SHIFT(246),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = SHIFT(248),
        [ts_aux_sym_19] = SHIFT(249),
        [ts_aux_sym_20] = SHIFT(249),
        [ts_aux_sym_21] = SHIFT(249),
        [ts_aux_sym_22] = SHIFT(249),
        [ts_aux_sym_23] = SHIFT(249),
        [ts_aux_sym_24] = SHIFT(249),
    },
    [242] = {
        [ts_sym_expression] = SHIFT(257),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(258),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(259),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [243] = {
        [ts_sym_expression] = SHIFT(256),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [244] = {
        [ts_sym_identifier] = SHIFT(255),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [245] = {
        [ts_sym_identifier] = SHIFT(254),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [246] = {
        [ts_sym_expression] = SHIFT(253),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [247] = {
        [ts_sym_expression] = SHIFT(252),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [248] = {
        [ts_sym_expression] = SHIFT(251),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [249] = {
        [ts_sym_expression] = SHIFT(250),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_13] = SHIFT(35),
        [ts_aux_sym_16] = SHIFT(36),
    },
    [250] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = SHIFT(246),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = SHIFT(246),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = SHIFT(248),
        [ts_aux_sym_19] = SHIFT(249),
        [ts_aux_sym_20] = SHIFT(249),
        [ts_aux_sym_21] = SHIFT(249),
        [ts_aux_sym_22] = SHIFT(249),
        [ts_aux_sym_23] = SHIFT(249),
        [ts_aux_sym_24] = SHIFT(249),
    },
    [251] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = SHIFT(246),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = SHIFT(246),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = SHIFT(248),
        [ts_aux_sym_19] = SHIFT(249),
        [ts_aux_sym_20] = SHIFT(249),
        [ts_aux_sym_21] = SHIFT(249),
        [ts_aux_sym_22] = SHIFT(249),
        [ts_aux_sym_23] = SHIFT(249),
        [ts_aux_sym_24] = SHIFT(249),
    },
    [252] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [253] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = SHIFT(246),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = SHIFT(246),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = SHIFT(248),
        [ts_aux_sym_19] = SHIFT(249),
        [ts_aux_sym_20] = SHIFT(249),
        [ts_aux_sym_21] = SHIFT(249),
        [ts_aux_sym_22] = SHIFT(249),
        [ts_aux_sym_23] = SHIFT(249),
        [ts_aux_sym_24] = SHIFT(249),
    },
    [254] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [255] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [256] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(243),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(38),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(243),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(247),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [257] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(261),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(260),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [258] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(260),
    },
    [259] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [260] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [261] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(262),
    },
    [262] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [263] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [264] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(265),
    },
    [265] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [266] = {
        [ts_sym_enum_value] = SHIFT(267),
        [ts_builtin_sym_error] = SHIFT(264),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(263),
    },
    [267] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(268),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(265),
    },
    [268] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(269),
    },
    [269] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [270] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 2),
        [ts_aux_sym_6] = SHIFT(275),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [271] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(272),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(272),
        [ts_aux_sym_7] = SHIFT(273),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [272] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(274),
    },
    [273] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [274] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [275] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(276),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(276),
        [ts_aux_sym_7] = SHIFT(274),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [276] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(277),
    },
    [277] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [278] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 2),
        [ts_aux_sym_6] = SHIFT(283),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [279] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(280),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(280),
        [ts_aux_sym_7] = SHIFT(281),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [280] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(282),
    },
    [281] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [282] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [283] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(284),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(284),
        [ts_aux_sym_7] = SHIFT(282),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [284] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(285),
    },
    [285] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [286] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [287] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [288] = {
        [ts_sym_identifier] = SHIFT(311),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(312),
    },
    [289] = {
        [ts_sym_identifier] = SHIFT(303),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(304),
    },
    [290] = {
        [ts_sym_identifier] = SHIFT(291),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(292),
    },
    [291] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(299),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [292] = {
        [ts_sym_enum_value] = SHIFT(293),
        [ts_builtin_sym_error] = SHIFT(294),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(295),
    },
    [293] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(297),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(296),
    },
    [294] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(296),
    },
    [295] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [296] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [297] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(298),
    },
    [298] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [299] = {
        [ts_sym_enum_value] = SHIFT(300),
        [ts_builtin_sym_error] = SHIFT(297),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(296),
    },
    [300] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(301),
        [ts_aux_sym_3] = SHIFT(55),
        [ts_aux_sym_7] = SHIFT(298),
    },
    [301] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(302),
    },
    [302] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [303] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(308),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [304] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(305),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(305),
        [ts_aux_sym_7] = SHIFT(306),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [305] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(307),
    },
    [306] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [307] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [308] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(67),
        [ts_builtin_sym_error] = SHIFT(309),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_union_type_repeat0] = SHIFT(309),
        [ts_aux_sym_7] = SHIFT(307),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [309] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(310),
    },
    [310] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [311] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(316),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [312] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(313),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(313),
        [ts_aux_sym_7] = SHIFT(314),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [313] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(315),
    },
    [314] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [315] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [316] = {
        [ts_sym_type] = SHIFT(65),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(317),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(317),
        [ts_aux_sym_7] = SHIFT(315),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [317] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(318),
    },
    [318] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [319] = {
        [ts_sym_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_primitive_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_struct_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_union_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_enum_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_identifier] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_const] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_short] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_long] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_union] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_enum] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
    },
    [320] = {
        [ts_sym_type_expression] = SHIFT(321),
        [ts_sym_pointer_type] = SHIFT(113),
        [ts_sym_identifier] = SHIFT(113),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(114),
    },
    [321] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(322),
    },
    [322] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_define] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_call] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_typedef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_var_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_function_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_union_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_typedef, 4),
        [ts_builtin_sym_end] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_else] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_include] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_define] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_typedef, 4),
    },
    [323] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_ifndef, 2),
    },
    [324] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_ifdef, 2),
    },
    [325] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_seq] = SHIFT(326),
    },
    [326] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_define, 3),
    },
    [327] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_include, 2),
    },
    [328] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [329] = {
        [ts_sym_type_expression] = SHIFT(330),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(332),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [330] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(335),
        [ts_aux_sym_2] = SHIFT(336),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [331] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [332] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(335),
        [ts_aux_sym_2] = SHIFT(336),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [333] = {
        [ts_sym_type_expression] = SHIFT(334),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [334] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_pointer_type, 2),
    },
    [335] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(387),
    },
    [336] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
    },
    [337] = {
        [ts_sym_type_expression] = SHIFT(338),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(339),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [338] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(340),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [339] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(340),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [340] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 3),
    },
    [341] = {
        [ts_sym_expression] = SHIFT(342),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [342] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_4] = SHIFT(366),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = SHIFT(368),
        [ts_aux_sym_11] = SHIFT(369),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = SHIFT(370),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = SHIFT(370),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = SHIFT(372),
        [ts_aux_sym_19] = SHIFT(373),
        [ts_aux_sym_20] = SHIFT(373),
        [ts_aux_sym_21] = SHIFT(373),
        [ts_aux_sym_22] = SHIFT(373),
        [ts_aux_sym_23] = SHIFT(373),
        [ts_aux_sym_24] = SHIFT(373),
    },
    [343] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(364),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [344] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [345] = {
        [ts_sym_type] = SHIFT(351),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [346] = {
        [ts_sym_expression] = SHIFT(350),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [347] = {
        [ts_sym_expression] = SHIFT(348),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [348] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [349] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [350] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [351] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(352),
    },
    [352] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(353),
    },
    [353] = {
        [ts_sym_expression] = SHIFT(354),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(355),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(356),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(357),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [354] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(359),
        [ts_aux_sym_3] = SHIFT(360),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(358),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [355] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(359),
        [ts_aux_sym_3] = SHIFT(360),
        [ts_aux_sym_7] = SHIFT(358),
    },
    [356] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(358),
    },
    [357] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [358] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [359] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(362),
        [ts_aux_sym_7] = SHIFT(361),
    },
    [360] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(361),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [361] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [362] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(363),
    },
    [363] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [364] = {
        [ts_sym_expression] = SHIFT(365),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [365] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(366),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = SHIFT(368),
        [ts_aux_sym_11] = SHIFT(369),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = SHIFT(370),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = SHIFT(370),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = SHIFT(372),
        [ts_aux_sym_19] = SHIFT(373),
        [ts_aux_sym_20] = SHIFT(373),
        [ts_aux_sym_21] = SHIFT(373),
        [ts_aux_sym_22] = SHIFT(373),
        [ts_aux_sym_23] = SHIFT(373),
        [ts_aux_sym_24] = SHIFT(373),
    },
    [366] = {
        [ts_sym_expression] = SHIFT(381),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(382),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(383),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [367] = {
        [ts_sym_expression] = SHIFT(380),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [368] = {
        [ts_sym_identifier] = SHIFT(379),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [369] = {
        [ts_sym_identifier] = SHIFT(378),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [370] = {
        [ts_sym_expression] = SHIFT(377),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [371] = {
        [ts_sym_expression] = SHIFT(376),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [372] = {
        [ts_sym_expression] = SHIFT(375),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [373] = {
        [ts_sym_expression] = SHIFT(374),
        [ts_sym_field_access] = SHIFT(343),
        [ts_sym_deref_field_access] = SHIFT(343),
        [ts_sym_function_call] = SHIFT(344),
        [ts_sym_math_op] = SHIFT(344),
        [ts_sym_bool_op] = SHIFT(344),
        [ts_sym_rel_op] = SHIFT(344),
        [ts_sym_assignment] = SHIFT(344),
        [ts_sym_compound_literal] = SHIFT(344),
        [ts_sym_number] = SHIFT(344),
        [ts_sym_char] = SHIFT(344),
        [ts_sym_string] = SHIFT(344),
        [ts_sym_identifier] = SHIFT(343),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(345),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_16] = SHIFT(347),
    },
    [374] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = SHIFT(370),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = SHIFT(370),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = SHIFT(372),
        [ts_aux_sym_19] = SHIFT(373),
        [ts_aux_sym_20] = SHIFT(373),
        [ts_aux_sym_21] = SHIFT(373),
        [ts_aux_sym_22] = SHIFT(373),
        [ts_aux_sym_23] = SHIFT(373),
        [ts_aux_sym_24] = SHIFT(373),
    },
    [375] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = SHIFT(370),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = SHIFT(370),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = SHIFT(372),
        [ts_aux_sym_19] = SHIFT(373),
        [ts_aux_sym_20] = SHIFT(373),
        [ts_aux_sym_21] = SHIFT(373),
        [ts_aux_sym_22] = SHIFT(373),
        [ts_aux_sym_23] = SHIFT(373),
        [ts_aux_sym_24] = SHIFT(373),
    },
    [376] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [377] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = SHIFT(370),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = SHIFT(370),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = SHIFT(372),
        [ts_aux_sym_19] = SHIFT(373),
        [ts_aux_sym_20] = SHIFT(373),
        [ts_aux_sym_21] = SHIFT(373),
        [ts_aux_sym_22] = SHIFT(373),
        [ts_aux_sym_23] = SHIFT(373),
        [ts_aux_sym_24] = SHIFT(373),
    },
    [378] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [379] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [380] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(367),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(349),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(367),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(371),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [381] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(385),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(384),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [382] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(384),
    },
    [383] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [384] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [385] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(386),
    },
    [386] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [387] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
    },
    [388] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_call, 2),
    },
    [389] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_enum_declaration, 2),
    },
    [390] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_union_declaration, 2),
    },
    [391] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_struct_declaration, 2),
    },
    [392] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(397),
        [ts_aux_sym_2] = SHIFT(398),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_4] = SHIFT(399),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [393] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [394] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(397),
        [ts_aux_sym_2] = SHIFT(398),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [395] = {
        [ts_sym_type_expression] = SHIFT(396),
        [ts_sym_pointer_type] = SHIFT(393),
        [ts_sym_identifier] = SHIFT(393),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(395),
    },
    [396] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_pointer_type, 2),
    },
    [397] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(336),
    },
    [398] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
    },
    [399] = {
        [ts_sym_type] = SHIFT(400),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_formal_parameters] = SHIFT(401),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(402),
        [ts_builtin_sym_error] = SHIFT(403),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 0),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [400] = {
        [ts_sym_type_expression] = SHIFT(629),
        [ts_sym_pointer_type] = SHIFT(630),
        [ts_sym_identifier] = SHIFT(630),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(631),
    },
    [401] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(408),
    },
    [402] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(404),
        [ts_aux_sym_3] = SHIFT(405),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [403] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [404] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 2),
    },
    [405] = {
        [ts_sym_type] = SHIFT(400),
        [ts_sym_primitive_type] = SHIFT(66),
        [ts_sym_struct_type] = SHIFT(66),
        [ts_sym_union_type] = SHIFT(66),
        [ts_sym_enum_type] = SHIFT(66),
        [ts_sym_field] = SHIFT(406),
        [ts_sym_identifier] = SHIFT(69),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(70),
        [ts_aux_sym_const] = SHIFT(72),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(73),
        [ts_aux_sym_union] = SHIFT(74),
        [ts_aux_sym_enum] = SHIFT(75),
    },
    [406] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(407),
        [ts_aux_sym_3] = SHIFT(405),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 2),
    },
    [407] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 3),
    },
    [408] = {
        [ts_sym_statement_block] = SHIFT(409),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(409),
        [ts_aux_sym_6] = SHIFT(410),
    },
    [409] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_define] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_call] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_typedef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_var_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_function_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_union_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_builtin_sym_end] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_else] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_include] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_define] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_function_declaration, 6),
    },
    [410] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(412),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_builtin_sym_error] = SHIFT(417),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(417),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_7] = SHIFT(422),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [411] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_union_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression] = REDUCE(ts_sym_statement, 1),
        [ts_sym_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_function_call] = REDUCE(ts_sym_statement, 1),
        [ts_sym_math_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_assignment] = REDUCE(ts_sym_statement, 1),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement, 1),
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),
        [ts_sym_char] = REDUCE(ts_sym_statement, 1),
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement, 1),
    },
    [412] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(412),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(628),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 1),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [413] = {
        [ts_sym_type_expression] = SHIFT(624),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(625),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [414] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(623),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [415] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(620),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [416] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [417] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(622),
    },
    [418] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
        [ts_aux_sym_9] = SHIFT(620),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [419] = {
        [ts_sym_type] = SHIFT(614),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
    },
    [420] = {
        [ts_sym_type] = SHIFT(601),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [421] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(412),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_builtin_sym_error] = SHIFT(598),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(598),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_7] = SHIFT(599),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [422] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
    },
    [423] = {
        [ts_sym_expression] = SHIFT(596),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [424] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(533),
    },
    [425] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(480),
    },
    [426] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(432),
    },
    [427] = {
        [ts_sym_expression] = SHIFT(431),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [428] = {
        [ts_sym_expression] = SHIFT(429),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [429] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [430] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [431] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [432] = {
        [ts_sym_expression] = SHIFT(433),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [433] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(478),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [434] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(455),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [435] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
    },
    [436] = {
        [ts_sym_type] = SHIFT(442),
        [ts_sym_primitive_type] = SHIFT(41),
        [ts_sym_struct_type] = SHIFT(41),
        [ts_sym_union_type] = SHIFT(41),
        [ts_sym_enum_type] = SHIFT(41),
        [ts_sym_identifier] = SHIFT(42),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(43),
        [ts_aux_sym_const] = SHIFT(44),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(45),
        [ts_aux_sym_union] = SHIFT(46),
        [ts_aux_sym_enum] = SHIFT(47),
    },
    [437] = {
        [ts_sym_expression] = SHIFT(441),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [438] = {
        [ts_sym_expression] = SHIFT(439),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [439] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
    },
    [440] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [441] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
    },
    [442] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(443),
    },
    [443] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(444),
    },
    [444] = {
        [ts_sym_expression] = SHIFT(445),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(446),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(447),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(448),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [445] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(450),
        [ts_aux_sym_3] = SHIFT(451),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(449),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [446] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(450),
        [ts_aux_sym_3] = SHIFT(451),
        [ts_aux_sym_7] = SHIFT(449),
    },
    [447] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(449),
    },
    [448] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [449] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [450] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(453),
        [ts_aux_sym_7] = SHIFT(452),
    },
    [451] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(452),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [452] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [453] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(454),
    },
    [454] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [455] = {
        [ts_sym_expression] = SHIFT(456),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [456] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [457] = {
        [ts_sym_expression] = SHIFT(472),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(473),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(474),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [458] = {
        [ts_sym_expression] = SHIFT(471),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [459] = {
        [ts_sym_identifier] = SHIFT(470),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [460] = {
        [ts_sym_identifier] = SHIFT(469),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [461] = {
        [ts_sym_expression] = SHIFT(468),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [462] = {
        [ts_sym_expression] = SHIFT(467),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [463] = {
        [ts_sym_expression] = SHIFT(466),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [464] = {
        [ts_sym_expression] = SHIFT(465),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [465] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [466] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [467] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [468] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [469] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [470] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [471] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [472] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(476),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(475),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [473] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(475),
    },
    [474] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [475] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [476] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(477),
    },
    [477] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [478] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(479),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [479] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_while_statement, 5),
    },
    [480] = {
        [ts_sym_var_declaration] = SHIFT(481),
        [ts_sym_type] = SHIFT(482),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(483),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(484),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(481),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [481] = {
        [ts_sym_expression] = SHIFT(528),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(529),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [482] = {
        [ts_sym_type_expression] = SHIFT(524),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(525),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [483] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(491),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [484] = {
        [ts_sym_type] = SHIFT(485),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
    },
    [485] = {
        [ts_sym_type_expression] = SHIFT(486),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(487),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [486] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(488),
        [ts_aux_sym_2] = SHIFT(489),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [487] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(488),
        [ts_aux_sym_2] = SHIFT(489),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [488] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(490),
    },
    [489] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 4),
    },
    [490] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 5),
    },
    [491] = {
        [ts_sym_expression] = SHIFT(513),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(514),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [492] = {
        [ts_sym_expression] = SHIFT(507),
        [ts_sym_field_access] = SHIFT(163),
        [ts_sym_deref_field_access] = SHIFT(163),
        [ts_sym_function_call] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(164),
        [ts_sym_bool_op] = SHIFT(164),
        [ts_sym_rel_op] = SHIFT(164),
        [ts_sym_assignment] = SHIFT(164),
        [ts_sym_compound_literal] = SHIFT(164),
        [ts_builtin_sym_error] = SHIFT(508),
        [ts_sym_number] = SHIFT(164),
        [ts_sym_char] = SHIFT(164),
        [ts_sym_string] = SHIFT(164),
        [ts_sym_identifier] = SHIFT(163),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(166),
        [ts_aux_sym_5] = SHIFT(509),
        [ts_aux_sym_13] = SHIFT(168),
        [ts_aux_sym_16] = SHIFT(169),
    },
    [493] = {
        [ts_sym_expression] = SHIFT(506),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [494] = {
        [ts_sym_identifier] = SHIFT(505),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [495] = {
        [ts_sym_identifier] = SHIFT(504),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [496] = {
        [ts_sym_expression] = SHIFT(503),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [497] = {
        [ts_sym_expression] = SHIFT(502),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [498] = {
        [ts_sym_expression] = SHIFT(501),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [499] = {
        [ts_sym_expression] = SHIFT(500),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [500] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [501] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [502] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [503] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [504] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [505] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
    },
    [506] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [507] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(511),
        [ts_aux_sym_3] = SHIFT(213),
        [ts_aux_sym_4] = SHIFT(193),
        [ts_aux_sym_5] = SHIFT(510),
        [ts_aux_sym_8] = SHIFT(194),
        [ts_aux_sym_10] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(196),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(197),
        [ts_aux_sym_14] = SHIFT(194),
        [ts_aux_sym_15] = SHIFT(197),
        [ts_aux_sym_17] = SHIFT(198),
        [ts_aux_sym_18] = SHIFT(199),
        [ts_aux_sym_19] = SHIFT(200),
        [ts_aux_sym_20] = SHIFT(200),
        [ts_aux_sym_21] = SHIFT(200),
        [ts_aux_sym_22] = SHIFT(200),
        [ts_aux_sym_23] = SHIFT(200),
        [ts_aux_sym_24] = SHIFT(200),
    },
    [508] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(510),
    },
    [509] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
    },
    [510] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
    },
    [511] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(512),
    },
    [512] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
    },
    [513] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(520),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [514] = {
        [ts_sym_expression] = SHIFT(515),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(516),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [515] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(518),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [516] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(517),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [517] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 7),
    },
    [518] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(519),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [519] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 8),
    },
    [520] = {
        [ts_sym_expression] = SHIFT(521),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(518),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [521] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(522),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [522] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(523),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [523] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 9),
    },
    [524] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(526),
        [ts_aux_sym_2] = SHIFT(527),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [525] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(526),
        [ts_aux_sym_2] = SHIFT(527),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [526] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(489),
    },
    [527] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 3),
    },
    [528] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(514),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [529] = {
        [ts_sym_expression] = SHIFT(530),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(531),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [530] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(516),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [531] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(532),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [532] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 6),
    },
    [533] = {
        [ts_sym_expression] = SHIFT(534),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_builtin_sym_error] = SHIFT(535),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [534] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(536),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [535] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(536),
    },
    [536] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(538),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [537] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_union_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression] = REDUCE(ts_sym_statement, 1),
        [ts_sym_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_function_call] = REDUCE(ts_sym_statement, 1),
        [ts_sym_math_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_assignment] = REDUCE(ts_sym_statement, 1),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement, 1),
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),
        [ts_sym_char] = REDUCE(ts_sym_statement, 1),
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement, 1),
    },
    [538] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(594),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_if_statement, 5),
    },
    [539] = {
        [ts_sym_type_expression] = SHIFT(590),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(591),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [540] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(589),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [541] = {
        [ts_sym_type] = SHIFT(583),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
    },
    [542] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(412),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_builtin_sym_error] = SHIFT(580),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(580),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_7] = SHIFT(581),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [543] = {
        [ts_sym_expression] = SHIFT(578),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [544] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(571),
    },
    [545] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(551),
    },
    [546] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(547),
    },
    [547] = {
        [ts_sym_expression] = SHIFT(548),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [548] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(549),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [549] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(550),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [550] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_else] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_while_statement, 5),
    },
    [551] = {
        [ts_sym_var_declaration] = SHIFT(552),
        [ts_sym_type] = SHIFT(482),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(553),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(484),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(552),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [552] = {
        [ts_sym_expression] = SHIFT(566),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(567),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [553] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(554),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [554] = {
        [ts_sym_expression] = SHIFT(555),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(556),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [555] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(562),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [556] = {
        [ts_sym_expression] = SHIFT(557),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(558),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [557] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(560),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [558] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(559),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [559] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 7),
    },
    [560] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(561),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [561] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 8),
    },
    [562] = {
        [ts_sym_expression] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(560),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [563] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [564] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(565),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [565] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 9),
    },
    [566] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(556),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [567] = {
        [ts_sym_expression] = SHIFT(568),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_5] = SHIFT(569),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [568] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(558),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [569] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(570),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [570] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_for_statement, 6),
    },
    [571] = {
        [ts_sym_expression] = SHIFT(572),
        [ts_sym_field_access] = SHIFT(434),
        [ts_sym_deref_field_access] = SHIFT(434),
        [ts_sym_function_call] = SHIFT(435),
        [ts_sym_math_op] = SHIFT(435),
        [ts_sym_bool_op] = SHIFT(435),
        [ts_sym_rel_op] = SHIFT(435),
        [ts_sym_assignment] = SHIFT(435),
        [ts_sym_compound_literal] = SHIFT(435),
        [ts_builtin_sym_error] = SHIFT(573),
        [ts_sym_number] = SHIFT(435),
        [ts_sym_char] = SHIFT(435),
        [ts_sym_string] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(434),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(436),
        [ts_aux_sym_13] = SHIFT(437),
        [ts_aux_sym_16] = SHIFT(438),
    },
    [572] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(457),
        [ts_aux_sym_5] = SHIFT(574),
        [ts_aux_sym_8] = SHIFT(458),
        [ts_aux_sym_10] = SHIFT(459),
        [ts_aux_sym_11] = SHIFT(460),
        [ts_aux_sym_12] = SHIFT(440),
        [ts_aux_sym_13] = SHIFT(461),
        [ts_aux_sym_14] = SHIFT(458),
        [ts_aux_sym_15] = SHIFT(461),
        [ts_aux_sym_17] = SHIFT(462),
        [ts_aux_sym_18] = SHIFT(463),
        [ts_aux_sym_19] = SHIFT(464),
        [ts_aux_sym_20] = SHIFT(464),
        [ts_aux_sym_21] = SHIFT(464),
        [ts_aux_sym_22] = SHIFT(464),
        [ts_aux_sym_23] = SHIFT(464),
        [ts_aux_sym_24] = SHIFT(464),
    },
    [573] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(574),
    },
    [574] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(575),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [575] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(576),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_if_statement, 5),
    },
    [576] = {
        [ts_sym_var_declaration] = SHIFT(537),
        [ts_sym_statement_block] = SHIFT(537),
        [ts_sym_statement] = SHIFT(577),
        [ts_sym_return_statement] = SHIFT(537),
        [ts_sym_expression_statement] = SHIFT(537),
        [ts_sym_if_statement] = SHIFT(537),
        [ts_sym_for_statement] = SHIFT(537),
        [ts_sym_while_statement] = SHIFT(537),
        [ts_sym_type] = SHIFT(539),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(542),
        [ts_aux_sym_return] = SHIFT(543),
        [ts_aux_sym_if] = SHIFT(544),
        [ts_aux_sym_for] = SHIFT(545),
        [ts_aux_sym_while] = SHIFT(546),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [577] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_else] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_if_statement, 7),
    },
    [578] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(579),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [579] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_number] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_char] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_string] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_return_statement, 3),
    },
    [580] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(582),
    },
    [581] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement_block, 2),
    },
    [582] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement_block, 3),
    },
    [583] = {
        [ts_sym_type_expression] = SHIFT(584),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(585),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [584] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(586),
        [ts_aux_sym_2] = SHIFT(587),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [585] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(586),
        [ts_aux_sym_2] = SHIFT(587),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [586] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(588),
    },
    [587] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 4),
    },
    [588] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 5),
    },
    [589] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_char] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_else] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression_statement, 2),
    },
    [590] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(592),
        [ts_aux_sym_2] = SHIFT(593),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [591] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(592),
        [ts_aux_sym_2] = SHIFT(593),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [592] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(587),
    },
    [593] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 3),
    },
    [594] = {
        [ts_sym_var_declaration] = SHIFT(411),
        [ts_sym_statement_block] = SHIFT(411),
        [ts_sym_statement] = SHIFT(595),
        [ts_sym_return_statement] = SHIFT(411),
        [ts_sym_expression_statement] = SHIFT(411),
        [ts_sym_if_statement] = SHIFT(411),
        [ts_sym_for_statement] = SHIFT(411),
        [ts_sym_while_statement] = SHIFT(411),
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(414),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(419),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_6] = SHIFT(421),
        [ts_aux_sym_return] = SHIFT(423),
        [ts_aux_sym_if] = SHIFT(424),
        [ts_aux_sym_for] = SHIFT(425),
        [ts_aux_sym_while] = SHIFT(426),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(288),
        [ts_aux_sym_union] = SHIFT(289),
        [ts_aux_sym_enum] = SHIFT(290),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [595] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_if_statement, 7),
    },
    [596] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(597),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [597] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_number] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_char] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_string] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_return_statement, 3),
    },
    [598] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(600),
    },
    [599] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement_block, 2),
    },
    [600] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_statement_block, 3),
    },
    [601] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(602),
    },
    [602] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(603),
    },
    [603] = {
        [ts_sym_expression] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(605),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(606),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(607),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [604] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(609),
        [ts_aux_sym_3] = SHIFT(610),
        [ts_aux_sym_4] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(608),
        [ts_aux_sym_8] = SHIFT(148),
        [ts_aux_sym_10] = SHIFT(149),
        [ts_aux_sym_11] = SHIFT(150),
        [ts_aux_sym_12] = SHIFT(142),
        [ts_aux_sym_13] = SHIFT(151),
        [ts_aux_sym_14] = SHIFT(148),
        [ts_aux_sym_15] = SHIFT(151),
        [ts_aux_sym_17] = SHIFT(152),
        [ts_aux_sym_18] = SHIFT(153),
        [ts_aux_sym_19] = SHIFT(154),
        [ts_aux_sym_20] = SHIFT(154),
        [ts_aux_sym_21] = SHIFT(154),
        [ts_aux_sym_22] = SHIFT(154),
        [ts_aux_sym_23] = SHIFT(154),
        [ts_aux_sym_24] = SHIFT(154),
    },
    [605] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(609),
        [ts_aux_sym_3] = SHIFT(610),
        [ts_aux_sym_7] = SHIFT(608),
    },
    [606] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(608),
    },
    [607] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
    },
    [608] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
    },
    [609] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(612),
        [ts_aux_sym_7] = SHIFT(611),
    },
    [610] = {
        [ts_sym_expression] = SHIFT(183),
        [ts_sym_field_access] = SHIFT(132),
        [ts_sym_deref_field_access] = SHIFT(132),
        [ts_sym_function_call] = SHIFT(133),
        [ts_sym_math_op] = SHIFT(133),
        [ts_sym_bool_op] = SHIFT(133),
        [ts_sym_rel_op] = SHIFT(133),
        [ts_sym_assignment] = SHIFT(133),
        [ts_sym_compound_literal] = SHIFT(133),
        [ts_sym_struct_literal_field] = SHIFT(184),
        [ts_sym_number] = SHIFT(133),
        [ts_sym_char] = SHIFT(133),
        [ts_sym_string] = SHIFT(133),
        [ts_sym_identifier] = SHIFT(132),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(611),
        [ts_aux_sym_10] = SHIFT(138),
        [ts_aux_sym_13] = SHIFT(139),
        [ts_aux_sym_16] = SHIFT(140),
    },
    [611] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
    },
    [612] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(613),
    },
    [613] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
    },
    [614] = {
        [ts_sym_type_expression] = SHIFT(615),
        [ts_sym_pointer_type] = SHIFT(331),
        [ts_sym_var_assignment] = SHIFT(616),
        [ts_sym_identifier] = SHIFT(331),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(333),
    },
    [615] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(617),
        [ts_aux_sym_2] = SHIFT(618),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [616] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(617),
        [ts_aux_sym_2] = SHIFT(618),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [617] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(619),
    },
    [618] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 4),
    },
    [619] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 5),
    },
    [620] = {
        [ts_sym_expression] = SHIFT(621),
        [ts_sym_field_access] = SHIFT(415),
        [ts_sym_deref_field_access] = SHIFT(415),
        [ts_sym_function_call] = SHIFT(416),
        [ts_sym_math_op] = SHIFT(416),
        [ts_sym_bool_op] = SHIFT(416),
        [ts_sym_rel_op] = SHIFT(416),
        [ts_sym_assignment] = SHIFT(416),
        [ts_sym_compound_literal] = SHIFT(416),
        [ts_sym_number] = SHIFT(416),
        [ts_sym_char] = SHIFT(416),
        [ts_sym_string] = SHIFT(416),
        [ts_sym_identifier] = SHIFT(415),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(420),
        [ts_aux_sym_13] = SHIFT(427),
        [ts_aux_sym_16] = SHIFT(428),
    },
    [621] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(492),
        [ts_aux_sym_8] = SHIFT(493),
        [ts_aux_sym_10] = SHIFT(494),
        [ts_aux_sym_11] = SHIFT(495),
        [ts_aux_sym_12] = SHIFT(430),
        [ts_aux_sym_13] = SHIFT(496),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(496),
        [ts_aux_sym_17] = SHIFT(497),
        [ts_aux_sym_18] = SHIFT(498),
        [ts_aux_sym_19] = SHIFT(499),
        [ts_aux_sym_20] = SHIFT(499),
        [ts_aux_sym_21] = SHIFT(499),
        [ts_aux_sym_22] = SHIFT(499),
        [ts_aux_sym_23] = SHIFT(499),
        [ts_aux_sym_24] = SHIFT(499),
    },
    [622] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
    },
    [623] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_char] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression_statement, 2),
    },
    [624] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(626),
        [ts_aux_sym_2] = SHIFT(627),
        [ts_aux_sym_3] = SHIFT(337),
        [ts_aux_sym_9] = SHIFT(341),
    },
    [625] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(626),
        [ts_aux_sym_2] = SHIFT(627),
        [ts_aux_sym_3] = SHIFT(337),
    },
    [626] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(618),
    },
    [627] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 3),
    },
    [628] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 2),
    },
    [629] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_field, 2),
    },
    [630] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_type_expression, 1),
    },
    [631] = {
        [ts_sym_type_expression] = SHIFT(632),
        [ts_sym_pointer_type] = SHIFT(630),
        [ts_sym_identifier] = SHIFT(630),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(631),
    },
    [632] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_pointer_type, 2),
    },
    [633] = {
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c);
