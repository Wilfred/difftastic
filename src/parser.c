#include "tree_sitter/parser.h"

#define STATE_COUNT 171
#define SYMBOL_COUNT 78
#define TOKEN_COUNT 46

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
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 10,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH = 11,
    sym__integer_type_suffix = 12,
    anon_sym_abstract = 13,
    anon_sym_sealed = 14,
    anon_sym_static = 15,
    anon_sym_new = 16,
    anon_sym_public = 17,
    anon_sym_protected = 18,
    anon_sym_internal = 19,
    anon_sym_private = 20,
    anon_sym_unsafe = 21,
    anon_sym_readonly = 22,
    anon_sym_volatile = 23,
    anon_sym_bool = 24,
    anon_sym_byte = 25,
    anon_sym_char = 26,
    anon_sym_decimal = 27,
    anon_sym_double = 28,
    anon_sym_float = 29,
    anon_sym_int = 30,
    anon_sym_long = 31,
    anon_sym_object = 32,
    anon_sym_sbyte = 33,
    anon_sym_short = 34,
    anon_sym_string = 35,
    anon_sym_uint = 36,
    anon_sym_ulong = 37,
    anon_sym_ushort = 38,
    anon_sym_LT = 39,
    anon_sym_GT = 40,
    anon_sym_DOT = 41,
    anon_sym_COLON_COLON = 42,
    sym_global = 43,
    sym_identifier_name = 44,
    sym_comment = 45,
    sym_compilation_unit = 46,
    sym_using_directive = 47,
    sym_namespace_declaration = 48,
    sym_class_declaration = 49,
    sym_struct_declaration = 50,
    sym_field_declaration = 51,
    sym_variable_declaration = 52,
    sym__type = 53,
    sym_generic_name = 54,
    sym_variable_declarator = 55,
    sym_equals_value_clause = 56,
    sym__literal = 57,
    sym_integer_literal = 58,
    sym_class_modifiers = 59,
    sym__class_modifiers = 60,
    sym_struct_modifiers = 61,
    sym__struct_modifiers = 62,
    sym_field_modifiers = 63,
    sym__field_modifiers = 64,
    sym_predefined_type = 65,
    sym_type_parameter_list = 66,
    sym_type_parameter = 67,
    sym_qualified_name = 68,
    sym_alias_qualified_name = 69,
    sym_name_equals = 70,
    sym_static = 71,
    aux_sym_compilation_unit_repeat1 = 72,
    aux_sym_compilation_unit_repeat2 = 73,
    aux_sym_class_declaration_repeat1 = 74,
    aux_sym_struct_declaration_repeat1 = 75,
    aux_sym_variable_declaration_repeat1 = 76,
    aux_sym_type_parameter_list_repeat1 = 77,
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
                ADVANCE(55);
            if (lookahead == 'g')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(74);
            if (lookahead == 'n')
                ADVANCE(79);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(149);
            if (lookahead == 'v')
                ADVANCE(170);
            if (lookahead == '{')
                ADVANCE(178);
            if (lookahead == '}')
                ADVANCE(179);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier_name);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_float);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier_name);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_global);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(69);
            ACCEPT_TOKEN(anon_sym_int);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_internal);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(75);
            if (lookahead == 'u')
                ADVANCE(78);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_long);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(80);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'm')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'p')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'w')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_new);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'j')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_object);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(97);
            if (lookahead == 'u')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(98);
            if (lookahead == 'o')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'v')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_private);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_protected);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_public);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 123:
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
                ADVANCE(124);
            if (lookahead == 'e')
                ADVANCE(128);
            if (lookahead == 'h')
                ADVANCE(133);
            if (lookahead == 't')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_short);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(138);
            if (lookahead == 'r')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_static);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'u')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_string);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_struct);
        case 149:
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
                ADVANCE(150);
            if (lookahead == 'l')
                ADVANCE(153);
            if (lookahead == 'n')
                ADVANCE(157);
            if (lookahead == 's')
                ADVANCE(162);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
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
            ACCEPT_TOKEN(anon_sym_uint);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(154);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(163);
            if (lookahead == 'i')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_using);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 178:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 179:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 180:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(202);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(247);
            LEX_ERROR();
        case 181:
            if (lookahead == 'b')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 's')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 't')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'r')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'a')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'c')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 't')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 189:
            if (lookahead == 'l')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'a')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 's')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 's')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            ACCEPT_TOKEN(anon_sym_class);
        case 194:
            if (lookahead == 'n')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 't')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'e')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'r')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'n')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'a')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'l')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            ACCEPT_TOKEN(anon_sym_internal);
        case 202:
            if (lookahead == 'a')
                ADVANCE(203);
            if (lookahead == 'e')
                ADVANCE(211);
            LEX_ERROR();
        case 203:
            if (lookahead == 'm')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 's')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'p')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'a')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'c')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == 'e')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 211:
            if (lookahead == 'w')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            ACCEPT_TOKEN(anon_sym_new);
        case 213:
            if (lookahead == 'r')
                ADVANCE(214);
            if (lookahead == 'u')
                ADVANCE(227);
            LEX_ERROR();
        case 214:
            if (lookahead == 'i')
                ADVANCE(215);
            if (lookahead == 'o')
                ADVANCE(220);
            LEX_ERROR();
        case 215:
            if (lookahead == 'v')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'a')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 't')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            ACCEPT_TOKEN(anon_sym_private);
        case 220:
            if (lookahead == 't')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'e')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'c')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 't')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'e')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'd')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            ACCEPT_TOKEN(anon_sym_protected);
        case 227:
            if (lookahead == 'b')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            if (lookahead == 'l')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'c')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_public);
        case 232:
            if (lookahead == 'e')
                ADVANCE(233);
            if (lookahead == 't')
                ADVANCE(238);
            LEX_ERROR();
        case 233:
            if (lookahead == 'a')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 'l')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 'e')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'd')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 238:
            if (lookahead == 'a')
                ADVANCE(239);
            if (lookahead == 'r')
                ADVANCE(243);
            LEX_ERROR();
        case 239:
            if (lookahead == 't')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 'i')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == 'c')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            ACCEPT_TOKEN(anon_sym_static);
        case 243:
            if (lookahead == 'u')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'c')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 't')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            ACCEPT_TOKEN(anon_sym_struct);
        case 247:
            if (lookahead == 'n')
                ADVANCE(248);
            if (lookahead == 's')
                ADVANCE(253);
            LEX_ERROR();
        case 248:
            if (lookahead == 's')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'a')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'f')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == 'e')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 253:
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 'n')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            if (lookahead == 'g')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            ACCEPT_TOKEN(anon_sym_using);
        case 257:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(257);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(60);
            if (lookahead == 's')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier_name);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 260:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(260);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(60);
            LEX_ERROR();
        case 261:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(261);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 262:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(262);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(263);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(264);
            if (lookahead == 'u')
                ADVANCE(266);
            LEX_ERROR();
        case 263:
            if (lookahead == 'e')
                ADVANCE(211);
            LEX_ERROR();
        case 264:
            if (lookahead == 'e')
                ADVANCE(233);
            if (lookahead == 't')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'a')
                ADVANCE(239);
            LEX_ERROR();
        case 266:
            if (lookahead == 'n')
                ADVANCE(248);
            LEX_ERROR();
        case 267:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(267);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(263);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(266);
            LEX_ERROR();
        case 268:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(268);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 269:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(269);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(202);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(266);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 270:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(270);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(189);
            LEX_ERROR();
        case 271:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(271);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 's')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 't')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'r')
                ADVANCE(243);
            LEX_ERROR();
        case 274:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(274);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(202);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(266);
            LEX_ERROR();
        case 275:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(275);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(16);
            if (lookahead == '{')
                ADVANCE(178);
            LEX_ERROR();
        case 276:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(276);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(263);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(266);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 277:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(277);
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
                ADVANCE(278);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(279);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 's')
                ADVANCE(283);
            if (lookahead == 'u')
                ADVANCE(286);
            LEX_ERROR();
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_int);
        case 282:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 283:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(124);
            if (lookahead == 'h')
                ADVANCE(133);
            if (lookahead == 't')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier_name);
        case 284:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier_name);
        case 285:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 286:
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
                ADVANCE(150);
            if (lookahead == 'l')
                ADVANCE(287);
            if (lookahead == 's')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier_name);
        case 287:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 288:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 289:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(289);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(178);
            LEX_ERROR();
        case 290:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(290);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(79);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 291:
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
                ADVANCE(150);
            if (lookahead == 'l')
                ADVANCE(287);
            if (lookahead == 'n')
                ADVANCE(157);
            if (lookahead == 's')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier_name);
        case 292:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(292);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 293:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 294:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(294);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(295);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            LEX_ERROR();
        case 295:
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
                ADVANCE(124);
            if (lookahead == 'e')
                ADVANCE(128);
            if (lookahead == 'h')
                ADVANCE(133);
            if (lookahead == 't')
                ADVANCE(296);
            ACCEPT_TOKEN(sym_identifier_name);
        case 296:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(138);
            if (lookahead == 'r')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier_name);
        case 297:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(297);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            LEX_ERROR();
        case 298:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(298);
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
                ADVANCE(278);
            if (lookahead == 'd')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(299);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            LEX_ERROR();
        case 299:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(124);
            if (lookahead == 'h')
                ADVANCE(133);
            if (lookahead == 't')
                ADVANCE(296);
            ACCEPT_TOKEN(sym_identifier_name);
        case 300:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(300);
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
        case 301:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(301);
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
        case 302:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(302);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 303:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(303);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 304:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(304);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 305:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(305);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '0')
                ADVANCE(9);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            LEX_ERROR();
        case 306:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(306);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(307);
            if (lookahead == 'u')
                ADVANCE(309);
            LEX_ERROR();
        case 307:
            if (lookahead == 'u')
                ADVANCE(308);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 308:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 309:
            if (lookahead == 'l')
                ADVANCE(308);
            ACCEPT_TOKEN(sym__integer_type_suffix);
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
            if (lookahead == '>')
                ADVANCE(18);
            LEX_ERROR();
        case 311:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(311);
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
                ADVANCE(178);
            LEX_ERROR();
        case 312:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(312);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(13);
            LEX_ERROR();
        case 313:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(313);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(178);
            LEX_ERROR();
        case 314:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(314);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 315:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(315);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '{')
                ADVANCE(178);
            LEX_ERROR();
        case 316:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(316);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(181);
            if (lookahead == 'c')
                ADVANCE(189);
            if (lookahead == 'i')
                ADVANCE(194);
            if (lookahead == 'n')
                ADVANCE(202);
            if (lookahead == 'p')
                ADVANCE(213);
            if (lookahead == 's')
                ADVANCE(232);
            if (lookahead == 'u')
                ADVANCE(266);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 317:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(317);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 318:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(318);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(15);
            LEX_ERROR();
        case 319:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(319);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(79);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(320);
            if (lookahead == 'v')
                ADVANCE(170);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 320:
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
                ADVANCE(150);
            if (lookahead == 'l')
                ADVANCE(287);
            if (lookahead == 'n')
                ADVANCE(157);
            if (lookahead == 's')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 321:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(321);
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
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(79);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(123);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            if (lookahead == '}')
                ADVANCE(179);
            LEX_ERROR();
        case 322:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(322);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '0')
                ADVANCE(9);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'g')
                ADVANCE(60);
            LEX_ERROR();
        case 323:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(323);
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
                ADVANCE(55);
            if (lookahead == 'g')
                ADVANCE(60);
            if (lookahead == 'i')
                ADVANCE(66);
            if (lookahead == 'l')
                ADVANCE(282);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'o')
                ADVANCE(90);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(115);
            if (lookahead == 's')
                ADVANCE(295);
            if (lookahead == 'u')
                ADVANCE(291);
            if (lookahead == 'v')
                ADVANCE(170);
            LEX_ERROR();
        case 324:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(324);
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
                ADVANCE(178);
            LEX_ERROR();
        case 325:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(325);
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
    [1] = 180,
    [2] = 257,
    [3] = 260,
    [4] = 261,
    [5] = 261,
    [6] = 262,
    [7] = 267,
    [8] = 268,
    [9] = 180,
    [10] = 269,
    [11] = 270,
    [12] = 270,
    [13] = 271,
    [14] = 271,
    [15] = 180,
    [16] = 274,
    [17] = 269,
    [18] = 180,
    [19] = 274,
    [20] = 261,
    [21] = 275,
    [22] = 276,
    [23] = 277,
    [24] = 289,
    [25] = 276,
    [26] = 290,
    [27] = 276,
    [28] = 276,
    [29] = 290,
    [30] = 276,
    [31] = 290,
    [32] = 276,
    [33] = 261,
    [34] = 275,
    [35] = 292,
    [36] = 289,
    [37] = 292,
    [38] = 290,
    [39] = 294,
    [40] = 297,
    [41] = 298,
    [42] = 300,
    [43] = 301,
    [44] = 292,
    [45] = 302,
    [46] = 261,
    [47] = 300,
    [48] = 277,
    [49] = 277,
    [50] = 292,
    [51] = 290,
    [52] = 292,
    [53] = 302,
    [54] = 292,
    [55] = 290,
    [56] = 292,
    [57] = 303,
    [58] = 304,
    [59] = 261,
    [60] = 304,
    [61] = 261,
    [62] = 304,
    [63] = 304,
    [64] = 305,
    [65] = 304,
    [66] = 306,
    [67] = 304,
    [68] = 304,
    [69] = 304,
    [70] = 292,
    [71] = 300,
    [72] = 310,
    [73] = 310,
    [74] = 277,
    [75] = 311,
    [76] = 310,
    [77] = 277,
    [78] = 311,
    [79] = 310,
    [80] = 310,
    [81] = 277,
    [82] = 270,
    [83] = 271,
    [84] = 275,
    [85] = 276,
    [86] = 289,
    [87] = 290,
    [88] = 276,
    [89] = 275,
    [90] = 292,
    [91] = 289,
    [92] = 290,
    [93] = 292,
    [94] = 312,
    [95] = 313,
    [96] = 314,
    [97] = 261,
    [98] = 315,
    [99] = 316,
    [100] = 269,
    [101] = 316,
    [102] = 269,
    [103] = 261,
    [104] = 314,
    [105] = 260,
    [106] = 317,
    [107] = 318,
    [108] = 260,
    [109] = 318,
    [110] = 180,
    [111] = 180,
    [112] = 260,
    [113] = 319,
    [114] = 321,
    [115] = 290,
    [116] = 261,
    [117] = 261,
    [118] = 277,
    [119] = 322,
    [120] = 323,
    [121] = 311,
    [122] = 324,
    [123] = 180,
    [124] = 269,
    [125] = 290,
    [126] = 292,
    [127] = 302,
    [128] = 300,
    [129] = 304,
    [130] = 270,
    [131] = 271,
    [132] = 277,
    [133] = 311,
    [134] = 310,
    [135] = 315,
    [136] = 269,
    [137] = 292,
    [138] = 276,
    [139] = 290,
    [140] = 290,
    [141] = 180,
    [142] = 292,
    [143] = 290,
    [144] = 292,
    [145] = 292,
    [146] = 276,
    [147] = 290,
    [148] = 290,
    [149] = 292,
    [150] = 321,
    [151] = 290,
    [152] = 321,
    [153] = 292,
    [154] = 276,
    [155] = 290,
    [156] = 290,
    [157] = 325,
    [158] = 304,
    [159] = 310,
    [160] = 275,
    [161] = 276,
    [162] = 289,
    [163] = 276,
    [164] = 290,
    [165] = 275,
    [166] = 292,
    [167] = 289,
    [168] = 292,
    [169] = 290,
    [170] = 290,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(123),
        [sym_namespace_declaration] = STATE(124),
        [sym_class_declaration] = STATE(125),
        [sym_struct_declaration] = STATE(125),
        [sym_field_declaration] = STATE(126),
        [sym_variable_declaration] = STATE(127),
        [sym__type] = STATE(128),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(129),
        [sym_equals_value_clause] = STATE(65),
        [sym__literal] = STATE(67),
        [sym_integer_literal] = STATE(68),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(130),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(131),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(132),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(133),
        [sym_type_parameter] = STATE(134),
        [sym_qualified_name] = STATE(135),
        [sym_alias_qualified_name] = STATE(96),
        [sym_name_equals] = STATE(108),
        [sym_static] = STATE(108),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(136),
        [aux_sym_class_declaration_repeat1] = STATE(137),
        [aux_sym_struct_declaration_repeat1] = STATE(138),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
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
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(21),
        [sym__integer_type_suffix] = ACTIONS(23),
        [anon_sym_abstract] = ACTIONS(25),
        [anon_sym_sealed] = ACTIONS(25),
        [anon_sym_static] = ACTIONS(27),
        [anon_sym_new] = ACTIONS(29),
        [anon_sym_public] = ACTIONS(29),
        [anon_sym_protected] = ACTIONS(29),
        [anon_sym_internal] = ACTIONS(29),
        [anon_sym_private] = ACTIONS(29),
        [anon_sym_unsafe] = ACTIONS(29),
        [anon_sym_readonly] = ACTIONS(31),
        [anon_sym_volatile] = ACTIONS(31),
        [anon_sym_bool] = ACTIONS(33),
        [anon_sym_byte] = ACTIONS(33),
        [anon_sym_char] = ACTIONS(33),
        [anon_sym_decimal] = ACTIONS(33),
        [anon_sym_double] = ACTIONS(33),
        [anon_sym_float] = ACTIONS(33),
        [anon_sym_int] = ACTIONS(33),
        [anon_sym_long] = ACTIONS(33),
        [anon_sym_object] = ACTIONS(33),
        [anon_sym_sbyte] = ACTIONS(33),
        [anon_sym_short] = ACTIONS(33),
        [anon_sym_string] = ACTIONS(33),
        [anon_sym_uint] = ACTIONS(33),
        [anon_sym_ulong] = ACTIONS(33),
        [anon_sym_ushort] = ACTIONS(33),
        [anon_sym_LT] = ACTIONS(35),
        [anon_sym_GT] = ACTIONS(37),
        [anon_sym_DOT] = ACTIONS(39),
        [anon_sym_COLON_COLON] = ACTIONS(41),
        [sym_global] = ACTIONS(43),
        [sym_identifier_name] = ACTIONS(45),
        [sym_comment] = ACTIONS(47),
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
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_using] = ACTIONS(51),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [2] = {
        [sym_qualified_name] = STATE(107),
        [sym_alias_qualified_name] = STATE(96),
        [sym_name_equals] = STATE(108),
        [sym_static] = STATE(108),
        [anon_sym_static] = ACTIONS(63),
        [sym_global] = ACTIONS(65),
        [sym_identifier_name] = ACTIONS(67),
        [sym_comment] = ACTIONS(47),
    },
    [3] = {
        [sym_qualified_name] = STATE(95),
        [sym_alias_qualified_name] = STATE(96),
        [sym_global] = ACTIONS(65),
        [sym_identifier_name] = ACTIONS(69),
        [sym_comment] = ACTIONS(47),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(71),
        [sym_comment] = ACTIONS(47),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(73),
        [sym_comment] = ACTIONS(47),
    },
    [6] = {
        [sym__class_modifiers] = STATE(82),
        [anon_sym_class] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(59),
        [anon_sym_public] = ACTIONS(59),
        [anon_sym_protected] = ACTIONS(59),
        [anon_sym_internal] = ACTIONS(59),
        [anon_sym_private] = ACTIONS(59),
        [anon_sym_unsafe] = ACTIONS(59),
        [sym_comment] = ACTIONS(47),
    },
    [7] = {
        [sym__class_modifiers] = STATE(82),
        [sym__struct_modifiers] = STATE(83),
        [anon_sym_class] = ACTIONS(75),
        [anon_sym_struct] = ACTIONS(77),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [sym_comment] = ACTIONS(47),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_using] = ACTIONS(81),
        [anon_sym_namespace] = ACTIONS(81),
        [anon_sym_class] = ACTIONS(81),
        [anon_sym_struct] = ACTIONS(81),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(81),
        [anon_sym_public] = ACTIONS(81),
        [anon_sym_protected] = ACTIONS(81),
        [anon_sym_internal] = ACTIONS(81),
        [anon_sym_private] = ACTIONS(81),
        [anon_sym_unsafe] = ACTIONS(81),
        [sym_comment] = ACTIONS(47),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_namespace] = ACTIONS(83),
        [anon_sym_RBRACE] = ACTIONS(83),
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
        [sym_comment] = ACTIONS(47),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(85),
        [sym_comment] = ACTIONS(47),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(87),
        [sym_comment] = ACTIONS(47),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(89),
        [sym_comment] = ACTIONS(47),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(91),
        [sym_comment] = ACTIONS(47),
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
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_using] = ACTIONS(51),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_namespace] = ACTIONS(95),
        [anon_sym_RBRACE] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(95),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(95),
        [anon_sym_protected] = ACTIONS(95),
        [anon_sym_internal] = ACTIONS(95),
        [anon_sym_private] = ACTIONS(95),
        [anon_sym_unsafe] = ACTIONS(95),
        [sym_comment] = ACTIONS(47),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(97),
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
        [sym_comment] = ACTIONS(47),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(101),
        [sym_comment] = ACTIONS(47),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(103),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [23] = {
        [sym__type] = STATE(72),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(73),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(113),
        [sym_comment] = ACTIONS(47),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_namespace] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_abstract] = ACTIONS(119),
        [anon_sym_sealed] = ACTIONS(119),
        [anon_sym_static] = ACTIONS(119),
        [anon_sym_new] = ACTIONS(119),
        [anon_sym_public] = ACTIONS(119),
        [anon_sym_protected] = ACTIONS(119),
        [anon_sym_internal] = ACTIONS(119),
        [anon_sym_private] = ACTIONS(119),
        [anon_sym_unsafe] = ACTIONS(119),
        [anon_sym_readonly] = ACTIONS(119),
        [anon_sym_volatile] = ACTIONS(119),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(47),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_struct] = ACTIONS(123),
        [anon_sym_abstract] = ACTIONS(123),
        [anon_sym_sealed] = ACTIONS(123),
        [anon_sym_static] = ACTIONS(123),
        [anon_sym_new] = ACTIONS(123),
        [anon_sym_public] = ACTIONS(123),
        [anon_sym_protected] = ACTIONS(123),
        [anon_sym_internal] = ACTIONS(123),
        [anon_sym_private] = ACTIONS(123),
        [anon_sym_unsafe] = ACTIONS(123),
        [sym_comment] = ACTIONS(47),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_namespace] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_abstract] = ACTIONS(129),
        [anon_sym_sealed] = ACTIONS(129),
        [anon_sym_static] = ACTIONS(129),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_public] = ACTIONS(129),
        [anon_sym_protected] = ACTIONS(129),
        [anon_sym_internal] = ACTIONS(129),
        [anon_sym_private] = ACTIONS(129),
        [anon_sym_unsafe] = ACTIONS(129),
        [anon_sym_readonly] = ACTIONS(129),
        [anon_sym_volatile] = ACTIONS(129),
        [anon_sym_bool] = ACTIONS(129),
        [anon_sym_byte] = ACTIONS(129),
        [anon_sym_char] = ACTIONS(129),
        [anon_sym_decimal] = ACTIONS(129),
        [anon_sym_double] = ACTIONS(129),
        [anon_sym_float] = ACTIONS(129),
        [anon_sym_int] = ACTIONS(129),
        [anon_sym_long] = ACTIONS(129),
        [anon_sym_object] = ACTIONS(129),
        [anon_sym_sbyte] = ACTIONS(129),
        [anon_sym_short] = ACTIONS(129),
        [anon_sym_string] = ACTIONS(129),
        [anon_sym_uint] = ACTIONS(129),
        [anon_sym_ulong] = ACTIONS(129),
        [anon_sym_ushort] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(131),
        [sym_comment] = ACTIONS(47),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(133),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(133),
        [anon_sym_sealed] = ACTIONS(133),
        [anon_sym_static] = ACTIONS(133),
        [anon_sym_new] = ACTIONS(133),
        [anon_sym_public] = ACTIONS(133),
        [anon_sym_protected] = ACTIONS(133),
        [anon_sym_internal] = ACTIONS(133),
        [anon_sym_private] = ACTIONS(133),
        [anon_sym_unsafe] = ACTIONS(133),
        [sym_comment] = ACTIONS(47),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_namespace] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(137),
        [anon_sym_sealed] = ACTIONS(137),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_readonly] = ACTIONS(137),
        [anon_sym_volatile] = ACTIONS(137),
        [anon_sym_bool] = ACTIONS(137),
        [anon_sym_byte] = ACTIONS(137),
        [anon_sym_char] = ACTIONS(137),
        [anon_sym_decimal] = ACTIONS(137),
        [anon_sym_double] = ACTIONS(137),
        [anon_sym_float] = ACTIONS(137),
        [anon_sym_int] = ACTIONS(137),
        [anon_sym_long] = ACTIONS(137),
        [anon_sym_object] = ACTIONS(137),
        [anon_sym_sbyte] = ACTIONS(137),
        [anon_sym_short] = ACTIONS(137),
        [anon_sym_string] = ACTIONS(137),
        [anon_sym_uint] = ACTIONS(137),
        [anon_sym_ulong] = ACTIONS(137),
        [anon_sym_ushort] = ACTIONS(137),
        [sym_identifier_name] = ACTIONS(139),
        [sym_comment] = ACTIONS(47),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(141),
        [sym_comment] = ACTIONS(47),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_RBRACE] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_namespace] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(165),
        [anon_sym_sealed] = ACTIONS(165),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(165),
        [anon_sym_volatile] = ACTIONS(165),
        [anon_sym_bool] = ACTIONS(165),
        [anon_sym_byte] = ACTIONS(165),
        [anon_sym_char] = ACTIONS(165),
        [anon_sym_decimal] = ACTIONS(165),
        [anon_sym_double] = ACTIONS(165),
        [anon_sym_float] = ACTIONS(165),
        [anon_sym_int] = ACTIONS(165),
        [anon_sym_long] = ACTIONS(165),
        [anon_sym_object] = ACTIONS(165),
        [anon_sym_sbyte] = ACTIONS(165),
        [anon_sym_short] = ACTIONS(165),
        [anon_sym_string] = ACTIONS(165),
        [anon_sym_uint] = ACTIONS(165),
        [anon_sym_ulong] = ACTIONS(165),
        [anon_sym_ushort] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(167),
        [sym_comment] = ACTIONS(47),
    },
    [39] = {
        [sym__class_modifiers] = STATE(82),
        [sym__field_modifiers] = STATE(81),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(153),
        [anon_sym_public] = ACTIONS(153),
        [anon_sym_protected] = ACTIONS(153),
        [anon_sym_internal] = ACTIONS(153),
        [anon_sym_private] = ACTIONS(153),
        [anon_sym_unsafe] = ACTIONS(153),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [sym_identifier_name] = ACTIONS(173),
        [sym_comment] = ACTIONS(47),
    },
    [40] = {
        [sym__class_modifiers] = STATE(82),
        [sym__struct_modifiers] = STATE(83),
        [sym__field_modifiers] = STATE(81),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(175),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [sym_identifier_name] = ACTIONS(173),
        [sym_comment] = ACTIONS(47),
    },
    [41] = {
        [sym__field_modifiers] = STATE(81),
        [anon_sym_static] = ACTIONS(157),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [sym_identifier_name] = ACTIONS(173),
        [sym_comment] = ACTIONS(47),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_GT] = ACTIONS(177),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(47),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(71),
        [anon_sym_COMMA] = ACTIONS(181),
        [anon_sym_LT] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(47),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_struct] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(187),
        [anon_sym_sealed] = ACTIONS(187),
        [anon_sym_static] = ACTIONS(187),
        [anon_sym_new] = ACTIONS(187),
        [anon_sym_public] = ACTIONS(187),
        [anon_sym_protected] = ACTIONS(187),
        [anon_sym_internal] = ACTIONS(187),
        [anon_sym_private] = ACTIONS(187),
        [anon_sym_unsafe] = ACTIONS(187),
        [anon_sym_readonly] = ACTIONS(187),
        [anon_sym_volatile] = ACTIONS(187),
        [anon_sym_bool] = ACTIONS(187),
        [anon_sym_byte] = ACTIONS(187),
        [anon_sym_char] = ACTIONS(187),
        [anon_sym_decimal] = ACTIONS(187),
        [anon_sym_double] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(187),
        [anon_sym_int] = ACTIONS(187),
        [anon_sym_long] = ACTIONS(187),
        [anon_sym_object] = ACTIONS(187),
        [anon_sym_sbyte] = ACTIONS(187),
        [anon_sym_short] = ACTIONS(187),
        [anon_sym_string] = ACTIONS(187),
        [anon_sym_uint] = ACTIONS(187),
        [anon_sym_ulong] = ACTIONS(187),
        [anon_sym_ushort] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(47),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(191),
        [sym_comment] = ACTIONS(47),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(47),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(181),
        [anon_sym_GT] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(47),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(195),
        [anon_sym_byte] = ACTIONS(195),
        [anon_sym_char] = ACTIONS(195),
        [anon_sym_decimal] = ACTIONS(195),
        [anon_sym_double] = ACTIONS(195),
        [anon_sym_float] = ACTIONS(195),
        [anon_sym_int] = ACTIONS(195),
        [anon_sym_long] = ACTIONS(195),
        [anon_sym_object] = ACTIONS(195),
        [anon_sym_sbyte] = ACTIONS(195),
        [anon_sym_short] = ACTIONS(195),
        [anon_sym_string] = ACTIONS(195),
        [anon_sym_uint] = ACTIONS(195),
        [anon_sym_ulong] = ACTIONS(195),
        [anon_sym_ushort] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(197),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_RBRACE] = ACTIONS(199),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_namespace] = ACTIONS(203),
        [anon_sym_RBRACE] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_struct] = ACTIONS(203),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(203),
        [anon_sym_new] = ACTIONS(203),
        [anon_sym_public] = ACTIONS(203),
        [anon_sym_protected] = ACTIONS(203),
        [anon_sym_internal] = ACTIONS(203),
        [anon_sym_private] = ACTIONS(203),
        [anon_sym_unsafe] = ACTIONS(203),
        [anon_sym_readonly] = ACTIONS(203),
        [anon_sym_volatile] = ACTIONS(203),
        [anon_sym_bool] = ACTIONS(203),
        [anon_sym_byte] = ACTIONS(203),
        [anon_sym_char] = ACTIONS(203),
        [anon_sym_decimal] = ACTIONS(203),
        [anon_sym_double] = ACTIONS(203),
        [anon_sym_float] = ACTIONS(203),
        [anon_sym_int] = ACTIONS(203),
        [anon_sym_long] = ACTIONS(203),
        [anon_sym_object] = ACTIONS(203),
        [anon_sym_sbyte] = ACTIONS(203),
        [anon_sym_short] = ACTIONS(203),
        [anon_sym_string] = ACTIONS(203),
        [anon_sym_uint] = ACTIONS(203),
        [anon_sym_ulong] = ACTIONS(203),
        [anon_sym_ushort] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(47),
    },
    [52] = {
        [anon_sym_RBRACE] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_struct] = ACTIONS(209),
        [anon_sym_abstract] = ACTIONS(209),
        [anon_sym_sealed] = ACTIONS(209),
        [anon_sym_static] = ACTIONS(209),
        [anon_sym_new] = ACTIONS(209),
        [anon_sym_public] = ACTIONS(209),
        [anon_sym_protected] = ACTIONS(209),
        [anon_sym_internal] = ACTIONS(209),
        [anon_sym_private] = ACTIONS(209),
        [anon_sym_unsafe] = ACTIONS(209),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(209),
        [anon_sym_byte] = ACTIONS(209),
        [anon_sym_char] = ACTIONS(209),
        [anon_sym_decimal] = ACTIONS(209),
        [anon_sym_double] = ACTIONS(209),
        [anon_sym_float] = ACTIONS(209),
        [anon_sym_int] = ACTIONS(209),
        [anon_sym_long] = ACTIONS(209),
        [anon_sym_object] = ACTIONS(209),
        [anon_sym_sbyte] = ACTIONS(209),
        [anon_sym_short] = ACTIONS(209),
        [anon_sym_string] = ACTIONS(209),
        [anon_sym_uint] = ACTIONS(209),
        [anon_sym_ulong] = ACTIONS(209),
        [anon_sym_ushort] = ACTIONS(209),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(47),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(213),
        [sym_comment] = ACTIONS(47),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(215),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_abstract] = ACTIONS(217),
        [anon_sym_sealed] = ACTIONS(217),
        [anon_sym_static] = ACTIONS(217),
        [anon_sym_new] = ACTIONS(217),
        [anon_sym_public] = ACTIONS(217),
        [anon_sym_protected] = ACTIONS(217),
        [anon_sym_internal] = ACTIONS(217),
        [anon_sym_private] = ACTIONS(217),
        [anon_sym_unsafe] = ACTIONS(217),
        [anon_sym_readonly] = ACTIONS(217),
        [anon_sym_volatile] = ACTIONS(217),
        [anon_sym_bool] = ACTIONS(217),
        [anon_sym_byte] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(217),
        [anon_sym_decimal] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_int] = ACTIONS(217),
        [anon_sym_long] = ACTIONS(217),
        [anon_sym_object] = ACTIONS(217),
        [anon_sym_sbyte] = ACTIONS(217),
        [anon_sym_short] = ACTIONS(217),
        [anon_sym_string] = ACTIONS(217),
        [anon_sym_uint] = ACTIONS(217),
        [anon_sym_ulong] = ACTIONS(217),
        [anon_sym_ushort] = ACTIONS(217),
        [sym_identifier_name] = ACTIONS(219),
        [sym_comment] = ACTIONS(47),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_namespace] = ACTIONS(223),
        [anon_sym_RBRACE] = ACTIONS(221),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_abstract] = ACTIONS(223),
        [anon_sym_sealed] = ACTIONS(223),
        [anon_sym_static] = ACTIONS(223),
        [anon_sym_new] = ACTIONS(223),
        [anon_sym_public] = ACTIONS(223),
        [anon_sym_protected] = ACTIONS(223),
        [anon_sym_internal] = ACTIONS(223),
        [anon_sym_private] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(223),
        [anon_sym_readonly] = ACTIONS(223),
        [anon_sym_volatile] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(225),
        [sym_comment] = ACTIONS(47),
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
        [anon_sym_RBRACE] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_EQ] = ACTIONS(229),
        [sym_comment] = ACTIONS(47),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(233),
        [sym_comment] = ACTIONS(47),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(47),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(237),
        [sym_comment] = ACTIONS(47),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(47),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(239),
        [sym_comment] = ACTIONS(47),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(241),
        [sym_comment] = ACTIONS(47),
    },
    [64] = {
        [sym__literal] = STATE(67),
        [sym_integer_literal] = STATE(68),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(243),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(243),
        [sym_comment] = ACTIONS(47),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(245),
        [sym_comment] = ACTIONS(47),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(247),
        [sym__integer_type_suffix] = ACTIONS(249),
        [sym_comment] = ACTIONS(47),
    },
    [67] = {
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(47),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(253),
        [sym_comment] = ACTIONS(47),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_COMMA] = ACTIONS(255),
        [sym_comment] = ACTIONS(47),
    },
    [70] = {
        [anon_sym_RBRACE] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(259),
        [anon_sym_struct] = ACTIONS(259),
        [anon_sym_abstract] = ACTIONS(259),
        [anon_sym_sealed] = ACTIONS(259),
        [anon_sym_static] = ACTIONS(259),
        [anon_sym_new] = ACTIONS(259),
        [anon_sym_public] = ACTIONS(259),
        [anon_sym_protected] = ACTIONS(259),
        [anon_sym_internal] = ACTIONS(259),
        [anon_sym_private] = ACTIONS(259),
        [anon_sym_unsafe] = ACTIONS(259),
        [anon_sym_readonly] = ACTIONS(259),
        [anon_sym_volatile] = ACTIONS(259),
        [anon_sym_bool] = ACTIONS(259),
        [anon_sym_byte] = ACTIONS(259),
        [anon_sym_char] = ACTIONS(259),
        [anon_sym_decimal] = ACTIONS(259),
        [anon_sym_double] = ACTIONS(259),
        [anon_sym_float] = ACTIONS(259),
        [anon_sym_int] = ACTIONS(259),
        [anon_sym_long] = ACTIONS(259),
        [anon_sym_object] = ACTIONS(259),
        [anon_sym_sbyte] = ACTIONS(259),
        [anon_sym_short] = ACTIONS(259),
        [anon_sym_string] = ACTIONS(259),
        [anon_sym_uint] = ACTIONS(259),
        [anon_sym_ulong] = ACTIONS(259),
        [anon_sym_ushort] = ACTIONS(259),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(47),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_GT] = ACTIONS(263),
        [sym_identifier_name] = ACTIONS(265),
        [sym_comment] = ACTIONS(47),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [sym_comment] = ACTIONS(47),
    },
    [73] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(271),
        [sym_comment] = ACTIONS(47),
    },
    [74] = {
        [sym__type] = STATE(72),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(80),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [75] = {
        [anon_sym_LBRACE] = ACTIONS(273),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(275),
        [sym_comment] = ACTIONS(47),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(279),
        [sym_comment] = ACTIONS(47),
    },
    [77] = {
        [sym__type] = STATE(72),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(79),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [78] = {
        [anon_sym_LBRACE] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_GT] = ACTIONS(281),
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(47),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_GT] = ACTIONS(285),
        [sym_comment] = ACTIONS(47),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_GT] = ACTIONS(287),
        [sym_comment] = ACTIONS(47),
    },
    [81] = {
        [anon_sym_bool] = ACTIONS(289),
        [anon_sym_byte] = ACTIONS(289),
        [anon_sym_char] = ACTIONS(289),
        [anon_sym_decimal] = ACTIONS(289),
        [anon_sym_double] = ACTIONS(289),
        [anon_sym_float] = ACTIONS(289),
        [anon_sym_int] = ACTIONS(289),
        [anon_sym_long] = ACTIONS(289),
        [anon_sym_object] = ACTIONS(289),
        [anon_sym_sbyte] = ACTIONS(289),
        [anon_sym_short] = ACTIONS(289),
        [anon_sym_string] = ACTIONS(289),
        [anon_sym_uint] = ACTIONS(289),
        [anon_sym_ulong] = ACTIONS(289),
        [anon_sym_ushort] = ACTIONS(289),
        [sym_identifier_name] = ACTIONS(291),
        [sym_comment] = ACTIONS(47),
    },
    [82] = {
        [anon_sym_class] = ACTIONS(293),
        [sym_comment] = ACTIONS(47),
    },
    [83] = {
        [anon_sym_struct] = ACTIONS(295),
        [sym_comment] = ACTIONS(47),
    },
    [84] = {
        [sym_type_parameter_list] = STATE(86),
        [anon_sym_LBRACE] = ACTIONS(297),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
    },
    [85] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(88),
        [anon_sym_RBRACE] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [86] = {
        [anon_sym_LBRACE] = ACTIONS(103),
        [sym_comment] = ACTIONS(47),
    },
    [87] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_namespace] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(301),
        [anon_sym_class] = ACTIONS(303),
        [anon_sym_struct] = ACTIONS(303),
        [anon_sym_abstract] = ACTIONS(303),
        [anon_sym_sealed] = ACTIONS(303),
        [anon_sym_static] = ACTIONS(303),
        [anon_sym_new] = ACTIONS(303),
        [anon_sym_public] = ACTIONS(303),
        [anon_sym_protected] = ACTIONS(303),
        [anon_sym_internal] = ACTIONS(303),
        [anon_sym_private] = ACTIONS(303),
        [anon_sym_unsafe] = ACTIONS(303),
        [anon_sym_readonly] = ACTIONS(303),
        [anon_sym_volatile] = ACTIONS(303),
        [anon_sym_bool] = ACTIONS(303),
        [anon_sym_byte] = ACTIONS(303),
        [anon_sym_char] = ACTIONS(303),
        [anon_sym_decimal] = ACTIONS(303),
        [anon_sym_double] = ACTIONS(303),
        [anon_sym_float] = ACTIONS(303),
        [anon_sym_int] = ACTIONS(303),
        [anon_sym_long] = ACTIONS(303),
        [anon_sym_object] = ACTIONS(303),
        [anon_sym_sbyte] = ACTIONS(303),
        [anon_sym_short] = ACTIONS(303),
        [anon_sym_string] = ACTIONS(303),
        [anon_sym_uint] = ACTIONS(303),
        [anon_sym_ulong] = ACTIONS(303),
        [anon_sym_ushort] = ACTIONS(303),
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(47),
    },
    [88] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [89] = {
        [sym_type_parameter_list] = STATE(91),
        [anon_sym_LBRACE] = ACTIONS(307),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
    },
    [90] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(93),
        [anon_sym_RBRACE] = ACTIONS(309),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [91] = {
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_comment] = ACTIONS(47),
    },
    [92] = {
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_namespace] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(313),
        [anon_sym_struct] = ACTIONS(313),
        [anon_sym_abstract] = ACTIONS(313),
        [anon_sym_sealed] = ACTIONS(313),
        [anon_sym_static] = ACTIONS(313),
        [anon_sym_new] = ACTIONS(313),
        [anon_sym_public] = ACTIONS(313),
        [anon_sym_protected] = ACTIONS(313),
        [anon_sym_internal] = ACTIONS(313),
        [anon_sym_private] = ACTIONS(313),
        [anon_sym_unsafe] = ACTIONS(313),
        [anon_sym_readonly] = ACTIONS(313),
        [anon_sym_volatile] = ACTIONS(313),
        [anon_sym_bool] = ACTIONS(313),
        [anon_sym_byte] = ACTIONS(313),
        [anon_sym_char] = ACTIONS(313),
        [anon_sym_decimal] = ACTIONS(313),
        [anon_sym_double] = ACTIONS(313),
        [anon_sym_float] = ACTIONS(313),
        [anon_sym_int] = ACTIONS(313),
        [anon_sym_long] = ACTIONS(313),
        [anon_sym_object] = ACTIONS(313),
        [anon_sym_sbyte] = ACTIONS(313),
        [anon_sym_short] = ACTIONS(313),
        [anon_sym_string] = ACTIONS(313),
        [anon_sym_uint] = ACTIONS(313),
        [anon_sym_ulong] = ACTIONS(313),
        [anon_sym_ushort] = ACTIONS(313),
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(47),
    },
    [93] = {
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
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [94] = {
        [anon_sym_COLON_COLON] = ACTIONS(317),
        [sym_comment] = ACTIONS(47),
    },
    [95] = {
        [anon_sym_LBRACE] = ACTIONS(319),
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [96] = {
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [97] = {
        [sym_identifier_name] = ACTIONS(323),
        [sym_comment] = ACTIONS(47),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_LBRACE] = ACTIONS(325),
        [anon_sym_DOT] = ACTIONS(325),
        [sym_comment] = ACTIONS(47),
    },
    [99] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(101),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [100] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_namespace] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_struct] = ACTIONS(329),
        [anon_sym_abstract] = ACTIONS(329),
        [anon_sym_sealed] = ACTIONS(329),
        [anon_sym_static] = ACTIONS(329),
        [anon_sym_new] = ACTIONS(329),
        [anon_sym_public] = ACTIONS(329),
        [anon_sym_protected] = ACTIONS(329),
        [anon_sym_internal] = ACTIONS(329),
        [anon_sym_private] = ACTIONS(329),
        [anon_sym_unsafe] = ACTIONS(329),
        [sym_comment] = ACTIONS(47),
    },
    [101] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [102] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_namespace] = ACTIONS(333),
        [anon_sym_RBRACE] = ACTIONS(333),
        [anon_sym_class] = ACTIONS(333),
        [anon_sym_struct] = ACTIONS(333),
        [anon_sym_abstract] = ACTIONS(333),
        [anon_sym_sealed] = ACTIONS(333),
        [anon_sym_static] = ACTIONS(333),
        [anon_sym_new] = ACTIONS(333),
        [anon_sym_public] = ACTIONS(333),
        [anon_sym_protected] = ACTIONS(333),
        [anon_sym_internal] = ACTIONS(333),
        [anon_sym_private] = ACTIONS(333),
        [anon_sym_unsafe] = ACTIONS(333),
        [sym_comment] = ACTIONS(47),
    },
    [103] = {
        [sym_identifier_name] = ACTIONS(335),
        [sym_comment] = ACTIONS(47),
    },
    [104] = {
        [anon_sym_DOT] = ACTIONS(337),
        [sym_comment] = ACTIONS(47),
    },
    [105] = {
        [sym_global] = ACTIONS(339),
        [sym_identifier_name] = ACTIONS(341),
        [sym_comment] = ACTIONS(47),
    },
    [106] = {
        [anon_sym_SEMI] = ACTIONS(343),
        [anon_sym_EQ] = ACTIONS(345),
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(343),
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [108] = {
        [sym_qualified_name] = STATE(109),
        [sym_alias_qualified_name] = STATE(96),
        [sym_global] = ACTIONS(65),
        [sym_identifier_name] = ACTIONS(347),
        [sym_comment] = ACTIONS(47),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_using] = ACTIONS(351),
        [anon_sym_namespace] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(351),
        [anon_sym_struct] = ACTIONS(351),
        [anon_sym_abstract] = ACTIONS(351),
        [anon_sym_sealed] = ACTIONS(351),
        [anon_sym_static] = ACTIONS(351),
        [anon_sym_new] = ACTIONS(351),
        [anon_sym_public] = ACTIONS(351),
        [anon_sym_protected] = ACTIONS(351),
        [anon_sym_internal] = ACTIONS(351),
        [anon_sym_private] = ACTIONS(351),
        [anon_sym_unsafe] = ACTIONS(351),
        [sym_comment] = ACTIONS(47),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_using] = ACTIONS(353),
        [anon_sym_namespace] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_struct] = ACTIONS(353),
        [anon_sym_abstract] = ACTIONS(353),
        [anon_sym_sealed] = ACTIONS(353),
        [anon_sym_static] = ACTIONS(353),
        [anon_sym_new] = ACTIONS(353),
        [anon_sym_public] = ACTIONS(353),
        [anon_sym_protected] = ACTIONS(353),
        [anon_sym_internal] = ACTIONS(353),
        [anon_sym_private] = ACTIONS(353),
        [anon_sym_unsafe] = ACTIONS(353),
        [sym_comment] = ACTIONS(47),
    },
    [112] = {
        [sym_global] = ACTIONS(355),
        [sym_identifier_name] = ACTIONS(357),
        [sym_comment] = ACTIONS(47),
    },
    [113] = {
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_using] = ACTIONS(362),
        [anon_sym_namespace] = ACTIONS(362),
        [anon_sym_RBRACE] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(368),
        [anon_sym_struct] = ACTIONS(368),
        [anon_sym_abstract] = ACTIONS(368),
        [anon_sym_sealed] = ACTIONS(368),
        [anon_sym_static] = ACTIONS(368),
        [anon_sym_new] = ACTIONS(368),
        [anon_sym_public] = ACTIONS(368),
        [anon_sym_protected] = ACTIONS(368),
        [anon_sym_internal] = ACTIONS(368),
        [anon_sym_private] = ACTIONS(368),
        [anon_sym_unsafe] = ACTIONS(368),
        [anon_sym_readonly] = ACTIONS(373),
        [anon_sym_volatile] = ACTIONS(373),
        [anon_sym_bool] = ACTIONS(373),
        [anon_sym_byte] = ACTIONS(373),
        [anon_sym_char] = ACTIONS(373),
        [anon_sym_decimal] = ACTIONS(373),
        [anon_sym_double] = ACTIONS(373),
        [anon_sym_float] = ACTIONS(373),
        [anon_sym_int] = ACTIONS(373),
        [anon_sym_long] = ACTIONS(373),
        [anon_sym_object] = ACTIONS(373),
        [anon_sym_sbyte] = ACTIONS(373),
        [anon_sym_short] = ACTIONS(373),
        [anon_sym_string] = ACTIONS(373),
        [anon_sym_uint] = ACTIONS(373),
        [anon_sym_ulong] = ACTIONS(373),
        [anon_sym_ushort] = ACTIONS(373),
        [sym_identifier_name] = ACTIONS(376),
        [sym_comment] = ACTIONS(47),
    },
    [114] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(152),
        [sym_struct_declaration] = STATE(152),
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
        [aux_sym_compilation_unit_repeat2] = STATE(101),
        [aux_sym_class_declaration_repeat1] = STATE(137),
        [aux_sym_struct_declaration_repeat1] = STATE(138),
        [anon_sym_namespace] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(381),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [115] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_namespace] = ACTIONS(394),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(394),
        [anon_sym_struct] = ACTIONS(394),
        [anon_sym_abstract] = ACTIONS(394),
        [anon_sym_sealed] = ACTIONS(394),
        [anon_sym_static] = ACTIONS(394),
        [anon_sym_new] = ACTIONS(394),
        [anon_sym_public] = ACTIONS(394),
        [anon_sym_protected] = ACTIONS(394),
        [anon_sym_internal] = ACTIONS(394),
        [anon_sym_private] = ACTIONS(394),
        [anon_sym_unsafe] = ACTIONS(394),
        [anon_sym_readonly] = ACTIONS(405),
        [anon_sym_volatile] = ACTIONS(405),
        [anon_sym_bool] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [anon_sym_decimal] = ACTIONS(405),
        [anon_sym_double] = ACTIONS(405),
        [anon_sym_float] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_object] = ACTIONS(405),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_string] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [sym_identifier_name] = ACTIONS(414),
        [sym_comment] = ACTIONS(47),
    },
    [116] = {
        [sym_identifier_name] = ACTIONS(423),
        [sym_comment] = ACTIONS(47),
    },
    [117] = {
        [sym_identifier_name] = ACTIONS(425),
        [sym_comment] = ACTIONS(47),
    },
    [118] = {
        [sym__type] = STATE(72),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(158),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(159),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(427),
        [sym_comment] = ACTIONS(47),
    },
    [119] = {
        [sym__literal] = STATE(67),
        [sym_integer_literal] = STATE(68),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(243),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHf_RBRACK_PLUS_SLASH] = ACTIONS(243),
        [sym_global] = ACTIONS(355),
        [sym_identifier_name] = ACTIONS(357),
        [sym_comment] = ACTIONS(47),
    },
    [120] = {
        [sym__class_modifiers] = STATE(82),
        [sym__field_modifiers] = STATE(81),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(153),
        [anon_sym_public] = ACTIONS(153),
        [anon_sym_protected] = ACTIONS(153),
        [anon_sym_internal] = ACTIONS(153),
        [anon_sym_private] = ACTIONS(153),
        [anon_sym_unsafe] = ACTIONS(153),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [sym_global] = ACTIONS(339),
        [sym_identifier_name] = ACTIONS(429),
        [sym_comment] = ACTIONS(47),
    },
    [121] = {
        [anon_sym_LBRACE] = ACTIONS(432),
        [anon_sym_COMMA] = ACTIONS(432),
        [anon_sym_GT] = ACTIONS(432),
        [sym_identifier_name] = ACTIONS(435),
        [sym_comment] = ACTIONS(47),
    },
    [122] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(133),
        [anon_sym_SEMI] = ACTIONS(438),
        [anon_sym_LBRACE] = ACTIONS(442),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_EQ] = ACTIONS(448),
        [anon_sym_LT] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(181),
        [anon_sym_DOT] = ACTIONS(450),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(47),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(454),
        [anon_sym_using] = ACTIONS(454),
        [anon_sym_namespace] = ACTIONS(454),
        [anon_sym_class] = ACTIONS(454),
        [anon_sym_struct] = ACTIONS(454),
        [anon_sym_abstract] = ACTIONS(454),
        [anon_sym_sealed] = ACTIONS(454),
        [anon_sym_static] = ACTIONS(454),
        [anon_sym_new] = ACTIONS(454),
        [anon_sym_public] = ACTIONS(454),
        [anon_sym_protected] = ACTIONS(454),
        [anon_sym_internal] = ACTIONS(454),
        [anon_sym_private] = ACTIONS(454),
        [anon_sym_unsafe] = ACTIONS(454),
        [sym_comment] = ACTIONS(47),
    },
    [124] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_namespace] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(457),
        [anon_sym_struct] = ACTIONS(457),
        [anon_sym_abstract] = ACTIONS(457),
        [anon_sym_sealed] = ACTIONS(457),
        [anon_sym_static] = ACTIONS(457),
        [anon_sym_new] = ACTIONS(457),
        [anon_sym_public] = ACTIONS(457),
        [anon_sym_protected] = ACTIONS(457),
        [anon_sym_internal] = ACTIONS(457),
        [anon_sym_private] = ACTIONS(457),
        [anon_sym_unsafe] = ACTIONS(457),
        [sym_comment] = ACTIONS(47),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_namespace] = ACTIONS(460),
        [anon_sym_RBRACE] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(470),
        [anon_sym_struct] = ACTIONS(470),
        [anon_sym_abstract] = ACTIONS(470),
        [anon_sym_sealed] = ACTIONS(470),
        [anon_sym_static] = ACTIONS(470),
        [anon_sym_new] = ACTIONS(470),
        [anon_sym_public] = ACTIONS(470),
        [anon_sym_protected] = ACTIONS(470),
        [anon_sym_internal] = ACTIONS(470),
        [anon_sym_private] = ACTIONS(470),
        [anon_sym_unsafe] = ACTIONS(470),
        [anon_sym_readonly] = ACTIONS(477),
        [anon_sym_volatile] = ACTIONS(477),
        [anon_sym_bool] = ACTIONS(477),
        [anon_sym_byte] = ACTIONS(477),
        [anon_sym_char] = ACTIONS(477),
        [anon_sym_decimal] = ACTIONS(477),
        [anon_sym_double] = ACTIONS(477),
        [anon_sym_float] = ACTIONS(477),
        [anon_sym_int] = ACTIONS(477),
        [anon_sym_long] = ACTIONS(477),
        [anon_sym_object] = ACTIONS(477),
        [anon_sym_sbyte] = ACTIONS(477),
        [anon_sym_short] = ACTIONS(477),
        [anon_sym_string] = ACTIONS(477),
        [anon_sym_uint] = ACTIONS(477),
        [anon_sym_ulong] = ACTIONS(477),
        [anon_sym_ushort] = ACTIONS(477),
        [sym_identifier_name] = ACTIONS(480),
        [sym_comment] = ACTIONS(47),
    },
    [126] = {
        [anon_sym_RBRACE] = ACTIONS(483),
        [anon_sym_class] = ACTIONS(477),
        [anon_sym_struct] = ACTIONS(477),
        [anon_sym_abstract] = ACTIONS(477),
        [anon_sym_sealed] = ACTIONS(477),
        [anon_sym_static] = ACTIONS(477),
        [anon_sym_new] = ACTIONS(477),
        [anon_sym_public] = ACTIONS(477),
        [anon_sym_protected] = ACTIONS(477),
        [anon_sym_internal] = ACTIONS(477),
        [anon_sym_private] = ACTIONS(477),
        [anon_sym_unsafe] = ACTIONS(477),
        [anon_sym_readonly] = ACTIONS(477),
        [anon_sym_volatile] = ACTIONS(477),
        [anon_sym_bool] = ACTIONS(477),
        [anon_sym_byte] = ACTIONS(477),
        [anon_sym_char] = ACTIONS(477),
        [anon_sym_decimal] = ACTIONS(477),
        [anon_sym_double] = ACTIONS(477),
        [anon_sym_float] = ACTIONS(477),
        [anon_sym_int] = ACTIONS(477),
        [anon_sym_long] = ACTIONS(477),
        [anon_sym_object] = ACTIONS(477),
        [anon_sym_sbyte] = ACTIONS(477),
        [anon_sym_short] = ACTIONS(477),
        [anon_sym_string] = ACTIONS(477),
        [anon_sym_uint] = ACTIONS(477),
        [anon_sym_ulong] = ACTIONS(477),
        [anon_sym_ushort] = ACTIONS(477),
        [sym_identifier_name] = ACTIONS(480),
        [sym_comment] = ACTIONS(47),
    },
    [127] = {
        [anon_sym_SEMI] = ACTIONS(486),
        [sym_comment] = ACTIONS(47),
    },
    [128] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(47),
    },
    [129] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(488),
        [anon_sym_COMMA] = ACTIONS(492),
        [sym_comment] = ACTIONS(47),
    },
    [130] = {
        [anon_sym_class] = ACTIONS(496),
        [sym_comment] = ACTIONS(47),
    },
    [131] = {
        [anon_sym_struct] = ACTIONS(499),
        [sym_comment] = ACTIONS(47),
    },
    [132] = {
        [anon_sym_bool] = ACTIONS(502),
        [anon_sym_byte] = ACTIONS(502),
        [anon_sym_char] = ACTIONS(502),
        [anon_sym_decimal] = ACTIONS(502),
        [anon_sym_double] = ACTIONS(502),
        [anon_sym_float] = ACTIONS(502),
        [anon_sym_int] = ACTIONS(502),
        [anon_sym_long] = ACTIONS(502),
        [anon_sym_object] = ACTIONS(502),
        [anon_sym_sbyte] = ACTIONS(502),
        [anon_sym_short] = ACTIONS(502),
        [anon_sym_string] = ACTIONS(502),
        [anon_sym_uint] = ACTIONS(502),
        [anon_sym_ulong] = ACTIONS(502),
        [anon_sym_ushort] = ACTIONS(502),
        [sym_identifier_name] = ACTIONS(505),
        [sym_comment] = ACTIONS(47),
    },
    [133] = {
        [anon_sym_LBRACE] = ACTIONS(508),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_GT] = ACTIONS(263),
        [sym_identifier_name] = ACTIONS(265),
        [sym_comment] = ACTIONS(47),
    },
    [134] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(510),
        [anon_sym_GT] = ACTIONS(514),
        [sym_comment] = ACTIONS(47),
    },
    [135] = {
        [anon_sym_SEMI] = ACTIONS(518),
        [anon_sym_LBRACE] = ACTIONS(319),
        [anon_sym_DOT] = ACTIONS(321),
        [sym_comment] = ACTIONS(47),
    },
    [136] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(520),
        [anon_sym_namespace] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [137] = {
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
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [138] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(527),
        [anon_sym_namespace] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_struct] = ACTIONS(531),
        [anon_sym_abstract] = ACTIONS(531),
        [anon_sym_sealed] = ACTIONS(531),
        [anon_sym_static] = ACTIONS(531),
        [anon_sym_new] = ACTIONS(531),
        [anon_sym_public] = ACTIONS(531),
        [anon_sym_protected] = ACTIONS(531),
        [anon_sym_internal] = ACTIONS(531),
        [anon_sym_private] = ACTIONS(531),
        [anon_sym_unsafe] = ACTIONS(531),
        [anon_sym_readonly] = ACTIONS(531),
        [anon_sym_volatile] = ACTIONS(531),
        [anon_sym_bool] = ACTIONS(531),
        [anon_sym_byte] = ACTIONS(531),
        [anon_sym_char] = ACTIONS(531),
        [anon_sym_decimal] = ACTIONS(531),
        [anon_sym_double] = ACTIONS(531),
        [anon_sym_float] = ACTIONS(531),
        [anon_sym_int] = ACTIONS(531),
        [anon_sym_long] = ACTIONS(531),
        [anon_sym_object] = ACTIONS(531),
        [anon_sym_sbyte] = ACTIONS(531),
        [anon_sym_short] = ACTIONS(531),
        [anon_sym_string] = ACTIONS(531),
        [anon_sym_uint] = ACTIONS(531),
        [anon_sym_ulong] = ACTIONS(531),
        [anon_sym_ushort] = ACTIONS(531),
        [sym_identifier_name] = ACTIONS(535),
        [sym_comment] = ACTIONS(47),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_namespace] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_struct] = ACTIONS(543),
        [anon_sym_abstract] = ACTIONS(543),
        [anon_sym_sealed] = ACTIONS(543),
        [anon_sym_static] = ACTIONS(543),
        [anon_sym_new] = ACTIONS(543),
        [anon_sym_public] = ACTIONS(543),
        [anon_sym_protected] = ACTIONS(543),
        [anon_sym_internal] = ACTIONS(543),
        [anon_sym_private] = ACTIONS(543),
        [anon_sym_unsafe] = ACTIONS(543),
        [anon_sym_readonly] = ACTIONS(543),
        [anon_sym_volatile] = ACTIONS(543),
        [anon_sym_bool] = ACTIONS(543),
        [anon_sym_byte] = ACTIONS(543),
        [anon_sym_char] = ACTIONS(543),
        [anon_sym_decimal] = ACTIONS(543),
        [anon_sym_double] = ACTIONS(543),
        [anon_sym_float] = ACTIONS(543),
        [anon_sym_int] = ACTIONS(543),
        [anon_sym_long] = ACTIONS(543),
        [anon_sym_object] = ACTIONS(543),
        [anon_sym_sbyte] = ACTIONS(543),
        [anon_sym_short] = ACTIONS(543),
        [anon_sym_string] = ACTIONS(543),
        [anon_sym_uint] = ACTIONS(543),
        [anon_sym_ulong] = ACTIONS(543),
        [anon_sym_ushort] = ACTIONS(543),
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(47),
    },
    [141] = {
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
        [sym_comment] = ACTIONS(47),
    },
    [142] = {
        [sym_class_declaration] = STATE(144),
        [sym_struct_declaration] = STATE(144),
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
        [aux_sym_class_declaration_repeat1] = STATE(145),
        [aux_sym_struct_declaration_repeat1] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [143] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_namespace] = ACTIONS(558),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(558),
        [anon_sym_struct] = ACTIONS(558),
        [anon_sym_abstract] = ACTIONS(558),
        [anon_sym_sealed] = ACTIONS(558),
        [anon_sym_static] = ACTIONS(558),
        [anon_sym_new] = ACTIONS(558),
        [anon_sym_public] = ACTIONS(558),
        [anon_sym_protected] = ACTIONS(558),
        [anon_sym_internal] = ACTIONS(558),
        [anon_sym_private] = ACTIONS(558),
        [anon_sym_unsafe] = ACTIONS(558),
        [anon_sym_readonly] = ACTIONS(558),
        [anon_sym_volatile] = ACTIONS(558),
        [anon_sym_bool] = ACTIONS(558),
        [anon_sym_byte] = ACTIONS(558),
        [anon_sym_char] = ACTIONS(558),
        [anon_sym_decimal] = ACTIONS(558),
        [anon_sym_double] = ACTIONS(558),
        [anon_sym_float] = ACTIONS(558),
        [anon_sym_int] = ACTIONS(558),
        [anon_sym_long] = ACTIONS(558),
        [anon_sym_object] = ACTIONS(558),
        [anon_sym_sbyte] = ACTIONS(558),
        [anon_sym_short] = ACTIONS(558),
        [anon_sym_string] = ACTIONS(558),
        [anon_sym_uint] = ACTIONS(558),
        [anon_sym_ulong] = ACTIONS(558),
        [anon_sym_ushort] = ACTIONS(558),
        [sym_identifier_name] = ACTIONS(563),
        [sym_comment] = ACTIONS(47),
    },
    [144] = {
        [anon_sym_RBRACE] = ACTIONS(568),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_struct] = ACTIONS(571),
        [anon_sym_abstract] = ACTIONS(571),
        [anon_sym_sealed] = ACTIONS(571),
        [anon_sym_static] = ACTIONS(571),
        [anon_sym_new] = ACTIONS(571),
        [anon_sym_public] = ACTIONS(571),
        [anon_sym_protected] = ACTIONS(571),
        [anon_sym_internal] = ACTIONS(571),
        [anon_sym_private] = ACTIONS(571),
        [anon_sym_unsafe] = ACTIONS(571),
        [anon_sym_readonly] = ACTIONS(187),
        [anon_sym_volatile] = ACTIONS(187),
        [anon_sym_bool] = ACTIONS(187),
        [anon_sym_byte] = ACTIONS(187),
        [anon_sym_char] = ACTIONS(187),
        [anon_sym_decimal] = ACTIONS(187),
        [anon_sym_double] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(187),
        [anon_sym_int] = ACTIONS(187),
        [anon_sym_long] = ACTIONS(187),
        [anon_sym_object] = ACTIONS(187),
        [anon_sym_sbyte] = ACTIONS(187),
        [anon_sym_short] = ACTIONS(187),
        [anon_sym_string] = ACTIONS(187),
        [anon_sym_uint] = ACTIONS(187),
        [anon_sym_ulong] = ACTIONS(187),
        [anon_sym_ushort] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(47),
    },
    [145] = {
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
        [anon_sym_RBRACE] = ACTIONS(574),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [146] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(576),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(578),
        [anon_sym_namespace] = ACTIONS(581),
        [anon_sym_RBRACE] = ACTIONS(578),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_struct] = ACTIONS(581),
        [anon_sym_abstract] = ACTIONS(581),
        [anon_sym_sealed] = ACTIONS(581),
        [anon_sym_static] = ACTIONS(581),
        [anon_sym_new] = ACTIONS(581),
        [anon_sym_public] = ACTIONS(581),
        [anon_sym_protected] = ACTIONS(581),
        [anon_sym_internal] = ACTIONS(581),
        [anon_sym_private] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(581),
        [anon_sym_readonly] = ACTIONS(581),
        [anon_sym_volatile] = ACTIONS(581),
        [anon_sym_bool] = ACTIONS(581),
        [anon_sym_byte] = ACTIONS(581),
        [anon_sym_char] = ACTIONS(581),
        [anon_sym_decimal] = ACTIONS(581),
        [anon_sym_double] = ACTIONS(581),
        [anon_sym_float] = ACTIONS(581),
        [anon_sym_int] = ACTIONS(581),
        [anon_sym_long] = ACTIONS(581),
        [anon_sym_object] = ACTIONS(581),
        [anon_sym_sbyte] = ACTIONS(581),
        [anon_sym_short] = ACTIONS(581),
        [anon_sym_string] = ACTIONS(581),
        [anon_sym_uint] = ACTIONS(581),
        [anon_sym_ulong] = ACTIONS(581),
        [anon_sym_ushort] = ACTIONS(581),
        [sym_identifier_name] = ACTIONS(584),
        [sym_comment] = ACTIONS(47),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_namespace] = ACTIONS(590),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(590),
        [anon_sym_struct] = ACTIONS(590),
        [anon_sym_abstract] = ACTIONS(590),
        [anon_sym_sealed] = ACTIONS(590),
        [anon_sym_static] = ACTIONS(590),
        [anon_sym_new] = ACTIONS(590),
        [anon_sym_public] = ACTIONS(590),
        [anon_sym_protected] = ACTIONS(590),
        [anon_sym_internal] = ACTIONS(590),
        [anon_sym_private] = ACTIONS(590),
        [anon_sym_unsafe] = ACTIONS(590),
        [anon_sym_readonly] = ACTIONS(590),
        [anon_sym_volatile] = ACTIONS(590),
        [anon_sym_bool] = ACTIONS(590),
        [anon_sym_byte] = ACTIONS(590),
        [anon_sym_char] = ACTIONS(590),
        [anon_sym_decimal] = ACTIONS(590),
        [anon_sym_double] = ACTIONS(590),
        [anon_sym_float] = ACTIONS(590),
        [anon_sym_int] = ACTIONS(590),
        [anon_sym_long] = ACTIONS(590),
        [anon_sym_object] = ACTIONS(590),
        [anon_sym_sbyte] = ACTIONS(590),
        [anon_sym_short] = ACTIONS(590),
        [anon_sym_string] = ACTIONS(590),
        [anon_sym_uint] = ACTIONS(590),
        [anon_sym_ulong] = ACTIONS(590),
        [anon_sym_ushort] = ACTIONS(590),
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(47),
    },
    [149] = {
        [anon_sym_RBRACE] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(373),
        [anon_sym_struct] = ACTIONS(373),
        [anon_sym_abstract] = ACTIONS(373),
        [anon_sym_sealed] = ACTIONS(373),
        [anon_sym_static] = ACTIONS(373),
        [anon_sym_new] = ACTIONS(373),
        [anon_sym_public] = ACTIONS(373),
        [anon_sym_protected] = ACTIONS(373),
        [anon_sym_internal] = ACTIONS(373),
        [anon_sym_private] = ACTIONS(373),
        [anon_sym_unsafe] = ACTIONS(373),
        [anon_sym_readonly] = ACTIONS(373),
        [anon_sym_volatile] = ACTIONS(373),
        [anon_sym_bool] = ACTIONS(373),
        [anon_sym_byte] = ACTIONS(373),
        [anon_sym_char] = ACTIONS(373),
        [anon_sym_decimal] = ACTIONS(373),
        [anon_sym_double] = ACTIONS(373),
        [anon_sym_float] = ACTIONS(373),
        [anon_sym_int] = ACTIONS(373),
        [anon_sym_long] = ACTIONS(373),
        [anon_sym_object] = ACTIONS(373),
        [anon_sym_sbyte] = ACTIONS(373),
        [anon_sym_short] = ACTIONS(373),
        [anon_sym_string] = ACTIONS(373),
        [anon_sym_uint] = ACTIONS(373),
        [anon_sym_ulong] = ACTIONS(373),
        [anon_sym_ushort] = ACTIONS(373),
        [sym_identifier_name] = ACTIONS(376),
        [sym_comment] = ACTIONS(47),
    },
    [150] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(152),
        [sym_struct_declaration] = STATE(152),
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
        [aux_sym_compilation_unit_repeat2] = STATE(101),
        [aux_sym_class_declaration_repeat1] = STATE(153),
        [aux_sym_struct_declaration_repeat1] = STATE(154),
        [anon_sym_namespace] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(596),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [151] = {
        [ts_builtin_sym_end] = ACTIONS(598),
        [anon_sym_namespace] = ACTIONS(604),
        [anon_sym_RBRACE] = ACTIONS(598),
        [anon_sym_class] = ACTIONS(604),
        [anon_sym_struct] = ACTIONS(604),
        [anon_sym_abstract] = ACTIONS(604),
        [anon_sym_sealed] = ACTIONS(604),
        [anon_sym_static] = ACTIONS(604),
        [anon_sym_new] = ACTIONS(604),
        [anon_sym_public] = ACTIONS(604),
        [anon_sym_protected] = ACTIONS(604),
        [anon_sym_internal] = ACTIONS(604),
        [anon_sym_private] = ACTIONS(604),
        [anon_sym_unsafe] = ACTIONS(604),
        [anon_sym_readonly] = ACTIONS(610),
        [anon_sym_volatile] = ACTIONS(610),
        [anon_sym_bool] = ACTIONS(610),
        [anon_sym_byte] = ACTIONS(610),
        [anon_sym_char] = ACTIONS(610),
        [anon_sym_decimal] = ACTIONS(610),
        [anon_sym_double] = ACTIONS(610),
        [anon_sym_float] = ACTIONS(610),
        [anon_sym_int] = ACTIONS(610),
        [anon_sym_long] = ACTIONS(610),
        [anon_sym_object] = ACTIONS(610),
        [anon_sym_sbyte] = ACTIONS(610),
        [anon_sym_short] = ACTIONS(610),
        [anon_sym_string] = ACTIONS(610),
        [anon_sym_uint] = ACTIONS(610),
        [anon_sym_ulong] = ACTIONS(610),
        [anon_sym_ushort] = ACTIONS(610),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(47),
    },
    [152] = {
        [anon_sym_namespace] = ACTIONS(620),
        [anon_sym_RBRACE] = ACTIONS(622),
        [anon_sym_class] = ACTIONS(626),
        [anon_sym_struct] = ACTIONS(626),
        [anon_sym_abstract] = ACTIONS(626),
        [anon_sym_sealed] = ACTIONS(626),
        [anon_sym_static] = ACTIONS(626),
        [anon_sym_new] = ACTIONS(626),
        [anon_sym_public] = ACTIONS(626),
        [anon_sym_protected] = ACTIONS(626),
        [anon_sym_internal] = ACTIONS(626),
        [anon_sym_private] = ACTIONS(626),
        [anon_sym_unsafe] = ACTIONS(626),
        [anon_sym_readonly] = ACTIONS(187),
        [anon_sym_volatile] = ACTIONS(187),
        [anon_sym_bool] = ACTIONS(187),
        [anon_sym_byte] = ACTIONS(187),
        [anon_sym_char] = ACTIONS(187),
        [anon_sym_decimal] = ACTIONS(187),
        [anon_sym_double] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(187),
        [anon_sym_int] = ACTIONS(187),
        [anon_sym_long] = ACTIONS(187),
        [anon_sym_object] = ACTIONS(187),
        [anon_sym_sbyte] = ACTIONS(187),
        [anon_sym_short] = ACTIONS(187),
        [anon_sym_string] = ACTIONS(187),
        [anon_sym_uint] = ACTIONS(187),
        [anon_sym_ulong] = ACTIONS(187),
        [anon_sym_ushort] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(47),
    },
    [153] = {
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
        [anon_sym_RBRACE] = ACTIONS(630),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [154] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(632),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(634),
        [anon_sym_namespace] = ACTIONS(637),
        [anon_sym_RBRACE] = ACTIONS(634),
        [anon_sym_class] = ACTIONS(637),
        [anon_sym_struct] = ACTIONS(637),
        [anon_sym_abstract] = ACTIONS(637),
        [anon_sym_sealed] = ACTIONS(637),
        [anon_sym_static] = ACTIONS(637),
        [anon_sym_new] = ACTIONS(637),
        [anon_sym_public] = ACTIONS(637),
        [anon_sym_protected] = ACTIONS(637),
        [anon_sym_internal] = ACTIONS(637),
        [anon_sym_private] = ACTIONS(637),
        [anon_sym_unsafe] = ACTIONS(637),
        [anon_sym_readonly] = ACTIONS(637),
        [anon_sym_volatile] = ACTIONS(637),
        [anon_sym_bool] = ACTIONS(637),
        [anon_sym_byte] = ACTIONS(637),
        [anon_sym_char] = ACTIONS(637),
        [anon_sym_decimal] = ACTIONS(637),
        [anon_sym_double] = ACTIONS(637),
        [anon_sym_float] = ACTIONS(637),
        [anon_sym_int] = ACTIONS(637),
        [anon_sym_long] = ACTIONS(637),
        [anon_sym_object] = ACTIONS(637),
        [anon_sym_sbyte] = ACTIONS(637),
        [anon_sym_short] = ACTIONS(637),
        [anon_sym_string] = ACTIONS(637),
        [anon_sym_uint] = ACTIONS(637),
        [anon_sym_ulong] = ACTIONS(637),
        [anon_sym_ushort] = ACTIONS(637),
        [sym_identifier_name] = ACTIONS(640),
        [sym_comment] = ACTIONS(47),
    },
    [156] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_namespace] = ACTIONS(646),
        [anon_sym_RBRACE] = ACTIONS(643),
        [anon_sym_class] = ACTIONS(646),
        [anon_sym_struct] = ACTIONS(646),
        [anon_sym_abstract] = ACTIONS(646),
        [anon_sym_sealed] = ACTIONS(646),
        [anon_sym_static] = ACTIONS(646),
        [anon_sym_new] = ACTIONS(646),
        [anon_sym_public] = ACTIONS(646),
        [anon_sym_protected] = ACTIONS(646),
        [anon_sym_internal] = ACTIONS(646),
        [anon_sym_private] = ACTIONS(646),
        [anon_sym_unsafe] = ACTIONS(646),
        [anon_sym_readonly] = ACTIONS(646),
        [anon_sym_volatile] = ACTIONS(646),
        [anon_sym_bool] = ACTIONS(646),
        [anon_sym_byte] = ACTIONS(646),
        [anon_sym_char] = ACTIONS(646),
        [anon_sym_decimal] = ACTIONS(646),
        [anon_sym_double] = ACTIONS(646),
        [anon_sym_float] = ACTIONS(646),
        [anon_sym_int] = ACTIONS(646),
        [anon_sym_long] = ACTIONS(646),
        [anon_sym_object] = ACTIONS(646),
        [anon_sym_sbyte] = ACTIONS(646),
        [anon_sym_short] = ACTIONS(646),
        [anon_sym_string] = ACTIONS(646),
        [anon_sym_uint] = ACTIONS(646),
        [anon_sym_ulong] = ACTIONS(646),
        [anon_sym_ushort] = ACTIONS(646),
        [sym_identifier_name] = ACTIONS(649),
        [sym_comment] = ACTIONS(47),
    },
    [157] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(71),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_EQ] = ACTIONS(229),
        [anon_sym_LT] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(181),
        [sym_comment] = ACTIONS(47),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(652),
        [anon_sym_COMMA] = ACTIONS(652),
        [sym_comment] = ACTIONS(47),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(655),
        [anon_sym_GT] = ACTIONS(655),
        [sym_comment] = ACTIONS(47),
    },
    [160] = {
        [sym_type_parameter_list] = STATE(162),
        [anon_sym_LBRACE] = ACTIONS(658),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
    },
    [161] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(154),
        [anon_sym_RBRACE] = ACTIONS(660),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [162] = {
        [anon_sym_LBRACE] = ACTIONS(662),
        [sym_comment] = ACTIONS(47),
    },
    [163] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(632),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_struct] = ACTIONS(57),
        [anon_sym_abstract] = ACTIONS(59),
        [anon_sym_sealed] = ACTIONS(59),
        [anon_sym_static] = ACTIONS(59),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_unsafe] = ACTIONS(61),
        [sym_comment] = ACTIONS(47),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(664),
        [anon_sym_namespace] = ACTIONS(667),
        [anon_sym_RBRACE] = ACTIONS(664),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_struct] = ACTIONS(667),
        [anon_sym_abstract] = ACTIONS(667),
        [anon_sym_sealed] = ACTIONS(667),
        [anon_sym_static] = ACTIONS(667),
        [anon_sym_new] = ACTIONS(667),
        [anon_sym_public] = ACTIONS(667),
        [anon_sym_protected] = ACTIONS(667),
        [anon_sym_internal] = ACTIONS(667),
        [anon_sym_private] = ACTIONS(667),
        [anon_sym_unsafe] = ACTIONS(667),
        [anon_sym_readonly] = ACTIONS(667),
        [anon_sym_volatile] = ACTIONS(667),
        [anon_sym_bool] = ACTIONS(667),
        [anon_sym_byte] = ACTIONS(667),
        [anon_sym_char] = ACTIONS(667),
        [anon_sym_decimal] = ACTIONS(667),
        [anon_sym_double] = ACTIONS(667),
        [anon_sym_float] = ACTIONS(667),
        [anon_sym_int] = ACTIONS(667),
        [anon_sym_long] = ACTIONS(667),
        [anon_sym_object] = ACTIONS(667),
        [anon_sym_sbyte] = ACTIONS(667),
        [anon_sym_short] = ACTIONS(667),
        [anon_sym_string] = ACTIONS(667),
        [anon_sym_uint] = ACTIONS(667),
        [anon_sym_ulong] = ACTIONS(667),
        [anon_sym_ushort] = ACTIONS(667),
        [sym_identifier_name] = ACTIONS(670),
        [sym_comment] = ACTIONS(47),
    },
    [165] = {
        [sym_type_parameter_list] = STATE(167),
        [anon_sym_LBRACE] = ACTIONS(673),
        [anon_sym_LT] = ACTIONS(105),
        [sym_comment] = ACTIONS(47),
    },
    [166] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(153),
        [anon_sym_RBRACE] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [167] = {
        [anon_sym_LBRACE] = ACTIONS(677),
        [sym_comment] = ACTIONS(47),
    },
    [168] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(145),
        [anon_sym_RBRACE] = ACTIONS(630),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(109),
        [anon_sym_byte] = ACTIONS(109),
        [anon_sym_char] = ACTIONS(109),
        [anon_sym_decimal] = ACTIONS(109),
        [anon_sym_double] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_int] = ACTIONS(109),
        [anon_sym_long] = ACTIONS(109),
        [anon_sym_object] = ACTIONS(109),
        [anon_sym_sbyte] = ACTIONS(109),
        [anon_sym_short] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_uint] = ACTIONS(109),
        [anon_sym_ulong] = ACTIONS(109),
        [anon_sym_ushort] = ACTIONS(109),
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(47),
    },
    [169] = {
        [ts_builtin_sym_end] = ACTIONS(679),
        [anon_sym_namespace] = ACTIONS(682),
        [anon_sym_RBRACE] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(682),
        [anon_sym_struct] = ACTIONS(682),
        [anon_sym_abstract] = ACTIONS(682),
        [anon_sym_sealed] = ACTIONS(682),
        [anon_sym_static] = ACTIONS(682),
        [anon_sym_new] = ACTIONS(682),
        [anon_sym_public] = ACTIONS(682),
        [anon_sym_protected] = ACTIONS(682),
        [anon_sym_internal] = ACTIONS(682),
        [anon_sym_private] = ACTIONS(682),
        [anon_sym_unsafe] = ACTIONS(682),
        [anon_sym_readonly] = ACTIONS(682),
        [anon_sym_volatile] = ACTIONS(682),
        [anon_sym_bool] = ACTIONS(682),
        [anon_sym_byte] = ACTIONS(682),
        [anon_sym_char] = ACTIONS(682),
        [anon_sym_decimal] = ACTIONS(682),
        [anon_sym_double] = ACTIONS(682),
        [anon_sym_float] = ACTIONS(682),
        [anon_sym_int] = ACTIONS(682),
        [anon_sym_long] = ACTIONS(682),
        [anon_sym_object] = ACTIONS(682),
        [anon_sym_sbyte] = ACTIONS(682),
        [anon_sym_short] = ACTIONS(682),
        [anon_sym_string] = ACTIONS(682),
        [anon_sym_uint] = ACTIONS(682),
        [anon_sym_ulong] = ACTIONS(682),
        [anon_sym_ushort] = ACTIONS(682),
        [sym_identifier_name] = ACTIONS(685),
        [sym_comment] = ACTIONS(47),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(688),
        [anon_sym_namespace] = ACTIONS(696),
        [anon_sym_RBRACE] = ACTIONS(688),
        [anon_sym_class] = ACTIONS(696),
        [anon_sym_struct] = ACTIONS(696),
        [anon_sym_abstract] = ACTIONS(696),
        [anon_sym_sealed] = ACTIONS(696),
        [anon_sym_static] = ACTIONS(696),
        [anon_sym_new] = ACTIONS(696),
        [anon_sym_public] = ACTIONS(696),
        [anon_sym_protected] = ACTIONS(696),
        [anon_sym_internal] = ACTIONS(696),
        [anon_sym_private] = ACTIONS(696),
        [anon_sym_unsafe] = ACTIONS(696),
        [anon_sym_readonly] = ACTIONS(704),
        [anon_sym_volatile] = ACTIONS(704),
        [anon_sym_bool] = ACTIONS(704),
        [anon_sym_byte] = ACTIONS(704),
        [anon_sym_char] = ACTIONS(704),
        [anon_sym_decimal] = ACTIONS(704),
        [anon_sym_double] = ACTIONS(704),
        [anon_sym_float] = ACTIONS(704),
        [anon_sym_int] = ACTIONS(704),
        [anon_sym_long] = ACTIONS(704),
        [anon_sym_object] = ACTIONS(704),
        [anon_sym_sbyte] = ACTIONS(704),
        [anon_sym_short] = ACTIONS(704),
        [anon_sym_string] = ACTIONS(704),
        [anon_sym_uint] = ACTIONS(704),
        [anon_sym_ulong] = ACTIONS(704),
        [anon_sym_ushort] = ACTIONS(704),
        [sym_identifier_name] = ACTIONS(711),
        [sym_comment] = ACTIONS(47),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(113),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(114),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(115),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(116),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(117),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(118),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(119),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(69),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(120),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(121),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(97),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(103),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(94),
    [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(122),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
    [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [362] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [368] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [376] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [383] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [394] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [405] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [414] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
    [429] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [432] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [435] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [438] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(141),
    [442] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(150),
    [445] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [450] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(97),
    [454] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [457] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [460] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [463] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [470] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [477] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [480] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [483] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [488] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [496] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [499] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [502] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [505] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [510] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(74),
    [514] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(75),
    [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [520] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [527] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [531] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [535] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [539] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [543] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [547] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [553] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [558] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [563] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [568] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [571] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [578] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [581] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [584] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [590] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [593] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [598] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [604] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [610] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [615] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [622] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [626] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [634] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [637] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [640] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [643] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [646] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [649] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [652] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [655] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [664] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [667] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [670] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [679] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [682] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [685] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [688] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [696] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [704] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [711] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
