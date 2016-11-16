#include "tree_sitter/parser.h"

#define STATE_COUNT 164
#define SYMBOL_COUNT 72
#define TOKEN_COUNT 43

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_COMMA = 8,
    anon_sym_abstract = 9,
    anon_sym_sealed = 10,
    anon_sym_static = 11,
    anon_sym_new = 12,
    anon_sym_public = 13,
    anon_sym_protected = 14,
    anon_sym_internal = 15,
    anon_sym_private = 16,
    anon_sym_unsafe = 17,
    anon_sym_readonly = 18,
    anon_sym_volatile = 19,
    anon_sym_bool = 20,
    anon_sym_byte = 21,
    anon_sym_char = 22,
    anon_sym_decimal = 23,
    anon_sym_double = 24,
    anon_sym_float = 25,
    anon_sym_int = 26,
    anon_sym_long = 27,
    anon_sym_object = 28,
    anon_sym_sbyte = 29,
    anon_sym_short = 30,
    anon_sym_string = 31,
    anon_sym_uint = 32,
    anon_sym_ulong = 33,
    anon_sym_ushort = 34,
    anon_sym_LT = 35,
    anon_sym_GT = 36,
    anon_sym_DOT = 37,
    anon_sym_COLON_COLON = 38,
    anon_sym_EQ = 39,
    sym_global = 40,
    sym_identifier_name = 41,
    sym_comment = 42,
    sym_compilation_unit = 43,
    sym_using_directive = 44,
    sym_namespace_declaration = 45,
    sym_class_declaration = 46,
    sym_struct_declaration = 47,
    sym_field_declaration = 48,
    sym_variable_declaration = 49,
    sym__type = 50,
    sym_generic_name = 51,
    sym_variable_declarator = 52,
    sym_class_modifiers = 53,
    sym__class_modifiers = 54,
    sym_struct_modifiers = 55,
    sym__struct_modifiers = 56,
    sym_field_modifiers = 57,
    sym__field_modifiers = 58,
    sym_predefined_type = 59,
    sym_type_parameter_list = 60,
    sym_type_parameter = 61,
    sym_qualified_name = 62,
    sym_alias_qualified_name = 63,
    sym_name_equals = 64,
    sym_static = 65,
    aux_sym_compilation_unit_repeat1 = 66,
    aux_sym_compilation_unit_repeat2 = 67,
    aux_sym_class_declaration_repeat1 = 68,
    aux_sym_struct_declaration_repeat1 = 69,
    aux_sym_variable_declaration_repeat1 = 70,
    aux_sym_type_parameter_list_repeat1 = 71,
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
    [anon_sym_EQ] = "=",
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
    [anon_sym_EQ] = {
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
            if (lookahead == ':')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
            if (lookahead == '>')
                ADVANCE(14);
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(144);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '{')
                ADVANCE(173);
            if (lookahead == '}')
                ADVANCE(174);
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
            if (lookahead == ':')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 11:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 12:
            ACCEPT_TOKEN(anon_sym_LT);
        case 13:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 14:
            ACCEPT_TOKEN(anon_sym_GT);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier_name);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier_name);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier_name);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier_name);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier_name);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier_name);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier_name);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier_name);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier_name);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_bool);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier_name);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier_name);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_byte);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier_name);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier_name);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier_name);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_char);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier_name);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier_name);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_class);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier_name);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier_name);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier_name);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'm')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier_name);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier_name);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier_name);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier_name);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier_name);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier_name);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier_name);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_double);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier_name);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier_name);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier_name);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_float);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(sym_global);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_TOKEN(anon_sym_int);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_internal);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_long);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(75);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'm')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'w')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_new);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'j')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_object);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(92);
            if (lookahead == 'u')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(93);
            if (lookahead == 'o')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'v')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_private);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_protected);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_public);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'y')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 118:
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
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'y')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_short);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'r')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_static);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'u')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_string);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_struct);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(152);
            if (lookahead == 's')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_uint);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'f')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(158);
            if (lookahead == 'i')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_using);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 173:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 174:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 175:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(242);
            LEX_ERROR();
        case 176:
            if (lookahead == 'b')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 's')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 't')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'r')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'a')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'c')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 't')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 184:
            if (lookahead == 'l')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'a')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 's')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 's')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_class);
        case 189:
            if (lookahead == 'n')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 't')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'e')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'r')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'n')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'a')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'l')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_internal);
        case 197:
            if (lookahead == 'a')
                ADVANCE(198);
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 198:
            if (lookahead == 'm')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'e')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 's')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'p')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'a')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'c')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 206:
            if (lookahead == 'w')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            ACCEPT_TOKEN(anon_sym_new);
        case 208:
            if (lookahead == 'r')
                ADVANCE(209);
            if (lookahead == 'u')
                ADVANCE(222);
            LEX_ERROR();
        case 209:
            if (lookahead == 'i')
                ADVANCE(210);
            if (lookahead == 'o')
                ADVANCE(215);
            LEX_ERROR();
        case 210:
            if (lookahead == 'v')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == 'a')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 't')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 'e')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            ACCEPT_TOKEN(anon_sym_private);
        case 215:
            if (lookahead == 't')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'e')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'c')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 't')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'e')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 'd')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            ACCEPT_TOKEN(anon_sym_protected);
        case 222:
            if (lookahead == 'b')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 'l')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'c')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            ACCEPT_TOKEN(anon_sym_public);
        case 227:
            if (lookahead == 'e')
                ADVANCE(228);
            if (lookahead == 't')
                ADVANCE(233);
            LEX_ERROR();
        case 228:
            if (lookahead == 'a')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'l')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'e')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 'd')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 233:
            if (lookahead == 'a')
                ADVANCE(234);
            if (lookahead == 'r')
                ADVANCE(238);
            LEX_ERROR();
        case 234:
            if (lookahead == 't')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 'i')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'c')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            ACCEPT_TOKEN(anon_sym_static);
        case 238:
            if (lookahead == 'u')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'c')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 't')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            ACCEPT_TOKEN(anon_sym_struct);
        case 242:
            if (lookahead == 'n')
                ADVANCE(243);
            if (lookahead == 's')
                ADVANCE(248);
            LEX_ERROR();
        case 243:
            if (lookahead == 's')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'a')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 'f')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == 'e')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 248:
            if (lookahead == 'i')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'n')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'g')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            ACCEPT_TOKEN(anon_sym_using);
        case 252:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(252);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier_name);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(255);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(56);
            LEX_ERROR();
        case 256:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(256);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 257:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(257);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(259);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 258:
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 259:
            if (lookahead == 'e')
                ADVANCE(228);
            if (lookahead == 't')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'a')
                ADVANCE(234);
            LEX_ERROR();
        case 261:
            if (lookahead == 'n')
                ADVANCE(243);
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
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 263:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(263);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 264:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(264);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 265:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(265);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(184);
            LEX_ERROR();
        case 266:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(266);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 's')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 't')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'r')
                ADVANCE(238);
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
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 270:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(270);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 271:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(271);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 272:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(272);
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
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(273);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(274);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 's')
                ADVANCE(277);
            if (lookahead == 'u')
                ADVANCE(280);
            LEX_ERROR();
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier_name);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_int);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(278);
            ACCEPT_TOKEN(sym_identifier_name);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier_name);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 's')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 282:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(282);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 283:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(283);
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 284:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(152);
            if (lookahead == 's')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
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
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(286);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 286:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 287:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(287);
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(286);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(288);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 288:
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
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier_name);
        case 289:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'r')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier_name);
        case 290:
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(286);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 291:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(291);
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
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(273);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(286);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(292);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 292:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier_name);
        case 293:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(293);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 294:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(294);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '>')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 295:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(295);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 296:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(296);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 297:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(297);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        case 298:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(298);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 299:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(299);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 300:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(300);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 301:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(301);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 302:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(302);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 303:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(303);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 304:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(304);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 305:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(305);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 306:
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(144);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
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
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 308:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(308);
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
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(286);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(288);
            if (lookahead == 'u')
                ADVANCE(284);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 309:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(309);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
            if (lookahead == '>')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == '{')
                ADVANCE(173);
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
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 175,
    [2] = 252,
    [3] = 255,
    [4] = 256,
    [5] = 256,
    [6] = 257,
    [7] = 262,
    [8] = 263,
    [9] = 175,
    [10] = 264,
    [11] = 265,
    [12] = 265,
    [13] = 266,
    [14] = 266,
    [15] = 175,
    [16] = 269,
    [17] = 264,
    [18] = 175,
    [19] = 269,
    [20] = 256,
    [21] = 270,
    [22] = 271,
    [23] = 272,
    [24] = 282,
    [25] = 271,
    [26] = 283,
    [27] = 271,
    [28] = 271,
    [29] = 283,
    [30] = 271,
    [31] = 283,
    [32] = 271,
    [33] = 256,
    [34] = 270,
    [35] = 285,
    [36] = 282,
    [37] = 285,
    [38] = 283,
    [39] = 287,
    [40] = 290,
    [41] = 291,
    [42] = 293,
    [43] = 294,
    [44] = 285,
    [45] = 295,
    [46] = 256,
    [47] = 293,
    [48] = 272,
    [49] = 272,
    [50] = 285,
    [51] = 283,
    [52] = 285,
    [53] = 295,
    [54] = 285,
    [55] = 283,
    [56] = 285,
    [57] = 296,
    [58] = 296,
    [59] = 256,
    [60] = 296,
    [61] = 256,
    [62] = 296,
    [63] = 296,
    [64] = 285,
    [65] = 293,
    [66] = 297,
    [67] = 297,
    [68] = 272,
    [69] = 298,
    [70] = 297,
    [71] = 272,
    [72] = 298,
    [73] = 297,
    [74] = 297,
    [75] = 272,
    [76] = 265,
    [77] = 266,
    [78] = 270,
    [79] = 271,
    [80] = 282,
    [81] = 283,
    [82] = 271,
    [83] = 270,
    [84] = 285,
    [85] = 282,
    [86] = 283,
    [87] = 285,
    [88] = 299,
    [89] = 300,
    [90] = 301,
    [91] = 256,
    [92] = 302,
    [93] = 303,
    [94] = 264,
    [95] = 303,
    [96] = 264,
    [97] = 256,
    [98] = 301,
    [99] = 255,
    [100] = 304,
    [101] = 305,
    [102] = 255,
    [103] = 305,
    [104] = 175,
    [105] = 175,
    [106] = 255,
    [107] = 306,
    [108] = 307,
    [109] = 283,
    [110] = 256,
    [111] = 256,
    [112] = 272,
    [113] = 308,
    [114] = 298,
    [115] = 309,
    [116] = 175,
    [117] = 264,
    [118] = 283,
    [119] = 285,
    [120] = 295,
    [121] = 293,
    [122] = 296,
    [123] = 265,
    [124] = 266,
    [125] = 272,
    [126] = 298,
    [127] = 297,
    [128] = 302,
    [129] = 264,
    [130] = 285,
    [131] = 271,
    [132] = 283,
    [133] = 283,
    [134] = 175,
    [135] = 285,
    [136] = 283,
    [137] = 285,
    [138] = 285,
    [139] = 271,
    [140] = 283,
    [141] = 283,
    [142] = 285,
    [143] = 307,
    [144] = 283,
    [145] = 307,
    [146] = 285,
    [147] = 271,
    [148] = 283,
    [149] = 283,
    [150] = 310,
    [151] = 296,
    [152] = 297,
    [153] = 270,
    [154] = 271,
    [155] = 282,
    [156] = 271,
    [157] = 283,
    [158] = 270,
    [159] = 285,
    [160] = 282,
    [161] = 285,
    [162] = 283,
    [163] = 283,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(116),
        [sym_namespace_declaration] = STATE(117),
        [sym_class_declaration] = STATE(118),
        [sym_struct_declaration] = STATE(118),
        [sym_field_declaration] = STATE(119),
        [sym_variable_declaration] = STATE(120),
        [sym__type] = STATE(121),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(122),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(123),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(124),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(125),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(126),
        [sym_type_parameter] = STATE(127),
        [sym_qualified_name] = STATE(128),
        [sym_alias_qualified_name] = STATE(90),
        [sym_name_equals] = STATE(102),
        [sym_static] = STATE(102),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(129),
        [aux_sym_class_declaration_repeat1] = STATE(130),
        [aux_sym_struct_declaration_repeat1] = STATE(131),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym_type_parameter_list_repeat1] = STATE(70),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_COMMA] = ACTIONS(17),
        [anon_sym_abstract] = ACTIONS(19),
        [anon_sym_sealed] = ACTIONS(19),
        [anon_sym_static] = ACTIONS(21),
        [anon_sym_new] = ACTIONS(23),
        [anon_sym_public] = ACTIONS(23),
        [anon_sym_protected] = ACTIONS(23),
        [anon_sym_internal] = ACTIONS(23),
        [anon_sym_private] = ACTIONS(23),
        [anon_sym_unsafe] = ACTIONS(23),
        [anon_sym_readonly] = ACTIONS(25),
        [anon_sym_volatile] = ACTIONS(25),
        [anon_sym_bool] = ACTIONS(27),
        [anon_sym_byte] = ACTIONS(27),
        [anon_sym_char] = ACTIONS(27),
        [anon_sym_decimal] = ACTIONS(27),
        [anon_sym_double] = ACTIONS(27),
        [anon_sym_float] = ACTIONS(27),
        [anon_sym_int] = ACTIONS(27),
        [anon_sym_long] = ACTIONS(27),
        [anon_sym_object] = ACTIONS(27),
        [anon_sym_sbyte] = ACTIONS(27),
        [anon_sym_short] = ACTIONS(27),
        [anon_sym_string] = ACTIONS(27),
        [anon_sym_uint] = ACTIONS(27),
        [anon_sym_ulong] = ACTIONS(27),
        [anon_sym_ushort] = ACTIONS(27),
        [anon_sym_LT] = ACTIONS(29),
        [anon_sym_GT] = ACTIONS(31),
        [anon_sym_DOT] = ACTIONS(33),
        [anon_sym_COLON_COLON] = ACTIONS(35),
        [anon_sym_EQ] = ACTIONS(37),
        [sym_global] = ACTIONS(39),
        [sym_identifier_name] = ACTIONS(41),
        [sym_comment] = ACTIONS(43),
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
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_using] = ACTIONS(47),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [2] = {
        [sym_qualified_name] = STATE(101),
        [sym_alias_qualified_name] = STATE(90),
        [sym_name_equals] = STATE(102),
        [sym_static] = STATE(102),
        [anon_sym_static] = ACTIONS(59),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(63),
        [sym_comment] = ACTIONS(43),
    },
    [3] = {
        [sym_qualified_name] = STATE(89),
        [sym_alias_qualified_name] = STATE(90),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(65),
        [sym_comment] = ACTIONS(43),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(67),
        [sym_comment] = ACTIONS(43),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(69),
        [sym_comment] = ACTIONS(43),
    },
    [6] = {
        [sym__class_modifiers] = STATE(76),
        [anon_sym_class] = ACTIONS(71),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(55),
        [anon_sym_public] = ACTIONS(55),
        [anon_sym_protected] = ACTIONS(55),
        [anon_sym_internal] = ACTIONS(55),
        [anon_sym_private] = ACTIONS(55),
        [anon_sym_unsafe] = ACTIONS(55),
        [sym_comment] = ACTIONS(43),
    },
    [7] = {
        [sym__class_modifiers] = STATE(76),
        [sym__struct_modifiers] = STATE(77),
        [anon_sym_class] = ACTIONS(71),
        [anon_sym_struct] = ACTIONS(73),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [sym_comment] = ACTIONS(43),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(77),
        [anon_sym_using] = ACTIONS(77),
        [anon_sym_namespace] = ACTIONS(77),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(77),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(77),
        [anon_sym_public] = ACTIONS(77),
        [anon_sym_protected] = ACTIONS(77),
        [anon_sym_internal] = ACTIONS(77),
        [anon_sym_private] = ACTIONS(77),
        [anon_sym_unsafe] = ACTIONS(77),
        [sym_comment] = ACTIONS(43),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_namespace] = ACTIONS(79),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_class] = ACTIONS(79),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(79),
        [anon_sym_sealed] = ACTIONS(79),
        [anon_sym_static] = ACTIONS(79),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(43),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(81),
        [sym_comment] = ACTIONS(43),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(83),
        [sym_comment] = ACTIONS(43),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(85),
        [sym_comment] = ACTIONS(43),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(87),
        [sym_comment] = ACTIONS(43),
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
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_using] = ACTIONS(47),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_namespace] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(91),
        [anon_sym_class] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_abstract] = ACTIONS(91),
        [anon_sym_sealed] = ACTIONS(91),
        [anon_sym_static] = ACTIONS(91),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_public] = ACTIONS(91),
        [anon_sym_protected] = ACTIONS(91),
        [anon_sym_internal] = ACTIONS(91),
        [anon_sym_private] = ACTIONS(91),
        [anon_sym_unsafe] = ACTIONS(91),
        [sym_comment] = ACTIONS(43),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_using] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(93),
        [anon_sym_sealed] = ACTIONS(93),
        [anon_sym_static] = ACTIONS(93),
        [anon_sym_new] = ACTIONS(93),
        [anon_sym_public] = ACTIONS(93),
        [anon_sym_protected] = ACTIONS(93),
        [anon_sym_internal] = ACTIONS(93),
        [anon_sym_private] = ACTIONS(93),
        [anon_sym_unsafe] = ACTIONS(93),
        [sym_comment] = ACTIONS(43),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(97),
        [sym_comment] = ACTIONS(43),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(99),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [23] = {
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(67),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_comment] = ACTIONS(43),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_namespace] = ACTIONS(115),
        [anon_sym_RBRACE] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_unsafe] = ACTIONS(115),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_volatile] = ACTIONS(115),
        [anon_sym_bool] = ACTIONS(115),
        [anon_sym_byte] = ACTIONS(115),
        [anon_sym_char] = ACTIONS(115),
        [anon_sym_decimal] = ACTIONS(115),
        [anon_sym_double] = ACTIONS(115),
        [anon_sym_float] = ACTIONS(115),
        [anon_sym_int] = ACTIONS(115),
        [anon_sym_long] = ACTIONS(115),
        [anon_sym_object] = ACTIONS(115),
        [anon_sym_sbyte] = ACTIONS(115),
        [anon_sym_short] = ACTIONS(115),
        [anon_sym_string] = ACTIONS(115),
        [anon_sym_uint] = ACTIONS(115),
        [anon_sym_ulong] = ACTIONS(115),
        [anon_sym_ushort] = ACTIONS(115),
        [sym_identifier_name] = ACTIONS(117),
        [sym_comment] = ACTIONS(43),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(119),
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
        [sym_comment] = ACTIONS(43),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_namespace] = ACTIONS(125),
        [anon_sym_RBRACE] = ACTIONS(123),
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
        [anon_sym_readonly] = ACTIONS(125),
        [anon_sym_volatile] = ACTIONS(125),
        [anon_sym_bool] = ACTIONS(125),
        [anon_sym_byte] = ACTIONS(125),
        [anon_sym_char] = ACTIONS(125),
        [anon_sym_decimal] = ACTIONS(125),
        [anon_sym_double] = ACTIONS(125),
        [anon_sym_float] = ACTIONS(125),
        [anon_sym_int] = ACTIONS(125),
        [anon_sym_long] = ACTIONS(125),
        [anon_sym_object] = ACTIONS(125),
        [anon_sym_sbyte] = ACTIONS(125),
        [anon_sym_short] = ACTIONS(125),
        [anon_sym_string] = ACTIONS(125),
        [anon_sym_uint] = ACTIONS(125),
        [anon_sym_ulong] = ACTIONS(125),
        [anon_sym_ushort] = ACTIONS(125),
        [sym_identifier_name] = ACTIONS(127),
        [sym_comment] = ACTIONS(43),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(129),
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
        [sym_comment] = ACTIONS(43),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_namespace] = ACTIONS(133),
        [anon_sym_RBRACE] = ACTIONS(131),
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
        [anon_sym_readonly] = ACTIONS(133),
        [anon_sym_volatile] = ACTIONS(133),
        [anon_sym_bool] = ACTIONS(133),
        [anon_sym_byte] = ACTIONS(133),
        [anon_sym_char] = ACTIONS(133),
        [anon_sym_decimal] = ACTIONS(133),
        [anon_sym_double] = ACTIONS(133),
        [anon_sym_float] = ACTIONS(133),
        [anon_sym_int] = ACTIONS(133),
        [anon_sym_long] = ACTIONS(133),
        [anon_sym_object] = ACTIONS(133),
        [anon_sym_sbyte] = ACTIONS(133),
        [anon_sym_short] = ACTIONS(133),
        [anon_sym_string] = ACTIONS(133),
        [anon_sym_uint] = ACTIONS(133),
        [anon_sym_ulong] = ACTIONS(133),
        [anon_sym_ushort] = ACTIONS(133),
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(43),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(137),
        [sym_comment] = ACTIONS(43),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(139),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_namespace] = ACTIONS(161),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(161),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(161),
        [anon_sym_new] = ACTIONS(161),
        [anon_sym_public] = ACTIONS(161),
        [anon_sym_protected] = ACTIONS(161),
        [anon_sym_internal] = ACTIONS(161),
        [anon_sym_private] = ACTIONS(161),
        [anon_sym_unsafe] = ACTIONS(161),
        [anon_sym_readonly] = ACTIONS(161),
        [anon_sym_volatile] = ACTIONS(161),
        [anon_sym_bool] = ACTIONS(161),
        [anon_sym_byte] = ACTIONS(161),
        [anon_sym_char] = ACTIONS(161),
        [anon_sym_decimal] = ACTIONS(161),
        [anon_sym_double] = ACTIONS(161),
        [anon_sym_float] = ACTIONS(161),
        [anon_sym_int] = ACTIONS(161),
        [anon_sym_long] = ACTIONS(161),
        [anon_sym_object] = ACTIONS(161),
        [anon_sym_sbyte] = ACTIONS(161),
        [anon_sym_short] = ACTIONS(161),
        [anon_sym_string] = ACTIONS(161),
        [anon_sym_uint] = ACTIONS(161),
        [anon_sym_ulong] = ACTIONS(161),
        [anon_sym_ushort] = ACTIONS(161),
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(43),
    },
    [39] = {
        [sym__class_modifiers] = STATE(76),
        [sym__field_modifiers] = STATE(75),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
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
        [sym_comment] = ACTIONS(43),
    },
    [40] = {
        [sym__class_modifiers] = STATE(76),
        [sym__struct_modifiers] = STATE(77),
        [sym__field_modifiers] = STATE(75),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
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
        [sym_comment] = ACTIONS(43),
    },
    [41] = {
        [sym__field_modifiers] = STATE(75),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(153),
        [anon_sym_public] = ACTIONS(153),
        [anon_sym_protected] = ACTIONS(153),
        [anon_sym_internal] = ACTIONS(153),
        [anon_sym_private] = ACTIONS(153),
        [anon_sym_unsafe] = ACTIONS(153),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
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
        [sym_comment] = ACTIONS(43),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_GT] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(43),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(65),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(177),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(43),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_struct] = ACTIONS(183),
        [anon_sym_abstract] = ACTIONS(183),
        [anon_sym_sealed] = ACTIONS(183),
        [anon_sym_static] = ACTIONS(183),
        [anon_sym_new] = ACTIONS(183),
        [anon_sym_public] = ACTIONS(183),
        [anon_sym_protected] = ACTIONS(183),
        [anon_sym_internal] = ACTIONS(183),
        [anon_sym_private] = ACTIONS(183),
        [anon_sym_unsafe] = ACTIONS(183),
        [anon_sym_readonly] = ACTIONS(183),
        [anon_sym_volatile] = ACTIONS(183),
        [anon_sym_bool] = ACTIONS(183),
        [anon_sym_byte] = ACTIONS(183),
        [anon_sym_char] = ACTIONS(183),
        [anon_sym_decimal] = ACTIONS(183),
        [anon_sym_double] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(183),
        [anon_sym_int] = ACTIONS(183),
        [anon_sym_long] = ACTIONS(183),
        [anon_sym_object] = ACTIONS(183),
        [anon_sym_sbyte] = ACTIONS(183),
        [anon_sym_short] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(183),
        [anon_sym_uint] = ACTIONS(183),
        [anon_sym_ulong] = ACTIONS(183),
        [anon_sym_ushort] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(43),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(187),
        [sym_comment] = ACTIONS(43),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(43),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_GT] = ACTIONS(177),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(43),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(191),
        [anon_sym_byte] = ACTIONS(191),
        [anon_sym_char] = ACTIONS(191),
        [anon_sym_decimal] = ACTIONS(191),
        [anon_sym_double] = ACTIONS(191),
        [anon_sym_float] = ACTIONS(191),
        [anon_sym_int] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_object] = ACTIONS(191),
        [anon_sym_sbyte] = ACTIONS(191),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_string] = ACTIONS(191),
        [anon_sym_uint] = ACTIONS(191),
        [anon_sym_ulong] = ACTIONS(191),
        [anon_sym_ushort] = ACTIONS(191),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_namespace] = ACTIONS(199),
        [anon_sym_RBRACE] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(199),
        [anon_sym_abstract] = ACTIONS(199),
        [anon_sym_sealed] = ACTIONS(199),
        [anon_sym_static] = ACTIONS(199),
        [anon_sym_new] = ACTIONS(199),
        [anon_sym_public] = ACTIONS(199),
        [anon_sym_protected] = ACTIONS(199),
        [anon_sym_internal] = ACTIONS(199),
        [anon_sym_private] = ACTIONS(199),
        [anon_sym_unsafe] = ACTIONS(199),
        [anon_sym_readonly] = ACTIONS(199),
        [anon_sym_volatile] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(199),
        [anon_sym_byte] = ACTIONS(199),
        [anon_sym_char] = ACTIONS(199),
        [anon_sym_decimal] = ACTIONS(199),
        [anon_sym_double] = ACTIONS(199),
        [anon_sym_float] = ACTIONS(199),
        [anon_sym_int] = ACTIONS(199),
        [anon_sym_long] = ACTIONS(199),
        [anon_sym_object] = ACTIONS(199),
        [anon_sym_sbyte] = ACTIONS(199),
        [anon_sym_short] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(199),
        [anon_sym_uint] = ACTIONS(199),
        [anon_sym_ulong] = ACTIONS(199),
        [anon_sym_ushort] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(43),
    },
    [52] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(209),
        [sym_comment] = ACTIONS(43),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_struct] = ACTIONS(213),
        [anon_sym_abstract] = ACTIONS(213),
        [anon_sym_sealed] = ACTIONS(213),
        [anon_sym_static] = ACTIONS(213),
        [anon_sym_new] = ACTIONS(213),
        [anon_sym_public] = ACTIONS(213),
        [anon_sym_protected] = ACTIONS(213),
        [anon_sym_internal] = ACTIONS(213),
        [anon_sym_private] = ACTIONS(213),
        [anon_sym_unsafe] = ACTIONS(213),
        [anon_sym_readonly] = ACTIONS(213),
        [anon_sym_volatile] = ACTIONS(213),
        [anon_sym_bool] = ACTIONS(213),
        [anon_sym_byte] = ACTIONS(213),
        [anon_sym_char] = ACTIONS(213),
        [anon_sym_decimal] = ACTIONS(213),
        [anon_sym_double] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(213),
        [anon_sym_int] = ACTIONS(213),
        [anon_sym_long] = ACTIONS(213),
        [anon_sym_object] = ACTIONS(213),
        [anon_sym_sbyte] = ACTIONS(213),
        [anon_sym_short] = ACTIONS(213),
        [anon_sym_string] = ACTIONS(213),
        [anon_sym_uint] = ACTIONS(213),
        [anon_sym_ulong] = ACTIONS(213),
        [anon_sym_ushort] = ACTIONS(213),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(43),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_namespace] = ACTIONS(219),
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
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(223),
        [sym_comment] = ACTIONS(43),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [sym_comment] = ACTIONS(43),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(43),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(231),
        [sym_comment] = ACTIONS(43),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(43),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(233),
        [sym_comment] = ACTIONS(43),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_COMMA] = ACTIONS(235),
        [sym_comment] = ACTIONS(43),
    },
    [64] = {
        [anon_sym_RBRACE] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(239),
        [anon_sym_struct] = ACTIONS(239),
        [anon_sym_abstract] = ACTIONS(239),
        [anon_sym_sealed] = ACTIONS(239),
        [anon_sym_static] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(239),
        [anon_sym_public] = ACTIONS(239),
        [anon_sym_protected] = ACTIONS(239),
        [anon_sym_internal] = ACTIONS(239),
        [anon_sym_private] = ACTIONS(239),
        [anon_sym_unsafe] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_volatile] = ACTIONS(239),
        [anon_sym_bool] = ACTIONS(239),
        [anon_sym_byte] = ACTIONS(239),
        [anon_sym_char] = ACTIONS(239),
        [anon_sym_decimal] = ACTIONS(239),
        [anon_sym_double] = ACTIONS(239),
        [anon_sym_float] = ACTIONS(239),
        [anon_sym_int] = ACTIONS(239),
        [anon_sym_long] = ACTIONS(239),
        [anon_sym_object] = ACTIONS(239),
        [anon_sym_sbyte] = ACTIONS(239),
        [anon_sym_short] = ACTIONS(239),
        [anon_sym_string] = ACTIONS(239),
        [anon_sym_uint] = ACTIONS(239),
        [anon_sym_ulong] = ACTIONS(239),
        [anon_sym_ushort] = ACTIONS(239),
        [sym_identifier_name] = ACTIONS(241),
        [sym_comment] = ACTIONS(43),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_GT] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(245),
        [sym_comment] = ACTIONS(43),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_GT] = ACTIONS(247),
        [sym_comment] = ACTIONS(43),
    },
    [67] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(70),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_GT] = ACTIONS(251),
        [sym_comment] = ACTIONS(43),
    },
    [68] = {
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(74),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [69] = {
        [anon_sym_LBRACE] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(253),
        [anon_sym_GT] = ACTIONS(253),
        [sym_identifier_name] = ACTIONS(255),
        [sym_comment] = ACTIONS(43),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_GT] = ACTIONS(259),
        [sym_comment] = ACTIONS(43),
    },
    [71] = {
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(73),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [72] = {
        [anon_sym_LBRACE] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_GT] = ACTIONS(261),
        [sym_identifier_name] = ACTIONS(263),
        [sym_comment] = ACTIONS(43),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_GT] = ACTIONS(265),
        [sym_comment] = ACTIONS(43),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [sym_comment] = ACTIONS(43),
    },
    [75] = {
        [anon_sym_bool] = ACTIONS(269),
        [anon_sym_byte] = ACTIONS(269),
        [anon_sym_char] = ACTIONS(269),
        [anon_sym_decimal] = ACTIONS(269),
        [anon_sym_double] = ACTIONS(269),
        [anon_sym_float] = ACTIONS(269),
        [anon_sym_int] = ACTIONS(269),
        [anon_sym_long] = ACTIONS(269),
        [anon_sym_object] = ACTIONS(269),
        [anon_sym_sbyte] = ACTIONS(269),
        [anon_sym_short] = ACTIONS(269),
        [anon_sym_string] = ACTIONS(269),
        [anon_sym_uint] = ACTIONS(269),
        [anon_sym_ulong] = ACTIONS(269),
        [anon_sym_ushort] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(43),
    },
    [76] = {
        [anon_sym_class] = ACTIONS(273),
        [sym_comment] = ACTIONS(43),
    },
    [77] = {
        [anon_sym_struct] = ACTIONS(275),
        [sym_comment] = ACTIONS(43),
    },
    [78] = {
        [sym_type_parameter_list] = STATE(80),
        [anon_sym_LBRACE] = ACTIONS(277),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [79] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(82),
        [anon_sym_RBRACE] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [80] = {
        [anon_sym_LBRACE] = ACTIONS(99),
        [sym_comment] = ACTIONS(43),
    },
    [81] = {
        [ts_builtin_sym_end] = ACTIONS(281),
        [anon_sym_namespace] = ACTIONS(283),
        [anon_sym_RBRACE] = ACTIONS(281),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_struct] = ACTIONS(283),
        [anon_sym_abstract] = ACTIONS(283),
        [anon_sym_sealed] = ACTIONS(283),
        [anon_sym_static] = ACTIONS(283),
        [anon_sym_new] = ACTIONS(283),
        [anon_sym_public] = ACTIONS(283),
        [anon_sym_protected] = ACTIONS(283),
        [anon_sym_internal] = ACTIONS(283),
        [anon_sym_private] = ACTIONS(283),
        [anon_sym_unsafe] = ACTIONS(283),
        [anon_sym_readonly] = ACTIONS(283),
        [anon_sym_volatile] = ACTIONS(283),
        [anon_sym_bool] = ACTIONS(283),
        [anon_sym_byte] = ACTIONS(283),
        [anon_sym_char] = ACTIONS(283),
        [anon_sym_decimal] = ACTIONS(283),
        [anon_sym_double] = ACTIONS(283),
        [anon_sym_float] = ACTIONS(283),
        [anon_sym_int] = ACTIONS(283),
        [anon_sym_long] = ACTIONS(283),
        [anon_sym_object] = ACTIONS(283),
        [anon_sym_sbyte] = ACTIONS(283),
        [anon_sym_short] = ACTIONS(283),
        [anon_sym_string] = ACTIONS(283),
        [anon_sym_uint] = ACTIONS(283),
        [anon_sym_ulong] = ACTIONS(283),
        [anon_sym_ushort] = ACTIONS(283),
        [sym_identifier_name] = ACTIONS(285),
        [sym_comment] = ACTIONS(43),
    },
    [82] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [83] = {
        [sym_type_parameter_list] = STATE(85),
        [anon_sym_LBRACE] = ACTIONS(287),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [84] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(87),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [85] = {
        [anon_sym_LBRACE] = ACTIONS(139),
        [sym_comment] = ACTIONS(43),
    },
    [86] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_namespace] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_struct] = ACTIONS(293),
        [anon_sym_abstract] = ACTIONS(293),
        [anon_sym_sealed] = ACTIONS(293),
        [anon_sym_static] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(293),
        [anon_sym_public] = ACTIONS(293),
        [anon_sym_protected] = ACTIONS(293),
        [anon_sym_internal] = ACTIONS(293),
        [anon_sym_private] = ACTIONS(293),
        [anon_sym_unsafe] = ACTIONS(293),
        [anon_sym_readonly] = ACTIONS(293),
        [anon_sym_volatile] = ACTIONS(293),
        [anon_sym_bool] = ACTIONS(293),
        [anon_sym_byte] = ACTIONS(293),
        [anon_sym_char] = ACTIONS(293),
        [anon_sym_decimal] = ACTIONS(293),
        [anon_sym_double] = ACTIONS(293),
        [anon_sym_float] = ACTIONS(293),
        [anon_sym_int] = ACTIONS(293),
        [anon_sym_long] = ACTIONS(293),
        [anon_sym_object] = ACTIONS(293),
        [anon_sym_sbyte] = ACTIONS(293),
        [anon_sym_short] = ACTIONS(293),
        [anon_sym_string] = ACTIONS(293),
        [anon_sym_uint] = ACTIONS(293),
        [anon_sym_ulong] = ACTIONS(293),
        [anon_sym_ushort] = ACTIONS(293),
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(43),
    },
    [87] = {
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
        [anon_sym_RBRACE] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [88] = {
        [anon_sym_COLON_COLON] = ACTIONS(297),
        [sym_comment] = ACTIONS(43),
    },
    [89] = {
        [anon_sym_LBRACE] = ACTIONS(299),
        [anon_sym_DOT] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [90] = {
        [anon_sym_DOT] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [91] = {
        [sym_identifier_name] = ACTIONS(303),
        [sym_comment] = ACTIONS(43),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(305),
        [anon_sym_LBRACE] = ACTIONS(305),
        [anon_sym_DOT] = ACTIONS(305),
        [sym_comment] = ACTIONS(43),
    },
    [93] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(95),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(307),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [94] = {
        [ts_builtin_sym_end] = ACTIONS(309),
        [anon_sym_namespace] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(309),
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
        [sym_comment] = ACTIONS(43),
    },
    [95] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [96] = {
        [ts_builtin_sym_end] = ACTIONS(313),
        [anon_sym_namespace] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
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
        [sym_comment] = ACTIONS(43),
    },
    [97] = {
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(43),
    },
    [98] = {
        [anon_sym_DOT] = ACTIONS(317),
        [sym_comment] = ACTIONS(43),
    },
    [99] = {
        [sym_global] = ACTIONS(319),
        [sym_identifier_name] = ACTIONS(321),
        [sym_comment] = ACTIONS(43),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_DOT] = ACTIONS(301),
        [anon_sym_EQ] = ACTIONS(325),
        [sym_comment] = ACTIONS(43),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_DOT] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [102] = {
        [sym_qualified_name] = STATE(103),
        [sym_alias_qualified_name] = STATE(90),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(327),
        [sym_comment] = ACTIONS(43),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_DOT] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [104] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_using] = ACTIONS(331),
        [anon_sym_namespace] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_struct] = ACTIONS(331),
        [anon_sym_abstract] = ACTIONS(331),
        [anon_sym_sealed] = ACTIONS(331),
        [anon_sym_static] = ACTIONS(331),
        [anon_sym_new] = ACTIONS(331),
        [anon_sym_public] = ACTIONS(331),
        [anon_sym_protected] = ACTIONS(331),
        [anon_sym_internal] = ACTIONS(331),
        [anon_sym_private] = ACTIONS(331),
        [anon_sym_unsafe] = ACTIONS(331),
        [sym_comment] = ACTIONS(43),
    },
    [105] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_using] = ACTIONS(333),
        [anon_sym_namespace] = ACTIONS(333),
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
        [sym_comment] = ACTIONS(43),
    },
    [106] = {
        [sym_global] = ACTIONS(335),
        [sym_identifier_name] = ACTIONS(337),
        [sym_comment] = ACTIONS(43),
    },
    [107] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_using] = ACTIONS(342),
        [anon_sym_namespace] = ACTIONS(342),
        [anon_sym_RBRACE] = ACTIONS(345),
        [anon_sym_class] = ACTIONS(348),
        [anon_sym_struct] = ACTIONS(348),
        [anon_sym_abstract] = ACTIONS(348),
        [anon_sym_sealed] = ACTIONS(348),
        [anon_sym_static] = ACTIONS(348),
        [anon_sym_new] = ACTIONS(348),
        [anon_sym_public] = ACTIONS(348),
        [anon_sym_protected] = ACTIONS(348),
        [anon_sym_internal] = ACTIONS(348),
        [anon_sym_private] = ACTIONS(348),
        [anon_sym_unsafe] = ACTIONS(348),
        [anon_sym_readonly] = ACTIONS(353),
        [anon_sym_volatile] = ACTIONS(353),
        [anon_sym_bool] = ACTIONS(353),
        [anon_sym_byte] = ACTIONS(353),
        [anon_sym_char] = ACTIONS(353),
        [anon_sym_decimal] = ACTIONS(353),
        [anon_sym_double] = ACTIONS(353),
        [anon_sym_float] = ACTIONS(353),
        [anon_sym_int] = ACTIONS(353),
        [anon_sym_long] = ACTIONS(353),
        [anon_sym_object] = ACTIONS(353),
        [anon_sym_sbyte] = ACTIONS(353),
        [anon_sym_short] = ACTIONS(353),
        [anon_sym_string] = ACTIONS(353),
        [anon_sym_uint] = ACTIONS(353),
        [anon_sym_ulong] = ACTIONS(353),
        [anon_sym_ushort] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(356),
        [sym_comment] = ACTIONS(43),
    },
    [108] = {
        [sym_namespace_declaration] = STATE(10),
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
        [aux_sym_compilation_unit_repeat2] = STATE(95),
        [aux_sym_class_declaration_repeat1] = STATE(130),
        [aux_sym_struct_declaration_repeat1] = STATE(131),
        [anon_sym_namespace] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [109] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_namespace] = ACTIONS(374),
        [anon_sym_RBRACE] = ACTIONS(363),
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
        [anon_sym_readonly] = ACTIONS(385),
        [anon_sym_volatile] = ACTIONS(385),
        [anon_sym_bool] = ACTIONS(385),
        [anon_sym_byte] = ACTIONS(385),
        [anon_sym_char] = ACTIONS(385),
        [anon_sym_decimal] = ACTIONS(385),
        [anon_sym_double] = ACTIONS(385),
        [anon_sym_float] = ACTIONS(385),
        [anon_sym_int] = ACTIONS(385),
        [anon_sym_long] = ACTIONS(385),
        [anon_sym_object] = ACTIONS(385),
        [anon_sym_sbyte] = ACTIONS(385),
        [anon_sym_short] = ACTIONS(385),
        [anon_sym_string] = ACTIONS(385),
        [anon_sym_uint] = ACTIONS(385),
        [anon_sym_ulong] = ACTIONS(385),
        [anon_sym_ushort] = ACTIONS(385),
        [sym_identifier_name] = ACTIONS(394),
        [sym_comment] = ACTIONS(43),
    },
    [110] = {
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(43),
    },
    [111] = {
        [sym_identifier_name] = ACTIONS(405),
        [sym_comment] = ACTIONS(43),
    },
    [112] = {
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(151),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(152),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(407),
        [sym_comment] = ACTIONS(43),
    },
    [113] = {
        [sym__class_modifiers] = STATE(76),
        [sym__field_modifiers] = STATE(75),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
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
        [sym_global] = ACTIONS(319),
        [sym_identifier_name] = ACTIONS(409),
        [sym_comment] = ACTIONS(43),
    },
    [114] = {
        [anon_sym_LBRACE] = ACTIONS(412),
        [anon_sym_COMMA] = ACTIONS(412),
        [anon_sym_GT] = ACTIONS(412),
        [sym_identifier_name] = ACTIONS(415),
        [sym_comment] = ACTIONS(43),
    },
    [115] = {
        [sym_type_parameter_list] = STATE(126),
        [anon_sym_SEMI] = ACTIONS(418),
        [anon_sym_LBRACE] = ACTIONS(422),
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(177),
        [anon_sym_DOT] = ACTIONS(428),
        [anon_sym_EQ] = ACTIONS(325),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(43),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(432),
        [anon_sym_using] = ACTIONS(432),
        [anon_sym_namespace] = ACTIONS(432),
        [anon_sym_class] = ACTIONS(432),
        [anon_sym_struct] = ACTIONS(432),
        [anon_sym_abstract] = ACTIONS(432),
        [anon_sym_sealed] = ACTIONS(432),
        [anon_sym_static] = ACTIONS(432),
        [anon_sym_new] = ACTIONS(432),
        [anon_sym_public] = ACTIONS(432),
        [anon_sym_protected] = ACTIONS(432),
        [anon_sym_internal] = ACTIONS(432),
        [anon_sym_private] = ACTIONS(432),
        [anon_sym_unsafe] = ACTIONS(432),
        [sym_comment] = ACTIONS(43),
    },
    [117] = {
        [ts_builtin_sym_end] = ACTIONS(435),
        [anon_sym_namespace] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_struct] = ACTIONS(435),
        [anon_sym_abstract] = ACTIONS(435),
        [anon_sym_sealed] = ACTIONS(435),
        [anon_sym_static] = ACTIONS(435),
        [anon_sym_new] = ACTIONS(435),
        [anon_sym_public] = ACTIONS(435),
        [anon_sym_protected] = ACTIONS(435),
        [anon_sym_internal] = ACTIONS(435),
        [anon_sym_private] = ACTIONS(435),
        [anon_sym_unsafe] = ACTIONS(435),
        [sym_comment] = ACTIONS(43),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(435),
        [anon_sym_namespace] = ACTIONS(438),
        [anon_sym_RBRACE] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(448),
        [anon_sym_struct] = ACTIONS(448),
        [anon_sym_abstract] = ACTIONS(448),
        [anon_sym_sealed] = ACTIONS(448),
        [anon_sym_static] = ACTIONS(448),
        [anon_sym_new] = ACTIONS(448),
        [anon_sym_public] = ACTIONS(448),
        [anon_sym_protected] = ACTIONS(448),
        [anon_sym_internal] = ACTIONS(448),
        [anon_sym_private] = ACTIONS(448),
        [anon_sym_unsafe] = ACTIONS(448),
        [anon_sym_readonly] = ACTIONS(455),
        [anon_sym_volatile] = ACTIONS(455),
        [anon_sym_bool] = ACTIONS(455),
        [anon_sym_byte] = ACTIONS(455),
        [anon_sym_char] = ACTIONS(455),
        [anon_sym_decimal] = ACTIONS(455),
        [anon_sym_double] = ACTIONS(455),
        [anon_sym_float] = ACTIONS(455),
        [anon_sym_int] = ACTIONS(455),
        [anon_sym_long] = ACTIONS(455),
        [anon_sym_object] = ACTIONS(455),
        [anon_sym_sbyte] = ACTIONS(455),
        [anon_sym_short] = ACTIONS(455),
        [anon_sym_string] = ACTIONS(455),
        [anon_sym_uint] = ACTIONS(455),
        [anon_sym_ulong] = ACTIONS(455),
        [anon_sym_ushort] = ACTIONS(455),
        [sym_identifier_name] = ACTIONS(458),
        [sym_comment] = ACTIONS(43),
    },
    [119] = {
        [anon_sym_RBRACE] = ACTIONS(461),
        [anon_sym_class] = ACTIONS(455),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_abstract] = ACTIONS(455),
        [anon_sym_sealed] = ACTIONS(455),
        [anon_sym_static] = ACTIONS(455),
        [anon_sym_new] = ACTIONS(455),
        [anon_sym_public] = ACTIONS(455),
        [anon_sym_protected] = ACTIONS(455),
        [anon_sym_internal] = ACTIONS(455),
        [anon_sym_private] = ACTIONS(455),
        [anon_sym_unsafe] = ACTIONS(455),
        [anon_sym_readonly] = ACTIONS(455),
        [anon_sym_volatile] = ACTIONS(455),
        [anon_sym_bool] = ACTIONS(455),
        [anon_sym_byte] = ACTIONS(455),
        [anon_sym_char] = ACTIONS(455),
        [anon_sym_decimal] = ACTIONS(455),
        [anon_sym_double] = ACTIONS(455),
        [anon_sym_float] = ACTIONS(455),
        [anon_sym_int] = ACTIONS(455),
        [anon_sym_long] = ACTIONS(455),
        [anon_sym_object] = ACTIONS(455),
        [anon_sym_sbyte] = ACTIONS(455),
        [anon_sym_short] = ACTIONS(455),
        [anon_sym_string] = ACTIONS(455),
        [anon_sym_uint] = ACTIONS(455),
        [anon_sym_ulong] = ACTIONS(455),
        [anon_sym_ushort] = ACTIONS(455),
        [sym_identifier_name] = ACTIONS(458),
        [sym_comment] = ACTIONS(43),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(464),
        [sym_comment] = ACTIONS(43),
    },
    [121] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_GT] = ACTIONS(247),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(43),
    },
    [122] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(466),
        [anon_sym_COMMA] = ACTIONS(470),
        [sym_comment] = ACTIONS(43),
    },
    [123] = {
        [anon_sym_class] = ACTIONS(474),
        [sym_comment] = ACTIONS(43),
    },
    [124] = {
        [anon_sym_struct] = ACTIONS(477),
        [sym_comment] = ACTIONS(43),
    },
    [125] = {
        [anon_sym_bool] = ACTIONS(480),
        [anon_sym_byte] = ACTIONS(480),
        [anon_sym_char] = ACTIONS(480),
        [anon_sym_decimal] = ACTIONS(480),
        [anon_sym_double] = ACTIONS(480),
        [anon_sym_float] = ACTIONS(480),
        [anon_sym_int] = ACTIONS(480),
        [anon_sym_long] = ACTIONS(480),
        [anon_sym_object] = ACTIONS(480),
        [anon_sym_sbyte] = ACTIONS(480),
        [anon_sym_short] = ACTIONS(480),
        [anon_sym_string] = ACTIONS(480),
        [anon_sym_uint] = ACTIONS(480),
        [anon_sym_ulong] = ACTIONS(480),
        [anon_sym_ushort] = ACTIONS(480),
        [sym_identifier_name] = ACTIONS(483),
        [sym_comment] = ACTIONS(43),
    },
    [126] = {
        [anon_sym_LBRACE] = ACTIONS(486),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_GT] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(245),
        [sym_comment] = ACTIONS(43),
    },
    [127] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(70),
        [anon_sym_COMMA] = ACTIONS(488),
        [anon_sym_GT] = ACTIONS(492),
        [sym_comment] = ACTIONS(43),
    },
    [128] = {
        [anon_sym_SEMI] = ACTIONS(496),
        [anon_sym_LBRACE] = ACTIONS(299),
        [anon_sym_DOT] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [129] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(498),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [130] = {
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
        [anon_sym_RBRACE] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [131] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(505),
        [anon_sym_namespace] = ACTIONS(509),
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(509),
        [anon_sym_struct] = ACTIONS(509),
        [anon_sym_abstract] = ACTIONS(509),
        [anon_sym_sealed] = ACTIONS(509),
        [anon_sym_static] = ACTIONS(509),
        [anon_sym_new] = ACTIONS(509),
        [anon_sym_public] = ACTIONS(509),
        [anon_sym_protected] = ACTIONS(509),
        [anon_sym_internal] = ACTIONS(509),
        [anon_sym_private] = ACTIONS(509),
        [anon_sym_unsafe] = ACTIONS(509),
        [anon_sym_readonly] = ACTIONS(509),
        [anon_sym_volatile] = ACTIONS(509),
        [anon_sym_bool] = ACTIONS(509),
        [anon_sym_byte] = ACTIONS(509),
        [anon_sym_char] = ACTIONS(509),
        [anon_sym_decimal] = ACTIONS(509),
        [anon_sym_double] = ACTIONS(509),
        [anon_sym_float] = ACTIONS(509),
        [anon_sym_int] = ACTIONS(509),
        [anon_sym_long] = ACTIONS(509),
        [anon_sym_object] = ACTIONS(509),
        [anon_sym_sbyte] = ACTIONS(509),
        [anon_sym_short] = ACTIONS(509),
        [anon_sym_string] = ACTIONS(509),
        [anon_sym_uint] = ACTIONS(509),
        [anon_sym_ulong] = ACTIONS(509),
        [anon_sym_ushort] = ACTIONS(509),
        [sym_identifier_name] = ACTIONS(513),
        [sym_comment] = ACTIONS(43),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(517),
        [anon_sym_namespace] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(521),
        [anon_sym_struct] = ACTIONS(521),
        [anon_sym_abstract] = ACTIONS(521),
        [anon_sym_sealed] = ACTIONS(521),
        [anon_sym_static] = ACTIONS(521),
        [anon_sym_new] = ACTIONS(521),
        [anon_sym_public] = ACTIONS(521),
        [anon_sym_protected] = ACTIONS(521),
        [anon_sym_internal] = ACTIONS(521),
        [anon_sym_private] = ACTIONS(521),
        [anon_sym_unsafe] = ACTIONS(521),
        [anon_sym_readonly] = ACTIONS(521),
        [anon_sym_volatile] = ACTIONS(521),
        [anon_sym_bool] = ACTIONS(521),
        [anon_sym_byte] = ACTIONS(521),
        [anon_sym_char] = ACTIONS(521),
        [anon_sym_decimal] = ACTIONS(521),
        [anon_sym_double] = ACTIONS(521),
        [anon_sym_float] = ACTIONS(521),
        [anon_sym_int] = ACTIONS(521),
        [anon_sym_long] = ACTIONS(521),
        [anon_sym_object] = ACTIONS(521),
        [anon_sym_sbyte] = ACTIONS(521),
        [anon_sym_short] = ACTIONS(521),
        [anon_sym_string] = ACTIONS(521),
        [anon_sym_uint] = ACTIONS(521),
        [anon_sym_ulong] = ACTIONS(521),
        [anon_sym_ushort] = ACTIONS(521),
        [sym_identifier_name] = ACTIONS(525),
        [sym_comment] = ACTIONS(43),
    },
    [134] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_using] = ACTIONS(339),
        [anon_sym_namespace] = ACTIONS(339),
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
        [sym_comment] = ACTIONS(43),
    },
    [135] = {
        [sym_class_declaration] = STATE(137),
        [sym_struct_declaration] = STATE(137),
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
        [aux_sym_class_declaration_repeat1] = STATE(138),
        [aux_sym_struct_declaration_repeat1] = STATE(139),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [136] = {
        [ts_builtin_sym_end] = ACTIONS(531),
        [anon_sym_namespace] = ACTIONS(536),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_class] = ACTIONS(536),
        [anon_sym_struct] = ACTIONS(536),
        [anon_sym_abstract] = ACTIONS(536),
        [anon_sym_sealed] = ACTIONS(536),
        [anon_sym_static] = ACTIONS(536),
        [anon_sym_new] = ACTIONS(536),
        [anon_sym_public] = ACTIONS(536),
        [anon_sym_protected] = ACTIONS(536),
        [anon_sym_internal] = ACTIONS(536),
        [anon_sym_private] = ACTIONS(536),
        [anon_sym_unsafe] = ACTIONS(536),
        [anon_sym_readonly] = ACTIONS(536),
        [anon_sym_volatile] = ACTIONS(536),
        [anon_sym_bool] = ACTIONS(536),
        [anon_sym_byte] = ACTIONS(536),
        [anon_sym_char] = ACTIONS(536),
        [anon_sym_decimal] = ACTIONS(536),
        [anon_sym_double] = ACTIONS(536),
        [anon_sym_float] = ACTIONS(536),
        [anon_sym_int] = ACTIONS(536),
        [anon_sym_long] = ACTIONS(536),
        [anon_sym_object] = ACTIONS(536),
        [anon_sym_sbyte] = ACTIONS(536),
        [anon_sym_short] = ACTIONS(536),
        [anon_sym_string] = ACTIONS(536),
        [anon_sym_uint] = ACTIONS(536),
        [anon_sym_ulong] = ACTIONS(536),
        [anon_sym_ushort] = ACTIONS(536),
        [sym_identifier_name] = ACTIONS(541),
        [sym_comment] = ACTIONS(43),
    },
    [137] = {
        [anon_sym_RBRACE] = ACTIONS(546),
        [anon_sym_class] = ACTIONS(549),
        [anon_sym_struct] = ACTIONS(549),
        [anon_sym_abstract] = ACTIONS(549),
        [anon_sym_sealed] = ACTIONS(549),
        [anon_sym_static] = ACTIONS(549),
        [anon_sym_new] = ACTIONS(549),
        [anon_sym_public] = ACTIONS(549),
        [anon_sym_protected] = ACTIONS(549),
        [anon_sym_internal] = ACTIONS(549),
        [anon_sym_private] = ACTIONS(549),
        [anon_sym_unsafe] = ACTIONS(549),
        [anon_sym_readonly] = ACTIONS(183),
        [anon_sym_volatile] = ACTIONS(183),
        [anon_sym_bool] = ACTIONS(183),
        [anon_sym_byte] = ACTIONS(183),
        [anon_sym_char] = ACTIONS(183),
        [anon_sym_decimal] = ACTIONS(183),
        [anon_sym_double] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(183),
        [anon_sym_int] = ACTIONS(183),
        [anon_sym_long] = ACTIONS(183),
        [anon_sym_object] = ACTIONS(183),
        [anon_sym_sbyte] = ACTIONS(183),
        [anon_sym_short] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(183),
        [anon_sym_uint] = ACTIONS(183),
        [anon_sym_ulong] = ACTIONS(183),
        [anon_sym_ushort] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(552),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [139] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(554),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(556),
        [anon_sym_namespace] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(556),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_struct] = ACTIONS(559),
        [anon_sym_abstract] = ACTIONS(559),
        [anon_sym_sealed] = ACTIONS(559),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(559),
        [anon_sym_public] = ACTIONS(559),
        [anon_sym_protected] = ACTIONS(559),
        [anon_sym_internal] = ACTIONS(559),
        [anon_sym_private] = ACTIONS(559),
        [anon_sym_unsafe] = ACTIONS(559),
        [anon_sym_readonly] = ACTIONS(559),
        [anon_sym_volatile] = ACTIONS(559),
        [anon_sym_bool] = ACTIONS(559),
        [anon_sym_byte] = ACTIONS(559),
        [anon_sym_char] = ACTIONS(559),
        [anon_sym_decimal] = ACTIONS(559),
        [anon_sym_double] = ACTIONS(559),
        [anon_sym_float] = ACTIONS(559),
        [anon_sym_int] = ACTIONS(559),
        [anon_sym_long] = ACTIONS(559),
        [anon_sym_object] = ACTIONS(559),
        [anon_sym_sbyte] = ACTIONS(559),
        [anon_sym_short] = ACTIONS(559),
        [anon_sym_string] = ACTIONS(559),
        [anon_sym_uint] = ACTIONS(559),
        [anon_sym_ulong] = ACTIONS(559),
        [anon_sym_ushort] = ACTIONS(559),
        [sym_identifier_name] = ACTIONS(562),
        [sym_comment] = ACTIONS(43),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_namespace] = ACTIONS(568),
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(568),
        [anon_sym_struct] = ACTIONS(568),
        [anon_sym_abstract] = ACTIONS(568),
        [anon_sym_sealed] = ACTIONS(568),
        [anon_sym_static] = ACTIONS(568),
        [anon_sym_new] = ACTIONS(568),
        [anon_sym_public] = ACTIONS(568),
        [anon_sym_protected] = ACTIONS(568),
        [anon_sym_internal] = ACTIONS(568),
        [anon_sym_private] = ACTIONS(568),
        [anon_sym_unsafe] = ACTIONS(568),
        [anon_sym_readonly] = ACTIONS(568),
        [anon_sym_volatile] = ACTIONS(568),
        [anon_sym_bool] = ACTIONS(568),
        [anon_sym_byte] = ACTIONS(568),
        [anon_sym_char] = ACTIONS(568),
        [anon_sym_decimal] = ACTIONS(568),
        [anon_sym_double] = ACTIONS(568),
        [anon_sym_float] = ACTIONS(568),
        [anon_sym_int] = ACTIONS(568),
        [anon_sym_long] = ACTIONS(568),
        [anon_sym_object] = ACTIONS(568),
        [anon_sym_sbyte] = ACTIONS(568),
        [anon_sym_short] = ACTIONS(568),
        [anon_sym_string] = ACTIONS(568),
        [anon_sym_uint] = ACTIONS(568),
        [anon_sym_ulong] = ACTIONS(568),
        [anon_sym_ushort] = ACTIONS(568),
        [sym_identifier_name] = ACTIONS(571),
        [sym_comment] = ACTIONS(43),
    },
    [142] = {
        [anon_sym_RBRACE] = ACTIONS(345),
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
        [anon_sym_readonly] = ACTIONS(353),
        [anon_sym_volatile] = ACTIONS(353),
        [anon_sym_bool] = ACTIONS(353),
        [anon_sym_byte] = ACTIONS(353),
        [anon_sym_char] = ACTIONS(353),
        [anon_sym_decimal] = ACTIONS(353),
        [anon_sym_double] = ACTIONS(353),
        [anon_sym_float] = ACTIONS(353),
        [anon_sym_int] = ACTIONS(353),
        [anon_sym_long] = ACTIONS(353),
        [anon_sym_object] = ACTIONS(353),
        [anon_sym_sbyte] = ACTIONS(353),
        [anon_sym_short] = ACTIONS(353),
        [anon_sym_string] = ACTIONS(353),
        [anon_sym_uint] = ACTIONS(353),
        [anon_sym_ulong] = ACTIONS(353),
        [anon_sym_ushort] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(356),
        [sym_comment] = ACTIONS(43),
    },
    [143] = {
        [sym_namespace_declaration] = STATE(10),
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
        [aux_sym_compilation_unit_repeat2] = STATE(95),
        [aux_sym_class_declaration_repeat1] = STATE(146),
        [aux_sym_struct_declaration_repeat1] = STATE(147),
        [anon_sym_namespace] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(574),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(576),
        [anon_sym_namespace] = ACTIONS(582),
        [anon_sym_RBRACE] = ACTIONS(576),
        [anon_sym_class] = ACTIONS(582),
        [anon_sym_struct] = ACTIONS(582),
        [anon_sym_abstract] = ACTIONS(582),
        [anon_sym_sealed] = ACTIONS(582),
        [anon_sym_static] = ACTIONS(582),
        [anon_sym_new] = ACTIONS(582),
        [anon_sym_public] = ACTIONS(582),
        [anon_sym_protected] = ACTIONS(582),
        [anon_sym_internal] = ACTIONS(582),
        [anon_sym_private] = ACTIONS(582),
        [anon_sym_unsafe] = ACTIONS(582),
        [anon_sym_readonly] = ACTIONS(588),
        [anon_sym_volatile] = ACTIONS(588),
        [anon_sym_bool] = ACTIONS(588),
        [anon_sym_byte] = ACTIONS(588),
        [anon_sym_char] = ACTIONS(588),
        [anon_sym_decimal] = ACTIONS(588),
        [anon_sym_double] = ACTIONS(588),
        [anon_sym_float] = ACTIONS(588),
        [anon_sym_int] = ACTIONS(588),
        [anon_sym_long] = ACTIONS(588),
        [anon_sym_object] = ACTIONS(588),
        [anon_sym_sbyte] = ACTIONS(588),
        [anon_sym_short] = ACTIONS(588),
        [anon_sym_string] = ACTIONS(588),
        [anon_sym_uint] = ACTIONS(588),
        [anon_sym_ulong] = ACTIONS(588),
        [anon_sym_ushort] = ACTIONS(588),
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(43),
    },
    [145] = {
        [anon_sym_namespace] = ACTIONS(598),
        [anon_sym_RBRACE] = ACTIONS(600),
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
        [anon_sym_readonly] = ACTIONS(183),
        [anon_sym_volatile] = ACTIONS(183),
        [anon_sym_bool] = ACTIONS(183),
        [anon_sym_byte] = ACTIONS(183),
        [anon_sym_char] = ACTIONS(183),
        [anon_sym_decimal] = ACTIONS(183),
        [anon_sym_double] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(183),
        [anon_sym_int] = ACTIONS(183),
        [anon_sym_long] = ACTIONS(183),
        [anon_sym_object] = ACTIONS(183),
        [anon_sym_sbyte] = ACTIONS(183),
        [anon_sym_short] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(183),
        [anon_sym_uint] = ACTIONS(183),
        [anon_sym_ulong] = ACTIONS(183),
        [anon_sym_ushort] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(43),
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
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [147] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(610),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(612),
        [anon_sym_namespace] = ACTIONS(615),
        [anon_sym_RBRACE] = ACTIONS(612),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_struct] = ACTIONS(615),
        [anon_sym_abstract] = ACTIONS(615),
        [anon_sym_sealed] = ACTIONS(615),
        [anon_sym_static] = ACTIONS(615),
        [anon_sym_new] = ACTIONS(615),
        [anon_sym_public] = ACTIONS(615),
        [anon_sym_protected] = ACTIONS(615),
        [anon_sym_internal] = ACTIONS(615),
        [anon_sym_private] = ACTIONS(615),
        [anon_sym_unsafe] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(615),
        [anon_sym_byte] = ACTIONS(615),
        [anon_sym_char] = ACTIONS(615),
        [anon_sym_decimal] = ACTIONS(615),
        [anon_sym_double] = ACTIONS(615),
        [anon_sym_float] = ACTIONS(615),
        [anon_sym_int] = ACTIONS(615),
        [anon_sym_long] = ACTIONS(615),
        [anon_sym_object] = ACTIONS(615),
        [anon_sym_sbyte] = ACTIONS(615),
        [anon_sym_short] = ACTIONS(615),
        [anon_sym_string] = ACTIONS(615),
        [anon_sym_uint] = ACTIONS(615),
        [anon_sym_ulong] = ACTIONS(615),
        [anon_sym_ushort] = ACTIONS(615),
        [sym_identifier_name] = ACTIONS(618),
        [sym_comment] = ACTIONS(43),
    },
    [149] = {
        [ts_builtin_sym_end] = ACTIONS(621),
        [anon_sym_namespace] = ACTIONS(624),
        [anon_sym_RBRACE] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(624),
        [anon_sym_struct] = ACTIONS(624),
        [anon_sym_abstract] = ACTIONS(624),
        [anon_sym_sealed] = ACTIONS(624),
        [anon_sym_static] = ACTIONS(624),
        [anon_sym_new] = ACTIONS(624),
        [anon_sym_public] = ACTIONS(624),
        [anon_sym_protected] = ACTIONS(624),
        [anon_sym_internal] = ACTIONS(624),
        [anon_sym_private] = ACTIONS(624),
        [anon_sym_unsafe] = ACTIONS(624),
        [anon_sym_readonly] = ACTIONS(624),
        [anon_sym_volatile] = ACTIONS(624),
        [anon_sym_bool] = ACTIONS(624),
        [anon_sym_byte] = ACTIONS(624),
        [anon_sym_char] = ACTIONS(624),
        [anon_sym_decimal] = ACTIONS(624),
        [anon_sym_double] = ACTIONS(624),
        [anon_sym_float] = ACTIONS(624),
        [anon_sym_int] = ACTIONS(624),
        [anon_sym_long] = ACTIONS(624),
        [anon_sym_object] = ACTIONS(624),
        [anon_sym_sbyte] = ACTIONS(624),
        [anon_sym_short] = ACTIONS(624),
        [anon_sym_string] = ACTIONS(624),
        [anon_sym_uint] = ACTIONS(624),
        [anon_sym_ulong] = ACTIONS(624),
        [anon_sym_ushort] = ACTIONS(624),
        [sym_identifier_name] = ACTIONS(627),
        [sym_comment] = ACTIONS(43),
    },
    [150] = {
        [sym_type_parameter_list] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(177),
        [sym_comment] = ACTIONS(43),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(630),
        [anon_sym_COMMA] = ACTIONS(630),
        [sym_comment] = ACTIONS(43),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(633),
        [anon_sym_GT] = ACTIONS(633),
        [sym_comment] = ACTIONS(43),
    },
    [153] = {
        [sym_type_parameter_list] = STATE(155),
        [anon_sym_LBRACE] = ACTIONS(636),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [154] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(147),
        [anon_sym_RBRACE] = ACTIONS(638),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [155] = {
        [anon_sym_LBRACE] = ACTIONS(640),
        [sym_comment] = ACTIONS(43),
    },
    [156] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(139),
        [anon_sym_RBRACE] = ACTIONS(610),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [157] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [158] = {
        [sym_type_parameter_list] = STATE(160),
        [anon_sym_LBRACE] = ACTIONS(651),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [159] = {
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
        [anon_sym_RBRACE] = ACTIONS(653),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [160] = {
        [anon_sym_LBRACE] = ACTIONS(655),
        [sym_comment] = ACTIONS(43),
    },
    [161] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(138),
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(105),
        [anon_sym_byte] = ACTIONS(105),
        [anon_sym_char] = ACTIONS(105),
        [anon_sym_decimal] = ACTIONS(105),
        [anon_sym_double] = ACTIONS(105),
        [anon_sym_float] = ACTIONS(105),
        [anon_sym_int] = ACTIONS(105),
        [anon_sym_long] = ACTIONS(105),
        [anon_sym_object] = ACTIONS(105),
        [anon_sym_sbyte] = ACTIONS(105),
        [anon_sym_short] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(105),
        [anon_sym_uint] = ACTIONS(105),
        [anon_sym_ulong] = ACTIONS(105),
        [anon_sym_ushort] = ACTIONS(105),
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_namespace] = ACTIONS(660),
        [anon_sym_RBRACE] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(660),
        [anon_sym_struct] = ACTIONS(660),
        [anon_sym_abstract] = ACTIONS(660),
        [anon_sym_sealed] = ACTIONS(660),
        [anon_sym_static] = ACTIONS(660),
        [anon_sym_new] = ACTIONS(660),
        [anon_sym_public] = ACTIONS(660),
        [anon_sym_protected] = ACTIONS(660),
        [anon_sym_internal] = ACTIONS(660),
        [anon_sym_private] = ACTIONS(660),
        [anon_sym_unsafe] = ACTIONS(660),
        [anon_sym_readonly] = ACTIONS(660),
        [anon_sym_volatile] = ACTIONS(660),
        [anon_sym_bool] = ACTIONS(660),
        [anon_sym_byte] = ACTIONS(660),
        [anon_sym_char] = ACTIONS(660),
        [anon_sym_decimal] = ACTIONS(660),
        [anon_sym_double] = ACTIONS(660),
        [anon_sym_float] = ACTIONS(660),
        [anon_sym_int] = ACTIONS(660),
        [anon_sym_long] = ACTIONS(660),
        [anon_sym_object] = ACTIONS(660),
        [anon_sym_sbyte] = ACTIONS(660),
        [anon_sym_short] = ACTIONS(660),
        [anon_sym_string] = ACTIONS(660),
        [anon_sym_uint] = ACTIONS(660),
        [anon_sym_ulong] = ACTIONS(660),
        [anon_sym_ushort] = ACTIONS(660),
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(43),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(666),
        [anon_sym_namespace] = ACTIONS(674),
        [anon_sym_RBRACE] = ACTIONS(666),
        [anon_sym_class] = ACTIONS(674),
        [anon_sym_struct] = ACTIONS(674),
        [anon_sym_abstract] = ACTIONS(674),
        [anon_sym_sealed] = ACTIONS(674),
        [anon_sym_static] = ACTIONS(674),
        [anon_sym_new] = ACTIONS(674),
        [anon_sym_public] = ACTIONS(674),
        [anon_sym_protected] = ACTIONS(674),
        [anon_sym_internal] = ACTIONS(674),
        [anon_sym_private] = ACTIONS(674),
        [anon_sym_unsafe] = ACTIONS(674),
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
        [sym_identifier_name] = ACTIONS(689),
        [sym_comment] = ACTIONS(43),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(108),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(109),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(110),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(111),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(112),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(113),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(114),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(91),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(97),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(88),
    [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(115),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [339] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [342] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [345] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [348] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [353] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [356] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [363] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [374] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [385] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [394] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
    [409] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [415] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [418] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(134),
    [422] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(143),
    [425] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [428] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(91),
    [432] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [435] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [438] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [441] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [448] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [455] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [458] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [461] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [466] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [470] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [474] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [477] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [480] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [483] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [488] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(68),
    [492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(69),
    [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [498] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [505] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [509] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [513] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [517] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [521] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [525] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [531] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [536] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [541] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [546] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [549] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [556] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [559] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [562] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [565] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [568] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [571] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [576] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [582] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [588] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [593] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [600] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [604] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [612] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [615] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [618] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [621] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [624] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [627] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [630] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [633] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [642] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [645] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [648] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [657] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [660] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [663] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [666] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [674] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [682] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [689] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
