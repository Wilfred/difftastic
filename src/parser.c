#include "tree_sitter/parser.h"

#define STATE_COUNT 172
#define SYMBOL_COUNT 81
#define TOKEN_COUNT 48

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_COMMA = 8,
    anon_sym_EQ = 9,
    anon_sym_true = 10,
    anon_sym_false = 11,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 12,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH = 13,
    sym__integer_type_suffix = 14,
    anon_sym_abstract = 15,
    anon_sym_sealed = 16,
    anon_sym_static = 17,
    anon_sym_new = 18,
    anon_sym_public = 19,
    anon_sym_protected = 20,
    anon_sym_internal = 21,
    anon_sym_private = 22,
    anon_sym_unsafe = 23,
    anon_sym_readonly = 24,
    anon_sym_volatile = 25,
    anon_sym_bool = 26,
    anon_sym_byte = 27,
    anon_sym_char = 28,
    anon_sym_decimal = 29,
    anon_sym_double = 30,
    anon_sym_float = 31,
    anon_sym_int = 32,
    anon_sym_long = 33,
    anon_sym_object = 34,
    anon_sym_sbyte = 35,
    anon_sym_short = 36,
    anon_sym_string = 37,
    anon_sym_uint = 38,
    anon_sym_ulong = 39,
    anon_sym_ushort = 40,
    anon_sym_LT = 41,
    anon_sym_GT = 42,
    anon_sym_DOT = 43,
    anon_sym_COLON_COLON = 44,
    sym_global = 45,
    sym_identifier_name = 46,
    sym_comment = 47,
    sym_compilation_unit = 48,
    sym_using_directive = 49,
    sym_namespace_declaration = 50,
    sym_class_declaration = 51,
    sym_struct_declaration = 52,
    sym_field_declaration = 53,
    sym_variable_declaration = 54,
    sym__type = 55,
    sym_generic_name = 56,
    sym_variable_declarator = 57,
    sym_equals_value_clause = 58,
    sym__literal = 59,
    sym_boolean_literal = 60,
    sym_integer_literal = 61,
    sym_class_modifiers = 62,
    sym__class_modifiers = 63,
    sym_struct_modifiers = 64,
    sym__struct_modifiers = 65,
    sym_field_modifiers = 66,
    sym__field_modifiers = 67,
    sym_predefined_type = 68,
    sym_type_parameter_list = 69,
    sym_type_parameter = 70,
    sym_qualified_name = 71,
    sym_alias_qualified_name = 72,
    sym_name_equals = 73,
    sym_static = 74,
    aux_sym_compilation_unit_repeat1 = 75,
    aux_sym_compilation_unit_repeat2 = 76,
    aux_sym_class_declaration_repeat1 = 77,
    aux_sym_struct_declaration_repeat1 = 78,
    aux_sym_variable_declaration_repeat1 = 79,
    aux_sym_type_parameter_list_repeat1 = 80,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_using] = "using",
    [anon_sym_SEMI] = ";",
    [anon_sym_namespace] = "namespace",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_class] = "class",
    [anon_sym_struct] = "struct",
    [anon_sym_COMMA] = ",",
    [anon_sym_EQ] = "=",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = "/0x[0-9a-f]+/",
    [sym__integer_type_suffix] = "_integer_type_suffix",
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_unsafe] = "unsafe",
    [anon_sym_readonly] = "readonly",
    [anon_sym_volatile] = "volatile",
    [anon_sym_bool] = "bool",
    [anon_sym_byte] = "byte",
    [anon_sym_char] = "char",
    [anon_sym_decimal] = "decimal",
    [anon_sym_double] = "double",
    [anon_sym_float] = "float",
    [anon_sym_int] = "int",
    [anon_sym_long] = "long",
    [anon_sym_object] = "object",
    [anon_sym_sbyte] = "sbyte",
    [anon_sym_short] = "short",
    [anon_sym_string] = "string",
    [anon_sym_uint] = "uint",
    [anon_sym_ulong] = "ulong",
    [anon_sym_ushort] = "ushort",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_DOT] = ".",
    [anon_sym_COLON_COLON] = "::",
    [sym_global] = "global",
    [sym_identifier_name] = "identifier_name",
    [sym_comment] = "comment",
    [sym_compilation_unit] = "compilation_unit",
    [sym_using_directive] = "using_directive",
    [sym_namespace_declaration] = "namespace_declaration",
    [sym_class_declaration] = "class_declaration",
    [sym_struct_declaration] = "struct_declaration",
    [sym_field_declaration] = "field_declaration",
    [sym_variable_declaration] = "variable_declaration",
    [sym__type] = "_type",
    [sym_generic_name] = "generic_name",
    [sym_variable_declarator] = "variable_declarator",
    [sym_equals_value_clause] = "equals_value_clause",
    [sym__literal] = "_literal",
    [sym_boolean_literal] = "boolean_literal",
    [sym_integer_literal] = "integer_literal",
    [sym_class_modifiers] = "class_modifiers",
    [sym__class_modifiers] = "_class_modifiers",
    [sym_struct_modifiers] = "struct_modifiers",
    [sym__struct_modifiers] = "_struct_modifiers",
    [sym_field_modifiers] = "field_modifiers",
    [sym__field_modifiers] = "_field_modifiers",
    [sym_predefined_type] = "predefined_type",
    [sym_type_parameter_list] = "type_parameter_list",
    [sym_type_parameter] = "type_parameter",
    [sym_qualified_name] = "qualified_name",
    [sym_alias_qualified_name] = "alias_qualified_name",
    [sym_name_equals] = "name_equals",
    [sym_static] = "static",
    [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
    [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
    [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
    [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_using] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_namespace] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_class] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_true] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_false] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__integer_type_suffix] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_abstract] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sealed] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_static] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_new] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_protected] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_internal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_unsafe] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_volatile] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_bool] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_decimal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_object] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sbyte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_uint] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ulong] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ushort] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_global] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym_compilation_unit] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_using_directive] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_namespace_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_field_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__type] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_generic_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declarator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_equals_value_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__literal] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_integer_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__class_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__struct_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_field_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__field_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_predefined_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_alias_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_name_equals] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_static] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat2] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_class_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_struct_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_variable_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_type_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '0')
                ADVANCE(9);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '>')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'g')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 't')
                ADVANCE(153);
            if (lookahead == 'u')
                ADVANCE(157);
            if (lookahead == 'v')
                ADVANCE(178);
            if (lookahead == '{')
                ADVANCE(186);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 3:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 4:
            if (lookahead == '*')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 5:
            if (lookahead == '*')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            if (lookahead == '/')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(5);
            LEX_ERROR();
        case 7:
            ACCEPT_TOKEN(sym_comment);
        case 8:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(8);
            ACCEPT_TOKEN(sym_comment);
        case 9:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(11);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH);
        case 13:
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 15:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 16:
            ACCEPT_TOKEN(anon_sym_LT);
        case 17:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 18:
            ACCEPT_TOKEN(anon_sym_GT);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier_name);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier_name);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier_name);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier_name);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier_name);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier_name);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(29);
            if (lookahead == 'y')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier_name);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier_name);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_bool);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier_name);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier_name);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_byte);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(36);
            if (lookahead == 'l')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier_name);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier_name);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier_name);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_char);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier_name);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier_name);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier_name);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_class);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier_name);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier_name);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier_name);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'm')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier_name);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier_name);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier_name);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier_name);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier_name);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier_name);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_double);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(56);
            if (lookahead == 'l')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_false);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier_name);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_float);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier_name);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_global);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_TOKEN(anon_sym_int);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier_name);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_internal);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(79);
            if (lookahead == 'u')
                ADVANCE(82);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_long);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(84);
            if (lookahead == 'e')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'm')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'p')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'w')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_new);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'j')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_object);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(101);
            if (lookahead == 'u')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'o')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'v')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_private);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_protected);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_public);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(132);
            if (lookahead == 'h')
                ADVANCE(137);
            if (lookahead == 't')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_short);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(142);
            if (lookahead == 'r')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_static);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(147);
            if (lookahead == 'u')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_string);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_struct);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_true);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(158);
            if (lookahead == 'l')
                ADVANCE(161);
            if (lookahead == 'n')
                ADVANCE(165);
            if (lookahead == 's')
                ADVANCE(170);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_uint);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(162);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(171);
            if (lookahead == 'i')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_using);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 186:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 187:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 188:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(210);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(255);
            LEX_ERROR();
        case 189:
            if (lookahead == 'b')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 's')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 't')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'r')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'a')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'c')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 't')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 197:
            if (lookahead == 'l')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'a')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 's')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 's')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            ACCEPT_TOKEN(anon_sym_class);
        case 202:
            if (lookahead == 'n')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 't')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'r')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'n')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'a')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'l')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            ACCEPT_TOKEN(anon_sym_internal);
        case 210:
            if (lookahead == 'a')
                ADVANCE(211);
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 211:
            if (lookahead == 'm')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'e')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 's')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'p')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 'a')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'c')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'e')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 219:
            if (lookahead == 'w')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            ACCEPT_TOKEN(anon_sym_new);
        case 221:
            if (lookahead == 'r')
                ADVANCE(222);
            if (lookahead == 'u')
                ADVANCE(235);
            LEX_ERROR();
        case 222:
            if (lookahead == 'i')
                ADVANCE(223);
            if (lookahead == 'o')
                ADVANCE(228);
            LEX_ERROR();
        case 223:
            if (lookahead == 'v')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'a')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 't')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'e')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            ACCEPT_TOKEN(anon_sym_private);
        case 228:
            if (lookahead == 't')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'e')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'c')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 't')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            if (lookahead == 'e')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == 'd')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            ACCEPT_TOKEN(anon_sym_protected);
        case 235:
            if (lookahead == 'b')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'l')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == 'i')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if (lookahead == 'c')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            ACCEPT_TOKEN(anon_sym_public);
        case 240:
            if (lookahead == 'e')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(246);
            LEX_ERROR();
        case 241:
            if (lookahead == 'a')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == 'l')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            if (lookahead == 'e')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'd')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 246:
            if (lookahead == 'a')
                ADVANCE(247);
            if (lookahead == 'r')
                ADVANCE(251);
            LEX_ERROR();
        case 247:
            if (lookahead == 't')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 'i')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'c')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            ACCEPT_TOKEN(anon_sym_static);
        case 251:
            if (lookahead == 'u')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            if (lookahead == 'c')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (lookahead == 't')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            ACCEPT_TOKEN(anon_sym_struct);
        case 255:
            if (lookahead == 'n')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(261);
            LEX_ERROR();
        case 256:
            if (lookahead == 's')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 'a')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == 'f')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'e')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 261:
            if (lookahead == 'i')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            if (lookahead == 'n')
                ADVANCE(263);
            LEX_ERROR();
        case 263:
            if (lookahead == 'g')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            ACCEPT_TOKEN(anon_sym_using);
        case 265:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(265);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier_name);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 268:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(268);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(64);
            LEX_ERROR();
        case 269:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(269);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 270:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(270);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(274);
            LEX_ERROR();
        case 271:
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 272:
            if (lookahead == 'e')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'a')
                ADVANCE(247);
            LEX_ERROR();
        case 274:
            if (lookahead == 'n')
                ADVANCE(256);
            LEX_ERROR();
        case 275:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(275);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(274);
            LEX_ERROR();
        case 276:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(276);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 277:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(277);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(210);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 278:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(278);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(197);
            LEX_ERROR();
        case 279:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(279);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 's')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            if (lookahead == 't')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'r')
                ADVANCE(251);
            LEX_ERROR();
        case 282:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(282);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(210);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(274);
            LEX_ERROR();
        case 283:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(283);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 284:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(284);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 285:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(285);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(286);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(288);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 's')
                ADVANCE(292);
            if (lookahead == 'u')
                ADVANCE(295);
            LEX_ERROR();
        case 286:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 287:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 288:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier_name);
        case 289:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier_name);
        case 290:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_int);
        case 291:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 292:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(128);
            if (lookahead == 'h')
                ADVANCE(137);
            if (lookahead == 't')
                ADVANCE(293);
            ACCEPT_TOKEN(sym_identifier_name);
        case 293:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(294);
            ACCEPT_TOKEN(sym_identifier_name);
        case 294:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 295:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(158);
            if (lookahead == 'l')
                ADVANCE(296);
            if (lookahead == 's')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier_name);
        case 296:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 297:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 298:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(298);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 299:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(299);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 300:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(158);
            if (lookahead == 'l')
                ADVANCE(296);
            if (lookahead == 'n')
                ADVANCE(165);
            if (lookahead == 's')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier_name);
        case 301:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(301);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(302);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 302:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 303:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(303);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(302);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(304);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            LEX_ERROR();
        case 304:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(132);
            if (lookahead == 'h')
                ADVANCE(137);
            if (lookahead == 't')
                ADVANCE(305);
            ACCEPT_TOKEN(sym_identifier_name);
        case 305:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(142);
            if (lookahead == 'r')
                ADVANCE(294);
            ACCEPT_TOKEN(sym_identifier_name);
        case 306:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(306);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(302);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            LEX_ERROR();
        case 307:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(307);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(286);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(302);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(308);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            LEX_ERROR();
        case 308:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(128);
            if (lookahead == 'h')
                ADVANCE(137);
            if (lookahead == 't')
                ADVANCE(305);
            ACCEPT_TOKEN(sym_identifier_name);
        case 309:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(309);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 310:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(310);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '>')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 311:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(311);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 312:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(312);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 313:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(313);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 314:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(314);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '0')
                ADVANCE(9);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(315);
            if (lookahead == 't')
                ADVANCE(320);
            LEX_ERROR();
        case 315:
            if (lookahead == 'a')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'l')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 's')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'e')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            ACCEPT_TOKEN(anon_sym_false);
        case 320:
            if (lookahead == 'r')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'u')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 'e')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            ACCEPT_TOKEN(anon_sym_true);
        case 324:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(324);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(325);
            if (lookahead == 'u')
                ADVANCE(327);
            LEX_ERROR();
        case 325:
            if (lookahead == 'u')
                ADVANCE(326);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 326:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 327:
            if (lookahead == 'l')
                ADVANCE(326);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 328:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(328);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(18);
            LEX_ERROR();
        case 329:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(329);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 330:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(330);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(13);
            LEX_ERROR();
        case 331:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(331);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 332:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(332);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 333:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(333);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 334:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(334);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(189);
            if (lookahead == 'c')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(210);
            if (lookahead == 'p')
                ADVANCE(221);
            if (lookahead == 's')
                ADVANCE(240);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 335:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(335);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 336:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(336);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 337:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(337);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 'u')
                ADVANCE(338);
            if (lookahead == 'v')
                ADVANCE(178);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(158);
            if (lookahead == 'l')
                ADVANCE(296);
            if (lookahead == 'n')
                ADVANCE(165);
            if (lookahead == 's')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 339:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(339);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(127);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            if (lookahead == '}')
                ADVANCE(187);
            LEX_ERROR();
        case 340:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(340);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '0')
                ADVANCE(9);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('h' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(341);
            if (lookahead == 'g')
                ADVANCE(64);
            if (lookahead == 't')
                ADVANCE(153);
            LEX_ERROR();
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier_name);
        case 342:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(342);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(28);
            if (lookahead == 'c')
                ADVANCE(35);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(287);
            if (lookahead == 'g')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'l')
                ADVANCE(291);
            if (lookahead == 'n')
                ADVANCE(302);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(100);
            if (lookahead == 'r')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(304);
            if (lookahead == 'u')
                ADVANCE(300);
            if (lookahead == 'v')
                ADVANCE(178);
            LEX_ERROR();
        case 343:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(343);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '>')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(186);
            LEX_ERROR();
        case 344:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(344);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '>')
                ADVANCE(18);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 188,
    [2] = 265,
    [3] = 268,
    [4] = 269,
    [5] = 269,
    [6] = 270,
    [7] = 275,
    [8] = 276,
    [9] = 188,
    [10] = 277,
    [11] = 278,
    [12] = 278,
    [13] = 279,
    [14] = 279,
    [15] = 188,
    [16] = 282,
    [17] = 277,
    [18] = 188,
    [19] = 282,
    [20] = 269,
    [21] = 283,
    [22] = 284,
    [23] = 285,
    [24] = 298,
    [25] = 284,
    [26] = 299,
    [27] = 284,
    [28] = 284,
    [29] = 299,
    [30] = 284,
    [31] = 299,
    [32] = 284,
    [33] = 269,
    [34] = 283,
    [35] = 301,
    [36] = 298,
    [37] = 301,
    [38] = 299,
    [39] = 303,
    [40] = 306,
    [41] = 307,
    [42] = 309,
    [43] = 310,
    [44] = 301,
    [45] = 311,
    [46] = 269,
    [47] = 309,
    [48] = 285,
    [49] = 285,
    [50] = 301,
    [51] = 299,
    [52] = 301,
    [53] = 311,
    [54] = 301,
    [55] = 299,
    [56] = 301,
    [57] = 312,
    [58] = 313,
    [59] = 269,
    [60] = 313,
    [61] = 269,
    [62] = 313,
    [63] = 313,
    [64] = 314,
    [65] = 313,
    [66] = 313,
    [67] = 324,
    [68] = 313,
    [69] = 313,
    [70] = 313,
    [71] = 301,
    [72] = 309,
    [73] = 328,
    [74] = 328,
    [75] = 285,
    [76] = 329,
    [77] = 328,
    [78] = 285,
    [79] = 329,
    [80] = 328,
    [81] = 328,
    [82] = 285,
    [83] = 278,
    [84] = 279,
    [85] = 283,
    [86] = 284,
    [87] = 298,
    [88] = 299,
    [89] = 284,
    [90] = 283,
    [91] = 301,
    [92] = 298,
    [93] = 299,
    [94] = 301,
    [95] = 330,
    [96] = 331,
    [97] = 332,
    [98] = 269,
    [99] = 333,
    [100] = 334,
    [101] = 277,
    [102] = 334,
    [103] = 277,
    [104] = 269,
    [105] = 332,
    [106] = 268,
    [107] = 335,
    [108] = 336,
    [109] = 268,
    [110] = 336,
    [111] = 188,
    [112] = 188,
    [113] = 268,
    [114] = 337,
    [115] = 339,
    [116] = 299,
    [117] = 269,
    [118] = 269,
    [119] = 285,
    [120] = 340,
    [121] = 342,
    [122] = 329,
    [123] = 343,
    [124] = 188,
    [125] = 277,
    [126] = 299,
    [127] = 301,
    [128] = 311,
    [129] = 309,
    [130] = 313,
    [131] = 278,
    [132] = 279,
    [133] = 285,
    [134] = 329,
    [135] = 328,
    [136] = 333,
    [137] = 277,
    [138] = 301,
    [139] = 284,
    [140] = 299,
    [141] = 299,
    [142] = 188,
    [143] = 301,
    [144] = 299,
    [145] = 301,
    [146] = 301,
    [147] = 284,
    [148] = 299,
    [149] = 299,
    [150] = 301,
    [151] = 339,
    [152] = 299,
    [153] = 339,
    [154] = 301,
    [155] = 284,
    [156] = 299,
    [157] = 299,
    [158] = 344,
    [159] = 313,
    [160] = 328,
    [161] = 283,
    [162] = 284,
    [163] = 298,
    [164] = 284,
    [165] = 299,
    [166] = 283,
    [167] = 301,
    [168] = 298,
    [169] = 301,
    [170] = 299,
    [171] = 299,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(124),
        [sym_namespace_declaration] = STATE(125),
        [sym_class_declaration] = STATE(126),
        [sym_struct_declaration] = STATE(126),
        [sym_field_declaration] = STATE(127),
        [sym_variable_declaration] = STATE(128),
        [sym__type] = STATE(129),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(130),
        [sym_equals_value_clause] = STATE(65),
        [sym__literal] = STATE(68),
        [sym_boolean_literal] = STATE(69),
        [sym_integer_literal] = STATE(69),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(131),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(132),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(133),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(134),
        [sym_type_parameter] = STATE(135),
        [sym_qualified_name] = STATE(136),
        [sym_alias_qualified_name] = STATE(97),
        [sym_name_equals] = STATE(109),
        [sym_static] = STATE(109),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(137),
        [aux_sym_class_declaration_repeat1] = STATE(138),
        [aux_sym_struct_declaration_repeat1] = STATE(139),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym_type_parameter_list_repeat1] = STATE(77),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_COMMA] = ACTIONS(17),
        [anon_sym_EQ] = ACTIONS(19),
        [anon_sym_true] = ACTIONS(21),
        [anon_sym_false] = ACTIONS(21),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(23),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(23),
        [sym__integer_type_suffix] = ACTIONS(25),
        [anon_sym_abstract] = ACTIONS(27),
        [anon_sym_sealed] = ACTIONS(27),
        [anon_sym_static] = ACTIONS(29),
        [anon_sym_new] = ACTIONS(31),
        [anon_sym_public] = ACTIONS(31),
        [anon_sym_protected] = ACTIONS(31),
        [anon_sym_internal] = ACTIONS(31),
        [anon_sym_private] = ACTIONS(31),
        [anon_sym_unsafe] = ACTIONS(31),
        [anon_sym_readonly] = ACTIONS(33),
        [anon_sym_volatile] = ACTIONS(33),
        [anon_sym_bool] = ACTIONS(35),
        [anon_sym_byte] = ACTIONS(35),
        [anon_sym_char] = ACTIONS(35),
        [anon_sym_decimal] = ACTIONS(35),
        [anon_sym_double] = ACTIONS(35),
        [anon_sym_float] = ACTIONS(35),
        [anon_sym_int] = ACTIONS(35),
        [anon_sym_long] = ACTIONS(35),
        [anon_sym_object] = ACTIONS(35),
        [anon_sym_sbyte] = ACTIONS(35),
        [anon_sym_short] = ACTIONS(35),
        [anon_sym_string] = ACTIONS(35),
        [anon_sym_uint] = ACTIONS(35),
        [anon_sym_ulong] = ACTIONS(35),
        [anon_sym_ushort] = ACTIONS(35),
        [anon_sym_LT] = ACTIONS(37),
        [anon_sym_GT] = ACTIONS(39),
        [anon_sym_DOT] = ACTIONS(41),
        [anon_sym_COLON_COLON] = ACTIONS(43),
        [sym_global] = ACTIONS(45),
        [sym_identifier_name] = ACTIONS(47),
        [sym_comment] = ACTIONS(49),
    },
    [1] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(9),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(16),
        [ts_builtin_sym_end] = ACTIONS(51),
        [anon_sym_using] = ACTIONS(53),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [2] = {
        [sym_qualified_name] = STATE(108),
        [sym_alias_qualified_name] = STATE(97),
        [sym_name_equals] = STATE(109),
        [sym_static] = STATE(109),
        [anon_sym_static] = ACTIONS(65),
        [sym_global] = ACTIONS(67),
        [sym_identifier_name] = ACTIONS(69),
        [sym_comment] = ACTIONS(49),
    },
    [3] = {
        [sym_qualified_name] = STATE(96),
        [sym_alias_qualified_name] = STATE(97),
        [sym_global] = ACTIONS(67),
        [sym_identifier_name] = ACTIONS(71),
        [sym_comment] = ACTIONS(49),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(73),
        [sym_comment] = ACTIONS(49),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(75),
        [sym_comment] = ACTIONS(49),
    },
    [6] = {
        [sym__class_modifiers] = STATE(83),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(49),
    },
    [7] = {
        [sym__class_modifiers] = STATE(83),
        [sym__struct_modifiers] = STATE(84),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(81),
        [sym_comment] = ACTIONS(49),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_using] = ACTIONS(83),
        [anon_sym_namespace] = ACTIONS(83),
        [anon_sym_class] = ACTIONS(83),
        [anon_sym_struct] = ACTIONS(83),
        [anon_sym_abstract] = ACTIONS(83),
        [anon_sym_sealed] = ACTIONS(83),
        [anon_sym_static] = ACTIONS(83),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(49),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_namespace] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(85),
        [anon_sym_class] = ACTIONS(85),
        [anon_sym_struct] = ACTIONS(85),
        [anon_sym_abstract] = ACTIONS(85),
        [anon_sym_sealed] = ACTIONS(85),
        [anon_sym_static] = ACTIONS(85),
        [anon_sym_new] = ACTIONS(85),
        [anon_sym_public] = ACTIONS(85),
        [anon_sym_protected] = ACTIONS(85),
        [anon_sym_internal] = ACTIONS(85),
        [anon_sym_private] = ACTIONS(85),
        [anon_sym_unsafe] = ACTIONS(85),
        [sym_comment] = ACTIONS(49),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(87),
        [sym_comment] = ACTIONS(49),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(89),
        [sym_comment] = ACTIONS(49),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(91),
        [sym_comment] = ACTIONS(49),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(93),
        [sym_comment] = ACTIONS(49),
    },
    [15] = {
        [sym_using_directive] = STATE(18),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(19),
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_using] = ACTIONS(53),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(97),
        [anon_sym_RBRACE] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(97),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_abstract] = ACTIONS(97),
        [anon_sym_sealed] = ACTIONS(97),
        [anon_sym_static] = ACTIONS(97),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(49),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_using] = ACTIONS(99),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_abstract] = ACTIONS(99),
        [anon_sym_sealed] = ACTIONS(99),
        [anon_sym_static] = ACTIONS(99),
        [anon_sym_new] = ACTIONS(99),
        [anon_sym_public] = ACTIONS(99),
        [anon_sym_protected] = ACTIONS(99),
        [anon_sym_internal] = ACTIONS(99),
        [anon_sym_private] = ACTIONS(99),
        [anon_sym_unsafe] = ACTIONS(99),
        [sym_comment] = ACTIONS(49),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(103),
        [sym_comment] = ACTIONS(49),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(105),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [23] = {
        [sym__type] = STATE(73),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(74),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_comment] = ACTIONS(49),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_namespace] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(121),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_abstract] = ACTIONS(121),
        [anon_sym_sealed] = ACTIONS(121),
        [anon_sym_static] = ACTIONS(121),
        [anon_sym_new] = ACTIONS(121),
        [anon_sym_public] = ACTIONS(121),
        [anon_sym_protected] = ACTIONS(121),
        [anon_sym_internal] = ACTIONS(121),
        [anon_sym_private] = ACTIONS(121),
        [anon_sym_unsafe] = ACTIONS(121),
        [anon_sym_readonly] = ACTIONS(121),
        [anon_sym_volatile] = ACTIONS(121),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(49),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(125),
        [anon_sym_abstract] = ACTIONS(125),
        [anon_sym_sealed] = ACTIONS(125),
        [anon_sym_static] = ACTIONS(125),
        [anon_sym_new] = ACTIONS(125),
        [anon_sym_public] = ACTIONS(125),
        [anon_sym_protected] = ACTIONS(125),
        [anon_sym_internal] = ACTIONS(125),
        [anon_sym_private] = ACTIONS(125),
        [anon_sym_unsafe] = ACTIONS(125),
        [sym_comment] = ACTIONS(49),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_namespace] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(131),
        [anon_sym_abstract] = ACTIONS(131),
        [anon_sym_sealed] = ACTIONS(131),
        [anon_sym_static] = ACTIONS(131),
        [anon_sym_new] = ACTIONS(131),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_protected] = ACTIONS(131),
        [anon_sym_internal] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_unsafe] = ACTIONS(131),
        [anon_sym_readonly] = ACTIONS(131),
        [anon_sym_volatile] = ACTIONS(131),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(49),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_struct] = ACTIONS(135),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(135),
        [anon_sym_new] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(135),
        [anon_sym_protected] = ACTIONS(135),
        [anon_sym_internal] = ACTIONS(135),
        [anon_sym_private] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(135),
        [sym_comment] = ACTIONS(49),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_namespace] = ACTIONS(139),
        [anon_sym_RBRACE] = ACTIONS(137),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(139),
        [anon_sym_abstract] = ACTIONS(139),
        [anon_sym_sealed] = ACTIONS(139),
        [anon_sym_static] = ACTIONS(139),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(139),
        [anon_sym_volatile] = ACTIONS(139),
        [anon_sym_bool] = ACTIONS(139),
        [anon_sym_byte] = ACTIONS(139),
        [anon_sym_char] = ACTIONS(139),
        [anon_sym_decimal] = ACTIONS(139),
        [anon_sym_double] = ACTIONS(139),
        [anon_sym_float] = ACTIONS(139),
        [anon_sym_int] = ACTIONS(139),
        [anon_sym_long] = ACTIONS(139),
        [anon_sym_object] = ACTIONS(139),
        [anon_sym_sbyte] = ACTIONS(139),
        [anon_sym_short] = ACTIONS(139),
        [anon_sym_string] = ACTIONS(139),
        [anon_sym_uint] = ACTIONS(139),
        [anon_sym_ulong] = ACTIONS(139),
        [anon_sym_ushort] = ACTIONS(139),
        [sym_identifier_name] = ACTIONS(141),
        [sym_comment] = ACTIONS(49),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(143),
        [sym_comment] = ACTIONS(49),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(145),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [35] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(56),
        [anon_sym_RBRACE] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(161),
        [sym_comment] = ACTIONS(49),
    },
    [37] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(50),
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_namespace] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(167),
        [anon_sym_sealed] = ACTIONS(167),
        [anon_sym_static] = ACTIONS(167),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(167),
        [anon_sym_byte] = ACTIONS(167),
        [anon_sym_char] = ACTIONS(167),
        [anon_sym_decimal] = ACTIONS(167),
        [anon_sym_double] = ACTIONS(167),
        [anon_sym_float] = ACTIONS(167),
        [anon_sym_int] = ACTIONS(167),
        [anon_sym_long] = ACTIONS(167),
        [anon_sym_object] = ACTIONS(167),
        [anon_sym_sbyte] = ACTIONS(167),
        [anon_sym_short] = ACTIONS(167),
        [anon_sym_string] = ACTIONS(167),
        [anon_sym_uint] = ACTIONS(167),
        [anon_sym_ulong] = ACTIONS(167),
        [anon_sym_ushort] = ACTIONS(167),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(49),
    },
    [39] = {
        [sym__class_modifiers] = STATE(83),
        [sym__field_modifiers] = STATE(82),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(49),
    },
    [40] = {
        [sym__class_modifiers] = STATE(83),
        [sym__struct_modifiers] = STATE(84),
        [sym__field_modifiers] = STATE(82),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_struct] = ACTIONS(177),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(49),
    },
    [41] = {
        [sym__field_modifiers] = STATE(82),
        [anon_sym_static] = ACTIONS(159),
        [anon_sym_new] = ACTIONS(159),
        [anon_sym_public] = ACTIONS(159),
        [anon_sym_protected] = ACTIONS(159),
        [anon_sym_internal] = ACTIONS(159),
        [anon_sym_private] = ACTIONS(159),
        [anon_sym_unsafe] = ACTIONS(159),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(49),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_GT] = ACTIONS(179),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(49),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(72),
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_LT] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_struct] = ACTIONS(189),
        [anon_sym_abstract] = ACTIONS(189),
        [anon_sym_sealed] = ACTIONS(189),
        [anon_sym_static] = ACTIONS(189),
        [anon_sym_new] = ACTIONS(189),
        [anon_sym_public] = ACTIONS(189),
        [anon_sym_protected] = ACTIONS(189),
        [anon_sym_internal] = ACTIONS(189),
        [anon_sym_private] = ACTIONS(189),
        [anon_sym_unsafe] = ACTIONS(189),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(49),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(193),
        [sym_comment] = ACTIONS(49),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(183),
        [anon_sym_GT] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(197),
        [anon_sym_byte] = ACTIONS(197),
        [anon_sym_char] = ACTIONS(197),
        [anon_sym_decimal] = ACTIONS(197),
        [anon_sym_double] = ACTIONS(197),
        [anon_sym_float] = ACTIONS(197),
        [anon_sym_int] = ACTIONS(197),
        [anon_sym_long] = ACTIONS(197),
        [anon_sym_object] = ACTIONS(197),
        [anon_sym_sbyte] = ACTIONS(197),
        [anon_sym_short] = ACTIONS(197),
        [anon_sym_string] = ACTIONS(197),
        [anon_sym_uint] = ACTIONS(197),
        [anon_sym_ulong] = ACTIONS(197),
        [anon_sym_ushort] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(49),
    },
    [50] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_namespace] = ACTIONS(205),
        [anon_sym_RBRACE] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(205),
        [anon_sym_abstract] = ACTIONS(205),
        [anon_sym_sealed] = ACTIONS(205),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(205),
        [anon_sym_volatile] = ACTIONS(205),
        [anon_sym_bool] = ACTIONS(205),
        [anon_sym_byte] = ACTIONS(205),
        [anon_sym_char] = ACTIONS(205),
        [anon_sym_decimal] = ACTIONS(205),
        [anon_sym_double] = ACTIONS(205),
        [anon_sym_float] = ACTIONS(205),
        [anon_sym_int] = ACTIONS(205),
        [anon_sym_long] = ACTIONS(205),
        [anon_sym_object] = ACTIONS(205),
        [anon_sym_sbyte] = ACTIONS(205),
        [anon_sym_short] = ACTIONS(205),
        [anon_sym_string] = ACTIONS(205),
        [anon_sym_uint] = ACTIONS(205),
        [anon_sym_ulong] = ACTIONS(205),
        [anon_sym_ushort] = ACTIONS(205),
        [sym_identifier_name] = ACTIONS(207),
        [sym_comment] = ACTIONS(49),
    },
    [52] = {
        [anon_sym_RBRACE] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_struct] = ACTIONS(211),
        [anon_sym_abstract] = ACTIONS(211),
        [anon_sym_sealed] = ACTIONS(211),
        [anon_sym_static] = ACTIONS(211),
        [anon_sym_new] = ACTIONS(211),
        [anon_sym_public] = ACTIONS(211),
        [anon_sym_protected] = ACTIONS(211),
        [anon_sym_internal] = ACTIONS(211),
        [anon_sym_private] = ACTIONS(211),
        [anon_sym_unsafe] = ACTIONS(211),
        [anon_sym_readonly] = ACTIONS(211),
        [anon_sym_volatile] = ACTIONS(211),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(49),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(215),
        [sym_comment] = ACTIONS(49),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(219),
        [anon_sym_struct] = ACTIONS(219),
        [anon_sym_abstract] = ACTIONS(219),
        [anon_sym_sealed] = ACTIONS(219),
        [anon_sym_static] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(219),
        [anon_sym_public] = ACTIONS(219),
        [anon_sym_protected] = ACTIONS(219),
        [anon_sym_internal] = ACTIONS(219),
        [anon_sym_private] = ACTIONS(219),
        [anon_sym_unsafe] = ACTIONS(219),
        [anon_sym_readonly] = ACTIONS(219),
        [anon_sym_volatile] = ACTIONS(219),
        [anon_sym_bool] = ACTIONS(219),
        [anon_sym_byte] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_decimal] = ACTIONS(219),
        [anon_sym_double] = ACTIONS(219),
        [anon_sym_float] = ACTIONS(219),
        [anon_sym_int] = ACTIONS(219),
        [anon_sym_long] = ACTIONS(219),
        [anon_sym_object] = ACTIONS(219),
        [anon_sym_sbyte] = ACTIONS(219),
        [anon_sym_short] = ACTIONS(219),
        [anon_sym_string] = ACTIONS(219),
        [anon_sym_uint] = ACTIONS(219),
        [anon_sym_ulong] = ACTIONS(219),
        [anon_sym_ushort] = ACTIONS(219),
        [sym_identifier_name] = ACTIONS(221),
        [sym_comment] = ACTIONS(49),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_namespace] = ACTIONS(225),
        [anon_sym_RBRACE] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_struct] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(225),
        [anon_sym_sealed] = ACTIONS(225),
        [anon_sym_static] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_readonly] = ACTIONS(225),
        [anon_sym_volatile] = ACTIONS(225),
        [anon_sym_bool] = ACTIONS(225),
        [anon_sym_byte] = ACTIONS(225),
        [anon_sym_char] = ACTIONS(225),
        [anon_sym_decimal] = ACTIONS(225),
        [anon_sym_double] = ACTIONS(225),
        [anon_sym_float] = ACTIONS(225),
        [anon_sym_int] = ACTIONS(225),
        [anon_sym_long] = ACTIONS(225),
        [anon_sym_object] = ACTIONS(225),
        [anon_sym_sbyte] = ACTIONS(225),
        [anon_sym_short] = ACTIONS(225),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_uint] = ACTIONS(225),
        [anon_sym_ulong] = ACTIONS(225),
        [anon_sym_ushort] = ACTIONS(225),
        [sym_identifier_name] = ACTIONS(227),
        [sym_comment] = ACTIONS(49),
    },
    [56] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_EQ] = ACTIONS(231),
        [sym_comment] = ACTIONS(49),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [sym_comment] = ACTIONS(49),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(239),
        [sym_comment] = ACTIONS(49),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(241),
        [sym_comment] = ACTIONS(49),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_COMMA] = ACTIONS(243),
        [sym_comment] = ACTIONS(49),
    },
    [64] = {
        [sym__literal] = STATE(68),
        [sym_boolean_literal] = STATE(69),
        [sym_integer_literal] = STATE(69),
        [anon_sym_true] = ACTIONS(245),
        [anon_sym_false] = ACTIONS(245),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(247),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(247),
        [sym_comment] = ACTIONS(49),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(249),
        [sym_comment] = ACTIONS(49),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(49),
    },
    [67] = {
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(253),
        [sym__integer_type_suffix] = ACTIONS(255),
        [sym_comment] = ACTIONS(49),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(257),
        [sym_comment] = ACTIONS(49),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [sym_comment] = ACTIONS(49),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(261),
        [sym_comment] = ACTIONS(49),
    },
    [71] = {
        [anon_sym_RBRACE] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_struct] = ACTIONS(265),
        [anon_sym_abstract] = ACTIONS(265),
        [anon_sym_sealed] = ACTIONS(265),
        [anon_sym_static] = ACTIONS(265),
        [anon_sym_new] = ACTIONS(265),
        [anon_sym_public] = ACTIONS(265),
        [anon_sym_protected] = ACTIONS(265),
        [anon_sym_internal] = ACTIONS(265),
        [anon_sym_private] = ACTIONS(265),
        [anon_sym_unsafe] = ACTIONS(265),
        [anon_sym_readonly] = ACTIONS(265),
        [anon_sym_volatile] = ACTIONS(265),
        [anon_sym_bool] = ACTIONS(265),
        [anon_sym_byte] = ACTIONS(265),
        [anon_sym_char] = ACTIONS(265),
        [anon_sym_decimal] = ACTIONS(265),
        [anon_sym_double] = ACTIONS(265),
        [anon_sym_float] = ACTIONS(265),
        [anon_sym_int] = ACTIONS(265),
        [anon_sym_long] = ACTIONS(265),
        [anon_sym_object] = ACTIONS(265),
        [anon_sym_sbyte] = ACTIONS(265),
        [anon_sym_short] = ACTIONS(265),
        [anon_sym_string] = ACTIONS(265),
        [anon_sym_uint] = ACTIONS(265),
        [anon_sym_ulong] = ACTIONS(265),
        [anon_sym_ushort] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(49),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(49),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_GT] = ACTIONS(273),
        [sym_comment] = ACTIONS(49),
    },
    [74] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(77),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(277),
        [sym_comment] = ACTIONS(49),
    },
    [75] = {
        [sym__type] = STATE(73),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(81),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [76] = {
        [anon_sym_LBRACE] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(49),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_GT] = ACTIONS(285),
        [sym_comment] = ACTIONS(49),
    },
    [78] = {
        [sym__type] = STATE(73),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(80),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [79] = {
        [anon_sym_LBRACE] = ACTIONS(287),
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_GT] = ACTIONS(287),
        [sym_identifier_name] = ACTIONS(289),
        [sym_comment] = ACTIONS(49),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_GT] = ACTIONS(291),
        [sym_comment] = ACTIONS(49),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_GT] = ACTIONS(293),
        [sym_comment] = ACTIONS(49),
    },
    [82] = {
        [anon_sym_bool] = ACTIONS(295),
        [anon_sym_byte] = ACTIONS(295),
        [anon_sym_char] = ACTIONS(295),
        [anon_sym_decimal] = ACTIONS(295),
        [anon_sym_double] = ACTIONS(295),
        [anon_sym_float] = ACTIONS(295),
        [anon_sym_int] = ACTIONS(295),
        [anon_sym_long] = ACTIONS(295),
        [anon_sym_object] = ACTIONS(295),
        [anon_sym_sbyte] = ACTIONS(295),
        [anon_sym_short] = ACTIONS(295),
        [anon_sym_string] = ACTIONS(295),
        [anon_sym_uint] = ACTIONS(295),
        [anon_sym_ulong] = ACTIONS(295),
        [anon_sym_ushort] = ACTIONS(295),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(49),
    },
    [83] = {
        [anon_sym_class] = ACTIONS(299),
        [sym_comment] = ACTIONS(49),
    },
    [84] = {
        [anon_sym_struct] = ACTIONS(301),
        [sym_comment] = ACTIONS(49),
    },
    [85] = {
        [sym_type_parameter_list] = STATE(87),
        [anon_sym_LBRACE] = ACTIONS(303),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [86] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(89),
        [anon_sym_RBRACE] = ACTIONS(305),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [87] = {
        [anon_sym_LBRACE] = ACTIONS(105),
        [sym_comment] = ACTIONS(49),
    },
    [88] = {
        [ts_builtin_sym_end] = ACTIONS(307),
        [anon_sym_namespace] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(307),
        [anon_sym_class] = ACTIONS(309),
        [anon_sym_struct] = ACTIONS(309),
        [anon_sym_abstract] = ACTIONS(309),
        [anon_sym_sealed] = ACTIONS(309),
        [anon_sym_static] = ACTIONS(309),
        [anon_sym_new] = ACTIONS(309),
        [anon_sym_public] = ACTIONS(309),
        [anon_sym_protected] = ACTIONS(309),
        [anon_sym_internal] = ACTIONS(309),
        [anon_sym_private] = ACTIONS(309),
        [anon_sym_unsafe] = ACTIONS(309),
        [anon_sym_readonly] = ACTIONS(309),
        [anon_sym_volatile] = ACTIONS(309),
        [anon_sym_bool] = ACTIONS(309),
        [anon_sym_byte] = ACTIONS(309),
        [anon_sym_char] = ACTIONS(309),
        [anon_sym_decimal] = ACTIONS(309),
        [anon_sym_double] = ACTIONS(309),
        [anon_sym_float] = ACTIONS(309),
        [anon_sym_int] = ACTIONS(309),
        [anon_sym_long] = ACTIONS(309),
        [anon_sym_object] = ACTIONS(309),
        [anon_sym_sbyte] = ACTIONS(309),
        [anon_sym_short] = ACTIONS(309),
        [anon_sym_string] = ACTIONS(309),
        [anon_sym_uint] = ACTIONS(309),
        [anon_sym_ulong] = ACTIONS(309),
        [anon_sym_ushort] = ACTIONS(309),
        [sym_identifier_name] = ACTIONS(311),
        [sym_comment] = ACTIONS(49),
    },
    [89] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [90] = {
        [sym_type_parameter_list] = STATE(92),
        [anon_sym_LBRACE] = ACTIONS(313),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [91] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(94),
        [anon_sym_RBRACE] = ACTIONS(315),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [92] = {
        [anon_sym_LBRACE] = ACTIONS(145),
        [sym_comment] = ACTIONS(49),
    },
    [93] = {
        [ts_builtin_sym_end] = ACTIONS(317),
        [anon_sym_namespace] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_struct] = ACTIONS(319),
        [anon_sym_abstract] = ACTIONS(319),
        [anon_sym_sealed] = ACTIONS(319),
        [anon_sym_static] = ACTIONS(319),
        [anon_sym_new] = ACTIONS(319),
        [anon_sym_public] = ACTIONS(319),
        [anon_sym_protected] = ACTIONS(319),
        [anon_sym_internal] = ACTIONS(319),
        [anon_sym_private] = ACTIONS(319),
        [anon_sym_unsafe] = ACTIONS(319),
        [anon_sym_readonly] = ACTIONS(319),
        [anon_sym_volatile] = ACTIONS(319),
        [anon_sym_bool] = ACTIONS(319),
        [anon_sym_byte] = ACTIONS(319),
        [anon_sym_char] = ACTIONS(319),
        [anon_sym_decimal] = ACTIONS(319),
        [anon_sym_double] = ACTIONS(319),
        [anon_sym_float] = ACTIONS(319),
        [anon_sym_int] = ACTIONS(319),
        [anon_sym_long] = ACTIONS(319),
        [anon_sym_object] = ACTIONS(319),
        [anon_sym_sbyte] = ACTIONS(319),
        [anon_sym_short] = ACTIONS(319),
        [anon_sym_string] = ACTIONS(319),
        [anon_sym_uint] = ACTIONS(319),
        [anon_sym_ulong] = ACTIONS(319),
        [anon_sym_ushort] = ACTIONS(319),
        [sym_identifier_name] = ACTIONS(321),
        [sym_comment] = ACTIONS(49),
    },
    [94] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [95] = {
        [anon_sym_COLON_COLON] = ACTIONS(323),
        [sym_comment] = ACTIONS(49),
    },
    [96] = {
        [anon_sym_LBRACE] = ACTIONS(325),
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [97] = {
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [98] = {
        [sym_identifier_name] = ACTIONS(329),
        [sym_comment] = ACTIONS(49),
    },
    [99] = {
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_LBRACE] = ACTIONS(331),
        [anon_sym_DOT] = ACTIONS(331),
        [sym_comment] = ACTIONS(49),
    },
    [100] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(102),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_RBRACE] = ACTIONS(333),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_namespace] = ACTIONS(335),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_struct] = ACTIONS(335),
        [anon_sym_abstract] = ACTIONS(335),
        [anon_sym_sealed] = ACTIONS(335),
        [anon_sym_static] = ACTIONS(335),
        [anon_sym_new] = ACTIONS(335),
        [anon_sym_public] = ACTIONS(335),
        [anon_sym_protected] = ACTIONS(335),
        [anon_sym_internal] = ACTIONS(335),
        [anon_sym_private] = ACTIONS(335),
        [anon_sym_unsafe] = ACTIONS(335),
        [sym_comment] = ACTIONS(49),
    },
    [102] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_RBRACE] = ACTIONS(337),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_namespace] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_struct] = ACTIONS(339),
        [anon_sym_abstract] = ACTIONS(339),
        [anon_sym_sealed] = ACTIONS(339),
        [anon_sym_static] = ACTIONS(339),
        [anon_sym_new] = ACTIONS(339),
        [anon_sym_public] = ACTIONS(339),
        [anon_sym_protected] = ACTIONS(339),
        [anon_sym_internal] = ACTIONS(339),
        [anon_sym_private] = ACTIONS(339),
        [anon_sym_unsafe] = ACTIONS(339),
        [sym_comment] = ACTIONS(49),
    },
    [104] = {
        [sym_identifier_name] = ACTIONS(341),
        [sym_comment] = ACTIONS(49),
    },
    [105] = {
        [anon_sym_DOT] = ACTIONS(343),
        [sym_comment] = ACTIONS(49),
    },
    [106] = {
        [sym_global] = ACTIONS(345),
        [sym_identifier_name] = ACTIONS(347),
        [sym_comment] = ACTIONS(49),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_EQ] = ACTIONS(351),
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [109] = {
        [sym_qualified_name] = STATE(110),
        [sym_alias_qualified_name] = STATE(97),
        [sym_global] = ACTIONS(67),
        [sym_identifier_name] = ACTIONS(353),
        [sym_comment] = ACTIONS(49),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_using] = ACTIONS(357),
        [anon_sym_namespace] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_struct] = ACTIONS(357),
        [anon_sym_abstract] = ACTIONS(357),
        [anon_sym_sealed] = ACTIONS(357),
        [anon_sym_static] = ACTIONS(357),
        [anon_sym_new] = ACTIONS(357),
        [anon_sym_public] = ACTIONS(357),
        [anon_sym_protected] = ACTIONS(357),
        [anon_sym_internal] = ACTIONS(357),
        [anon_sym_private] = ACTIONS(357),
        [anon_sym_unsafe] = ACTIONS(357),
        [sym_comment] = ACTIONS(49),
    },
    [112] = {
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_using] = ACTIONS(359),
        [anon_sym_namespace] = ACTIONS(359),
        [anon_sym_class] = ACTIONS(359),
        [anon_sym_struct] = ACTIONS(359),
        [anon_sym_abstract] = ACTIONS(359),
        [anon_sym_sealed] = ACTIONS(359),
        [anon_sym_static] = ACTIONS(359),
        [anon_sym_new] = ACTIONS(359),
        [anon_sym_public] = ACTIONS(359),
        [anon_sym_protected] = ACTIONS(359),
        [anon_sym_internal] = ACTIONS(359),
        [anon_sym_private] = ACTIONS(359),
        [anon_sym_unsafe] = ACTIONS(359),
        [sym_comment] = ACTIONS(49),
    },
    [113] = {
        [sym_global] = ACTIONS(361),
        [sym_identifier_name] = ACTIONS(363),
        [sym_comment] = ACTIONS(49),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(365),
        [anon_sym_using] = ACTIONS(368),
        [anon_sym_namespace] = ACTIONS(368),
        [anon_sym_RBRACE] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(374),
        [anon_sym_struct] = ACTIONS(374),
        [anon_sym_abstract] = ACTIONS(374),
        [anon_sym_sealed] = ACTIONS(374),
        [anon_sym_static] = ACTIONS(374),
        [anon_sym_new] = ACTIONS(374),
        [anon_sym_public] = ACTIONS(374),
        [anon_sym_protected] = ACTIONS(374),
        [anon_sym_internal] = ACTIONS(374),
        [anon_sym_private] = ACTIONS(374),
        [anon_sym_unsafe] = ACTIONS(374),
        [anon_sym_readonly] = ACTIONS(379),
        [anon_sym_volatile] = ACTIONS(379),
        [anon_sym_bool] = ACTIONS(379),
        [anon_sym_byte] = ACTIONS(379),
        [anon_sym_char] = ACTIONS(379),
        [anon_sym_decimal] = ACTIONS(379),
        [anon_sym_double] = ACTIONS(379),
        [anon_sym_float] = ACTIONS(379),
        [anon_sym_int] = ACTIONS(379),
        [anon_sym_long] = ACTIONS(379),
        [anon_sym_object] = ACTIONS(379),
        [anon_sym_sbyte] = ACTIONS(379),
        [anon_sym_short] = ACTIONS(379),
        [anon_sym_string] = ACTIONS(379),
        [anon_sym_uint] = ACTIONS(379),
        [anon_sym_ulong] = ACTIONS(379),
        [anon_sym_ushort] = ACTIONS(379),
        [sym_identifier_name] = ACTIONS(382),
        [sym_comment] = ACTIONS(49),
    },
    [115] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(153),
        [sym_struct_declaration] = STATE(153),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_compilation_unit_repeat2] = STATE(102),
        [aux_sym_class_declaration_repeat1] = STATE(138),
        [aux_sym_struct_declaration_repeat1] = STATE(139),
        [anon_sym_namespace] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(387),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(389),
        [anon_sym_namespace] = ACTIONS(400),
        [anon_sym_RBRACE] = ACTIONS(389),
        [anon_sym_class] = ACTIONS(400),
        [anon_sym_struct] = ACTIONS(400),
        [anon_sym_abstract] = ACTIONS(400),
        [anon_sym_sealed] = ACTIONS(400),
        [anon_sym_static] = ACTIONS(400),
        [anon_sym_new] = ACTIONS(400),
        [anon_sym_public] = ACTIONS(400),
        [anon_sym_protected] = ACTIONS(400),
        [anon_sym_internal] = ACTIONS(400),
        [anon_sym_private] = ACTIONS(400),
        [anon_sym_unsafe] = ACTIONS(400),
        [anon_sym_readonly] = ACTIONS(411),
        [anon_sym_volatile] = ACTIONS(411),
        [anon_sym_bool] = ACTIONS(411),
        [anon_sym_byte] = ACTIONS(411),
        [anon_sym_char] = ACTIONS(411),
        [anon_sym_decimal] = ACTIONS(411),
        [anon_sym_double] = ACTIONS(411),
        [anon_sym_float] = ACTIONS(411),
        [anon_sym_int] = ACTIONS(411),
        [anon_sym_long] = ACTIONS(411),
        [anon_sym_object] = ACTIONS(411),
        [anon_sym_sbyte] = ACTIONS(411),
        [anon_sym_short] = ACTIONS(411),
        [anon_sym_string] = ACTIONS(411),
        [anon_sym_uint] = ACTIONS(411),
        [anon_sym_ulong] = ACTIONS(411),
        [anon_sym_ushort] = ACTIONS(411),
        [sym_identifier_name] = ACTIONS(420),
        [sym_comment] = ACTIONS(49),
    },
    [117] = {
        [sym_identifier_name] = ACTIONS(429),
        [sym_comment] = ACTIONS(49),
    },
    [118] = {
        [sym_identifier_name] = ACTIONS(431),
        [sym_comment] = ACTIONS(49),
    },
    [119] = {
        [sym__type] = STATE(73),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(159),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(160),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(433),
        [sym_comment] = ACTIONS(49),
    },
    [120] = {
        [sym__literal] = STATE(68),
        [sym_boolean_literal] = STATE(69),
        [sym_integer_literal] = STATE(69),
        [anon_sym_true] = ACTIONS(435),
        [anon_sym_false] = ACTIONS(435),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(247),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(247),
        [sym_global] = ACTIONS(361),
        [sym_identifier_name] = ACTIONS(363),
        [sym_comment] = ACTIONS(49),
    },
    [121] = {
        [sym__class_modifiers] = STATE(83),
        [sym__field_modifiers] = STATE(82),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_global] = ACTIONS(345),
        [sym_identifier_name] = ACTIONS(437),
        [sym_comment] = ACTIONS(49),
    },
    [122] = {
        [anon_sym_LBRACE] = ACTIONS(440),
        [anon_sym_COMMA] = ACTIONS(440),
        [anon_sym_GT] = ACTIONS(440),
        [sym_identifier_name] = ACTIONS(443),
        [sym_comment] = ACTIONS(49),
    },
    [123] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(134),
        [anon_sym_SEMI] = ACTIONS(446),
        [anon_sym_LBRACE] = ACTIONS(450),
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_EQ] = ACTIONS(456),
        [anon_sym_LT] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(183),
        [anon_sym_DOT] = ACTIONS(458),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(49),
    },
    [124] = {
        [ts_builtin_sym_end] = ACTIONS(462),
        [anon_sym_using] = ACTIONS(462),
        [anon_sym_namespace] = ACTIONS(462),
        [anon_sym_class] = ACTIONS(462),
        [anon_sym_struct] = ACTIONS(462),
        [anon_sym_abstract] = ACTIONS(462),
        [anon_sym_sealed] = ACTIONS(462),
        [anon_sym_static] = ACTIONS(462),
        [anon_sym_new] = ACTIONS(462),
        [anon_sym_public] = ACTIONS(462),
        [anon_sym_protected] = ACTIONS(462),
        [anon_sym_internal] = ACTIONS(462),
        [anon_sym_private] = ACTIONS(462),
        [anon_sym_unsafe] = ACTIONS(462),
        [sym_comment] = ACTIONS(49),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(465),
        [anon_sym_namespace] = ACTIONS(465),
        [anon_sym_RBRACE] = ACTIONS(465),
        [anon_sym_class] = ACTIONS(465),
        [anon_sym_struct] = ACTIONS(465),
        [anon_sym_abstract] = ACTIONS(465),
        [anon_sym_sealed] = ACTIONS(465),
        [anon_sym_static] = ACTIONS(465),
        [anon_sym_new] = ACTIONS(465),
        [anon_sym_public] = ACTIONS(465),
        [anon_sym_protected] = ACTIONS(465),
        [anon_sym_internal] = ACTIONS(465),
        [anon_sym_private] = ACTIONS(465),
        [anon_sym_unsafe] = ACTIONS(465),
        [sym_comment] = ACTIONS(49),
    },
    [126] = {
        [ts_builtin_sym_end] = ACTIONS(465),
        [anon_sym_namespace] = ACTIONS(468),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(478),
        [anon_sym_struct] = ACTIONS(478),
        [anon_sym_abstract] = ACTIONS(478),
        [anon_sym_sealed] = ACTIONS(478),
        [anon_sym_static] = ACTIONS(478),
        [anon_sym_new] = ACTIONS(478),
        [anon_sym_public] = ACTIONS(478),
        [anon_sym_protected] = ACTIONS(478),
        [anon_sym_internal] = ACTIONS(478),
        [anon_sym_private] = ACTIONS(478),
        [anon_sym_unsafe] = ACTIONS(478),
        [anon_sym_readonly] = ACTIONS(485),
        [anon_sym_volatile] = ACTIONS(485),
        [anon_sym_bool] = ACTIONS(485),
        [anon_sym_byte] = ACTIONS(485),
        [anon_sym_char] = ACTIONS(485),
        [anon_sym_decimal] = ACTIONS(485),
        [anon_sym_double] = ACTIONS(485),
        [anon_sym_float] = ACTIONS(485),
        [anon_sym_int] = ACTIONS(485),
        [anon_sym_long] = ACTIONS(485),
        [anon_sym_object] = ACTIONS(485),
        [anon_sym_sbyte] = ACTIONS(485),
        [anon_sym_short] = ACTIONS(485),
        [anon_sym_string] = ACTIONS(485),
        [anon_sym_uint] = ACTIONS(485),
        [anon_sym_ulong] = ACTIONS(485),
        [anon_sym_ushort] = ACTIONS(485),
        [sym_identifier_name] = ACTIONS(488),
        [sym_comment] = ACTIONS(49),
    },
    [127] = {
        [anon_sym_RBRACE] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_struct] = ACTIONS(485),
        [anon_sym_abstract] = ACTIONS(485),
        [anon_sym_sealed] = ACTIONS(485),
        [anon_sym_static] = ACTIONS(485),
        [anon_sym_new] = ACTIONS(485),
        [anon_sym_public] = ACTIONS(485),
        [anon_sym_protected] = ACTIONS(485),
        [anon_sym_internal] = ACTIONS(485),
        [anon_sym_private] = ACTIONS(485),
        [anon_sym_unsafe] = ACTIONS(485),
        [anon_sym_readonly] = ACTIONS(485),
        [anon_sym_volatile] = ACTIONS(485),
        [anon_sym_bool] = ACTIONS(485),
        [anon_sym_byte] = ACTIONS(485),
        [anon_sym_char] = ACTIONS(485),
        [anon_sym_decimal] = ACTIONS(485),
        [anon_sym_double] = ACTIONS(485),
        [anon_sym_float] = ACTIONS(485),
        [anon_sym_int] = ACTIONS(485),
        [anon_sym_long] = ACTIONS(485),
        [anon_sym_object] = ACTIONS(485),
        [anon_sym_sbyte] = ACTIONS(485),
        [anon_sym_short] = ACTIONS(485),
        [anon_sym_string] = ACTIONS(485),
        [anon_sym_uint] = ACTIONS(485),
        [anon_sym_ulong] = ACTIONS(485),
        [anon_sym_ushort] = ACTIONS(485),
        [sym_identifier_name] = ACTIONS(488),
        [sym_comment] = ACTIONS(49),
    },
    [128] = {
        [anon_sym_SEMI] = ACTIONS(494),
        [sym_comment] = ACTIONS(49),
    },
    [129] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(49),
    },
    [130] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(496),
        [anon_sym_COMMA] = ACTIONS(500),
        [sym_comment] = ACTIONS(49),
    },
    [131] = {
        [anon_sym_class] = ACTIONS(504),
        [sym_comment] = ACTIONS(49),
    },
    [132] = {
        [anon_sym_struct] = ACTIONS(507),
        [sym_comment] = ACTIONS(49),
    },
    [133] = {
        [anon_sym_bool] = ACTIONS(510),
        [anon_sym_byte] = ACTIONS(510),
        [anon_sym_char] = ACTIONS(510),
        [anon_sym_decimal] = ACTIONS(510),
        [anon_sym_double] = ACTIONS(510),
        [anon_sym_float] = ACTIONS(510),
        [anon_sym_int] = ACTIONS(510),
        [anon_sym_long] = ACTIONS(510),
        [anon_sym_object] = ACTIONS(510),
        [anon_sym_sbyte] = ACTIONS(510),
        [anon_sym_short] = ACTIONS(510),
        [anon_sym_string] = ACTIONS(510),
        [anon_sym_uint] = ACTIONS(510),
        [anon_sym_ulong] = ACTIONS(510),
        [anon_sym_ushort] = ACTIONS(510),
        [sym_identifier_name] = ACTIONS(513),
        [sym_comment] = ACTIONS(49),
    },
    [134] = {
        [anon_sym_LBRACE] = ACTIONS(516),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(49),
    },
    [135] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(77),
        [anon_sym_COMMA] = ACTIONS(518),
        [anon_sym_GT] = ACTIONS(522),
        [sym_comment] = ACTIONS(49),
    },
    [136] = {
        [anon_sym_SEMI] = ACTIONS(526),
        [anon_sym_LBRACE] = ACTIONS(325),
        [anon_sym_DOT] = ACTIONS(327),
        [sym_comment] = ACTIONS(49),
    },
    [137] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(528),
        [anon_sym_namespace] = ACTIONS(55),
        [anon_sym_RBRACE] = ACTIONS(337),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [138] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [139] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(533),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(535),
        [anon_sym_namespace] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_struct] = ACTIONS(539),
        [anon_sym_abstract] = ACTIONS(539),
        [anon_sym_sealed] = ACTIONS(539),
        [anon_sym_static] = ACTIONS(539),
        [anon_sym_new] = ACTIONS(539),
        [anon_sym_public] = ACTIONS(539),
        [anon_sym_protected] = ACTIONS(539),
        [anon_sym_internal] = ACTIONS(539),
        [anon_sym_private] = ACTIONS(539),
        [anon_sym_unsafe] = ACTIONS(539),
        [anon_sym_readonly] = ACTIONS(539),
        [anon_sym_volatile] = ACTIONS(539),
        [anon_sym_bool] = ACTIONS(539),
        [anon_sym_byte] = ACTIONS(539),
        [anon_sym_char] = ACTIONS(539),
        [anon_sym_decimal] = ACTIONS(539),
        [anon_sym_double] = ACTIONS(539),
        [anon_sym_float] = ACTIONS(539),
        [anon_sym_int] = ACTIONS(539),
        [anon_sym_long] = ACTIONS(539),
        [anon_sym_object] = ACTIONS(539),
        [anon_sym_sbyte] = ACTIONS(539),
        [anon_sym_short] = ACTIONS(539),
        [anon_sym_string] = ACTIONS(539),
        [anon_sym_uint] = ACTIONS(539),
        [anon_sym_ulong] = ACTIONS(539),
        [anon_sym_ushort] = ACTIONS(539),
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(49),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_namespace] = ACTIONS(551),
        [anon_sym_RBRACE] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_struct] = ACTIONS(551),
        [anon_sym_abstract] = ACTIONS(551),
        [anon_sym_sealed] = ACTIONS(551),
        [anon_sym_static] = ACTIONS(551),
        [anon_sym_new] = ACTIONS(551),
        [anon_sym_public] = ACTIONS(551),
        [anon_sym_protected] = ACTIONS(551),
        [anon_sym_internal] = ACTIONS(551),
        [anon_sym_private] = ACTIONS(551),
        [anon_sym_unsafe] = ACTIONS(551),
        [anon_sym_readonly] = ACTIONS(551),
        [anon_sym_volatile] = ACTIONS(551),
        [anon_sym_bool] = ACTIONS(551),
        [anon_sym_byte] = ACTIONS(551),
        [anon_sym_char] = ACTIONS(551),
        [anon_sym_decimal] = ACTIONS(551),
        [anon_sym_double] = ACTIONS(551),
        [anon_sym_float] = ACTIONS(551),
        [anon_sym_int] = ACTIONS(551),
        [anon_sym_long] = ACTIONS(551),
        [anon_sym_object] = ACTIONS(551),
        [anon_sym_sbyte] = ACTIONS(551),
        [anon_sym_short] = ACTIONS(551),
        [anon_sym_string] = ACTIONS(551),
        [anon_sym_uint] = ACTIONS(551),
        [anon_sym_ulong] = ACTIONS(551),
        [anon_sym_ushort] = ACTIONS(551),
        [sym_identifier_name] = ACTIONS(555),
        [sym_comment] = ACTIONS(49),
    },
    [142] = {
        [ts_builtin_sym_end] = ACTIONS(365),
        [anon_sym_using] = ACTIONS(365),
        [anon_sym_namespace] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(365),
        [anon_sym_struct] = ACTIONS(365),
        [anon_sym_abstract] = ACTIONS(365),
        [anon_sym_sealed] = ACTIONS(365),
        [anon_sym_static] = ACTIONS(365),
        [anon_sym_new] = ACTIONS(365),
        [anon_sym_public] = ACTIONS(365),
        [anon_sym_protected] = ACTIONS(365),
        [anon_sym_internal] = ACTIONS(365),
        [anon_sym_private] = ACTIONS(365),
        [anon_sym_unsafe] = ACTIONS(365),
        [sym_comment] = ACTIONS(49),
    },
    [143] = {
        [sym_class_declaration] = STATE(145),
        [sym_struct_declaration] = STATE(145),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(146),
        [aux_sym_struct_declaration_repeat1] = STATE(147),
        [anon_sym_RBRACE] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_namespace] = ACTIONS(566),
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(566),
        [anon_sym_struct] = ACTIONS(566),
        [anon_sym_abstract] = ACTIONS(566),
        [anon_sym_sealed] = ACTIONS(566),
        [anon_sym_static] = ACTIONS(566),
        [anon_sym_new] = ACTIONS(566),
        [anon_sym_public] = ACTIONS(566),
        [anon_sym_protected] = ACTIONS(566),
        [anon_sym_internal] = ACTIONS(566),
        [anon_sym_private] = ACTIONS(566),
        [anon_sym_unsafe] = ACTIONS(566),
        [anon_sym_readonly] = ACTIONS(566),
        [anon_sym_volatile] = ACTIONS(566),
        [anon_sym_bool] = ACTIONS(566),
        [anon_sym_byte] = ACTIONS(566),
        [anon_sym_char] = ACTIONS(566),
        [anon_sym_decimal] = ACTIONS(566),
        [anon_sym_double] = ACTIONS(566),
        [anon_sym_float] = ACTIONS(566),
        [anon_sym_int] = ACTIONS(566),
        [anon_sym_long] = ACTIONS(566),
        [anon_sym_object] = ACTIONS(566),
        [anon_sym_sbyte] = ACTIONS(566),
        [anon_sym_short] = ACTIONS(566),
        [anon_sym_string] = ACTIONS(566),
        [anon_sym_uint] = ACTIONS(566),
        [anon_sym_ulong] = ACTIONS(566),
        [anon_sym_ushort] = ACTIONS(566),
        [sym_identifier_name] = ACTIONS(571),
        [sym_comment] = ACTIONS(49),
    },
    [145] = {
        [anon_sym_RBRACE] = ACTIONS(576),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_struct] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(579),
        [anon_sym_sealed] = ACTIONS(579),
        [anon_sym_static] = ACTIONS(579),
        [anon_sym_new] = ACTIONS(579),
        [anon_sym_public] = ACTIONS(579),
        [anon_sym_protected] = ACTIONS(579),
        [anon_sym_internal] = ACTIONS(579),
        [anon_sym_private] = ACTIONS(579),
        [anon_sym_unsafe] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(49),
    },
    [146] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(582),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [147] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(584),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(586),
        [anon_sym_namespace] = ACTIONS(589),
        [anon_sym_RBRACE] = ACTIONS(586),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_struct] = ACTIONS(589),
        [anon_sym_abstract] = ACTIONS(589),
        [anon_sym_sealed] = ACTIONS(589),
        [anon_sym_static] = ACTIONS(589),
        [anon_sym_new] = ACTIONS(589),
        [anon_sym_public] = ACTIONS(589),
        [anon_sym_protected] = ACTIONS(589),
        [anon_sym_internal] = ACTIONS(589),
        [anon_sym_private] = ACTIONS(589),
        [anon_sym_unsafe] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(589),
        [anon_sym_volatile] = ACTIONS(589),
        [anon_sym_bool] = ACTIONS(589),
        [anon_sym_byte] = ACTIONS(589),
        [anon_sym_char] = ACTIONS(589),
        [anon_sym_decimal] = ACTIONS(589),
        [anon_sym_double] = ACTIONS(589),
        [anon_sym_float] = ACTIONS(589),
        [anon_sym_int] = ACTIONS(589),
        [anon_sym_long] = ACTIONS(589),
        [anon_sym_object] = ACTIONS(589),
        [anon_sym_sbyte] = ACTIONS(589),
        [anon_sym_short] = ACTIONS(589),
        [anon_sym_string] = ACTIONS(589),
        [anon_sym_uint] = ACTIONS(589),
        [anon_sym_ulong] = ACTIONS(589),
        [anon_sym_ushort] = ACTIONS(589),
        [sym_identifier_name] = ACTIONS(592),
        [sym_comment] = ACTIONS(49),
    },
    [149] = {
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_namespace] = ACTIONS(598),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(598),
        [anon_sym_struct] = ACTIONS(598),
        [anon_sym_abstract] = ACTIONS(598),
        [anon_sym_sealed] = ACTIONS(598),
        [anon_sym_static] = ACTIONS(598),
        [anon_sym_new] = ACTIONS(598),
        [anon_sym_public] = ACTIONS(598),
        [anon_sym_protected] = ACTIONS(598),
        [anon_sym_internal] = ACTIONS(598),
        [anon_sym_private] = ACTIONS(598),
        [anon_sym_unsafe] = ACTIONS(598),
        [anon_sym_readonly] = ACTIONS(598),
        [anon_sym_volatile] = ACTIONS(598),
        [anon_sym_bool] = ACTIONS(598),
        [anon_sym_byte] = ACTIONS(598),
        [anon_sym_char] = ACTIONS(598),
        [anon_sym_decimal] = ACTIONS(598),
        [anon_sym_double] = ACTIONS(598),
        [anon_sym_float] = ACTIONS(598),
        [anon_sym_int] = ACTIONS(598),
        [anon_sym_long] = ACTIONS(598),
        [anon_sym_object] = ACTIONS(598),
        [anon_sym_sbyte] = ACTIONS(598),
        [anon_sym_short] = ACTIONS(598),
        [anon_sym_string] = ACTIONS(598),
        [anon_sym_uint] = ACTIONS(598),
        [anon_sym_ulong] = ACTIONS(598),
        [anon_sym_ushort] = ACTIONS(598),
        [sym_identifier_name] = ACTIONS(601),
        [sym_comment] = ACTIONS(49),
    },
    [150] = {
        [anon_sym_RBRACE] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(379),
        [anon_sym_struct] = ACTIONS(379),
        [anon_sym_abstract] = ACTIONS(379),
        [anon_sym_sealed] = ACTIONS(379),
        [anon_sym_static] = ACTIONS(379),
        [anon_sym_new] = ACTIONS(379),
        [anon_sym_public] = ACTIONS(379),
        [anon_sym_protected] = ACTIONS(379),
        [anon_sym_internal] = ACTIONS(379),
        [anon_sym_private] = ACTIONS(379),
        [anon_sym_unsafe] = ACTIONS(379),
        [anon_sym_readonly] = ACTIONS(379),
        [anon_sym_volatile] = ACTIONS(379),
        [anon_sym_bool] = ACTIONS(379),
        [anon_sym_byte] = ACTIONS(379),
        [anon_sym_char] = ACTIONS(379),
        [anon_sym_decimal] = ACTIONS(379),
        [anon_sym_double] = ACTIONS(379),
        [anon_sym_float] = ACTIONS(379),
        [anon_sym_int] = ACTIONS(379),
        [anon_sym_long] = ACTIONS(379),
        [anon_sym_object] = ACTIONS(379),
        [anon_sym_sbyte] = ACTIONS(379),
        [anon_sym_short] = ACTIONS(379),
        [anon_sym_string] = ACTIONS(379),
        [anon_sym_uint] = ACTIONS(379),
        [anon_sym_ulong] = ACTIONS(379),
        [anon_sym_ushort] = ACTIONS(379),
        [sym_identifier_name] = ACTIONS(382),
        [sym_comment] = ACTIONS(49),
    },
    [151] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(153),
        [sym_struct_declaration] = STATE(153),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_compilation_unit_repeat2] = STATE(102),
        [aux_sym_class_declaration_repeat1] = STATE(154),
        [aux_sym_struct_declaration_repeat1] = STATE(155),
        [anon_sym_namespace] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(604),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [152] = {
        [ts_builtin_sym_end] = ACTIONS(606),
        [anon_sym_namespace] = ACTIONS(612),
        [anon_sym_RBRACE] = ACTIONS(606),
        [anon_sym_class] = ACTIONS(612),
        [anon_sym_struct] = ACTIONS(612),
        [anon_sym_abstract] = ACTIONS(612),
        [anon_sym_sealed] = ACTIONS(612),
        [anon_sym_static] = ACTIONS(612),
        [anon_sym_new] = ACTIONS(612),
        [anon_sym_public] = ACTIONS(612),
        [anon_sym_protected] = ACTIONS(612),
        [anon_sym_internal] = ACTIONS(612),
        [anon_sym_private] = ACTIONS(612),
        [anon_sym_unsafe] = ACTIONS(612),
        [anon_sym_readonly] = ACTIONS(618),
        [anon_sym_volatile] = ACTIONS(618),
        [anon_sym_bool] = ACTIONS(618),
        [anon_sym_byte] = ACTIONS(618),
        [anon_sym_char] = ACTIONS(618),
        [anon_sym_decimal] = ACTIONS(618),
        [anon_sym_double] = ACTIONS(618),
        [anon_sym_float] = ACTIONS(618),
        [anon_sym_int] = ACTIONS(618),
        [anon_sym_long] = ACTIONS(618),
        [anon_sym_object] = ACTIONS(618),
        [anon_sym_sbyte] = ACTIONS(618),
        [anon_sym_short] = ACTIONS(618),
        [anon_sym_string] = ACTIONS(618),
        [anon_sym_uint] = ACTIONS(618),
        [anon_sym_ulong] = ACTIONS(618),
        [anon_sym_ushort] = ACTIONS(618),
        [sym_identifier_name] = ACTIONS(623),
        [sym_comment] = ACTIONS(49),
    },
    [153] = {
        [anon_sym_namespace] = ACTIONS(628),
        [anon_sym_RBRACE] = ACTIONS(630),
        [anon_sym_class] = ACTIONS(634),
        [anon_sym_struct] = ACTIONS(634),
        [anon_sym_abstract] = ACTIONS(634),
        [anon_sym_sealed] = ACTIONS(634),
        [anon_sym_static] = ACTIONS(634),
        [anon_sym_new] = ACTIONS(634),
        [anon_sym_public] = ACTIONS(634),
        [anon_sym_protected] = ACTIONS(634),
        [anon_sym_internal] = ACTIONS(634),
        [anon_sym_private] = ACTIONS(634),
        [anon_sym_unsafe] = ACTIONS(634),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(49),
    },
    [154] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(638),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [155] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(640),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [156] = {
        [ts_builtin_sym_end] = ACTIONS(642),
        [anon_sym_namespace] = ACTIONS(645),
        [anon_sym_RBRACE] = ACTIONS(642),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_struct] = ACTIONS(645),
        [anon_sym_abstract] = ACTIONS(645),
        [anon_sym_sealed] = ACTIONS(645),
        [anon_sym_static] = ACTIONS(645),
        [anon_sym_new] = ACTIONS(645),
        [anon_sym_public] = ACTIONS(645),
        [anon_sym_protected] = ACTIONS(645),
        [anon_sym_internal] = ACTIONS(645),
        [anon_sym_private] = ACTIONS(645),
        [anon_sym_unsafe] = ACTIONS(645),
        [anon_sym_readonly] = ACTIONS(645),
        [anon_sym_volatile] = ACTIONS(645),
        [anon_sym_bool] = ACTIONS(645),
        [anon_sym_byte] = ACTIONS(645),
        [anon_sym_char] = ACTIONS(645),
        [anon_sym_decimal] = ACTIONS(645),
        [anon_sym_double] = ACTIONS(645),
        [anon_sym_float] = ACTIONS(645),
        [anon_sym_int] = ACTIONS(645),
        [anon_sym_long] = ACTIONS(645),
        [anon_sym_object] = ACTIONS(645),
        [anon_sym_sbyte] = ACTIONS(645),
        [anon_sym_short] = ACTIONS(645),
        [anon_sym_string] = ACTIONS(645),
        [anon_sym_uint] = ACTIONS(645),
        [anon_sym_ulong] = ACTIONS(645),
        [anon_sym_ushort] = ACTIONS(645),
        [sym_identifier_name] = ACTIONS(648),
        [sym_comment] = ACTIONS(49),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_namespace] = ACTIONS(654),
        [anon_sym_RBRACE] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(654),
        [anon_sym_struct] = ACTIONS(654),
        [anon_sym_abstract] = ACTIONS(654),
        [anon_sym_sealed] = ACTIONS(654),
        [anon_sym_static] = ACTIONS(654),
        [anon_sym_new] = ACTIONS(654),
        [anon_sym_public] = ACTIONS(654),
        [anon_sym_protected] = ACTIONS(654),
        [anon_sym_internal] = ACTIONS(654),
        [anon_sym_private] = ACTIONS(654),
        [anon_sym_unsafe] = ACTIONS(654),
        [anon_sym_readonly] = ACTIONS(654),
        [anon_sym_volatile] = ACTIONS(654),
        [anon_sym_bool] = ACTIONS(654),
        [anon_sym_byte] = ACTIONS(654),
        [anon_sym_char] = ACTIONS(654),
        [anon_sym_decimal] = ACTIONS(654),
        [anon_sym_double] = ACTIONS(654),
        [anon_sym_float] = ACTIONS(654),
        [anon_sym_int] = ACTIONS(654),
        [anon_sym_long] = ACTIONS(654),
        [anon_sym_object] = ACTIONS(654),
        [anon_sym_sbyte] = ACTIONS(654),
        [anon_sym_short] = ACTIONS(654),
        [anon_sym_string] = ACTIONS(654),
        [anon_sym_uint] = ACTIONS(654),
        [anon_sym_ulong] = ACTIONS(654),
        [anon_sym_ushort] = ACTIONS(654),
        [sym_identifier_name] = ACTIONS(657),
        [sym_comment] = ACTIONS(49),
    },
    [158] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(72),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_EQ] = ACTIONS(231),
        [anon_sym_LT] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(183),
        [sym_comment] = ACTIONS(49),
    },
    [159] = {
        [anon_sym_SEMI] = ACTIONS(660),
        [anon_sym_COMMA] = ACTIONS(660),
        [sym_comment] = ACTIONS(49),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_GT] = ACTIONS(663),
        [sym_comment] = ACTIONS(49),
    },
    [161] = {
        [sym_type_parameter_list] = STATE(163),
        [anon_sym_LBRACE] = ACTIONS(666),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [162] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(155),
        [anon_sym_RBRACE] = ACTIONS(668),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [163] = {
        [anon_sym_LBRACE] = ACTIONS(670),
        [sym_comment] = ACTIONS(49),
    },
    [164] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(147),
        [anon_sym_RBRACE] = ACTIONS(640),
        [anon_sym_class] = ACTIONS(57),
        [anon_sym_struct] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(49),
    },
    [165] = {
        [ts_builtin_sym_end] = ACTIONS(672),
        [anon_sym_namespace] = ACTIONS(675),
        [anon_sym_RBRACE] = ACTIONS(672),
        [anon_sym_class] = ACTIONS(675),
        [anon_sym_struct] = ACTIONS(675),
        [anon_sym_abstract] = ACTIONS(675),
        [anon_sym_sealed] = ACTIONS(675),
        [anon_sym_static] = ACTIONS(675),
        [anon_sym_new] = ACTIONS(675),
        [anon_sym_public] = ACTIONS(675),
        [anon_sym_protected] = ACTIONS(675),
        [anon_sym_internal] = ACTIONS(675),
        [anon_sym_private] = ACTIONS(675),
        [anon_sym_unsafe] = ACTIONS(675),
        [anon_sym_readonly] = ACTIONS(675),
        [anon_sym_volatile] = ACTIONS(675),
        [anon_sym_bool] = ACTIONS(675),
        [anon_sym_byte] = ACTIONS(675),
        [anon_sym_char] = ACTIONS(675),
        [anon_sym_decimal] = ACTIONS(675),
        [anon_sym_double] = ACTIONS(675),
        [anon_sym_float] = ACTIONS(675),
        [anon_sym_int] = ACTIONS(675),
        [anon_sym_long] = ACTIONS(675),
        [anon_sym_object] = ACTIONS(675),
        [anon_sym_sbyte] = ACTIONS(675),
        [anon_sym_short] = ACTIONS(675),
        [anon_sym_string] = ACTIONS(675),
        [anon_sym_uint] = ACTIONS(675),
        [anon_sym_ulong] = ACTIONS(675),
        [anon_sym_ushort] = ACTIONS(675),
        [sym_identifier_name] = ACTIONS(678),
        [sym_comment] = ACTIONS(49),
    },
    [166] = {
        [sym_type_parameter_list] = STATE(168),
        [anon_sym_LBRACE] = ACTIONS(681),
        [anon_sym_LT] = ACTIONS(107),
        [sym_comment] = ACTIONS(49),
    },
    [167] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(154),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [168] = {
        [anon_sym_LBRACE] = ACTIONS(685),
        [sym_comment] = ACTIONS(49),
    },
    [169] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(638),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
        [anon_sym_bool] = ACTIONS(111),
        [anon_sym_byte] = ACTIONS(111),
        [anon_sym_char] = ACTIONS(111),
        [anon_sym_decimal] = ACTIONS(111),
        [anon_sym_double] = ACTIONS(111),
        [anon_sym_float] = ACTIONS(111),
        [anon_sym_int] = ACTIONS(111),
        [anon_sym_long] = ACTIONS(111),
        [anon_sym_object] = ACTIONS(111),
        [anon_sym_sbyte] = ACTIONS(111),
        [anon_sym_short] = ACTIONS(111),
        [anon_sym_string] = ACTIONS(111),
        [anon_sym_uint] = ACTIONS(111),
        [anon_sym_ulong] = ACTIONS(111),
        [anon_sym_ushort] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(49),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_namespace] = ACTIONS(690),
        [anon_sym_RBRACE] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(690),
        [anon_sym_struct] = ACTIONS(690),
        [anon_sym_abstract] = ACTIONS(690),
        [anon_sym_sealed] = ACTIONS(690),
        [anon_sym_static] = ACTIONS(690),
        [anon_sym_new] = ACTIONS(690),
        [anon_sym_public] = ACTIONS(690),
        [anon_sym_protected] = ACTIONS(690),
        [anon_sym_internal] = ACTIONS(690),
        [anon_sym_private] = ACTIONS(690),
        [anon_sym_unsafe] = ACTIONS(690),
        [anon_sym_readonly] = ACTIONS(690),
        [anon_sym_volatile] = ACTIONS(690),
        [anon_sym_bool] = ACTIONS(690),
        [anon_sym_byte] = ACTIONS(690),
        [anon_sym_char] = ACTIONS(690),
        [anon_sym_decimal] = ACTIONS(690),
        [anon_sym_double] = ACTIONS(690),
        [anon_sym_float] = ACTIONS(690),
        [anon_sym_int] = ACTIONS(690),
        [anon_sym_long] = ACTIONS(690),
        [anon_sym_object] = ACTIONS(690),
        [anon_sym_sbyte] = ACTIONS(690),
        [anon_sym_short] = ACTIONS(690),
        [anon_sym_string] = ACTIONS(690),
        [anon_sym_uint] = ACTIONS(690),
        [anon_sym_ulong] = ACTIONS(690),
        [anon_sym_ushort] = ACTIONS(690),
        [sym_identifier_name] = ACTIONS(693),
        [sym_comment] = ACTIONS(49),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(696),
        [anon_sym_namespace] = ACTIONS(704),
        [anon_sym_RBRACE] = ACTIONS(696),
        [anon_sym_class] = ACTIONS(704),
        [anon_sym_struct] = ACTIONS(704),
        [anon_sym_abstract] = ACTIONS(704),
        [anon_sym_sealed] = ACTIONS(704),
        [anon_sym_static] = ACTIONS(704),
        [anon_sym_new] = ACTIONS(704),
        [anon_sym_public] = ACTIONS(704),
        [anon_sym_protected] = ACTIONS(704),
        [anon_sym_internal] = ACTIONS(704),
        [anon_sym_private] = ACTIONS(704),
        [anon_sym_unsafe] = ACTIONS(704),
        [anon_sym_readonly] = ACTIONS(712),
        [anon_sym_volatile] = ACTIONS(712),
        [anon_sym_bool] = ACTIONS(712),
        [anon_sym_byte] = ACTIONS(712),
        [anon_sym_char] = ACTIONS(712),
        [anon_sym_decimal] = ACTIONS(712),
        [anon_sym_double] = ACTIONS(712),
        [anon_sym_float] = ACTIONS(712),
        [anon_sym_int] = ACTIONS(712),
        [anon_sym_long] = ACTIONS(712),
        [anon_sym_object] = ACTIONS(712),
        [anon_sym_sbyte] = ACTIONS(712),
        [anon_sym_short] = ACTIONS(712),
        [anon_sym_string] = ACTIONS(712),
        [anon_sym_uint] = ACTIONS(712),
        [anon_sym_ulong] = ACTIONS(712),
        [anon_sym_ushort] = ACTIONS(712),
        [sym_identifier_name] = ACTIONS(719),
        [sym_comment] = ACTIONS(49),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(114),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(115),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(116),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(117),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(118),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(119),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(120),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(67),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(70),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(121),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(122),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(98),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(104),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(95),
    [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(123),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [368] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [371] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [374] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [379] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [382] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [389] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [400] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [411] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [420] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
    [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [437] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [440] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [443] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [446] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(142),
    [450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(151),
    [453] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [458] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(98),
    [462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [465] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [468] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [471] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [478] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [485] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [488] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [491] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [496] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [500] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [504] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [507] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [510] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [513] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [518] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(75),
    [522] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(76),
    [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [528] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [535] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [539] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [543] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [547] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [551] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [555] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [561] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [566] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [571] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [579] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [589] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [592] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [595] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [598] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [601] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [606] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [612] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [618] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [623] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [630] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [634] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [642] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [645] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [648] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [651] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [654] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [657] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [660] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [663] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [675] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [678] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [687] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [690] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [693] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [696] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [704] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [712] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [719] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
