#include "tree_sitter/parser.h"

#define STATE_COUNT 473
#define SYMBOL_COUNT 104

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
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
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
            ACCEPT_TOKEN(ts_aux_sym_13);
        case 142:
            if (lookahead == '.')
                ADVANCE(143);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
            ACCEPT_TOKEN(ts_sym_number);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            ACCEPT_TOKEN(ts_sym_number);
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 146:
            if (lookahead == '=')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(ts_aux_sym_22);
        case 148:
            if (lookahead == '&')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(ts_aux_sym_17);
        case 150:
            ACCEPT_TOKEN(ts_aux_sym_4);
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
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
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
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
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
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
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
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '\n')
                ADVANCE(175);
            if (lookahead == '/')
                ADVANCE(177);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(183);
            LEX_ERROR();
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '\n')
                ADVANCE(175);
            if (lookahead == '/')
                ADVANCE(177);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 177:
            if (lookahead == '*')
                ADVANCE(178);
            if (lookahead == '/')
                ADVANCE(186);
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 178:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(179);
            if (lookahead == '\\')
                ADVANCE(184);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(178);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 179:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(180);
            if (lookahead == '\\')
                ADVANCE(184);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(178);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 180:
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 181:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 182:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 184:
            if (lookahead == '\n')
                ADVANCE(185);
            if (lookahead == '*')
                ADVANCE(179);
            if (lookahead == '\\')
                ADVANCE(184);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(178);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 185:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(179);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(178);
            LEX_ERROR();
        case 186:
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(186);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 187:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(187);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(186);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 188:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '(')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
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
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == ')')
                ADVANCE(168);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
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
                ADVANCE(198);
            if (lookahead == 'i')
                ADVANCE(201);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(203);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(209);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(199);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(200);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_for);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(202);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_if);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(204);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(205);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(206);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(207);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(208);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_return);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(210);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(211);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(212);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(213);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_while);
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == '(')
                ADVANCE(150);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 218:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(218);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
            if (lookahead == '!')
                ADVANCE(146);
            if (lookahead == '&')
                ADVANCE(148);
            if (lookahead == '(')
                ADVANCE(150);
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
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
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
                ADVANCE(198);
            if (lookahead == 'i')
                ADVANCE(201);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(203);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(209);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
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
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '\'')
                ADVANCE(136);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(142);
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
                ADVANCE(224);
            if (lookahead == 'f')
                ADVANCE(198);
            if (lookahead == 'i')
                ADVANCE(201);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(203);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(209);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 224:
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
                ADVANCE(225);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(226);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(227);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_else);
        case 228:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '\n')
                ADVANCE(229);
            if (lookahead == '!')
                ADVANCE(230);
            if (lookahead == '\"')
                ADVANCE(234);
            if (lookahead == '#')
                ADVANCE(244);
            if (lookahead == '&')
                ADVANCE(276);
            if (lookahead == '\'')
                ADVANCE(278);
            if (lookahead == '(')
                ADVANCE(286);
            if (lookahead == ')')
                ADVANCE(287);
            if (lookahead == '*')
                ADVANCE(288);
            if (lookahead == '+')
                ADVANCE(289);
            if (lookahead == ',')
                ADVANCE(291);
            if (lookahead == '-')
                ADVANCE(292);
            if (lookahead == '.')
                ADVANCE(294);
            if (lookahead == '/')
                ADVANCE(295);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(302);
            if (lookahead == ';')
                ADVANCE(305);
            if (lookahead == '<')
                ADVANCE(306);
            if (lookahead == '=')
                ADVANCE(318);
            if (lookahead == '>')
                ADVANCE(320);
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
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(396);
            if (lookahead == 'c')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(340);
            if (lookahead == 'i')
                ADVANCE(343);
            if (lookahead == 'l')
                ADVANCE(345);
            if (lookahead == 'r')
                ADVANCE(349);
            if (lookahead == 's')
                ADVANCE(355);
            if (lookahead == 't')
                ADVANCE(369);
            if (lookahead == 'u')
                ADVANCE(376);
            if (lookahead == 'w')
                ADVANCE(387);
            if (lookahead == '{')
                ADVANCE(392);
            if (lookahead == '|')
                ADVANCE(393);
            if (lookahead == '}')
                ADVANCE(395);
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
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 229:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '\n')
                ADVANCE(229);
            if (lookahead == '!')
                ADVANCE(230);
            if (lookahead == '\"')
                ADVANCE(234);
            if (lookahead == '#')
                ADVANCE(244);
            if (lookahead == '&')
                ADVANCE(276);
            if (lookahead == '\'')
                ADVANCE(278);
            if (lookahead == '(')
                ADVANCE(286);
            if (lookahead == ')')
                ADVANCE(287);
            if (lookahead == '*')
                ADVANCE(288);
            if (lookahead == '+')
                ADVANCE(289);
            if (lookahead == ',')
                ADVANCE(291);
            if (lookahead == '-')
                ADVANCE(292);
            if (lookahead == '.')
                ADVANCE(294);
            if (lookahead == '/')
                ADVANCE(295);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(302);
            if (lookahead == ';')
                ADVANCE(305);
            if (lookahead == '<')
                ADVANCE(306);
            if (lookahead == '=')
                ADVANCE(318);
            if (lookahead == '>')
                ADVANCE(320);
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
                ADVANCE(322);
            if (lookahead == 'c')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(340);
            if (lookahead == 'i')
                ADVANCE(343);
            if (lookahead == 'l')
                ADVANCE(345);
            if (lookahead == 'r')
                ADVANCE(349);
            if (lookahead == 's')
                ADVANCE(355);
            if (lookahead == 't')
                ADVANCE(369);
            if (lookahead == 'u')
                ADVANCE(376);
            if (lookahead == 'w')
                ADVANCE(387);
            if (lookahead == '{')
                ADVANCE(392);
            if (lookahead == '|')
                ADVANCE(393);
            if (lookahead == '}')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 230:
            if (lookahead == '=')
                ADVANCE(231);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 231:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 232:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 233:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 234:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(235);
            if (lookahead == '\\')
                ADVANCE(236);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(234);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 235:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 236:
            if (lookahead == '\n')
                ADVANCE(237);
            if (lookahead == '\"')
                ADVANCE(243);
            if (lookahead == '\\')
                ADVANCE(236);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(234);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 237:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(238);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(242);
            LEX_ERROR();
        case 238:
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 239:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(240);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 240:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(238);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 241:
            if (lookahead == '\n')
                ADVANCE(237);
            if (lookahead == '\"')
                ADVANCE(240);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 242:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(238);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 243:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(235);
            if (lookahead == '\\')
                ADVANCE(236);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(234);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 244:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(245);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(247);
            if (lookahead == 'e')
                ADVANCE(253);
            if (lookahead == 'i')
                ADVANCE(261);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(248);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 248:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(249);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 249:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(250);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 250:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(251);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(252);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_define);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(254);
            if (lookahead == 'n')
                ADVANCE(257);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 's')
                ADVANCE(255);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(256);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_else);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(258);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(259);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(260);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_endif);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(262);
            if (lookahead == 'n')
                ADVANCE(270);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(266);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(264);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(265);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_ifdef);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(267);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(268);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(269);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_ifndef);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'c')
                ADVANCE(271);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(272);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(273);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(274);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(275);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(246);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_include);
        case 276:
            if (lookahead == '&')
                ADVANCE(277);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '&') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 277:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 278:
            if (lookahead == '\n')
                ADVANCE(140);
            if (lookahead == '\'')
                ADVANCE(233);
            if (lookahead == '\\')
                ADVANCE(279);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(285);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 279:
            if (lookahead == '\n')
                ADVANCE(280);
            if (lookahead == '\'')
                ADVANCE(282);
            if (lookahead == '\\')
                ADVANCE(284);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(285);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 280:
            if (lookahead == '\'')
                ADVANCE(281);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'')))
                ADVANCE(183);
            LEX_ERROR();
        case 281:
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 282:
            if (lookahead == '\'')
                ADVANCE(283);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 283:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 284:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\'')
                ADVANCE(283);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 285:
            if (lookahead == '\'')
                ADVANCE(283);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 286:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 287:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 288:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 289:
            if (lookahead == '+')
                ADVANCE(290);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '+') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 290:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 291:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 292:
            if (lookahead == '>')
                ADVANCE(293);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 293:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 294:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 295:
            if (lookahead == '*')
                ADVANCE(296);
            if (lookahead == '/')
                ADVANCE(300);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 296:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(297);
            if (lookahead == '\\')
                ADVANCE(299);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(296);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 297:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(298);
            if (lookahead == '\\')
                ADVANCE(299);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(296);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 298:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 299:
            if (lookahead == '\n')
                ADVANCE(185);
            if (lookahead == '*')
                ADVANCE(297);
            if (lookahead == '\\')
                ADVANCE(299);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(296);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 300:
            if (lookahead == '\\')
                ADVANCE(301);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(300);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 301:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(301);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(300);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 302:
            if (lookahead == '.')
                ADVANCE(303);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(302);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(304);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 304:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(304);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 305:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 306:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '=')
                ADVANCE(307);
            if (lookahead == '>')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(317);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 307:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(317);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 308:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 309:
            if (lookahead == '\n')
                ADVANCE(310);
            if (lookahead == '>')
                ADVANCE(316);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(317);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 310:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(311);
            if (lookahead == '\\')
                ADVANCE(312);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(315);
            LEX_ERROR();
        case 311:
            if (lookahead == '\\')
                ADVANCE(181);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(183);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 312:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(313);
            if (lookahead == '\\')
                ADVANCE(314);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(315);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 313:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(311);
            if (lookahead == '\\')
                ADVANCE(314);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(315);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 314:
            if (lookahead == '\n')
                ADVANCE(310);
            if (lookahead == '>')
                ADVANCE(313);
            if (lookahead == '\\')
                ADVANCE(314);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(315);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 315:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(311);
            if (lookahead == '\\')
                ADVANCE(314);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(315);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 316:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(317);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 317:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(317);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 318:
            if (lookahead == '=')
                ADVANCE(319);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 319:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 320:
            if (lookahead == '=')
                ADVANCE(321);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 321:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 322:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 323:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'o')
                ADVANCE(324);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 324:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(325);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 325:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 's')
                ADVANCE(326);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 326:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(327);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 327:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_const);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(329);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'x')
                ADVANCE(335);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 's')
                ADVANCE(330);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(331);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_else);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(333);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'm')
                ADVANCE(334);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_enum);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(336);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(337);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'r')
                ADVANCE(338);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(339);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_extern);
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'o')
                ADVANCE(341);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'r')
                ADVANCE(342);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_for);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(344);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_if);
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'o')
                ADVANCE(346);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 346:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(347);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'g')
                ADVANCE(348);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_long);
        case 349:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(350);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(351);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(352);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 352:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'r')
                ADVANCE(353);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(354);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_return);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'h')
                ADVANCE(356);
            if (lookahead == 't')
                ADVANCE(360);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'o')
                ADVANCE(357);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 357:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'r')
                ADVANCE(358);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 358:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(359);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 359:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_short);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'a')
                ADVANCE(361);
            if (lookahead == 'r')
                ADVANCE(365);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(362);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 362:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(363);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'c')
                ADVANCE(364);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 364:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_static);
        case 365:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(366);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 366:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'c')
                ADVANCE(367);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 367:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 't')
                ADVANCE(368);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_struct);
        case 369:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'y')
                ADVANCE(370);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 370:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'p')
                ADVANCE(371);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 371:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(372);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 372:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(373);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 373:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(374);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'f')
                ADVANCE(375);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_typedef1);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(377);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(378);
            if (lookahead == 's')
                ADVANCE(381);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'o')
                ADVANCE(379);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(380);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_union);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(382);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'g')
                ADVANCE(383);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(384);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 384:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(385);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 385:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'd')
                ADVANCE(386);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_unsigned);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'h')
                ADVANCE(388);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 388:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(389);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 390:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == 'e')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(322);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_while);
        case 392:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 393:
            if (lookahead == '\\')
                ADVANCE(232);
            if (lookahead == '|')
                ADVANCE(394);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\') ||
                (lookahead == '|')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 394:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 395:
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 396:
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '\\')
                ADVANCE(232);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(233);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '\n')
                ADVANCE(229);
            if (lookahead == '!')
                ADVANCE(230);
            if (lookahead == '\"')
                ADVANCE(234);
            if (lookahead == '#')
                ADVANCE(244);
            if (lookahead == '&')
                ADVANCE(276);
            if (lookahead == '\'')
                ADVANCE(278);
            if (lookahead == '(')
                ADVANCE(286);
            if (lookahead == ')')
                ADVANCE(287);
            if (lookahead == '*')
                ADVANCE(288);
            if (lookahead == '+')
                ADVANCE(289);
            if (lookahead == ',')
                ADVANCE(291);
            if (lookahead == '-')
                ADVANCE(292);
            if (lookahead == '.')
                ADVANCE(294);
            if (lookahead == '/')
                ADVANCE(295);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(302);
            if (lookahead == ';')
                ADVANCE(305);
            if (lookahead == '<')
                ADVANCE(306);
            if (lookahead == '=')
                ADVANCE(318);
            if (lookahead == '>')
                ADVANCE(320);
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
                ADVANCE(322);
            if (lookahead == 'c')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(340);
            if (lookahead == 'i')
                ADVANCE(343);
            if (lookahead == 'l')
                ADVANCE(345);
            if (lookahead == 'r')
                ADVANCE(349);
            if (lookahead == 's')
                ADVANCE(355);
            if (lookahead == 't')
                ADVANCE(369);
            if (lookahead == 'u')
                ADVANCE(376);
            if (lookahead == 'w')
                ADVANCE(387);
            if (lookahead == '{')
                ADVANCE(392);
            if (lookahead == '|')
                ADVANCE(393);
            if (lookahead == '}')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(233);
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
    [31] = 145,
    [32] = 165,
    [33] = 145,
    [34] = 134,
    [35] = 134,
    [36] = 145,
    [37] = 145,
    [38] = 145,
    [39] = 134,
    [40] = 145,
    [41] = 167,
    [42] = 134,
    [43] = 108,
    [44] = 108,
    [45] = 134,
    [46] = 134,
    [47] = 134,
    [48] = 134,
    [49] = 145,
    [50] = 145,
    [51] = 145,
    [52] = 145,
    [53] = 165,
    [54] = 165,
    [55] = 145,
    [56] = 169,
    [57] = 170,
    [58] = 169,
    [59] = 171,
    [60] = 145,
    [61] = 134,
    [62] = 134,
    [63] = 169,
    [64] = 169,
    [65] = 169,
    [66] = 145,
    [67] = 134,
    [68] = 169,
    [69] = 167,
    [70] = 134,
    [71] = 108,
    [72] = 108,
    [73] = 134,
    [74] = 134,
    [75] = 134,
    [76] = 134,
    [77] = 169,
    [78] = 169,
    [79] = 169,
    [80] = 169,
    [81] = 170,
    [82] = 170,
    [83] = 169,
    [84] = 169,
    [85] = 171,
    [86] = 169,
    [87] = 169,
    [88] = 171,
    [89] = 134,
    [90] = 169,
    [91] = 171,
    [92] = 169,
    [93] = 171,
    [94] = 145,
    [95] = 94,
    [96] = 131,
    [97] = 108,
    [98] = 129,
    [99] = 131,
    [100] = 94,
    [101] = 127,
    [102] = 129,
    [103] = 131,
    [104] = 94,
    [105] = 126,
    [106] = 172,
    [107] = 92,
    [108] = 92,
    [109] = 173,
    [110] = 131,
    [111] = 92,
    [112] = 108,
    [113] = 94,
    [114] = 119,
    [115] = 124,
    [116] = 124,
    [117] = 124,
    [118] = 174,
    [119] = 127,
    [120] = 129,
    [121] = 131,
    [122] = 92,
    [123] = 92,
    [124] = 131,
    [125] = 92,
    [126] = 127,
    [127] = 129,
    [128] = 131,
    [129] = 92,
    [130] = 174,
    [131] = 172,
    [132] = 131,
    [133] = 92,
    [134] = 92,
    [135] = 172,
    [136] = 131,
    [137] = 92,
    [138] = 174,
    [139] = 172,
    [140] = 173,
    [141] = 131,
    [142] = 92,
    [143] = 92,
    [144] = 172,
    [145] = 131,
    [146] = 172,
    [147] = 131,
    [148] = 92,
    [149] = 92,
    [150] = 92,
    [151] = 94,
    [152] = 172,
    [153] = 131,
    [154] = 173,
    [155] = 173,
    [156] = 92,
    [157] = 173,
    [158] = 172,
    [159] = 131,
    [160] = 94,
    [161] = 126,
    [162] = 172,
    [163] = 131,
    [164] = 94,
    [165] = 94,
    [166] = 172,
    [167] = 131,
    [168] = 94,
    [169] = 108,
    [170] = 92,
    [171] = 124,
    [172] = 124,
    [173] = 124,
    [174] = 174,
    [175] = 127,
    [176] = 129,
    [177] = 131,
    [178] = 92,
    [179] = 92,
    [180] = 131,
    [181] = 92,
    [182] = 127,
    [183] = 129,
    [184] = 131,
    [185] = 92,
    [186] = 174,
    [187] = 172,
    [188] = 131,
    [189] = 92,
    [190] = 92,
    [191] = 172,
    [192] = 131,
    [193] = 92,
    [194] = 174,
    [195] = 172,
    [196] = 131,
    [197] = 92,
    [198] = 92,
    [199] = 172,
    [200] = 131,
    [201] = 92,
    [202] = 104,
    [203] = 92,
    [204] = 173,
    [205] = 1,
    [206] = 1,
    [207] = 1,
    [208] = 175,
    [209] = 1,
    [210] = 1,
    [211] = 92,
    [212] = 92,
    [213] = 189,
    [214] = 189,
    [215] = 190,
    [216] = 92,
    [217] = 189,
    [218] = 173,
    [219] = 1,
    [220] = 92,
    [221] = 189,
    [222] = 190,
    [223] = 173,
    [224] = 134,
    [225] = 191,
    [226] = 192,
    [227] = 191,
    [228] = 134,
    [229] = 134,
    [230] = 191,
    [231] = 191,
    [232] = 191,
    [233] = 134,
    [234] = 191,
    [235] = 167,
    [236] = 134,
    [237] = 108,
    [238] = 108,
    [239] = 134,
    [240] = 134,
    [241] = 134,
    [242] = 134,
    [243] = 191,
    [244] = 191,
    [245] = 191,
    [246] = 191,
    [247] = 192,
    [248] = 192,
    [249] = 191,
    [250] = 169,
    [251] = 171,
    [252] = 191,
    [253] = 191,
    [254] = 171,
    [255] = 191,
    [256] = 1,
    [257] = 1,
    [258] = 1,
    [259] = 1,
    [260] = 1,
    [261] = 189,
    [262] = 190,
    [263] = 193,
    [264] = 194,
    [265] = 92,
    [266] = 171,
    [267] = 195,
    [268] = 171,
    [269] = 171,
    [270] = 104,
    [271] = 195,
    [272] = 171,
    [273] = 196,
    [274] = 1,
    [275] = 197,
    [276] = 197,
    [277] = 197,
    [278] = 92,
    [279] = 214,
    [280] = 215,
    [281] = 214,
    [282] = 131,
    [283] = 216,
    [284] = 104,
    [285] = 197,
    [286] = 1,
    [287] = 134,
    [288] = 217,
    [289] = 217,
    [290] = 217,
    [291] = 134,
    [292] = 134,
    [293] = 214,
    [294] = 214,
    [295] = 214,
    [296] = 134,
    [297] = 218,
    [298] = 219,
    [299] = 218,
    [300] = 134,
    [301] = 134,
    [302] = 218,
    [303] = 218,
    [304] = 218,
    [305] = 134,
    [306] = 218,
    [307] = 167,
    [308] = 134,
    [309] = 108,
    [310] = 108,
    [311] = 134,
    [312] = 134,
    [313] = 134,
    [314] = 134,
    [315] = 218,
    [316] = 218,
    [317] = 218,
    [318] = 218,
    [319] = 219,
    [320] = 219,
    [321] = 218,
    [322] = 169,
    [323] = 171,
    [324] = 218,
    [325] = 218,
    [326] = 171,
    [327] = 218,
    [328] = 220,
    [329] = 197,
    [330] = 221,
    [331] = 222,
    [332] = 92,
    [333] = 214,
    [334] = 104,
    [335] = 92,
    [336] = 189,
    [337] = 190,
    [338] = 173,
    [339] = 222,
    [340] = 222,
    [341] = 222,
    [342] = 167,
    [343] = 134,
    [344] = 108,
    [345] = 108,
    [346] = 134,
    [347] = 134,
    [348] = 134,
    [349] = 134,
    [350] = 214,
    [351] = 214,
    [352] = 214,
    [353] = 214,
    [354] = 215,
    [355] = 215,
    [356] = 214,
    [357] = 169,
    [358] = 171,
    [359] = 214,
    [360] = 214,
    [361] = 171,
    [362] = 214,
    [363] = 214,
    [364] = 167,
    [365] = 218,
    [366] = 220,
    [367] = 197,
    [368] = 220,
    [369] = 197,
    [370] = 167,
    [371] = 218,
    [372] = 220,
    [373] = 197,
    [374] = 189,
    [375] = 190,
    [376] = 173,
    [377] = 222,
    [378] = 214,
    [379] = 167,
    [380] = 218,
    [381] = 220,
    [382] = 197,
    [383] = 134,
    [384] = 218,
    [385] = 171,
    [386] = 220,
    [387] = 223,
    [388] = 223,
    [389] = 92,
    [390] = 214,
    [391] = 104,
    [392] = 197,
    [393] = 134,
    [394] = 217,
    [395] = 217,
    [396] = 217,
    [397] = 134,
    [398] = 218,
    [399] = 220,
    [400] = 223,
    [401] = 221,
    [402] = 222,
    [403] = 214,
    [404] = 222,
    [405] = 214,
    [406] = 167,
    [407] = 218,
    [408] = 220,
    [409] = 223,
    [410] = 220,
    [411] = 223,
    [412] = 167,
    [413] = 218,
    [414] = 220,
    [415] = 223,
    [416] = 214,
    [417] = 167,
    [418] = 218,
    [419] = 220,
    [420] = 223,
    [421] = 134,
    [422] = 218,
    [423] = 171,
    [424] = 220,
    [425] = 223,
    [426] = 220,
    [427] = 223,
    [428] = 214,
    [429] = 223,
    [430] = 131,
    [431] = 223,
    [432] = 223,
    [433] = 92,
    [434] = 189,
    [435] = 190,
    [436] = 173,
    [437] = 223,
    [438] = 223,
    [439] = 223,
    [440] = 189,
    [441] = 190,
    [442] = 173,
    [443] = 223,
    [444] = 220,
    [445] = 197,
    [446] = 214,
    [447] = 197,
    [448] = 131,
    [449] = 197,
    [450] = 197,
    [451] = 92,
    [452] = 189,
    [453] = 190,
    [454] = 173,
    [455] = 197,
    [456] = 197,
    [457] = 134,
    [458] = 214,
    [459] = 1,
    [460] = 197,
    [461] = 189,
    [462] = 190,
    [463] = 173,
    [464] = 197,
    [465] = 131,
    [466] = 195,
    [467] = 195,
    [468] = 92,
    [469] = 195,
    [470] = 173,
    [471] = 1,
    [472] = 91,
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
        [ts_aux_sym_program_repeat0] = SHIFT(472),
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
        [ts_sym_type_expression] = SHIFT(261),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(262),
        [ts_sym_identifier] = SHIFT(263),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
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
        [ts_aux_sym_2] = SHIFT(260),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [6] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(259),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [7] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(258),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [8] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_1] = SHIFT(257),
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
        [ts_sym_type] = SHIFT(212),
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
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
    },
    [12] = {
        [ts_sym_identifier] = SHIFT(211),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [13] = {
        [ts_sym_string] = SHIFT(210),
        [ts_sym_system_lib_string] = SHIFT(210),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [14] = {
        [ts_sym_identifier] = SHIFT(208),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [15] = {
        [ts_sym_identifier] = SHIFT(207),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [16] = {
        [ts_sym_identifier] = SHIFT(206),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [17] = {
        [ts_sym_type] = SHIFT(203),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [18] = {
        [ts_sym_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_primitive_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_struct_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_union_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_enum_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_identifier] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(202),
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
        [ts_sym_primitive_type] = SHIFT(170),
        [ts_sym_struct_type] = SHIFT(170),
        [ts_sym_union_type] = SHIFT(170),
        [ts_sym_enum_type] = SHIFT(170),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
    },
    [20] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(169),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
    },
    [21] = {
        [ts_sym_identifier] = SHIFT(161),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(162),
    },
    [22] = {
        [ts_sym_identifier] = SHIFT(105),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(106),
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
        [ts_aux_sym_6] = SHIFT(101),
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
        [ts_aux_sym_enum_type_repeat0] = SHIFT(96),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(95),
    },
    [27] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(95),
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
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [31] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_4] = SHIFT(41),
        [ts_aux_sym_7] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = SHIFT(43),
        [ts_aux_sym_11] = SHIFT(44),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = SHIFT(45),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = SHIFT(45),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = SHIFT(47),
        [ts_aux_sym_19] = SHIFT(48),
        [ts_aux_sym_20] = SHIFT(48),
        [ts_aux_sym_21] = SHIFT(48),
        [ts_aux_sym_22] = SHIFT(48),
        [ts_aux_sym_23] = SHIFT(48),
        [ts_aux_sym_24] = SHIFT(48),
    },
    [32] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(39),
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
        [ts_sym_expression] = SHIFT(38),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [35] = {
        [ts_sym_expression] = SHIFT(36),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [36] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(37),
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
    [37] = {
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
    [38] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(37),
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
        [ts_sym_expression] = SHIFT(40),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [40] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(41),
        [ts_aux_sym_7] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = SHIFT(43),
        [ts_aux_sym_11] = SHIFT(44),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = SHIFT(45),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = SHIFT(45),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = SHIFT(47),
        [ts_aux_sym_19] = SHIFT(48),
        [ts_aux_sym_20] = SHIFT(48),
        [ts_aux_sym_21] = SHIFT(48),
        [ts_aux_sym_22] = SHIFT(48),
        [ts_aux_sym_23] = SHIFT(48),
        [ts_aux_sym_24] = SHIFT(48),
    },
    [41] = {
        [ts_sym_expression] = SHIFT(56),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_builtin_sym_error] = SHIFT(59),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(60),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [42] = {
        [ts_sym_expression] = SHIFT(55),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [43] = {
        [ts_sym_identifier] = SHIFT(54),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [44] = {
        [ts_sym_identifier] = SHIFT(53),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [45] = {
        [ts_sym_expression] = SHIFT(52),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [46] = {
        [ts_sym_expression] = SHIFT(51),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [47] = {
        [ts_sym_expression] = SHIFT(50),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [48] = {
        [ts_sym_expression] = SHIFT(49),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(34),
        [ts_aux_sym_16] = SHIFT(35),
    },
    [49] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = SHIFT(45),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = SHIFT(45),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = SHIFT(47),
        [ts_aux_sym_19] = SHIFT(48),
        [ts_aux_sym_20] = SHIFT(48),
        [ts_aux_sym_21] = SHIFT(48),
        [ts_aux_sym_22] = SHIFT(48),
        [ts_aux_sym_23] = SHIFT(48),
        [ts_aux_sym_24] = SHIFT(48),
    },
    [50] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = SHIFT(45),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = SHIFT(45),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = SHIFT(47),
        [ts_aux_sym_19] = SHIFT(48),
        [ts_aux_sym_20] = SHIFT(48),
        [ts_aux_sym_21] = SHIFT(48),
        [ts_aux_sym_22] = SHIFT(48),
        [ts_aux_sym_23] = SHIFT(48),
        [ts_aux_sym_24] = SHIFT(48),
    },
    [51] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [52] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = SHIFT(45),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = SHIFT(45),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = SHIFT(47),
        [ts_aux_sym_19] = SHIFT(48),
        [ts_aux_sym_20] = SHIFT(48),
        [ts_aux_sym_21] = SHIFT(48),
        [ts_aux_sym_22] = SHIFT(48),
        [ts_aux_sym_23] = SHIFT(48),
        [ts_aux_sym_24] = SHIFT(48),
    },
    [53] = {
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
    [54] = {
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
    [55] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(42),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(37),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(42),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(46),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [56] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(93),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = SHIFT(66),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [57] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(67),
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
    [58] = {
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
    [59] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(66),
    },
    [60] = {
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
    [61] = {
        [ts_sym_expression] = SHIFT(65),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [62] = {
        [ts_sym_expression] = SHIFT(63),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [63] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(64),
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
    [64] = {
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
    [65] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(64),
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
    [66] = {
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
    [67] = {
        [ts_sym_expression] = SHIFT(68),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [68] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [69] = {
        [ts_sym_expression] = SHIFT(84),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_builtin_sym_error] = SHIFT(85),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(86),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [70] = {
        [ts_sym_expression] = SHIFT(83),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [71] = {
        [ts_sym_identifier] = SHIFT(82),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [72] = {
        [ts_sym_identifier] = SHIFT(81),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [73] = {
        [ts_sym_expression] = SHIFT(80),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [74] = {
        [ts_sym_expression] = SHIFT(79),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [75] = {
        [ts_sym_expression] = SHIFT(78),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [76] = {
        [ts_sym_expression] = SHIFT(77),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [77] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [78] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [79] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [80] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [81] = {
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
    [82] = {
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
    [83] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [84] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(88),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = SHIFT(87),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [85] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(87),
    },
    [86] = {
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
    [87] = {
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
    [88] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(92),
    },
    [89] = {
        [ts_sym_expression] = SHIFT(90),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [90] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(91),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 2),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [91] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 3),
    },
    [92] = {
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
    [93] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(94),
    },
    [94] = {
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
    [95] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [96] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(100),
    },
    [97] = {
        [ts_sym_enum_value] = SHIFT(98),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [98] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(99),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 2),
    },
    [99] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 3),
    },
    [100] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [101] = {
        [ts_sym_enum_value] = SHIFT(102),
        [ts_builtin_sym_error] = SHIFT(96),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(95),
    },
    [102] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(103),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(100),
    },
    [103] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(104),
    },
    [104] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [105] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 2),
        [ts_aux_sym_6] = SHIFT(158),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [106] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(110),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(110),
        [ts_aux_sym_7] = SHIFT(113),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [107] = {
        [ts_sym_type_expression] = SHIFT(154),
        [ts_sym_pointer_type] = SHIFT(155),
        [ts_sym_identifier] = SHIFT(155),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(156),
    },
    [108] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [109] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(152),
    },
    [110] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(151),
    },
    [111] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
    },
    [112] = {
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [113] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [114] = {
        [ts_sym_primitive_type] = SHIFT(149),
        [ts_sym_struct_type] = SHIFT(149),
        [ts_sym_union_type] = SHIFT(149),
        [ts_sym_enum_type] = SHIFT(149),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [115] = {
        [ts_sym_identifier] = SHIFT(138),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(139),
    },
    [116] = {
        [ts_sym_identifier] = SHIFT(130),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(131),
    },
    [117] = {
        [ts_sym_identifier] = SHIFT(118),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(119),
    },
    [118] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(126),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [119] = {
        [ts_sym_enum_value] = SHIFT(120),
        [ts_builtin_sym_error] = SHIFT(121),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(122),
    },
    [120] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(124),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(123),
    },
    [121] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(123),
    },
    [122] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [123] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [124] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(125),
    },
    [125] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [126] = {
        [ts_sym_enum_value] = SHIFT(127),
        [ts_builtin_sym_error] = SHIFT(124),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(123),
    },
    [127] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(128),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(125),
    },
    [128] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(129),
    },
    [129] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [130] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(135),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [131] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(132),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(132),
        [ts_aux_sym_7] = SHIFT(133),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [132] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(134),
    },
    [133] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [134] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [135] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(136),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(136),
        [ts_aux_sym_7] = SHIFT(134),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [136] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(137),
    },
    [137] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [138] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(146),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [139] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(141),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(141),
        [ts_aux_sym_7] = SHIFT(142),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [140] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(144),
    },
    [141] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(143),
    },
    [142] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [143] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [144] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(145),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [145] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 3),
    },
    [146] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(147),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(147),
        [ts_aux_sym_7] = SHIFT(143),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [147] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(148),
    },
    [148] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [149] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [150] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [151] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [152] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(153),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [153] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 3),
    },
    [154] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_field, 2),
    },
    [155] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
    },
    [156] = {
        [ts_sym_type_expression] = SHIFT(157),
        [ts_sym_pointer_type] = SHIFT(155),
        [ts_sym_identifier] = SHIFT(155),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(156),
    },
    [157] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
    },
    [158] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(159),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(159),
        [ts_aux_sym_7] = SHIFT(151),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [159] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(160),
    },
    [160] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [161] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 2),
        [ts_aux_sym_6] = SHIFT(166),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [162] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(163),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(163),
        [ts_aux_sym_7] = SHIFT(164),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [163] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(165),
    },
    [164] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [165] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [166] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(167),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(167),
        [ts_aux_sym_7] = SHIFT(165),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [167] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(168),
    },
    [168] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [169] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [170] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [171] = {
        [ts_sym_identifier] = SHIFT(194),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(195),
    },
    [172] = {
        [ts_sym_identifier] = SHIFT(186),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(187),
    },
    [173] = {
        [ts_sym_identifier] = SHIFT(174),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(175),
    },
    [174] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(182),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [175] = {
        [ts_sym_enum_value] = SHIFT(176),
        [ts_builtin_sym_error] = SHIFT(177),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(178),
    },
    [176] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(180),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(179),
    },
    [177] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(179),
    },
    [178] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [179] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [180] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(181),
    },
    [181] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [182] = {
        [ts_sym_enum_value] = SHIFT(183),
        [ts_builtin_sym_error] = SHIFT(180),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(179),
    },
    [183] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(184),
        [ts_aux_sym_3] = SHIFT(97),
        [ts_aux_sym_7] = SHIFT(181),
    },
    [184] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(185),
    },
    [185] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [186] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(191),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [187] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(188),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(188),
        [ts_aux_sym_7] = SHIFT(189),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [188] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(190),
    },
    [189] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [190] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [191] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(109),
        [ts_builtin_sym_error] = SHIFT(192),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_union_type_repeat0] = SHIFT(192),
        [ts_aux_sym_7] = SHIFT(190),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [192] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(193),
    },
    [193] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [194] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(199),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [195] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(196),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(196),
        [ts_aux_sym_7] = SHIFT(197),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [196] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(198),
    },
    [197] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [198] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [199] = {
        [ts_sym_type] = SHIFT(107),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(140),
        [ts_builtin_sym_error] = SHIFT(200),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(200),
        [ts_aux_sym_7] = SHIFT(198),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [200] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(201),
    },
    [201] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [202] = {
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
    [203] = {
        [ts_sym_type_expression] = SHIFT(204),
        [ts_sym_pointer_type] = SHIFT(155),
        [ts_sym_identifier] = SHIFT(155),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(156),
    },
    [204] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(205),
    },
    [205] = {
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
    [206] = {
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
    [207] = {
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
    [208] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_seq] = SHIFT(209),
    },
    [209] = {
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
    [210] = {
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
    [211] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [212] = {
        [ts_sym_type_expression] = SHIFT(213),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(215),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [213] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(218),
        [ts_aux_sym_2] = SHIFT(219),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [214] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [215] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(218),
        [ts_aux_sym_2] = SHIFT(219),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [216] = {
        [ts_sym_type_expression] = SHIFT(217),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [217] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_pointer_type, 2),
    },
    [218] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(256),
    },
    [219] = {
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
    [220] = {
        [ts_sym_type_expression] = SHIFT(221),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(222),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [221] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(223),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [222] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(223),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [223] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 3),
    },
    [224] = {
        [ts_sym_expression] = SHIFT(225),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [225] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_4] = SHIFT(235),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = SHIFT(237),
        [ts_aux_sym_11] = SHIFT(238),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = SHIFT(239),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = SHIFT(239),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = SHIFT(241),
        [ts_aux_sym_19] = SHIFT(242),
        [ts_aux_sym_20] = SHIFT(242),
        [ts_aux_sym_21] = SHIFT(242),
        [ts_aux_sym_22] = SHIFT(242),
        [ts_aux_sym_23] = SHIFT(242),
        [ts_aux_sym_24] = SHIFT(242),
    },
    [226] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(233),
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
    [227] = {
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
    [228] = {
        [ts_sym_expression] = SHIFT(232),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [229] = {
        [ts_sym_expression] = SHIFT(230),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [230] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(231),
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
    [231] = {
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
    [232] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(231),
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
    [233] = {
        [ts_sym_expression] = SHIFT(234),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [234] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(235),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = SHIFT(237),
        [ts_aux_sym_11] = SHIFT(238),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = SHIFT(239),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = SHIFT(239),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = SHIFT(241),
        [ts_aux_sym_19] = SHIFT(242),
        [ts_aux_sym_20] = SHIFT(242),
        [ts_aux_sym_21] = SHIFT(242),
        [ts_aux_sym_22] = SHIFT(242),
        [ts_aux_sym_23] = SHIFT(242),
        [ts_aux_sym_24] = SHIFT(242),
    },
    [235] = {
        [ts_sym_expression] = SHIFT(250),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_builtin_sym_error] = SHIFT(251),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(252),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [236] = {
        [ts_sym_expression] = SHIFT(249),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [237] = {
        [ts_sym_identifier] = SHIFT(248),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [238] = {
        [ts_sym_identifier] = SHIFT(247),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [239] = {
        [ts_sym_expression] = SHIFT(246),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [240] = {
        [ts_sym_expression] = SHIFT(245),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [241] = {
        [ts_sym_expression] = SHIFT(244),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [242] = {
        [ts_sym_expression] = SHIFT(243),
        [ts_sym_field_access] = SHIFT(226),
        [ts_sym_deref_field_access] = SHIFT(226),
        [ts_sym_function_call] = SHIFT(227),
        [ts_sym_math_op] = SHIFT(227),
        [ts_sym_bool_op] = SHIFT(227),
        [ts_sym_rel_op] = SHIFT(227),
        [ts_sym_assignment] = SHIFT(227),
        [ts_sym_number] = SHIFT(227),
        [ts_sym_char] = SHIFT(227),
        [ts_sym_string] = SHIFT(227),
        [ts_sym_identifier] = SHIFT(226),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(228),
        [ts_aux_sym_16] = SHIFT(229),
    },
    [243] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = SHIFT(239),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = SHIFT(239),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = SHIFT(241),
        [ts_aux_sym_19] = SHIFT(242),
        [ts_aux_sym_20] = SHIFT(242),
        [ts_aux_sym_21] = SHIFT(242),
        [ts_aux_sym_22] = SHIFT(242),
        [ts_aux_sym_23] = SHIFT(242),
        [ts_aux_sym_24] = SHIFT(242),
    },
    [244] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = SHIFT(239),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = SHIFT(239),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = SHIFT(241),
        [ts_aux_sym_19] = SHIFT(242),
        [ts_aux_sym_20] = SHIFT(242),
        [ts_aux_sym_21] = SHIFT(242),
        [ts_aux_sym_22] = SHIFT(242),
        [ts_aux_sym_23] = SHIFT(242),
        [ts_aux_sym_24] = SHIFT(242),
    },
    [245] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [246] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = SHIFT(239),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = SHIFT(239),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = SHIFT(241),
        [ts_aux_sym_19] = SHIFT(242),
        [ts_aux_sym_20] = SHIFT(242),
        [ts_aux_sym_21] = SHIFT(242),
        [ts_aux_sym_22] = SHIFT(242),
        [ts_aux_sym_23] = SHIFT(242),
        [ts_aux_sym_24] = SHIFT(242),
    },
    [247] = {
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
    [248] = {
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
    [249] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(236),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(231),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(236),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(240),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [250] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(254),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = SHIFT(253),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [251] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(253),
    },
    [252] = {
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
    [253] = {
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
    [254] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(255),
    },
    [255] = {
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
    [256] = {
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
    [257] = {
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
    [258] = {
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
    [259] = {
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
    [260] = {
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
    [261] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(470),
        [ts_aux_sym_2] = SHIFT(471),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [262] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(470),
        [ts_aux_sym_2] = SHIFT(471),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [263] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_4] = SHIFT(264),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [264] = {
        [ts_sym_type] = SHIFT(265),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_formal_parameters] = SHIFT(266),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(267),
        [ts_builtin_sym_error] = SHIFT(268),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 0),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [265] = {
        [ts_sym_type_expression] = SHIFT(466),
        [ts_sym_pointer_type] = SHIFT(467),
        [ts_sym_identifier] = SHIFT(467),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(468),
    },
    [266] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(273),
    },
    [267] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(269),
        [ts_aux_sym_3] = SHIFT(270),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [268] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [269] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 2),
    },
    [270] = {
        [ts_sym_type] = SHIFT(265),
        [ts_sym_primitive_type] = SHIFT(108),
        [ts_sym_struct_type] = SHIFT(108),
        [ts_sym_union_type] = SHIFT(108),
        [ts_sym_enum_type] = SHIFT(108),
        [ts_sym_field] = SHIFT(271),
        [ts_sym_identifier] = SHIFT(111),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(112),
        [ts_aux_sym_const] = SHIFT(114),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(115),
        [ts_aux_sym_union] = SHIFT(116),
        [ts_aux_sym_enum] = SHIFT(117),
    },
    [271] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(272),
        [ts_aux_sym_3] = SHIFT(270),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 2),
    },
    [272] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 3),
    },
    [273] = {
        [ts_sym_statement_block] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(274),
        [ts_aux_sym_6] = SHIFT(275),
    },
    [274] = {
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
    [275] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(277),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_builtin_sym_error] = SHIFT(282),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(282),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_7] = SHIFT(286),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [276] = {
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
    [277] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(277),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(465),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 1),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [278] = {
        [ts_sym_type_expression] = SHIFT(461),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(462),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [279] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(460),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [280] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(457),
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
    [281] = {
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
    [282] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(459),
    },
    [283] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
        [ts_aux_sym_9] = SHIFT(457),
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
    [284] = {
        [ts_sym_type] = SHIFT(451),
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
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
    },
    [285] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(277),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_builtin_sym_error] = SHIFT(448),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(448),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_7] = SHIFT(449),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [286] = {
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
    [287] = {
        [ts_sym_expression] = SHIFT(446),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [288] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(383),
    },
    [289] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(330),
    },
    [290] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(296),
    },
    [291] = {
        [ts_sym_expression] = SHIFT(295),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [292] = {
        [ts_sym_expression] = SHIFT(293),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [293] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(294),
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
    [294] = {
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
    [295] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(294),
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
    [296] = {
        [ts_sym_expression] = SHIFT(297),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [297] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(328),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [298] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(305),
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
    [299] = {
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
    [300] = {
        [ts_sym_expression] = SHIFT(304),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [301] = {
        [ts_sym_expression] = SHIFT(302),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [302] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = SHIFT(303),
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
    [303] = {
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
    [304] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = SHIFT(303),
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
    [305] = {
        [ts_sym_expression] = SHIFT(306),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [306] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [307] = {
        [ts_sym_expression] = SHIFT(322),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_builtin_sym_error] = SHIFT(323),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(324),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [308] = {
        [ts_sym_expression] = SHIFT(321),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [309] = {
        [ts_sym_identifier] = SHIFT(320),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [310] = {
        [ts_sym_identifier] = SHIFT(319),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [311] = {
        [ts_sym_expression] = SHIFT(318),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [312] = {
        [ts_sym_expression] = SHIFT(317),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [313] = {
        [ts_sym_expression] = SHIFT(316),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [314] = {
        [ts_sym_expression] = SHIFT(315),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [315] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [316] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [317] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [318] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [319] = {
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
    [320] = {
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
    [321] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [322] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(326),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = SHIFT(325),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [323] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(325),
    },
    [324] = {
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
    [325] = {
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
    [326] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(327),
    },
    [327] = {
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
    [328] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(329),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [329] = {
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
    [330] = {
        [ts_sym_var_declaration] = SHIFT(331),
        [ts_sym_type] = SHIFT(332),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(333),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(334),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(331),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [331] = {
        [ts_sym_expression] = SHIFT(378),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(379),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [332] = {
        [ts_sym_type_expression] = SHIFT(374),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(375),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [333] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(341),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [334] = {
        [ts_sym_type] = SHIFT(335),
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
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
    },
    [335] = {
        [ts_sym_type_expression] = SHIFT(336),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(337),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [336] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(338),
        [ts_aux_sym_2] = SHIFT(339),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [337] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(338),
        [ts_aux_sym_2] = SHIFT(339),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [338] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(340),
    },
    [339] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 4),
    },
    [340] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 5),
    },
    [341] = {
        [ts_sym_expression] = SHIFT(363),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(364),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [342] = {
        [ts_sym_expression] = SHIFT(357),
        [ts_sym_field_access] = SHIFT(57),
        [ts_sym_deref_field_access] = SHIFT(57),
        [ts_sym_function_call] = SHIFT(58),
        [ts_sym_math_op] = SHIFT(58),
        [ts_sym_bool_op] = SHIFT(58),
        [ts_sym_rel_op] = SHIFT(58),
        [ts_sym_assignment] = SHIFT(58),
        [ts_builtin_sym_error] = SHIFT(358),
        [ts_sym_number] = SHIFT(58),
        [ts_sym_char] = SHIFT(58),
        [ts_sym_string] = SHIFT(58),
        [ts_sym_identifier] = SHIFT(57),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(359),
        [ts_aux_sym_13] = SHIFT(61),
        [ts_aux_sym_16] = SHIFT(62),
    },
    [343] = {
        [ts_sym_expression] = SHIFT(356),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [344] = {
        [ts_sym_identifier] = SHIFT(355),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [345] = {
        [ts_sym_identifier] = SHIFT(354),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [346] = {
        [ts_sym_expression] = SHIFT(353),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [347] = {
        [ts_sym_expression] = SHIFT(352),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [348] = {
        [ts_sym_expression] = SHIFT(351),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [349] = {
        [ts_sym_expression] = SHIFT(350),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [350] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [351] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [352] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
    },
    [353] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [354] = {
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
    [355] = {
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
    [356] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
    },
    [357] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(361),
        [ts_aux_sym_3] = SHIFT(89),
        [ts_aux_sym_4] = SHIFT(69),
        [ts_aux_sym_5] = SHIFT(360),
        [ts_aux_sym_8] = SHIFT(70),
        [ts_aux_sym_10] = SHIFT(71),
        [ts_aux_sym_11] = SHIFT(72),
        [ts_aux_sym_12] = SHIFT(64),
        [ts_aux_sym_13] = SHIFT(73),
        [ts_aux_sym_14] = SHIFT(70),
        [ts_aux_sym_15] = SHIFT(73),
        [ts_aux_sym_17] = SHIFT(74),
        [ts_aux_sym_18] = SHIFT(75),
        [ts_aux_sym_19] = SHIFT(76),
        [ts_aux_sym_20] = SHIFT(76),
        [ts_aux_sym_21] = SHIFT(76),
        [ts_aux_sym_22] = SHIFT(76),
        [ts_aux_sym_23] = SHIFT(76),
        [ts_aux_sym_24] = SHIFT(76),
    },
    [358] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(360),
    },
    [359] = {
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
    [360] = {
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
    [361] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(362),
    },
    [362] = {
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
    [363] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(370),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [364] = {
        [ts_sym_expression] = SHIFT(365),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(366),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [365] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(368),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [366] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(367),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [367] = {
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
    [368] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(369),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [369] = {
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
    [370] = {
        [ts_sym_expression] = SHIFT(371),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(368),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [371] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(372),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [372] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(373),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [373] = {
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
    [374] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(376),
        [ts_aux_sym_2] = SHIFT(377),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [375] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(376),
        [ts_aux_sym_2] = SHIFT(377),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [376] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(339),
    },
    [377] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_declaration, 3),
    },
    [378] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(364),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [379] = {
        [ts_sym_expression] = SHIFT(380),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(381),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [380] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(366),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [381] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(382),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [382] = {
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
    [383] = {
        [ts_sym_expression] = SHIFT(384),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_builtin_sym_error] = SHIFT(385),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [384] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(386),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [385] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(386),
    },
    [386] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(388),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [387] = {
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
    [388] = {
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
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(444),
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
    [389] = {
        [ts_sym_type_expression] = SHIFT(440),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(441),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [390] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(439),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [391] = {
        [ts_sym_type] = SHIFT(433),
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
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
    },
    [392] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(277),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_builtin_sym_error] = SHIFT(430),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(430),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_7] = SHIFT(431),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [393] = {
        [ts_sym_expression] = SHIFT(428),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [394] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(421),
    },
    [395] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(401),
    },
    [396] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(397),
    },
    [397] = {
        [ts_sym_expression] = SHIFT(398),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [398] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(399),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [399] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(400),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [400] = {
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
    [401] = {
        [ts_sym_var_declaration] = SHIFT(402),
        [ts_sym_type] = SHIFT(332),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(403),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(334),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(402),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [402] = {
        [ts_sym_expression] = SHIFT(416),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(417),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [403] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(404),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [404] = {
        [ts_sym_expression] = SHIFT(405),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(406),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [405] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(412),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [406] = {
        [ts_sym_expression] = SHIFT(407),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(408),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [407] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(410),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [408] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(409),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [409] = {
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
    [410] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(411),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [411] = {
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
    [412] = {
        [ts_sym_expression] = SHIFT(413),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(410),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [413] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(414),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [414] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(415),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [415] = {
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
    [416] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(406),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [417] = {
        [ts_sym_expression] = SHIFT(418),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(419),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [418] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(408),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [419] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(420),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [420] = {
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
    [421] = {
        [ts_sym_expression] = SHIFT(422),
        [ts_sym_field_access] = SHIFT(298),
        [ts_sym_deref_field_access] = SHIFT(298),
        [ts_sym_function_call] = SHIFT(299),
        [ts_sym_math_op] = SHIFT(299),
        [ts_sym_bool_op] = SHIFT(299),
        [ts_sym_rel_op] = SHIFT(299),
        [ts_sym_assignment] = SHIFT(299),
        [ts_builtin_sym_error] = SHIFT(423),
        [ts_sym_number] = SHIFT(299),
        [ts_sym_char] = SHIFT(299),
        [ts_sym_string] = SHIFT(299),
        [ts_sym_identifier] = SHIFT(298),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(300),
        [ts_aux_sym_16] = SHIFT(301),
    },
    [422] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(307),
        [ts_aux_sym_5] = SHIFT(424),
        [ts_aux_sym_8] = SHIFT(308),
        [ts_aux_sym_10] = SHIFT(309),
        [ts_aux_sym_11] = SHIFT(310),
        [ts_aux_sym_12] = SHIFT(303),
        [ts_aux_sym_13] = SHIFT(311),
        [ts_aux_sym_14] = SHIFT(308),
        [ts_aux_sym_15] = SHIFT(311),
        [ts_aux_sym_17] = SHIFT(312),
        [ts_aux_sym_18] = SHIFT(313),
        [ts_aux_sym_19] = SHIFT(314),
        [ts_aux_sym_20] = SHIFT(314),
        [ts_aux_sym_21] = SHIFT(314),
        [ts_aux_sym_22] = SHIFT(314),
        [ts_aux_sym_23] = SHIFT(314),
        [ts_aux_sym_24] = SHIFT(314),
    },
    [423] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(424),
    },
    [424] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(425),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [425] = {
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
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(426),
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
    [426] = {
        [ts_sym_var_declaration] = SHIFT(387),
        [ts_sym_statement_block] = SHIFT(387),
        [ts_sym_statement] = SHIFT(427),
        [ts_sym_return_statement] = SHIFT(387),
        [ts_sym_expression_statement] = SHIFT(387),
        [ts_sym_if_statement] = SHIFT(387),
        [ts_sym_for_statement] = SHIFT(387),
        [ts_sym_while_statement] = SHIFT(387),
        [ts_sym_type] = SHIFT(389),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(390),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(391),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_return] = SHIFT(393),
        [ts_aux_sym_if] = SHIFT(394),
        [ts_aux_sym_for] = SHIFT(395),
        [ts_aux_sym_while] = SHIFT(396),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [427] = {
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
    [428] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(429),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [429] = {
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
    [430] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(432),
    },
    [431] = {
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
    [432] = {
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
    [433] = {
        [ts_sym_type_expression] = SHIFT(434),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(435),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [434] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(436),
        [ts_aux_sym_2] = SHIFT(437),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [435] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(436),
        [ts_aux_sym_2] = SHIFT(437),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [436] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(438),
    },
    [437] = {
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
    [438] = {
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
    [439] = {
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
    [440] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(442),
        [ts_aux_sym_2] = SHIFT(443),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [441] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(442),
        [ts_aux_sym_2] = SHIFT(443),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [442] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(437),
    },
    [443] = {
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
    [444] = {
        [ts_sym_var_declaration] = SHIFT(276),
        [ts_sym_statement_block] = SHIFT(276),
        [ts_sym_statement] = SHIFT(445),
        [ts_sym_return_statement] = SHIFT(276),
        [ts_sym_expression_statement] = SHIFT(276),
        [ts_sym_if_statement] = SHIFT(276),
        [ts_sym_for_statement] = SHIFT(276),
        [ts_sym_while_statement] = SHIFT(276),
        [ts_sym_type] = SHIFT(278),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(279),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(283),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(284),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_6] = SHIFT(285),
        [ts_aux_sym_return] = SHIFT(287),
        [ts_aux_sym_if] = SHIFT(288),
        [ts_aux_sym_for] = SHIFT(289),
        [ts_aux_sym_while] = SHIFT(290),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(171),
        [ts_aux_sym_union] = SHIFT(172),
        [ts_aux_sym_enum] = SHIFT(173),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [445] = {
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
    [446] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(447),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [447] = {
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
    [448] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(450),
    },
    [449] = {
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
    [450] = {
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
    [451] = {
        [ts_sym_type_expression] = SHIFT(452),
        [ts_sym_pointer_type] = SHIFT(214),
        [ts_sym_var_assignment] = SHIFT(453),
        [ts_sym_identifier] = SHIFT(214),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(216),
    },
    [452] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(454),
        [ts_aux_sym_2] = SHIFT(455),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [453] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(454),
        [ts_aux_sym_2] = SHIFT(455),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [454] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(456),
    },
    [455] = {
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
    [456] = {
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
    [457] = {
        [ts_sym_expression] = SHIFT(458),
        [ts_sym_field_access] = SHIFT(280),
        [ts_sym_deref_field_access] = SHIFT(280),
        [ts_sym_function_call] = SHIFT(281),
        [ts_sym_math_op] = SHIFT(281),
        [ts_sym_bool_op] = SHIFT(281),
        [ts_sym_rel_op] = SHIFT(281),
        [ts_sym_assignment] = SHIFT(281),
        [ts_sym_number] = SHIFT(281),
        [ts_sym_char] = SHIFT(281),
        [ts_sym_string] = SHIFT(281),
        [ts_sym_identifier] = SHIFT(280),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_13] = SHIFT(291),
        [ts_aux_sym_16] = SHIFT(292),
    },
    [458] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(342),
        [ts_aux_sym_8] = SHIFT(343),
        [ts_aux_sym_10] = SHIFT(344),
        [ts_aux_sym_11] = SHIFT(345),
        [ts_aux_sym_12] = SHIFT(294),
        [ts_aux_sym_13] = SHIFT(346),
        [ts_aux_sym_14] = SHIFT(343),
        [ts_aux_sym_15] = SHIFT(346),
        [ts_aux_sym_17] = SHIFT(347),
        [ts_aux_sym_18] = SHIFT(348),
        [ts_aux_sym_19] = SHIFT(349),
        [ts_aux_sym_20] = SHIFT(349),
        [ts_aux_sym_21] = SHIFT(349),
        [ts_aux_sym_22] = SHIFT(349),
        [ts_aux_sym_23] = SHIFT(349),
        [ts_aux_sym_24] = SHIFT(349),
    },
    [459] = {
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
    [460] = {
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
    [461] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(463),
        [ts_aux_sym_2] = SHIFT(464),
        [ts_aux_sym_3] = SHIFT(220),
        [ts_aux_sym_9] = SHIFT(224),
    },
    [462] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(463),
        [ts_aux_sym_2] = SHIFT(464),
        [ts_aux_sym_3] = SHIFT(220),
    },
    [463] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(455),
    },
    [464] = {
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
    [465] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 2),
    },
    [466] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_field, 2),
    },
    [467] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_type_expression, 1),
    },
    [468] = {
        [ts_sym_type_expression] = SHIFT(469),
        [ts_sym_pointer_type] = SHIFT(467),
        [ts_sym_identifier] = SHIFT(467),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(468),
    },
    [469] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_pointer_type, 2),
    },
    [470] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(219),
    },
    [471] = {
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
    [472] = {
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c);
