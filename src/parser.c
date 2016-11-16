#include "tree_sitter/parser.h"

#define STATE_COUNT 161
#define SYMBOL_COUNT 71
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
    sym_variable_declarator = 51,
    sym_class_modifiers = 52,
    sym__class_modifiers = 53,
    sym_struct_modifiers = 54,
    sym__struct_modifiers = 55,
    sym_field_modifiers = 56,
    sym__field_modifiers = 57,
    sym_predefined_type = 58,
    sym_type_parameter_list = 59,
    sym_type_parameter = 60,
    sym_qualified_name = 61,
    sym_alias_qualified_name = 62,
    sym_name_equals = 63,
    sym_static = 64,
    aux_sym_compilation_unit_repeat1 = 65,
    aux_sym_compilation_unit_repeat2 = 66,
    aux_sym_class_declaration_repeat1 = 67,
    aux_sym_struct_declaration_repeat1 = 68,
    aux_sym_variable_declaration_repeat1 = 69,
    aux_sym_type_parameter_list_repeat1 = 70,
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
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 273:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(273);
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
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 274:
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
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 276:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(276);
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
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 278:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(278);
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
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(279);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 279:
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
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'r')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 282:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(282);
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
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 283:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(283);
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
                ADVANCE(284);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(285);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 284:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 285:
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
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 286:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(286);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
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
                ADVANCE(284);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(288);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 's')
                ADVANCE(291);
            if (lookahead == 'u')
                ADVANCE(293);
            LEX_ERROR();
        case 288:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier_name);
        case 289:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier_name);
        case 290:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_int);
        case 291:
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
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier_name);
        case 292:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 293:
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
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
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
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 295:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(295);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        case 296:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(296);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 297:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(297);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 298:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(298);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 299:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(299);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 300:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(300);
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
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
                ADVANCE(13);
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
            LEX_ERROR();
        case 303:
            if (lookahead == 0)
                ADVANCE(1);
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
        case 304:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(304);
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
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 305:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(305);
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
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(279);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 306:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(306);
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
        case 307:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(307);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
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
    [23] = 256,
    [24] = 272,
    [25] = 271,
    [26] = 273,
    [27] = 271,
    [28] = 271,
    [29] = 273,
    [30] = 271,
    [31] = 273,
    [32] = 271,
    [33] = 256,
    [34] = 270,
    [35] = 276,
    [36] = 272,
    [37] = 276,
    [38] = 273,
    [39] = 278,
    [40] = 282,
    [41] = 283,
    [42] = 256,
    [43] = 256,
    [44] = 276,
    [45] = 286,
    [46] = 256,
    [47] = 287,
    [48] = 287,
    [49] = 276,
    [50] = 273,
    [51] = 276,
    [52] = 286,
    [53] = 276,
    [54] = 273,
    [55] = 276,
    [56] = 294,
    [57] = 294,
    [58] = 256,
    [59] = 294,
    [60] = 256,
    [61] = 294,
    [62] = 294,
    [63] = 276,
    [64] = 287,
    [65] = 265,
    [66] = 266,
    [67] = 270,
    [68] = 271,
    [69] = 272,
    [70] = 273,
    [71] = 271,
    [72] = 270,
    [73] = 276,
    [74] = 272,
    [75] = 273,
    [76] = 276,
    [77] = 295,
    [78] = 295,
    [79] = 256,
    [80] = 272,
    [81] = 295,
    [82] = 256,
    [83] = 272,
    [84] = 295,
    [85] = 295,
    [86] = 296,
    [87] = 297,
    [88] = 298,
    [89] = 256,
    [90] = 299,
    [91] = 300,
    [92] = 264,
    [93] = 300,
    [94] = 264,
    [95] = 256,
    [96] = 298,
    [97] = 255,
    [98] = 301,
    [99] = 302,
    [100] = 255,
    [101] = 302,
    [102] = 175,
    [103] = 175,
    [104] = 255,
    [105] = 303,
    [106] = 304,
    [107] = 273,
    [108] = 256,
    [109] = 256,
    [110] = 256,
    [111] = 305,
    [112] = 272,
    [113] = 306,
    [114] = 175,
    [115] = 264,
    [116] = 273,
    [117] = 276,
    [118] = 286,
    [119] = 294,
    [120] = 265,
    [121] = 266,
    [122] = 287,
    [123] = 272,
    [124] = 295,
    [125] = 299,
    [126] = 264,
    [127] = 276,
    [128] = 271,
    [129] = 273,
    [130] = 273,
    [131] = 175,
    [132] = 276,
    [133] = 273,
    [134] = 276,
    [135] = 276,
    [136] = 271,
    [137] = 273,
    [138] = 273,
    [139] = 276,
    [140] = 304,
    [141] = 273,
    [142] = 304,
    [143] = 276,
    [144] = 271,
    [145] = 273,
    [146] = 273,
    [147] = 307,
    [148] = 294,
    [149] = 295,
    [150] = 270,
    [151] = 271,
    [152] = 272,
    [153] = 271,
    [154] = 273,
    [155] = 270,
    [156] = 276,
    [157] = 272,
    [158] = 276,
    [159] = 273,
    [160] = 273,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(114),
        [sym_namespace_declaration] = STATE(115),
        [sym_class_declaration] = STATE(116),
        [sym_struct_declaration] = STATE(116),
        [sym_field_declaration] = STATE(117),
        [sym_variable_declaration] = STATE(118),
        [sym__type] = STATE(46),
        [sym_variable_declarator] = STATE(119),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(120),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(121),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(122),
        [sym_predefined_type] = STATE(43),
        [sym_type_parameter_list] = STATE(123),
        [sym_type_parameter] = STATE(124),
        [sym_qualified_name] = STATE(125),
        [sym_alias_qualified_name] = STATE(88),
        [sym_name_equals] = STATE(100),
        [sym_static] = STATE(100),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(126),
        [aux_sym_class_declaration_repeat1] = STATE(127),
        [aux_sym_struct_declaration_repeat1] = STATE(128),
        [aux_sym_variable_declaration_repeat1] = STATE(59),
        [aux_sym_type_parameter_list_repeat1] = STATE(81),
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
        [sym_qualified_name] = STATE(99),
        [sym_alias_qualified_name] = STATE(88),
        [sym_name_equals] = STATE(100),
        [sym_static] = STATE(100),
        [anon_sym_static] = ACTIONS(59),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(63),
        [sym_comment] = ACTIONS(43),
    },
    [3] = {
        [sym_qualified_name] = STATE(87),
        [sym_alias_qualified_name] = STATE(88),
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
        [sym__class_modifiers] = STATE(65),
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
        [sym__class_modifiers] = STATE(65),
        [sym__struct_modifiers] = STATE(66),
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
        [sym_type_parameter] = STATE(78),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(107),
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
        [anon_sym_RBRACE] = ACTIONS(109),
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
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_namespace] = ACTIONS(113),
        [anon_sym_RBRACE] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(113),
        [anon_sym_volatile] = ACTIONS(113),
        [anon_sym_bool] = ACTIONS(113),
        [anon_sym_byte] = ACTIONS(113),
        [anon_sym_char] = ACTIONS(113),
        [anon_sym_decimal] = ACTIONS(113),
        [anon_sym_double] = ACTIONS(113),
        [anon_sym_float] = ACTIONS(113),
        [anon_sym_int] = ACTIONS(113),
        [anon_sym_long] = ACTIONS(113),
        [anon_sym_object] = ACTIONS(113),
        [anon_sym_sbyte] = ACTIONS(113),
        [anon_sym_short] = ACTIONS(113),
        [anon_sym_string] = ACTIONS(113),
        [anon_sym_uint] = ACTIONS(113),
        [anon_sym_ulong] = ACTIONS(113),
        [anon_sym_ushort] = ACTIONS(113),
        [sym_identifier_name] = ACTIONS(115),
        [sym_comment] = ACTIONS(43),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_abstract] = ACTIONS(117),
        [anon_sym_sealed] = ACTIONS(117),
        [anon_sym_static] = ACTIONS(117),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_unsafe] = ACTIONS(117),
        [sym_comment] = ACTIONS(43),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(119),
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
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_namespace] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(121),
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
        [anon_sym_readonly] = ACTIONS(123),
        [anon_sym_volatile] = ACTIONS(123),
        [anon_sym_bool] = ACTIONS(123),
        [anon_sym_byte] = ACTIONS(123),
        [anon_sym_char] = ACTIONS(123),
        [anon_sym_decimal] = ACTIONS(123),
        [anon_sym_double] = ACTIONS(123),
        [anon_sym_float] = ACTIONS(123),
        [anon_sym_int] = ACTIONS(123),
        [anon_sym_long] = ACTIONS(123),
        [anon_sym_object] = ACTIONS(123),
        [anon_sym_sbyte] = ACTIONS(123),
        [anon_sym_short] = ACTIONS(123),
        [anon_sym_string] = ACTIONS(123),
        [anon_sym_uint] = ACTIONS(123),
        [anon_sym_ulong] = ACTIONS(123),
        [anon_sym_ushort] = ACTIONS(123),
        [sym_identifier_name] = ACTIONS(125),
        [sym_comment] = ACTIONS(43),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_abstract] = ACTIONS(127),
        [anon_sym_sealed] = ACTIONS(127),
        [anon_sym_static] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(127),
        [anon_sym_public] = ACTIONS(127),
        [anon_sym_protected] = ACTIONS(127),
        [anon_sym_internal] = ACTIONS(127),
        [anon_sym_private] = ACTIONS(127),
        [anon_sym_unsafe] = ACTIONS(127),
        [sym_comment] = ACTIONS(43),
    },
    [31] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(109),
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
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(43),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(137),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [35] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(55),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_comment] = ACTIONS(43),
    },
    [37] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(49),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_namespace] = ACTIONS(163),
        [anon_sym_RBRACE] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_struct] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_readonly] = ACTIONS(163),
        [anon_sym_volatile] = ACTIONS(163),
        [anon_sym_bool] = ACTIONS(163),
        [anon_sym_byte] = ACTIONS(163),
        [anon_sym_char] = ACTIONS(163),
        [anon_sym_decimal] = ACTIONS(163),
        [anon_sym_double] = ACTIONS(163),
        [anon_sym_float] = ACTIONS(163),
        [anon_sym_int] = ACTIONS(163),
        [anon_sym_long] = ACTIONS(163),
        [anon_sym_object] = ACTIONS(163),
        [anon_sym_sbyte] = ACTIONS(163),
        [anon_sym_short] = ACTIONS(163),
        [anon_sym_string] = ACTIONS(163),
        [anon_sym_uint] = ACTIONS(163),
        [anon_sym_ulong] = ACTIONS(163),
        [anon_sym_ushort] = ACTIONS(163),
        [sym_identifier_name] = ACTIONS(165),
        [sym_comment] = ACTIONS(43),
    },
    [39] = {
        [sym__class_modifiers] = STATE(65),
        [sym__field_modifiers] = STATE(64),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [40] = {
        [sym__class_modifiers] = STATE(65),
        [sym__struct_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(64),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_struct] = ACTIONS(173),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [41] = {
        [sym__field_modifiers] = STATE(64),
        [anon_sym_static] = ACTIONS(151),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [42] = {
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(43),
    },
    [43] = {
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(43),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_struct] = ACTIONS(181),
        [anon_sym_abstract] = ACTIONS(181),
        [anon_sym_sealed] = ACTIONS(181),
        [anon_sym_static] = ACTIONS(181),
        [anon_sym_new] = ACTIONS(181),
        [anon_sym_public] = ACTIONS(181),
        [anon_sym_protected] = ACTIONS(181),
        [anon_sym_internal] = ACTIONS(181),
        [anon_sym_private] = ACTIONS(181),
        [anon_sym_unsafe] = ACTIONS(181),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(185),
        [sym_comment] = ACTIONS(43),
    },
    [46] = {
        [sym_variable_declarator] = STATE(57),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(43),
    },
    [47] = {
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(46),
        [sym_predefined_type] = STATE(43),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [48] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [49] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_namespace] = ACTIONS(197),
        [anon_sym_RBRACE] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(197),
        [anon_sym_sealed] = ACTIONS(197),
        [anon_sym_static] = ACTIONS(197),
        [anon_sym_new] = ACTIONS(197),
        [anon_sym_public] = ACTIONS(197),
        [anon_sym_protected] = ACTIONS(197),
        [anon_sym_internal] = ACTIONS(197),
        [anon_sym_private] = ACTIONS(197),
        [anon_sym_unsafe] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(197),
        [anon_sym_volatile] = ACTIONS(197),
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
        [sym_comment] = ACTIONS(43),
    },
    [51] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [52] = {
        [anon_sym_SEMI] = ACTIONS(207),
        [sym_comment] = ACTIONS(43),
    },
    [53] = {
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
        [sym_comment] = ACTIONS(43),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_namespace] = ACTIONS(217),
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
        [sym_comment] = ACTIONS(43),
    },
    [55] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [56] = {
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(221),
        [sym_comment] = ACTIONS(43),
    },
    [57] = {
        [aux_sym_variable_declaration_repeat1] = STATE(59),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(225),
        [sym_comment] = ACTIONS(43),
    },
    [58] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(43),
    },
    [59] = {
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_COMMA] = ACTIONS(229),
        [sym_comment] = ACTIONS(43),
    },
    [60] = {
        [sym_variable_declarator] = STATE(61),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(43),
    },
    [61] = {
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_COMMA] = ACTIONS(231),
        [sym_comment] = ACTIONS(43),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(233),
        [sym_comment] = ACTIONS(43),
    },
    [63] = {
        [anon_sym_RBRACE] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(237),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_sealed] = ACTIONS(237),
        [anon_sym_static] = ACTIONS(237),
        [anon_sym_new] = ACTIONS(237),
        [anon_sym_public] = ACTIONS(237),
        [anon_sym_protected] = ACTIONS(237),
        [anon_sym_internal] = ACTIONS(237),
        [anon_sym_private] = ACTIONS(237),
        [anon_sym_unsafe] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(237),
        [anon_sym_byte] = ACTIONS(237),
        [anon_sym_char] = ACTIONS(237),
        [anon_sym_decimal] = ACTIONS(237),
        [anon_sym_double] = ACTIONS(237),
        [anon_sym_float] = ACTIONS(237),
        [anon_sym_int] = ACTIONS(237),
        [anon_sym_long] = ACTIONS(237),
        [anon_sym_object] = ACTIONS(237),
        [anon_sym_sbyte] = ACTIONS(237),
        [anon_sym_short] = ACTIONS(237),
        [anon_sym_string] = ACTIONS(237),
        [anon_sym_uint] = ACTIONS(237),
        [anon_sym_ulong] = ACTIONS(237),
        [anon_sym_ushort] = ACTIONS(237),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(43),
    },
    [64] = {
        [anon_sym_bool] = ACTIONS(241),
        [anon_sym_byte] = ACTIONS(241),
        [anon_sym_char] = ACTIONS(241),
        [anon_sym_decimal] = ACTIONS(241),
        [anon_sym_double] = ACTIONS(241),
        [anon_sym_float] = ACTIONS(241),
        [anon_sym_int] = ACTIONS(241),
        [anon_sym_long] = ACTIONS(241),
        [anon_sym_object] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(241),
        [anon_sym_short] = ACTIONS(241),
        [anon_sym_string] = ACTIONS(241),
        [anon_sym_uint] = ACTIONS(241),
        [anon_sym_ulong] = ACTIONS(241),
        [anon_sym_ushort] = ACTIONS(241),
        [sym_identifier_name] = ACTIONS(243),
        [sym_comment] = ACTIONS(43),
    },
    [65] = {
        [anon_sym_class] = ACTIONS(245),
        [sym_comment] = ACTIONS(43),
    },
    [66] = {
        [anon_sym_struct] = ACTIONS(247),
        [sym_comment] = ACTIONS(43),
    },
    [67] = {
        [sym_type_parameter_list] = STATE(69),
        [anon_sym_LBRACE] = ACTIONS(249),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [68] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(71),
        [anon_sym_RBRACE] = ACTIONS(251),
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
    [69] = {
        [anon_sym_LBRACE] = ACTIONS(99),
        [sym_comment] = ACTIONS(43),
    },
    [70] = {
        [ts_builtin_sym_end] = ACTIONS(253),
        [anon_sym_namespace] = ACTIONS(255),
        [anon_sym_RBRACE] = ACTIONS(253),
        [anon_sym_class] = ACTIONS(255),
        [anon_sym_struct] = ACTIONS(255),
        [anon_sym_abstract] = ACTIONS(255),
        [anon_sym_sealed] = ACTIONS(255),
        [anon_sym_static] = ACTIONS(255),
        [anon_sym_new] = ACTIONS(255),
        [anon_sym_public] = ACTIONS(255),
        [anon_sym_protected] = ACTIONS(255),
        [anon_sym_internal] = ACTIONS(255),
        [anon_sym_private] = ACTIONS(255),
        [anon_sym_unsafe] = ACTIONS(255),
        [anon_sym_readonly] = ACTIONS(255),
        [anon_sym_volatile] = ACTIONS(255),
        [anon_sym_bool] = ACTIONS(255),
        [anon_sym_byte] = ACTIONS(255),
        [anon_sym_char] = ACTIONS(255),
        [anon_sym_decimal] = ACTIONS(255),
        [anon_sym_double] = ACTIONS(255),
        [anon_sym_float] = ACTIONS(255),
        [anon_sym_int] = ACTIONS(255),
        [anon_sym_long] = ACTIONS(255),
        [anon_sym_object] = ACTIONS(255),
        [anon_sym_sbyte] = ACTIONS(255),
        [anon_sym_short] = ACTIONS(255),
        [anon_sym_string] = ACTIONS(255),
        [anon_sym_uint] = ACTIONS(255),
        [anon_sym_ulong] = ACTIONS(255),
        [anon_sym_ushort] = ACTIONS(255),
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(43),
    },
    [71] = {
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
    [72] = {
        [sym_type_parameter_list] = STATE(74),
        [anon_sym_LBRACE] = ACTIONS(259),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [73] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(76),
        [anon_sym_RBRACE] = ACTIONS(261),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [74] = {
        [anon_sym_LBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(43),
    },
    [75] = {
        [ts_builtin_sym_end] = ACTIONS(263),
        [anon_sym_namespace] = ACTIONS(265),
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
        [sym_comment] = ACTIONS(43),
    },
    [76] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(269),
        [sym_comment] = ACTIONS(43),
    },
    [78] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(81),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(273),
        [sym_comment] = ACTIONS(43),
    },
    [79] = {
        [sym_type_parameter] = STATE(85),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [80] = {
        [anon_sym_LBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(43),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(279),
        [sym_comment] = ACTIONS(43),
    },
    [82] = {
        [sym_type_parameter] = STATE(84),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [83] = {
        [anon_sym_LBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_GT] = ACTIONS(283),
        [sym_comment] = ACTIONS(43),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_GT] = ACTIONS(285),
        [sym_comment] = ACTIONS(43),
    },
    [86] = {
        [anon_sym_COLON_COLON] = ACTIONS(287),
        [sym_comment] = ACTIONS(43),
    },
    [87] = {
        [anon_sym_LBRACE] = ACTIONS(289),
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(43),
    },
    [88] = {
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(43),
    },
    [89] = {
        [sym_identifier_name] = ACTIONS(293),
        [sym_comment] = ACTIONS(43),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_LBRACE] = ACTIONS(295),
        [anon_sym_DOT] = ACTIONS(295),
        [sym_comment] = ACTIONS(43),
    },
    [91] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(93),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(297),
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
    [92] = {
        [ts_builtin_sym_end] = ACTIONS(299),
        [anon_sym_namespace] = ACTIONS(299),
        [anon_sym_RBRACE] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_struct] = ACTIONS(299),
        [anon_sym_abstract] = ACTIONS(299),
        [anon_sym_sealed] = ACTIONS(299),
        [anon_sym_static] = ACTIONS(299),
        [anon_sym_new] = ACTIONS(299),
        [anon_sym_public] = ACTIONS(299),
        [anon_sym_protected] = ACTIONS(299),
        [anon_sym_internal] = ACTIONS(299),
        [anon_sym_private] = ACTIONS(299),
        [anon_sym_unsafe] = ACTIONS(299),
        [sym_comment] = ACTIONS(43),
    },
    [93] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(301),
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
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_namespace] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
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
        [sym_comment] = ACTIONS(43),
    },
    [95] = {
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(43),
    },
    [96] = {
        [anon_sym_DOT] = ACTIONS(307),
        [sym_comment] = ACTIONS(43),
    },
    [97] = {
        [sym_global] = ACTIONS(309),
        [sym_identifier_name] = ACTIONS(311),
        [sym_comment] = ACTIONS(43),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(313),
        [anon_sym_DOT] = ACTIONS(291),
        [anon_sym_EQ] = ACTIONS(315),
        [sym_comment] = ACTIONS(43),
    },
    [99] = {
        [anon_sym_SEMI] = ACTIONS(313),
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(43),
    },
    [100] = {
        [sym_qualified_name] = STATE(101),
        [sym_alias_qualified_name] = STATE(88),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(43),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(43),
    },
    [102] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_using] = ACTIONS(321),
        [anon_sym_namespace] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_struct] = ACTIONS(321),
        [anon_sym_abstract] = ACTIONS(321),
        [anon_sym_sealed] = ACTIONS(321),
        [anon_sym_static] = ACTIONS(321),
        [anon_sym_new] = ACTIONS(321),
        [anon_sym_public] = ACTIONS(321),
        [anon_sym_protected] = ACTIONS(321),
        [anon_sym_internal] = ACTIONS(321),
        [anon_sym_private] = ACTIONS(321),
        [anon_sym_unsafe] = ACTIONS(321),
        [sym_comment] = ACTIONS(43),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_using] = ACTIONS(323),
        [anon_sym_namespace] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_struct] = ACTIONS(323),
        [anon_sym_abstract] = ACTIONS(323),
        [anon_sym_sealed] = ACTIONS(323),
        [anon_sym_static] = ACTIONS(323),
        [anon_sym_new] = ACTIONS(323),
        [anon_sym_public] = ACTIONS(323),
        [anon_sym_protected] = ACTIONS(323),
        [anon_sym_internal] = ACTIONS(323),
        [anon_sym_private] = ACTIONS(323),
        [anon_sym_unsafe] = ACTIONS(323),
        [sym_comment] = ACTIONS(43),
    },
    [104] = {
        [sym_global] = ACTIONS(325),
        [sym_identifier_name] = ACTIONS(327),
        [sym_comment] = ACTIONS(43),
    },
    [105] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_using] = ACTIONS(332),
        [anon_sym_namespace] = ACTIONS(332),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(338),
        [anon_sym_struct] = ACTIONS(338),
        [anon_sym_abstract] = ACTIONS(338),
        [anon_sym_sealed] = ACTIONS(338),
        [anon_sym_static] = ACTIONS(338),
        [anon_sym_new] = ACTIONS(338),
        [anon_sym_public] = ACTIONS(338),
        [anon_sym_protected] = ACTIONS(338),
        [anon_sym_internal] = ACTIONS(338),
        [anon_sym_private] = ACTIONS(338),
        [anon_sym_unsafe] = ACTIONS(338),
        [anon_sym_readonly] = ACTIONS(343),
        [anon_sym_volatile] = ACTIONS(343),
        [anon_sym_bool] = ACTIONS(343),
        [anon_sym_byte] = ACTIONS(343),
        [anon_sym_char] = ACTIONS(343),
        [anon_sym_decimal] = ACTIONS(343),
        [anon_sym_double] = ACTIONS(343),
        [anon_sym_float] = ACTIONS(343),
        [anon_sym_int] = ACTIONS(343),
        [anon_sym_long] = ACTIONS(343),
        [anon_sym_object] = ACTIONS(343),
        [anon_sym_sbyte] = ACTIONS(343),
        [anon_sym_short] = ACTIONS(343),
        [anon_sym_string] = ACTIONS(343),
        [anon_sym_uint] = ACTIONS(343),
        [anon_sym_ulong] = ACTIONS(343),
        [anon_sym_ushort] = ACTIONS(343),
        [sym_identifier_name] = ACTIONS(346),
        [sym_comment] = ACTIONS(43),
    },
    [106] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(142),
        [sym_struct_declaration] = STATE(142),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_compilation_unit_repeat2] = STATE(93),
        [aux_sym_class_declaration_repeat1] = STATE(127),
        [aux_sym_struct_declaration_repeat1] = STATE(128),
        [anon_sym_namespace] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [107] = {
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_namespace] = ACTIONS(364),
        [anon_sym_RBRACE] = ACTIONS(353),
        [anon_sym_class] = ACTIONS(364),
        [anon_sym_struct] = ACTIONS(364),
        [anon_sym_abstract] = ACTIONS(364),
        [anon_sym_sealed] = ACTIONS(364),
        [anon_sym_static] = ACTIONS(364),
        [anon_sym_new] = ACTIONS(364),
        [anon_sym_public] = ACTIONS(364),
        [anon_sym_protected] = ACTIONS(364),
        [anon_sym_internal] = ACTIONS(364),
        [anon_sym_private] = ACTIONS(364),
        [anon_sym_unsafe] = ACTIONS(364),
        [anon_sym_readonly] = ACTIONS(375),
        [anon_sym_volatile] = ACTIONS(375),
        [anon_sym_bool] = ACTIONS(375),
        [anon_sym_byte] = ACTIONS(375),
        [anon_sym_char] = ACTIONS(375),
        [anon_sym_decimal] = ACTIONS(375),
        [anon_sym_double] = ACTIONS(375),
        [anon_sym_float] = ACTIONS(375),
        [anon_sym_int] = ACTIONS(375),
        [anon_sym_long] = ACTIONS(375),
        [anon_sym_object] = ACTIONS(375),
        [anon_sym_sbyte] = ACTIONS(375),
        [anon_sym_short] = ACTIONS(375),
        [anon_sym_string] = ACTIONS(375),
        [anon_sym_uint] = ACTIONS(375),
        [anon_sym_ulong] = ACTIONS(375),
        [anon_sym_ushort] = ACTIONS(375),
        [sym_identifier_name] = ACTIONS(384),
        [sym_comment] = ACTIONS(43),
    },
    [108] = {
        [sym_identifier_name] = ACTIONS(393),
        [sym_comment] = ACTIONS(43),
    },
    [109] = {
        [sym_identifier_name] = ACTIONS(395),
        [sym_comment] = ACTIONS(43),
    },
    [110] = {
        [sym_variable_declarator] = STATE(148),
        [sym_type_parameter] = STATE(149),
        [sym_identifier_name] = ACTIONS(397),
        [sym_comment] = ACTIONS(43),
    },
    [111] = {
        [sym__class_modifiers] = STATE(65),
        [sym__field_modifiers] = STATE(64),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_global] = ACTIONS(309),
        [sym_identifier_name] = ACTIONS(399),
        [sym_comment] = ACTIONS(43),
    },
    [112] = {
        [anon_sym_LBRACE] = ACTIONS(402),
        [sym_comment] = ACTIONS(43),
    },
    [113] = {
        [sym_type_parameter_list] = STATE(123),
        [anon_sym_SEMI] = ACTIONS(405),
        [anon_sym_LBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(412),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(269),
        [anon_sym_DOT] = ACTIONS(415),
        [anon_sym_EQ] = ACTIONS(315),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(43),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_using] = ACTIONS(419),
        [anon_sym_namespace] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_struct] = ACTIONS(419),
        [anon_sym_abstract] = ACTIONS(419),
        [anon_sym_sealed] = ACTIONS(419),
        [anon_sym_static] = ACTIONS(419),
        [anon_sym_new] = ACTIONS(419),
        [anon_sym_public] = ACTIONS(419),
        [anon_sym_protected] = ACTIONS(419),
        [anon_sym_internal] = ACTIONS(419),
        [anon_sym_private] = ACTIONS(419),
        [anon_sym_unsafe] = ACTIONS(419),
        [sym_comment] = ACTIONS(43),
    },
    [115] = {
        [ts_builtin_sym_end] = ACTIONS(422),
        [anon_sym_namespace] = ACTIONS(422),
        [anon_sym_RBRACE] = ACTIONS(422),
        [anon_sym_class] = ACTIONS(422),
        [anon_sym_struct] = ACTIONS(422),
        [anon_sym_abstract] = ACTIONS(422),
        [anon_sym_sealed] = ACTIONS(422),
        [anon_sym_static] = ACTIONS(422),
        [anon_sym_new] = ACTIONS(422),
        [anon_sym_public] = ACTIONS(422),
        [anon_sym_protected] = ACTIONS(422),
        [anon_sym_internal] = ACTIONS(422),
        [anon_sym_private] = ACTIONS(422),
        [anon_sym_unsafe] = ACTIONS(422),
        [sym_comment] = ACTIONS(43),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(422),
        [anon_sym_namespace] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(428),
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
        [anon_sym_readonly] = ACTIONS(442),
        [anon_sym_volatile] = ACTIONS(442),
        [anon_sym_bool] = ACTIONS(442),
        [anon_sym_byte] = ACTIONS(442),
        [anon_sym_char] = ACTIONS(442),
        [anon_sym_decimal] = ACTIONS(442),
        [anon_sym_double] = ACTIONS(442),
        [anon_sym_float] = ACTIONS(442),
        [anon_sym_int] = ACTIONS(442),
        [anon_sym_long] = ACTIONS(442),
        [anon_sym_object] = ACTIONS(442),
        [anon_sym_sbyte] = ACTIONS(442),
        [anon_sym_short] = ACTIONS(442),
        [anon_sym_string] = ACTIONS(442),
        [anon_sym_uint] = ACTIONS(442),
        [anon_sym_ulong] = ACTIONS(442),
        [anon_sym_ushort] = ACTIONS(442),
        [sym_identifier_name] = ACTIONS(445),
        [sym_comment] = ACTIONS(43),
    },
    [117] = {
        [anon_sym_RBRACE] = ACTIONS(448),
        [anon_sym_class] = ACTIONS(442),
        [anon_sym_struct] = ACTIONS(442),
        [anon_sym_abstract] = ACTIONS(442),
        [anon_sym_sealed] = ACTIONS(442),
        [anon_sym_static] = ACTIONS(442),
        [anon_sym_new] = ACTIONS(442),
        [anon_sym_public] = ACTIONS(442),
        [anon_sym_protected] = ACTIONS(442),
        [anon_sym_internal] = ACTIONS(442),
        [anon_sym_private] = ACTIONS(442),
        [anon_sym_unsafe] = ACTIONS(442),
        [anon_sym_readonly] = ACTIONS(442),
        [anon_sym_volatile] = ACTIONS(442),
        [anon_sym_bool] = ACTIONS(442),
        [anon_sym_byte] = ACTIONS(442),
        [anon_sym_char] = ACTIONS(442),
        [anon_sym_decimal] = ACTIONS(442),
        [anon_sym_double] = ACTIONS(442),
        [anon_sym_float] = ACTIONS(442),
        [anon_sym_int] = ACTIONS(442),
        [anon_sym_long] = ACTIONS(442),
        [anon_sym_object] = ACTIONS(442),
        [anon_sym_sbyte] = ACTIONS(442),
        [anon_sym_short] = ACTIONS(442),
        [anon_sym_string] = ACTIONS(442),
        [anon_sym_uint] = ACTIONS(442),
        [anon_sym_ulong] = ACTIONS(442),
        [anon_sym_ushort] = ACTIONS(442),
        [sym_identifier_name] = ACTIONS(445),
        [sym_comment] = ACTIONS(43),
    },
    [118] = {
        [anon_sym_SEMI] = ACTIONS(451),
        [sym_comment] = ACTIONS(43),
    },
    [119] = {
        [aux_sym_variable_declaration_repeat1] = STATE(59),
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(457),
        [sym_comment] = ACTIONS(43),
    },
    [120] = {
        [anon_sym_class] = ACTIONS(461),
        [sym_comment] = ACTIONS(43),
    },
    [121] = {
        [anon_sym_struct] = ACTIONS(464),
        [sym_comment] = ACTIONS(43),
    },
    [122] = {
        [anon_sym_bool] = ACTIONS(467),
        [anon_sym_byte] = ACTIONS(467),
        [anon_sym_char] = ACTIONS(467),
        [anon_sym_decimal] = ACTIONS(467),
        [anon_sym_double] = ACTIONS(467),
        [anon_sym_float] = ACTIONS(467),
        [anon_sym_int] = ACTIONS(467),
        [anon_sym_long] = ACTIONS(467),
        [anon_sym_object] = ACTIONS(467),
        [anon_sym_sbyte] = ACTIONS(467),
        [anon_sym_short] = ACTIONS(467),
        [anon_sym_string] = ACTIONS(467),
        [anon_sym_uint] = ACTIONS(467),
        [anon_sym_ulong] = ACTIONS(467),
        [anon_sym_ushort] = ACTIONS(467),
        [sym_identifier_name] = ACTIONS(470),
        [sym_comment] = ACTIONS(43),
    },
    [123] = {
        [anon_sym_LBRACE] = ACTIONS(473),
        [sym_comment] = ACTIONS(43),
    },
    [124] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(81),
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_GT] = ACTIONS(479),
        [sym_comment] = ACTIONS(43),
    },
    [125] = {
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_LBRACE] = ACTIONS(289),
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(43),
    },
    [126] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(485),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(301),
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
    [127] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(488),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [128] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(490),
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
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(492),
        [anon_sym_namespace] = ACTIONS(496),
        [anon_sym_RBRACE] = ACTIONS(492),
        [anon_sym_class] = ACTIONS(496),
        [anon_sym_struct] = ACTIONS(496),
        [anon_sym_abstract] = ACTIONS(496),
        [anon_sym_sealed] = ACTIONS(496),
        [anon_sym_static] = ACTIONS(496),
        [anon_sym_new] = ACTIONS(496),
        [anon_sym_public] = ACTIONS(496),
        [anon_sym_protected] = ACTIONS(496),
        [anon_sym_internal] = ACTIONS(496),
        [anon_sym_private] = ACTIONS(496),
        [anon_sym_unsafe] = ACTIONS(496),
        [anon_sym_readonly] = ACTIONS(496),
        [anon_sym_volatile] = ACTIONS(496),
        [anon_sym_bool] = ACTIONS(496),
        [anon_sym_byte] = ACTIONS(496),
        [anon_sym_char] = ACTIONS(496),
        [anon_sym_decimal] = ACTIONS(496),
        [anon_sym_double] = ACTIONS(496),
        [anon_sym_float] = ACTIONS(496),
        [anon_sym_int] = ACTIONS(496),
        [anon_sym_long] = ACTIONS(496),
        [anon_sym_object] = ACTIONS(496),
        [anon_sym_sbyte] = ACTIONS(496),
        [anon_sym_short] = ACTIONS(496),
        [anon_sym_string] = ACTIONS(496),
        [anon_sym_uint] = ACTIONS(496),
        [anon_sym_ulong] = ACTIONS(496),
        [anon_sym_ushort] = ACTIONS(496),
        [sym_identifier_name] = ACTIONS(500),
        [sym_comment] = ACTIONS(43),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(504),
        [anon_sym_namespace] = ACTIONS(508),
        [anon_sym_RBRACE] = ACTIONS(504),
        [anon_sym_class] = ACTIONS(508),
        [anon_sym_struct] = ACTIONS(508),
        [anon_sym_abstract] = ACTIONS(508),
        [anon_sym_sealed] = ACTIONS(508),
        [anon_sym_static] = ACTIONS(508),
        [anon_sym_new] = ACTIONS(508),
        [anon_sym_public] = ACTIONS(508),
        [anon_sym_protected] = ACTIONS(508),
        [anon_sym_internal] = ACTIONS(508),
        [anon_sym_private] = ACTIONS(508),
        [anon_sym_unsafe] = ACTIONS(508),
        [anon_sym_readonly] = ACTIONS(508),
        [anon_sym_volatile] = ACTIONS(508),
        [anon_sym_bool] = ACTIONS(508),
        [anon_sym_byte] = ACTIONS(508),
        [anon_sym_char] = ACTIONS(508),
        [anon_sym_decimal] = ACTIONS(508),
        [anon_sym_double] = ACTIONS(508),
        [anon_sym_float] = ACTIONS(508),
        [anon_sym_int] = ACTIONS(508),
        [anon_sym_long] = ACTIONS(508),
        [anon_sym_object] = ACTIONS(508),
        [anon_sym_sbyte] = ACTIONS(508),
        [anon_sym_short] = ACTIONS(508),
        [anon_sym_string] = ACTIONS(508),
        [anon_sym_uint] = ACTIONS(508),
        [anon_sym_ulong] = ACTIONS(508),
        [anon_sym_ushort] = ACTIONS(508),
        [sym_identifier_name] = ACTIONS(512),
        [sym_comment] = ACTIONS(43),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_using] = ACTIONS(329),
        [anon_sym_namespace] = ACTIONS(329),
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
        [sym_comment] = ACTIONS(43),
    },
    [132] = {
        [sym_class_declaration] = STATE(134),
        [sym_struct_declaration] = STATE(134),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(135),
        [aux_sym_struct_declaration_repeat1] = STATE(136),
        [anon_sym_RBRACE] = ACTIONS(516),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(518),
        [anon_sym_namespace] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(518),
        [anon_sym_class] = ACTIONS(523),
        [anon_sym_struct] = ACTIONS(523),
        [anon_sym_abstract] = ACTIONS(523),
        [anon_sym_sealed] = ACTIONS(523),
        [anon_sym_static] = ACTIONS(523),
        [anon_sym_new] = ACTIONS(523),
        [anon_sym_public] = ACTIONS(523),
        [anon_sym_protected] = ACTIONS(523),
        [anon_sym_internal] = ACTIONS(523),
        [anon_sym_private] = ACTIONS(523),
        [anon_sym_unsafe] = ACTIONS(523),
        [anon_sym_readonly] = ACTIONS(523),
        [anon_sym_volatile] = ACTIONS(523),
        [anon_sym_bool] = ACTIONS(523),
        [anon_sym_byte] = ACTIONS(523),
        [anon_sym_char] = ACTIONS(523),
        [anon_sym_decimal] = ACTIONS(523),
        [anon_sym_double] = ACTIONS(523),
        [anon_sym_float] = ACTIONS(523),
        [anon_sym_int] = ACTIONS(523),
        [anon_sym_long] = ACTIONS(523),
        [anon_sym_object] = ACTIONS(523),
        [anon_sym_sbyte] = ACTIONS(523),
        [anon_sym_short] = ACTIONS(523),
        [anon_sym_string] = ACTIONS(523),
        [anon_sym_uint] = ACTIONS(523),
        [anon_sym_ulong] = ACTIONS(523),
        [anon_sym_ushort] = ACTIONS(523),
        [sym_identifier_name] = ACTIONS(528),
        [sym_comment] = ACTIONS(43),
    },
    [134] = {
        [anon_sym_RBRACE] = ACTIONS(533),
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
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [135] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [136] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(541),
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
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_namespace] = ACTIONS(546),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(546),
        [anon_sym_struct] = ACTIONS(546),
        [anon_sym_abstract] = ACTIONS(546),
        [anon_sym_sealed] = ACTIONS(546),
        [anon_sym_static] = ACTIONS(546),
        [anon_sym_new] = ACTIONS(546),
        [anon_sym_public] = ACTIONS(546),
        [anon_sym_protected] = ACTIONS(546),
        [anon_sym_internal] = ACTIONS(546),
        [anon_sym_private] = ACTIONS(546),
        [anon_sym_unsafe] = ACTIONS(546),
        [anon_sym_readonly] = ACTIONS(546),
        [anon_sym_volatile] = ACTIONS(546),
        [anon_sym_bool] = ACTIONS(546),
        [anon_sym_byte] = ACTIONS(546),
        [anon_sym_char] = ACTIONS(546),
        [anon_sym_decimal] = ACTIONS(546),
        [anon_sym_double] = ACTIONS(546),
        [anon_sym_float] = ACTIONS(546),
        [anon_sym_int] = ACTIONS(546),
        [anon_sym_long] = ACTIONS(546),
        [anon_sym_object] = ACTIONS(546),
        [anon_sym_sbyte] = ACTIONS(546),
        [anon_sym_short] = ACTIONS(546),
        [anon_sym_string] = ACTIONS(546),
        [anon_sym_uint] = ACTIONS(546),
        [anon_sym_ulong] = ACTIONS(546),
        [anon_sym_ushort] = ACTIONS(546),
        [sym_identifier_name] = ACTIONS(549),
        [sym_comment] = ACTIONS(43),
    },
    [138] = {
        [ts_builtin_sym_end] = ACTIONS(552),
        [anon_sym_namespace] = ACTIONS(555),
        [anon_sym_RBRACE] = ACTIONS(552),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_struct] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(555),
        [anon_sym_sealed] = ACTIONS(555),
        [anon_sym_static] = ACTIONS(555),
        [anon_sym_new] = ACTIONS(555),
        [anon_sym_public] = ACTIONS(555),
        [anon_sym_protected] = ACTIONS(555),
        [anon_sym_internal] = ACTIONS(555),
        [anon_sym_private] = ACTIONS(555),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_readonly] = ACTIONS(555),
        [anon_sym_volatile] = ACTIONS(555),
        [anon_sym_bool] = ACTIONS(555),
        [anon_sym_byte] = ACTIONS(555),
        [anon_sym_char] = ACTIONS(555),
        [anon_sym_decimal] = ACTIONS(555),
        [anon_sym_double] = ACTIONS(555),
        [anon_sym_float] = ACTIONS(555),
        [anon_sym_int] = ACTIONS(555),
        [anon_sym_long] = ACTIONS(555),
        [anon_sym_object] = ACTIONS(555),
        [anon_sym_sbyte] = ACTIONS(555),
        [anon_sym_short] = ACTIONS(555),
        [anon_sym_string] = ACTIONS(555),
        [anon_sym_uint] = ACTIONS(555),
        [anon_sym_ulong] = ACTIONS(555),
        [anon_sym_ushort] = ACTIONS(555),
        [sym_identifier_name] = ACTIONS(558),
        [sym_comment] = ACTIONS(43),
    },
    [139] = {
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_struct] = ACTIONS(343),
        [anon_sym_abstract] = ACTIONS(343),
        [anon_sym_sealed] = ACTIONS(343),
        [anon_sym_static] = ACTIONS(343),
        [anon_sym_new] = ACTIONS(343),
        [anon_sym_public] = ACTIONS(343),
        [anon_sym_protected] = ACTIONS(343),
        [anon_sym_internal] = ACTIONS(343),
        [anon_sym_private] = ACTIONS(343),
        [anon_sym_unsafe] = ACTIONS(343),
        [anon_sym_readonly] = ACTIONS(343),
        [anon_sym_volatile] = ACTIONS(343),
        [anon_sym_bool] = ACTIONS(343),
        [anon_sym_byte] = ACTIONS(343),
        [anon_sym_char] = ACTIONS(343),
        [anon_sym_decimal] = ACTIONS(343),
        [anon_sym_double] = ACTIONS(343),
        [anon_sym_float] = ACTIONS(343),
        [anon_sym_int] = ACTIONS(343),
        [anon_sym_long] = ACTIONS(343),
        [anon_sym_object] = ACTIONS(343),
        [anon_sym_sbyte] = ACTIONS(343),
        [anon_sym_short] = ACTIONS(343),
        [anon_sym_string] = ACTIONS(343),
        [anon_sym_uint] = ACTIONS(343),
        [anon_sym_ulong] = ACTIONS(343),
        [anon_sym_ushort] = ACTIONS(343),
        [sym_identifier_name] = ACTIONS(346),
        [sym_comment] = ACTIONS(43),
    },
    [140] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(142),
        [sym_struct_declaration] = STATE(142),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_compilation_unit_repeat2] = STATE(93),
        [aux_sym_class_declaration_repeat1] = STATE(143),
        [aux_sym_struct_declaration_repeat1] = STATE(144),
        [anon_sym_namespace] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(563),
        [anon_sym_namespace] = ACTIONS(569),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_struct] = ACTIONS(569),
        [anon_sym_abstract] = ACTIONS(569),
        [anon_sym_sealed] = ACTIONS(569),
        [anon_sym_static] = ACTIONS(569),
        [anon_sym_new] = ACTIONS(569),
        [anon_sym_public] = ACTIONS(569),
        [anon_sym_protected] = ACTIONS(569),
        [anon_sym_internal] = ACTIONS(569),
        [anon_sym_private] = ACTIONS(569),
        [anon_sym_unsafe] = ACTIONS(569),
        [anon_sym_readonly] = ACTIONS(575),
        [anon_sym_volatile] = ACTIONS(575),
        [anon_sym_bool] = ACTIONS(575),
        [anon_sym_byte] = ACTIONS(575),
        [anon_sym_char] = ACTIONS(575),
        [anon_sym_decimal] = ACTIONS(575),
        [anon_sym_double] = ACTIONS(575),
        [anon_sym_float] = ACTIONS(575),
        [anon_sym_int] = ACTIONS(575),
        [anon_sym_long] = ACTIONS(575),
        [anon_sym_object] = ACTIONS(575),
        [anon_sym_sbyte] = ACTIONS(575),
        [anon_sym_short] = ACTIONS(575),
        [anon_sym_string] = ACTIONS(575),
        [anon_sym_uint] = ACTIONS(575),
        [anon_sym_ulong] = ACTIONS(575),
        [anon_sym_ushort] = ACTIONS(575),
        [sym_identifier_name] = ACTIONS(580),
        [sym_comment] = ACTIONS(43),
    },
    [142] = {
        [anon_sym_namespace] = ACTIONS(585),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_struct] = ACTIONS(591),
        [anon_sym_abstract] = ACTIONS(591),
        [anon_sym_sealed] = ACTIONS(591),
        [anon_sym_static] = ACTIONS(591),
        [anon_sym_new] = ACTIONS(591),
        [anon_sym_public] = ACTIONS(591),
        [anon_sym_protected] = ACTIONS(591),
        [anon_sym_internal] = ACTIONS(591),
        [anon_sym_private] = ACTIONS(591),
        [anon_sym_unsafe] = ACTIONS(591),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [143] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [144] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(597),
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
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_namespace] = ACTIONS(602),
        [anon_sym_RBRACE] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(602),
        [anon_sym_struct] = ACTIONS(602),
        [anon_sym_abstract] = ACTIONS(602),
        [anon_sym_sealed] = ACTIONS(602),
        [anon_sym_static] = ACTIONS(602),
        [anon_sym_new] = ACTIONS(602),
        [anon_sym_public] = ACTIONS(602),
        [anon_sym_protected] = ACTIONS(602),
        [anon_sym_internal] = ACTIONS(602),
        [anon_sym_private] = ACTIONS(602),
        [anon_sym_unsafe] = ACTIONS(602),
        [anon_sym_readonly] = ACTIONS(602),
        [anon_sym_volatile] = ACTIONS(602),
        [anon_sym_bool] = ACTIONS(602),
        [anon_sym_byte] = ACTIONS(602),
        [anon_sym_char] = ACTIONS(602),
        [anon_sym_decimal] = ACTIONS(602),
        [anon_sym_double] = ACTIONS(602),
        [anon_sym_float] = ACTIONS(602),
        [anon_sym_int] = ACTIONS(602),
        [anon_sym_long] = ACTIONS(602),
        [anon_sym_object] = ACTIONS(602),
        [anon_sym_sbyte] = ACTIONS(602),
        [anon_sym_short] = ACTIONS(602),
        [anon_sym_string] = ACTIONS(602),
        [anon_sym_uint] = ACTIONS(602),
        [anon_sym_ulong] = ACTIONS(602),
        [anon_sym_ushort] = ACTIONS(602),
        [sym_identifier_name] = ACTIONS(605),
        [sym_comment] = ACTIONS(43),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(608),
        [anon_sym_namespace] = ACTIONS(611),
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_struct] = ACTIONS(611),
        [anon_sym_abstract] = ACTIONS(611),
        [anon_sym_sealed] = ACTIONS(611),
        [anon_sym_static] = ACTIONS(611),
        [anon_sym_new] = ACTIONS(611),
        [anon_sym_public] = ACTIONS(611),
        [anon_sym_protected] = ACTIONS(611),
        [anon_sym_internal] = ACTIONS(611),
        [anon_sym_private] = ACTIONS(611),
        [anon_sym_unsafe] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(611),
        [anon_sym_volatile] = ACTIONS(611),
        [anon_sym_bool] = ACTIONS(611),
        [anon_sym_byte] = ACTIONS(611),
        [anon_sym_char] = ACTIONS(611),
        [anon_sym_decimal] = ACTIONS(611),
        [anon_sym_double] = ACTIONS(611),
        [anon_sym_float] = ACTIONS(611),
        [anon_sym_int] = ACTIONS(611),
        [anon_sym_long] = ACTIONS(611),
        [anon_sym_object] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(611),
        [anon_sym_short] = ACTIONS(611),
        [anon_sym_string] = ACTIONS(611),
        [anon_sym_uint] = ACTIONS(611),
        [anon_sym_ulong] = ACTIONS(611),
        [anon_sym_ushort] = ACTIONS(611),
        [sym_identifier_name] = ACTIONS(614),
        [sym_comment] = ACTIONS(43),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(412),
        [anon_sym_GT] = ACTIONS(269),
        [sym_comment] = ACTIONS(43),
    },
    [148] = {
        [anon_sym_SEMI] = ACTIONS(617),
        [anon_sym_COMMA] = ACTIONS(617),
        [sym_comment] = ACTIONS(43),
    },
    [149] = {
        [anon_sym_COMMA] = ACTIONS(620),
        [anon_sym_GT] = ACTIONS(620),
        [sym_comment] = ACTIONS(43),
    },
    [150] = {
        [sym_type_parameter_list] = STATE(152),
        [anon_sym_LBRACE] = ACTIONS(623),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [151] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(144),
        [anon_sym_RBRACE] = ACTIONS(625),
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
    [152] = {
        [anon_sym_LBRACE] = ACTIONS(627),
        [sym_comment] = ACTIONS(43),
    },
    [153] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(136),
        [anon_sym_RBRACE] = ACTIONS(597),
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
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_namespace] = ACTIONS(632),
        [anon_sym_RBRACE] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(632),
        [anon_sym_struct] = ACTIONS(632),
        [anon_sym_abstract] = ACTIONS(632),
        [anon_sym_sealed] = ACTIONS(632),
        [anon_sym_static] = ACTIONS(632),
        [anon_sym_new] = ACTIONS(632),
        [anon_sym_public] = ACTIONS(632),
        [anon_sym_protected] = ACTIONS(632),
        [anon_sym_internal] = ACTIONS(632),
        [anon_sym_private] = ACTIONS(632),
        [anon_sym_unsafe] = ACTIONS(632),
        [anon_sym_readonly] = ACTIONS(632),
        [anon_sym_volatile] = ACTIONS(632),
        [anon_sym_bool] = ACTIONS(632),
        [anon_sym_byte] = ACTIONS(632),
        [anon_sym_char] = ACTIONS(632),
        [anon_sym_decimal] = ACTIONS(632),
        [anon_sym_double] = ACTIONS(632),
        [anon_sym_float] = ACTIONS(632),
        [anon_sym_int] = ACTIONS(632),
        [anon_sym_long] = ACTIONS(632),
        [anon_sym_object] = ACTIONS(632),
        [anon_sym_sbyte] = ACTIONS(632),
        [anon_sym_short] = ACTIONS(632),
        [anon_sym_string] = ACTIONS(632),
        [anon_sym_uint] = ACTIONS(632),
        [anon_sym_ulong] = ACTIONS(632),
        [anon_sym_ushort] = ACTIONS(632),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(43),
    },
    [155] = {
        [sym_type_parameter_list] = STATE(157),
        [anon_sym_LBRACE] = ACTIONS(638),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [156] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(143),
        [anon_sym_RBRACE] = ACTIONS(640),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [157] = {
        [anon_sym_LBRACE] = ACTIONS(642),
        [sym_comment] = ACTIONS(43),
    },
    [158] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(135),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(644),
        [anon_sym_namespace] = ACTIONS(647),
        [anon_sym_RBRACE] = ACTIONS(644),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_struct] = ACTIONS(647),
        [anon_sym_abstract] = ACTIONS(647),
        [anon_sym_sealed] = ACTIONS(647),
        [anon_sym_static] = ACTIONS(647),
        [anon_sym_new] = ACTIONS(647),
        [anon_sym_public] = ACTIONS(647),
        [anon_sym_protected] = ACTIONS(647),
        [anon_sym_internal] = ACTIONS(647),
        [anon_sym_private] = ACTIONS(647),
        [anon_sym_unsafe] = ACTIONS(647),
        [anon_sym_readonly] = ACTIONS(647),
        [anon_sym_volatile] = ACTIONS(647),
        [anon_sym_bool] = ACTIONS(647),
        [anon_sym_byte] = ACTIONS(647),
        [anon_sym_char] = ACTIONS(647),
        [anon_sym_decimal] = ACTIONS(647),
        [anon_sym_double] = ACTIONS(647),
        [anon_sym_float] = ACTIONS(647),
        [anon_sym_int] = ACTIONS(647),
        [anon_sym_long] = ACTIONS(647),
        [anon_sym_object] = ACTIONS(647),
        [anon_sym_sbyte] = ACTIONS(647),
        [anon_sym_short] = ACTIONS(647),
        [anon_sym_string] = ACTIONS(647),
        [anon_sym_uint] = ACTIONS(647),
        [anon_sym_ulong] = ACTIONS(647),
        [anon_sym_ushort] = ACTIONS(647),
        [sym_identifier_name] = ACTIONS(650),
        [sym_comment] = ACTIONS(43),
    },
    [160] = {
        [ts_builtin_sym_end] = ACTIONS(653),
        [anon_sym_namespace] = ACTIONS(661),
        [anon_sym_RBRACE] = ACTIONS(653),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_struct] = ACTIONS(661),
        [anon_sym_abstract] = ACTIONS(661),
        [anon_sym_sealed] = ACTIONS(661),
        [anon_sym_static] = ACTIONS(661),
        [anon_sym_new] = ACTIONS(661),
        [anon_sym_public] = ACTIONS(661),
        [anon_sym_protected] = ACTIONS(661),
        [anon_sym_internal] = ACTIONS(661),
        [anon_sym_private] = ACTIONS(661),
        [anon_sym_unsafe] = ACTIONS(661),
        [anon_sym_readonly] = ACTIONS(669),
        [anon_sym_volatile] = ACTIONS(669),
        [anon_sym_bool] = ACTIONS(669),
        [anon_sym_byte] = ACTIONS(669),
        [anon_sym_char] = ACTIONS(669),
        [anon_sym_decimal] = ACTIONS(669),
        [anon_sym_double] = ACTIONS(669),
        [anon_sym_float] = ACTIONS(669),
        [anon_sym_int] = ACTIONS(669),
        [anon_sym_long] = ACTIONS(669),
        [anon_sym_object] = ACTIONS(669),
        [anon_sym_sbyte] = ACTIONS(669),
        [anon_sym_short] = ACTIONS(669),
        [anon_sym_string] = ACTIONS(669),
        [anon_sym_uint] = ACTIONS(669),
        [anon_sym_ulong] = ACTIONS(669),
        [anon_sym_ushort] = ACTIONS(669),
        [sym_identifier_name] = ACTIONS(676),
        [sym_comment] = ACTIONS(43),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(105),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(108),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(109),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(110),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(111),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(112),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(89),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(95),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(104),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(86),
    [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(113),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
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
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [332] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [338] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [343] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [346] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [353] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [364] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [375] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [384] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
    [399] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [402] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [405] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(131),
    [409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(140),
    [412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_type_parameter, 1),
    [415] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(89),
    [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [422] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [425] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [428] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [435] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [442] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [445] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [448] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [453] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [457] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(58),
    [461] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [464] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [467] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [470] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [475] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(79),
    [479] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(80),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [485] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [496] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [500] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [504] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [508] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [512] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [518] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [523] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [528] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [533] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [536] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [543] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [546] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [549] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [552] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [555] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [558] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [563] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [569] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [575] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [580] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [587] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [591] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [599] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [602] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [605] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [608] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [611] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [614] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [617] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [620] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [629] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [632] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [635] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [647] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [650] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [653] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [661] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [669] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [676] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
