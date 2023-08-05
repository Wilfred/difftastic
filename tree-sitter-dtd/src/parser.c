#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum {
  sym_Name = 1,
  anon_sym_LT_BANG_LBRACK = 2,
  anon_sym_IGNORE = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK_RBRACK_GT = 6,
  anon_sym_LT_BANG = 7,
  anon_sym_ELEMENT = 8,
  anon_sym_GT = 9,
  anon_sym_EMPTY = 10,
  anon_sym_ANY = 11,
  anon_sym_LPAREN = 12,
  anon_sym_POUNDPCDATA = 13,
  anon_sym_PIPE = 14,
  anon_sym_RPAREN = 15,
  anon_sym_STAR = 16,
  anon_sym_QMARK = 17,
  anon_sym_PLUS = 18,
  anon_sym_COMMA = 19,
  anon_sym_ATTLIST = 20,
  sym_StringType = 21,
  sym_TokenizedType = 22,
  anon_sym_NOTATION = 23,
  anon_sym_POUNDREQUIRED = 24,
  anon_sym_POUNDIMPLIED = 25,
  anon_sym_POUNDFIXED = 26,
  anon_sym_ENTITY = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_EntityValue_token1 = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_EntityValue_token2 = 32,
  anon_sym_NDATA = 33,
  anon_sym_SEMI = 34,
  sym__Char = 35,
  sym__S = 36,
  sym_Nmtoken = 37,
  anon_sym_AMP = 38,
  anon_sym_AMP_POUND = 39,
  aux_sym_CharRef_token1 = 40,
  anon_sym_AMP_POUNDx = 41,
  aux_sym_CharRef_token2 = 42,
  aux_sym_AttValue_token1 = 43,
  aux_sym_AttValue_token2 = 44,
  anon_sym_SYSTEM = 45,
  anon_sym_PUBLIC = 46,
  aux_sym_SystemLiteral_token1 = 47,
  aux_sym_SystemLiteral_token2 = 48,
  aux_sym_PubidLiteral_token1 = 49,
  aux_sym_PubidLiteral_token2 = 50,
  anon_sym_LT_QMARK = 51,
  anon_sym_xml = 52,
  anon_sym_QMARK_GT = 53,
  anon_sym_version = 54,
  sym_VersionNum = 55,
  anon_sym_encoding = 56,
  sym_EncName = 57,
  aux_sym_PI_token1 = 58,
  sym_Comment = 59,
  anon_sym_EQ = 60,
  sym_document = 61,
  sym__extSubsetDecl = 62,
  sym_conditionalSect = 63,
  sym__markupdecl = 64,
  sym__DeclSep = 65,
  sym_elementdecl = 66,
  sym_contentspec = 67,
  sym_Mixed = 68,
  sym_children = 69,
  sym__cp = 70,
  sym__choice = 71,
  sym_AttlistDecl = 72,
  sym_AttDef = 73,
  sym__AttType = 74,
  sym__EnumeratedType = 75,
  sym_NotationType = 76,
  sym_Enumeration = 77,
  sym_DefaultDecl = 78,
  sym__EntityDecl = 79,
  sym_GEDecl = 80,
  sym_PEDecl = 81,
  sym_EntityValue = 82,
  sym_NDataDecl = 83,
  sym_NotationDecl = 84,
  sym_PEReference = 85,
  sym__Reference = 86,
  sym_EntityRef = 87,
  sym_CharRef = 88,
  sym_AttValue = 89,
  sym_ExternalID = 90,
  sym_PublicID = 91,
  sym_SystemLiteral = 92,
  sym_PubidLiteral = 93,
  sym_XMLDecl = 94,
  sym__VersionInfo = 95,
  sym__EncodingDecl = 96,
  sym_PI = 97,
  sym__Eq = 98,
  aux_sym_document_repeat1 = 99,
  aux_sym_Mixed_repeat1 = 100,
  aux_sym__choice_repeat1 = 101,
  aux_sym_AttlistDecl_repeat1 = 102,
  aux_sym_NotationType_repeat1 = 103,
  aux_sym_Enumeration_repeat1 = 104,
  aux_sym_EntityValue_repeat1 = 105,
  aux_sym_EntityValue_repeat2 = 106,
  aux_sym_AttValue_repeat1 = 107,
  aux_sym_AttValue_repeat2 = 108,
  alias_sym_PITarget = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_ELEMENT] = "ELEMENT",
  [anon_sym_GT] = ">",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_POUNDPCDATA] = "#PCDATA",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATTLIST] = "ATTLIST",
  [sym_StringType] = "StringType",
  [sym_TokenizedType] = "TokenizedType",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_ENTITY] = "ENTITY",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_EntityValue_token1] = "EntityValue_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_EntityValue_token2] = "EntityValue_token2",
  [anon_sym_NDATA] = "NDATA",
  [anon_sym_SEMI] = ";",
  [sym__Char] = "_Char",
  [sym__S] = "_S",
  [sym_Nmtoken] = "Nmtoken",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_POUND] = "&#",
  [aux_sym_CharRef_token1] = "CharRef_token1",
  [anon_sym_AMP_POUNDx] = "&#x",
  [aux_sym_CharRef_token2] = "CharRef_token2",
  [aux_sym_AttValue_token1] = "AttValue_token1",
  [aux_sym_AttValue_token2] = "AttValue_token2",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_PUBLIC] = "PUBLIC",
  [aux_sym_SystemLiteral_token1] = "SystemLiteral_token1",
  [aux_sym_SystemLiteral_token2] = "SystemLiteral_token2",
  [aux_sym_PubidLiteral_token1] = "PubidLiteral_token1",
  [aux_sym_PubidLiteral_token2] = "PubidLiteral_token2",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [aux_sym_PI_token1] = "PI_token1",
  [sym_Comment] = "Comment",
  [anon_sym_EQ] = "=",
  [sym_document] = "document",
  [sym__extSubsetDecl] = "_extSubsetDecl",
  [sym_conditionalSect] = "conditionalSect",
  [sym__markupdecl] = "_markupdecl",
  [sym__DeclSep] = "_DeclSep",
  [sym_elementdecl] = "elementdecl",
  [sym_contentspec] = "contentspec",
  [sym_Mixed] = "Mixed",
  [sym_children] = "children",
  [sym__cp] = "_cp",
  [sym__choice] = "_choice",
  [sym_AttlistDecl] = "AttlistDecl",
  [sym_AttDef] = "AttDef",
  [sym__AttType] = "_AttType",
  [sym__EnumeratedType] = "_EnumeratedType",
  [sym_NotationType] = "NotationType",
  [sym_Enumeration] = "Enumeration",
  [sym_DefaultDecl] = "DefaultDecl",
  [sym__EntityDecl] = "_EntityDecl",
  [sym_GEDecl] = "GEDecl",
  [sym_PEDecl] = "PEDecl",
  [sym_EntityValue] = "EntityValue",
  [sym_NDataDecl] = "NDataDecl",
  [sym_NotationDecl] = "NotationDecl",
  [sym_PEReference] = "PEReference",
  [sym__Reference] = "_Reference",
  [sym_EntityRef] = "EntityRef",
  [sym_CharRef] = "CharRef",
  [sym_AttValue] = "AttValue",
  [sym_ExternalID] = "ExternalID",
  [sym_PublicID] = "PublicID",
  [sym_SystemLiteral] = "SystemLiteral",
  [sym_PubidLiteral] = "PubidLiteral",
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym_PI] = "PI",
  [sym__Eq] = "_Eq",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_Mixed_repeat1] = "Mixed_repeat1",
  [aux_sym__choice_repeat1] = "_choice_repeat1",
  [aux_sym_AttlistDecl_repeat1] = "AttlistDecl_repeat1",
  [aux_sym_NotationType_repeat1] = "NotationType_repeat1",
  [aux_sym_Enumeration_repeat1] = "Enumeration_repeat1",
  [aux_sym_EntityValue_repeat1] = "EntityValue_repeat1",
  [aux_sym_EntityValue_repeat2] = "EntityValue_repeat2",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_AttValue_repeat2] = "AttValue_repeat2",
  [alias_sym_PITarget] = "PITarget",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
  [anon_sym_LT_BANG_LBRACK] = anon_sym_LT_BANG_LBRACK,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_ELEMENT] = anon_sym_ELEMENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_POUNDPCDATA] = anon_sym_POUNDPCDATA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATTLIST] = anon_sym_ATTLIST,
  [sym_StringType] = sym_StringType,
  [sym_TokenizedType] = sym_TokenizedType,
  [anon_sym_NOTATION] = anon_sym_NOTATION,
  [anon_sym_POUNDREQUIRED] = anon_sym_POUNDREQUIRED,
  [anon_sym_POUNDIMPLIED] = anon_sym_POUNDIMPLIED,
  [anon_sym_POUNDFIXED] = anon_sym_POUNDFIXED,
  [anon_sym_ENTITY] = anon_sym_ENTITY,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_EntityValue_token1] = aux_sym_EntityValue_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_EntityValue_token2] = aux_sym_EntityValue_token2,
  [anon_sym_NDATA] = anon_sym_NDATA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__Char] = sym__Char,
  [sym__S] = sym__S,
  [sym_Nmtoken] = sym_Nmtoken,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_POUND] = anon_sym_AMP_POUND,
  [aux_sym_CharRef_token1] = aux_sym_CharRef_token1,
  [anon_sym_AMP_POUNDx] = anon_sym_AMP_POUNDx,
  [aux_sym_CharRef_token2] = aux_sym_CharRef_token2,
  [aux_sym_AttValue_token1] = aux_sym_AttValue_token1,
  [aux_sym_AttValue_token2] = aux_sym_AttValue_token2,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_PUBLIC] = anon_sym_PUBLIC,
  [aux_sym_SystemLiteral_token1] = aux_sym_SystemLiteral_token1,
  [aux_sym_SystemLiteral_token2] = aux_sym_SystemLiteral_token2,
  [aux_sym_PubidLiteral_token1] = aux_sym_PubidLiteral_token1,
  [aux_sym_PubidLiteral_token2] = aux_sym_PubidLiteral_token2,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [aux_sym_PI_token1] = aux_sym_PI_token1,
  [sym_Comment] = sym_Comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_document] = sym_document,
  [sym__extSubsetDecl] = sym__extSubsetDecl,
  [sym_conditionalSect] = sym_conditionalSect,
  [sym__markupdecl] = sym__markupdecl,
  [sym__DeclSep] = sym__DeclSep,
  [sym_elementdecl] = sym_elementdecl,
  [sym_contentspec] = sym_contentspec,
  [sym_Mixed] = sym_Mixed,
  [sym_children] = sym_children,
  [sym__cp] = sym__cp,
  [sym__choice] = sym__choice,
  [sym_AttlistDecl] = sym_AttlistDecl,
  [sym_AttDef] = sym_AttDef,
  [sym__AttType] = sym__AttType,
  [sym__EnumeratedType] = sym__EnumeratedType,
  [sym_NotationType] = sym_NotationType,
  [sym_Enumeration] = sym_Enumeration,
  [sym_DefaultDecl] = sym_DefaultDecl,
  [sym__EntityDecl] = sym__EntityDecl,
  [sym_GEDecl] = sym_GEDecl,
  [sym_PEDecl] = sym_PEDecl,
  [sym_EntityValue] = sym_EntityValue,
  [sym_NDataDecl] = sym_NDataDecl,
  [sym_NotationDecl] = sym_NotationDecl,
  [sym_PEReference] = sym_PEReference,
  [sym__Reference] = sym__Reference,
  [sym_EntityRef] = sym_EntityRef,
  [sym_CharRef] = sym_CharRef,
  [sym_AttValue] = sym_AttValue,
  [sym_ExternalID] = sym_ExternalID,
  [sym_PublicID] = sym_PublicID,
  [sym_SystemLiteral] = sym_SystemLiteral,
  [sym_PubidLiteral] = sym_PubidLiteral,
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym_PI] = sym_PI,
  [sym__Eq] = sym__Eq,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_Mixed_repeat1] = aux_sym_Mixed_repeat1,
  [aux_sym__choice_repeat1] = aux_sym__choice_repeat1,
  [aux_sym_AttlistDecl_repeat1] = aux_sym_AttlistDecl_repeat1,
  [aux_sym_NotationType_repeat1] = aux_sym_NotationType_repeat1,
  [aux_sym_Enumeration_repeat1] = aux_sym_Enumeration_repeat1,
  [aux_sym_EntityValue_repeat1] = aux_sym_EntityValue_repeat1,
  [aux_sym_EntityValue_repeat2] = aux_sym_EntityValue_repeat2,
  [aux_sym_AttValue_repeat1] = aux_sym_AttValue_repeat1,
  [aux_sym_AttValue_repeat2] = aux_sym_AttValue_repeat2,
  [alias_sym_PITarget] = alias_sym_PITarget,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDPCDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTLIST] = {
    .visible = true,
    .named = false,
  },
  [sym_StringType] = {
    .visible = true,
    .named = true,
  },
  [sym_TokenizedType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDREQUIRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDIMPLIED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDFIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__Char] = {
    .visible = false,
    .named = true,
  },
  [sym__S] = {
    .visible = false,
    .named = true,
  },
  [sym_Nmtoken] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP_POUNDx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SystemLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SystemLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PubidLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PubidLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_VersionNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_EncName] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_PI_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__extSubsetDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_conditionalSect] = {
    .visible = true,
    .named = true,
  },
  [sym__markupdecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__DeclSep] = {
    .visible = false,
    .named = true,
  },
  [sym_elementdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_contentspec] = {
    .visible = true,
    .named = true,
  },
  [sym_Mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__cp] = {
    .visible = false,
    .named = true,
  },
  [sym__choice] = {
    .visible = false,
    .named = true,
  },
  [sym_AttlistDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_AttDef] = {
    .visible = true,
    .named = true,
  },
  [sym__AttType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__EnumeratedType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_NotationType] = {
    .visible = true,
    .named = true,
  },
  [sym_Enumeration] = {
    .visible = true,
    .named = true,
  },
  [sym_DefaultDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityDecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_GEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_EntityValue] = {
    .visible = true,
    .named = true,
  },
  [sym_NDataDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_NotationDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEReference] = {
    .visible = true,
    .named = true,
  },
  [sym__Reference] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_EntityRef] = {
    .visible = true,
    .named = true,
  },
  [sym_CharRef] = {
    .visible = true,
    .named = true,
  },
  [sym_AttValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternalID] = {
    .visible = true,
    .named = true,
  },
  [sym_PublicID] = {
    .visible = true,
    .named = true,
  },
  [sym_SystemLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_PubidLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_XMLDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__VersionInfo] = {
    .visible = false,
    .named = true,
  },
  [sym__EncodingDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_PI] = {
    .visible = true,
    .named = true,
  },
  [sym__Eq] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttlistDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NotationType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Enumeration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_PITarget] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_PITarget,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 62,
  [71] = 12,
  [72] = 72,
  [73] = 12,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 65,
  [82] = 82,
  [83] = 83,
  [84] = 62,
  [85] = 85,
  [86] = 62,
  [87] = 87,
  [88] = 65,
  [89] = 59,
  [90] = 90,
  [91] = 91,
  [92] = 59,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 277,
  [286] = 284,
  [287] = 282,
  [288] = 277,
  [289] = 284,
  [290] = 282,
  [291] = 284,
  [292] = 282,
  [293] = 260,
  [294] = 231,
  [295] = 235,
  [296] = 237,
  [297] = 260,
  [298] = 231,
  [299] = 235,
  [300] = 237,
  [301] = 231,
  [302] = 235,
  [303] = 237,
};

static inline bool aux_sym_EntityValue_token1_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < ':'
        ? c == 0
        : (c <= ':' || c == '_'))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : c <= 893)))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : c <= 983039)))));
}

static inline bool aux_sym_EntityValue_token1_character_set_2(int32_t c) {
  return (c < 8204
    ? (c < 216
      ? (c < '_'
        ? c == ':'
        : (c <= '_' || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 895
        ? (c >= 248 && c <= 893)
        : c <= 8191)))
    : (c <= 8205 || (c < 12289
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : c <= 12271)
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : c <= 983039)))));
}

static inline bool sym_Name_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < '_'
        ? (c < 'A'
          ? c == ':'
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 767 || (c >= 880 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_Name_character_set_2(int32_t c) {
  return (c < 8255
    ? (c < 216
      ? (c < 183
        ? c == ':'
        : (c <= 183 || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 895
        ? (c >= 248 && c <= 893)
        : (c <= 8191 || (c >= 8204 && c <= 8205)))))
    : (c <= 8256 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
        : c <= 983039)))));
}

static inline bool sym_Nmtoken_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? (c >= '-' && c <= '.')
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_Nmtoken_character_set_2(int32_t c) {
  return (c < 895
    ? (c < 'g'
      ? (c < 'G'
        ? (c < ':'
          ? c == '-'
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_Nmtoken_character_set_3(int32_t c) {
  return (c < 895
    ? (c < 'g'
      ? (c < 'G'
        ? (c < ':'
          ? (c >= '-' && c <= '.')
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_Nmtoken_character_set_4(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < ':'
          ? (c >= '-' && c <= '.')
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool aux_sym_PubidLiteral_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_PubidLiteral_token2_character_set_1(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(81);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(70);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(70);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '?') ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '?') ADVANCE(13);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'Q') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'X') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 42:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(143);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(92);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(64);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(123);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '?') ADVANCE(139);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(60);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(96);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(110);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(106);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(62);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'Y') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(116);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'Y') ADVANCE(64);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(94);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(115);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(114);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(62);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(102);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(64);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(99);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(108);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(100);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(83);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'G') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'Y') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 58:
      if (lookahead == 'Y') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATTLIST);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ELEMENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 44},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 44},
  [41] = {.lex_state = 44},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 44},
  [44] = {.lex_state = 44},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 44},
  [47] = {.lex_state = 44},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 44},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 44},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 44},
  [91] = {.lex_state = 44},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 44},
  [94] = {.lex_state = 44},
  [95] = {.lex_state = 44},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 44},
  [103] = {.lex_state = 44},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 44},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 44},
  [121] = {.lex_state = 44},
  [122] = {.lex_state = 44},
  [123] = {.lex_state = 44},
  [124] = {.lex_state = 44},
  [125] = {.lex_state = 44},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 44},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 44},
  [133] = {.lex_state = 44},
  [134] = {.lex_state = 44},
  [135] = {.lex_state = 44},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 137},
  [163] = {.lex_state = 44},
  [164] = {.lex_state = 44},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 135},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 133},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 44},
  [174] = {.lex_state = 131},
  [175] = {.lex_state = 44},
  [176] = {.lex_state = 44},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 44},
  [179] = {.lex_state = 44},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 44},
  [182] = {.lex_state = 44},
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 44},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 44},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 44},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 44},
  [193] = {.lex_state = 44},
  [194] = {.lex_state = 44},
  [195] = {.lex_state = 44},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 44},
  [198] = {.lex_state = 44},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 44},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 44},
  [204] = {.lex_state = 44},
  [205] = {.lex_state = 44},
  [206] = {.lex_state = 44},
  [207] = {.lex_state = 44},
  [208] = {.lex_state = 44},
  [209] = {.lex_state = 44},
  [210] = {.lex_state = 44},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 44},
  [213] = {.lex_state = 44},
  [214] = {.lex_state = 44},
  [215] = {.lex_state = 44},
  [216] = {.lex_state = 44},
  [217] = {.lex_state = 44},
  [218] = {.lex_state = 44},
  [219] = {.lex_state = 44},
  [220] = {.lex_state = 44},
  [221] = {.lex_state = 44},
  [222] = {.lex_state = 44},
  [223] = {.lex_state = 44},
  [224] = {.lex_state = 44},
  [225] = {.lex_state = 44},
  [226] = {.lex_state = 44},
  [227] = {.lex_state = 44},
  [228] = {.lex_state = 44},
  [229] = {.lex_state = 44},
  [230] = {.lex_state = 44},
  [231] = {.lex_state = 44},
  [232] = {.lex_state = 44},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 44},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 44},
  [237] = {.lex_state = 41},
  [238] = {.lex_state = 44},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 44},
  [241] = {.lex_state = 44},
  [242] = {.lex_state = 44},
  [243] = {.lex_state = 44},
  [244] = {.lex_state = 44},
  [245] = {.lex_state = 44},
  [246] = {.lex_state = 44},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 44},
  [249] = {.lex_state = 44},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 44},
  [252] = {.lex_state = 44},
  [253] = {.lex_state = 44},
  [254] = {.lex_state = 44},
  [255] = {.lex_state = 42},
  [256] = {.lex_state = 39},
  [257] = {.lex_state = 44},
  [258] = {.lex_state = 42},
  [259] = {.lex_state = 44},
  [260] = {.lex_state = 44},
  [261] = {.lex_state = 44},
  [262] = {.lex_state = 44},
  [263] = {.lex_state = 143},
  [264] = {.lex_state = 44},
  [265] = {.lex_state = 44},
  [266] = {.lex_state = 44},
  [267] = {.lex_state = 44},
  [268] = {.lex_state = 44},
  [269] = {.lex_state = 44},
  [270] = {.lex_state = 44},
  [271] = {.lex_state = 44},
  [272] = {.lex_state = 44},
  [273] = {.lex_state = 44},
  [274] = {.lex_state = 44},
  [275] = {.lex_state = 44},
  [276] = {.lex_state = 44},
  [277] = {.lex_state = 44},
  [278] = {.lex_state = 44},
  [279] = {.lex_state = 44},
  [280] = {.lex_state = 44},
  [281] = {.lex_state = 44},
  [282] = {.lex_state = 44},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 44},
  [285] = {.lex_state = 44},
  [286] = {.lex_state = 44},
  [287] = {.lex_state = 44},
  [288] = {.lex_state = 44},
  [289] = {.lex_state = 44},
  [290] = {.lex_state = 44},
  [291] = {.lex_state = 44},
  [292] = {.lex_state = 44},
  [293] = {.lex_state = 44},
  [294] = {.lex_state = 44},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 44},
  [298] = {.lex_state = 44},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 41},
  [301] = {.lex_state = 44},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 41},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_ELEMENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EMPTY] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDPCDATA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATTLIST] = ACTIONS(1),
    [sym_StringType] = ACTIONS(1),
    [sym_TokenizedType] = ACTIONS(1),
    [anon_sym_NOTATION] = ACTIONS(1),
    [anon_sym_POUNDREQUIRED] = ACTIONS(1),
    [anon_sym_POUNDIMPLIED] = ACTIONS(1),
    [anon_sym_POUNDFIXED] = ACTIONS(1),
    [anon_sym_ENTITY] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token2] = ACTIONS(1),
    [anon_sym_NDATA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__Char] = ACTIONS(1),
    [sym__S] = ACTIONS(1),
    [sym_Nmtoken] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_POUND] = ACTIONS(1),
    [aux_sym_CharRef_token1] = ACTIONS(1),
    [anon_sym_AMP_POUNDx] = ACTIONS(1),
    [aux_sym_CharRef_token2] = ACTIONS(1),
    [aux_sym_AttValue_token1] = ACTIONS(1),
    [aux_sym_AttValue_token2] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_PUBLIC] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(283),
    [sym__extSubsetDecl] = STATE(7),
    [sym_conditionalSect] = STATE(7),
    [sym__markupdecl] = STATE(7),
    [sym__DeclSep] = STATE(7),
    [sym_elementdecl] = STATE(38),
    [sym_AttlistDecl] = STATE(38),
    [sym__EntityDecl] = STATE(38),
    [sym_GEDecl] = STATE(52),
    [sym_PEDecl] = STATE(52),
    [sym_NotationDecl] = STATE(38),
    [sym_PEReference] = STATE(7),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(38),
    [aux_sym_document_repeat1] = STATE(7),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [sym__S] = ACTIONS(9),
    [anon_sym_LT_QMARK] = ACTIONS(11),
    [sym_Comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(20), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(26), 1,
      sym__S,
    ACTIONS(29), 1,
      anon_sym_LT_QMARK,
    ACTIONS(32), 1,
      sym_Comment,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [42] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(5), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [83] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(41), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(43), 1,
      sym__S,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [124] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym__S,
    ACTIONS(45), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [165] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(49), 1,
      sym__S,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(4), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [206] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym__S,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [247] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym__S,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [288] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(45), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(53), 1,
      sym__S,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(8), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [329] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym__S,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [370] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(57), 1,
      sym__S,
    STATE(52), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(38), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(10), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [408] = 2,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
      anon_sym_LT_QMARK,
      sym_Comment,
  [430] = 8,
    ACTIONS(63), 1,
      anon_sym_PERCENT,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(71), 1,
      anon_sym_AMP,
    ACTIONS(74), 1,
      anon_sym_AMP_POUND,
    ACTIONS(77), 1,
      anon_sym_AMP_POUNDx,
    STATE(59), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [458] = 8,
    ACTIONS(80), 1,
      anon_sym_PERCENT,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(88), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_AMP_POUND,
    ACTIONS(94), 1,
      anon_sym_AMP_POUNDx,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [486] = 8,
    ACTIONS(97), 1,
      anon_sym_PERCENT,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(103), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      anon_sym_AMP_POUND,
    ACTIONS(107), 1,
      anon_sym_AMP_POUNDx,
    STATE(59), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [514] = 8,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(113), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_AMP_POUND,
    ACTIONS(117), 1,
      anon_sym_AMP_POUNDx,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [542] = 8,
    ACTIONS(109), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_AMP_POUND,
    ACTIONS(117), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      aux_sym_EntityValue_token2,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [570] = 8,
    ACTIONS(97), 1,
      anon_sym_PERCENT,
    ACTIONS(103), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      anon_sym_AMP_POUND,
    ACTIONS(107), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym_EntityValue_token1,
    STATE(59), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [598] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_NOTATION,
    STATE(177), 1,
      sym__AttType,
    ACTIONS(127), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(175), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(179), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [623] = 7,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(139), 1,
      aux_sym_AttValue_token1,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(92), 2,
      sym_EntityRef,
      sym_CharRef,
  [647] = 7,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      anon_sym_AMP_POUND,
    ACTIONS(149), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(152), 1,
      aux_sym_AttValue_token2,
    STATE(21), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
  [671] = 7,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_AttValue_token1,
    STATE(20), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(92), 2,
      sym_EntityRef,
      sym_CharRef,
  [695] = 7,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(164), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(170), 1,
      aux_sym_AttValue_token1,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(92), 2,
      sym_EntityRef,
      sym_CharRef,
  [719] = 7,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_AMP_POUND,
    ACTIONS(177), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(179), 1,
      aux_sym_AttValue_token2,
    STATE(21), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
  [743] = 7,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_AMP_POUND,
    ACTIONS(177), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(181), 1,
      aux_sym_AttValue_token2,
    STATE(24), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
  [767] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym__choice,
    STATE(200), 1,
      sym_contentspec,
    ACTIONS(183), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(199), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [789] = 2,
    ACTIONS(189), 1,
      anon_sym_LT_BANG,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [802] = 2,
    ACTIONS(193), 1,
      anon_sym_LT_BANG,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [815] = 2,
    ACTIONS(197), 1,
      anon_sym_LT_BANG,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [828] = 1,
    ACTIONS(199), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [839] = 2,
    ACTIONS(203), 1,
      anon_sym_LT_BANG,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [852] = 2,
    ACTIONS(207), 1,
      anon_sym_LT_BANG,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [865] = 6,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      sym__S,
    STATE(95), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [886] = 2,
    ACTIONS(221), 1,
      anon_sym_LT_BANG,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [899] = 2,
    ACTIONS(225), 1,
      anon_sym_LT_BANG,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [912] = 2,
    ACTIONS(229), 1,
      anon_sym_LT_BANG,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [925] = 2,
    ACTIONS(233), 1,
      anon_sym_LT_BANG,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [938] = 2,
    ACTIONS(237), 1,
      anon_sym_LT_BANG,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [951] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [964] = 1,
    ACTIONS(243), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [975] = 2,
    ACTIONS(247), 1,
      anon_sym_LT_BANG,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [988] = 2,
    ACTIONS(251), 1,
      anon_sym_LT_BANG,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1001] = 2,
    ACTIONS(255), 1,
      anon_sym_LT_BANG,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1014] = 2,
    ACTIONS(259), 1,
      anon_sym_LT_BANG,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1027] = 8,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(267), 1,
      sym__S,
    STATE(33), 1,
      sym_PEReference,
    STATE(58), 1,
      sym__choice,
    STATE(93), 1,
      sym__cp,
  [1052] = 6,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      sym__S,
    STATE(102), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1073] = 2,
    ACTIONS(275), 1,
      anon_sym_LT_BANG,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1086] = 2,
    ACTIONS(279), 1,
      anon_sym_LT_BANG,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1099] = 2,
    ACTIONS(283), 1,
      anon_sym_LT_BANG,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1112] = 1,
    ACTIONS(285), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1123] = 2,
    ACTIONS(289), 1,
      anon_sym_LT_BANG,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1136] = 2,
    ACTIONS(293), 1,
      anon_sym_LT_BANG,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1149] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym__S,
    STATE(108), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1169] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      sym__S,
    STATE(100), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1189] = 6,
    ACTIONS(301), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    STATE(216), 1,
      sym_AttValue,
    STATE(220), 1,
      sym_DefaultDecl,
    ACTIONS(299), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1209] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym__S,
    STATE(93), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1229] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_POUNDPCDATA,
    STATE(46), 1,
      sym_PEReference,
    STATE(58), 1,
      sym__choice,
    STATE(80), 1,
      sym__cp,
  [1251] = 2,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(215), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1263] = 2,
    ACTIONS(313), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(311), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1274] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1291] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1308] = 2,
    ACTIONS(317), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(315), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1319] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(321), 1,
      anon_sym_PUBLIC,
    STATE(229), 1,
      sym_PEReference,
    STATE(209), 2,
      sym_ExternalID,
      sym_PublicID,
  [1336] = 6,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_PUBLIC,
    STATE(142), 1,
      sym_ExternalID,
    STATE(219), 1,
      sym_EntityValue,
  [1355] = 2,
    ACTIONS(331), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(329), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1366] = 2,
    ACTIONS(313), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(311), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1377] = 2,
    ACTIONS(335), 1,
      anon_sym_LT_BANG,
    ACTIONS(333), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1388] = 2,
    ACTIONS(331), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(329), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1399] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      sym_Name,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    STATE(76), 1,
      aux_sym_NotationType_repeat1,
    STATE(187), 1,
      sym_PEReference,
  [1418] = 2,
    ACTIONS(317), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(315), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1429] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1440] = 5,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_PUBLIC,
    STATE(172), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1457] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1468] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(343), 1,
      sym_Name,
    STATE(91), 1,
      aux_sym_NotationType_repeat1,
    STATE(167), 1,
      sym_PEReference,
  [1487] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1504] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(345), 1,
      sym_Name,
    STATE(91), 1,
      aux_sym_NotationType_repeat1,
    STATE(181), 1,
      sym_PEReference,
  [1523] = 2,
    ACTIONS(349), 1,
      anon_sym_LT_BANG,
    ACTIONS(347), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1534] = 2,
    ACTIONS(353), 1,
      anon_sym_LT_BANG,
    ACTIONS(351), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1545] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(345), 1,
      sym_Name,
    STATE(74), 1,
      aux_sym_NotationType_repeat1,
    STATE(181), 1,
      sym_PEReference,
  [1564] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1578] = 2,
    ACTIONS(331), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(329), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1588] = 4,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      sym__S,
    STATE(82), 1,
      aux_sym__choice_repeat1,
    ACTIONS(361), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1602] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      sym__S,
    STATE(157), 1,
      sym_PEReference,
    ACTIONS(369), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1616] = 2,
    ACTIONS(317), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(315), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1626] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1640] = 2,
    ACTIONS(317), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(315), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1650] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(82), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1664] = 2,
    ACTIONS(331), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(329), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1674] = 2,
    ACTIONS(313), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(311), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1684] = 2,
    ACTIONS(375), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(377), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1694] = 4,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    ACTIONS(384), 1,
      sym__S,
    STATE(91), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(379), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1708] = 2,
    ACTIONS(313), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(311), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1718] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1732] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      sym_Name,
    ACTIONS(391), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_PEReference,
  [1745] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      sym__S,
    STATE(113), 1,
      aux_sym_Mixed_repeat1,
  [1758] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      sym__S,
    STATE(95), 1,
      aux_sym_Mixed_repeat1,
  [1771] = 3,
    ACTIONS(397), 1,
      anon_sym_GT,
    ACTIONS(399), 1,
      sym__S,
    STATE(121), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1782] = 4,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      sym__S,
    STATE(114), 1,
      aux_sym_Enumeration_repeat1,
  [1795] = 3,
    ACTIONS(407), 1,
      anon_sym_GT,
    ACTIONS(409), 1,
      sym__S,
    STATE(99), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1806] = 1,
    ACTIONS(412), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1813] = 1,
    ACTIONS(379), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1820] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(395), 1,
      sym__S,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_Mixed_repeat1,
  [1833] = 1,
    ACTIONS(416), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1840] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      sym_Name,
    ACTIONS(418), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_PEReference,
  [1853] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      sym_Name,
    ACTIONS(422), 1,
      sym__S,
    STATE(148), 1,
      sym_PEReference,
  [1866] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      sym__S,
    STATE(102), 1,
      aux_sym_Mixed_repeat1,
  [1879] = 1,
    ACTIONS(424), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1886] = 1,
    ACTIONS(364), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1893] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(426), 1,
      sym_Name,
    ACTIONS(428), 1,
      sym__S,
    STATE(124), 1,
      sym_PEReference,
  [1906] = 2,
    ACTIONS(430), 1,
      sym__S,
    ACTIONS(379), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1915] = 2,
    ACTIONS(435), 1,
      sym__S,
    ACTIONS(433), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1924] = 1,
    ACTIONS(438), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1931] = 4,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      sym__S,
    STATE(113), 1,
      aux_sym_Mixed_repeat1,
  [1944] = 4,
    ACTIONS(448), 1,
      anon_sym_PIPE,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      sym__S,
    STATE(114), 1,
      aux_sym_Enumeration_repeat1,
  [1957] = 4,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      sym__S,
    STATE(98), 1,
      aux_sym_Enumeration_repeat1,
  [1970] = 4,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      sym__S,
    STATE(114), 1,
      aux_sym_Enumeration_repeat1,
  [1983] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(460), 1,
      sym_Name,
    ACTIONS(462), 1,
      sym__S,
    STATE(69), 1,
      sym_PEReference,
  [1996] = 4,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      sym__S,
    STATE(116), 1,
      aux_sym_Enumeration_repeat1,
  [2009] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    STATE(173), 1,
      sym_PEReference,
    ACTIONS(468), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2020] = 4,
    ACTIONS(470), 1,
      anon_sym_ELEMENT,
    ACTIONS(472), 1,
      anon_sym_ATTLIST,
    ACTIONS(474), 1,
      anon_sym_NOTATION,
    ACTIONS(476), 1,
      anon_sym_ENTITY,
  [2033] = 3,
    ACTIONS(391), 1,
      anon_sym_GT,
    ACTIONS(478), 1,
      sym__S,
    STATE(99), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2044] = 1,
    ACTIONS(480), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2050] = 3,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_SystemLiteral,
  [2060] = 2,
    ACTIONS(488), 1,
      sym__S,
    ACTIONS(486), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2068] = 3,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym_PubidLiteral,
  [2078] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(495), 1,
      sym_Name,
    STATE(259), 1,
      sym_PEReference,
  [2088] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(497), 1,
      sym_Name,
    STATE(214), 1,
      sym_PEReference,
  [2098] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(499), 1,
      sym_Name,
    STATE(147), 1,
      sym_PEReference,
  [2108] = 1,
    ACTIONS(486), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2114] = 2,
    ACTIONS(503), 1,
      anon_sym_STAR,
    ACTIONS(501), 2,
      anon_sym_GT,
      sym__S,
  [2122] = 2,
    ACTIONS(507), 1,
      sym__S,
    ACTIONS(505), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2130] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(509), 1,
      sym_Name,
    STATE(97), 1,
      sym_PEReference,
  [2140] = 3,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym_PubidLiteral,
  [2150] = 3,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym_PubidLiteral,
  [2160] = 3,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      sym_SystemLiteral,
  [2170] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      sym_Name,
    STATE(236), 1,
      sym_PEReference,
  [2180] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(511), 1,
      sym_Name,
    STATE(257), 1,
      sym_PEReference,
  [2190] = 3,
    ACTIONS(513), 1,
      sym_Name,
    ACTIONS(515), 1,
      anon_sym_PERCENT,
    STATE(253), 1,
      sym_PEReference,
  [2200] = 3,
    ACTIONS(517), 1,
      sym__S,
    ACTIONS(519), 1,
      anon_sym_QMARK_GT,
    STATE(190), 1,
      sym__EncodingDecl,
  [2210] = 1,
    ACTIONS(521), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2216] = 2,
    ACTIONS(525), 1,
      sym__S,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2224] = 3,
    ACTIONS(527), 1,
      anon_sym_GT,
    ACTIONS(529), 1,
      sym__S,
    STATE(197), 1,
      sym_NDataDecl,
  [2234] = 3,
    ACTIONS(531), 1,
      sym__S,
    ACTIONS(533), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym__Eq,
  [2244] = 1,
    ACTIONS(535), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2250] = 2,
    ACTIONS(539), 1,
      anon_sym_STAR,
    ACTIONS(537), 2,
      anon_sym_GT,
      sym__S,
  [2258] = 1,
    ACTIONS(541), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2264] = 2,
    ACTIONS(543), 1,
      sym__S,
    ACTIONS(541), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2272] = 2,
    ACTIONS(546), 1,
      sym__S,
    ACTIONS(443), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2280] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(426), 1,
      sym_Name,
    STATE(124), 1,
      sym_PEReference,
  [2290] = 1,
    ACTIONS(451), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2296] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    STATE(79), 1,
      sym_PEReference,
  [2306] = 3,
    ACTIONS(531), 1,
      sym__S,
    ACTIONS(533), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym__Eq,
  [2316] = 3,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_AttValue,
  [2326] = 2,
    ACTIONS(551), 1,
      anon_sym_GT,
    ACTIONS(553), 1,
      sym__S,
  [2333] = 1,
    ACTIONS(555), 2,
      anon_sym_GT,
      sym__S,
  [2338] = 2,
    ACTIONS(557), 1,
      sym_Name,
    ACTIONS(559), 1,
      anon_sym_xml,
  [2345] = 2,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      sym__S,
  [2352] = 1,
    ACTIONS(565), 2,
      anon_sym_GT,
      sym__S,
  [2357] = 1,
    ACTIONS(567), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2362] = 1,
    ACTIONS(551), 2,
      anon_sym_GT,
      sym__S,
  [2367] = 2,
    ACTIONS(569), 1,
      sym__S,
    ACTIONS(571), 1,
      anon_sym_QMARK_GT,
  [2374] = 2,
    ACTIONS(573), 1,
      anon_sym_SQUOTE,
    ACTIONS(575), 1,
      aux_sym_PubidLiteral_token2,
  [2381] = 2,
    ACTIONS(577), 1,
      sym__S,
    STATE(139), 1,
      sym__VersionInfo,
  [2388] = 1,
    ACTIONS(579), 2,
      anon_sym_GT,
      sym__S,
  [2393] = 1,
    ACTIONS(581), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2398] = 1,
    ACTIONS(583), 2,
      anon_sym_GT,
      sym__S,
  [2403] = 2,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      sym__S,
  [2410] = 2,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(589), 1,
      aux_sym_PubidLiteral_token1,
  [2417] = 1,
    ACTIONS(591), 2,
      anon_sym_GT,
      sym__S,
  [2422] = 1,
    ACTIONS(537), 2,
      anon_sym_GT,
      sym__S,
  [2427] = 2,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      aux_sym_SystemLiteral_token2,
  [2434] = 2,
    ACTIONS(597), 1,
      anon_sym_GT,
    ACTIONS(599), 1,
      sym__S,
  [2441] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACK,
    ACTIONS(603), 1,
      sym__S,
  [2448] = 2,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      aux_sym_SystemLiteral_token1,
  [2455] = 1,
    ACTIONS(607), 2,
      anon_sym_GT,
      sym__S,
  [2460] = 2,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(609), 1,
      anon_sym_PIPE,
  [2467] = 2,
    ACTIONS(611), 1,
      anon_sym_GT,
    ACTIONS(613), 1,
      sym__S,
  [2474] = 1,
    ACTIONS(615), 2,
      anon_sym_GT,
      sym__S,
  [2479] = 1,
    ACTIONS(617), 2,
      anon_sym_GT,
      sym__S,
  [2484] = 2,
    ACTIONS(619), 1,
      sym__S,
    ACTIONS(621), 1,
      sym_Nmtoken,
  [2491] = 2,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      sym__S,
  [2498] = 2,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(609), 1,
      anon_sym_PIPE,
  [2505] = 1,
    ACTIONS(627), 2,
      anon_sym_GT,
      sym__S,
  [2510] = 2,
    ACTIONS(629), 1,
      sym_Name,
    ACTIONS(631), 1,
      sym__S,
  [2517] = 1,
    ACTIONS(633), 2,
      anon_sym_GT,
      sym__S,
  [2522] = 1,
    ACTIONS(635), 2,
      anon_sym_GT,
      sym__S,
  [2527] = 2,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      sym__S,
  [2534] = 1,
    ACTIONS(641), 2,
      anon_sym_GT,
      sym__S,
  [2539] = 2,
    ACTIONS(643), 1,
      anon_sym_QMARK_GT,
    ACTIONS(645), 1,
      anon_sym_encoding,
  [2546] = 2,
    ACTIONS(643), 1,
      anon_sym_QMARK_GT,
    ACTIONS(647), 1,
      sym__S,
  [2553] = 1,
    ACTIONS(649), 2,
      anon_sym_GT,
      sym__S,
  [2558] = 2,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [2565] = 1,
    ACTIONS(655), 2,
      anon_sym_GT,
      sym__S,
  [2570] = 2,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [2577] = 1,
    ACTIONS(661), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2582] = 1,
    ACTIONS(663), 2,
      anon_sym_GT,
      sym__S,
  [2587] = 2,
    ACTIONS(665), 1,
      anon_sym_GT,
    ACTIONS(667), 1,
      sym__S,
  [2594] = 2,
    ACTIONS(665), 1,
      anon_sym_GT,
    ACTIONS(669), 1,
      anon_sym_NDATA,
  [2601] = 1,
    ACTIONS(671), 2,
      anon_sym_GT,
      sym__S,
  [2606] = 2,
    ACTIONS(673), 1,
      anon_sym_GT,
    ACTIONS(675), 1,
      sym__S,
  [2613] = 1,
    ACTIONS(677), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2618] = 2,
    ACTIONS(679), 1,
      sym__S,
    ACTIONS(681), 1,
      sym_Nmtoken,
  [2625] = 2,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 1,
      anon_sym_PIPE,
  [2632] = 1,
    ACTIONS(683), 2,
      anon_sym_GT,
      sym__S,
  [2637] = 1,
    ACTIONS(685), 2,
      anon_sym_GT,
      sym__S,
  [2642] = 1,
    ACTIONS(687), 2,
      anon_sym_GT,
      sym__S,
  [2647] = 1,
    ACTIONS(689), 2,
      anon_sym_GT,
      sym__S,
  [2652] = 1,
    ACTIONS(691), 2,
      anon_sym_GT,
      sym__S,
  [2657] = 2,
    ACTIONS(693), 1,
      anon_sym_GT,
    ACTIONS(695), 1,
      sym__S,
  [2664] = 2,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [2671] = 2,
    ACTIONS(701), 1,
      sym__S,
    ACTIONS(703), 1,
      sym_Nmtoken,
  [2678] = 1,
    ACTIONS(705), 2,
      anon_sym_GT,
      sym__S,
  [2683] = 2,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 1,
      anon_sym_PIPE,
  [2690] = 1,
    ACTIONS(707), 2,
      anon_sym_GT,
      sym__S,
  [2695] = 1,
    ACTIONS(709), 2,
      anon_sym_GT,
      sym__S,
  [2700] = 1,
    ACTIONS(711), 2,
      anon_sym_GT,
      sym__S,
  [2705] = 1,
    ACTIONS(713), 2,
      anon_sym_GT,
      sym__S,
  [2710] = 1,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2715] = 2,
    ACTIONS(527), 1,
      anon_sym_GT,
    ACTIONS(715), 1,
      sym__S,
  [2722] = 1,
    ACTIONS(717), 2,
      anon_sym_GT,
      sym__S,
  [2727] = 1,
    ACTIONS(719), 2,
      anon_sym_GT,
      sym__S,
  [2732] = 1,
    ACTIONS(721), 1,
      sym__S,
  [2736] = 1,
    ACTIONS(723), 1,
      sym_VersionNum,
  [2740] = 1,
    ACTIONS(725), 1,
      sym__S,
  [2744] = 1,
    ACTIONS(727), 1,
      sym_VersionNum,
  [2748] = 1,
    ACTIONS(729), 1,
      sym__S,
  [2752] = 1,
    ACTIONS(731), 1,
      anon_sym_GT,
  [2756] = 1,
    ACTIONS(733), 1,
      anon_sym_GT,
  [2760] = 1,
    ACTIONS(735), 1,
      sym__S,
  [2764] = 1,
    ACTIONS(737), 1,
      anon_sym_STAR,
  [2768] = 1,
    ACTIONS(739), 1,
      sym_Name,
  [2772] = 1,
    ACTIONS(741), 1,
      sym__S,
  [2776] = 1,
    ACTIONS(681), 1,
      sym_Nmtoken,
  [2780] = 1,
    ACTIONS(743), 1,
      sym__S,
  [2784] = 1,
    ACTIONS(745), 1,
      aux_sym_CharRef_token1,
  [2788] = 1,
    ACTIONS(747), 1,
      sym__S,
  [2792] = 1,
    ACTIONS(745), 1,
      aux_sym_CharRef_token2,
  [2796] = 1,
    ACTIONS(665), 1,
      anon_sym_GT,
  [2800] = 1,
    ACTIONS(749), 1,
      anon_sym_QMARK_GT,
  [2804] = 1,
    ACTIONS(751), 1,
      anon_sym_GT,
  [2808] = 1,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
  [2812] = 1,
    ACTIONS(755), 1,
      anon_sym_EQ,
  [2816] = 1,
    ACTIONS(757), 1,
      sym_Name,
  [2820] = 1,
    ACTIONS(759), 1,
      anon_sym_SQUOTE,
  [2824] = 1,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
  [2828] = 1,
    ACTIONS(761), 1,
      anon_sym_SQUOTE,
  [2832] = 1,
    ACTIONS(763), 1,
      sym_Nmtoken,
  [2836] = 1,
    ACTIONS(651), 1,
      anon_sym_PIPE,
  [2840] = 1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
  [2844] = 1,
    ACTIONS(765), 1,
      anon_sym_QMARK_GT,
  [2848] = 1,
    ACTIONS(767), 1,
      anon_sym_PIPE,
  [2852] = 1,
    ACTIONS(753), 1,
      anon_sym_SQUOTE,
  [2856] = 1,
    ACTIONS(769), 1,
      sym__S,
  [2860] = 1,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
  [2864] = 1,
    ACTIONS(773), 1,
      sym_EncName,
  [2868] = 1,
    ACTIONS(775), 1,
      sym_Nmtoken,
  [2872] = 1,
    ACTIONS(777), 1,
      sym__S,
  [2876] = 1,
    ACTIONS(779), 1,
      sym_EncName,
  [2880] = 1,
    ACTIONS(781), 1,
      sym__S,
  [2884] = 1,
    ACTIONS(629), 1,
      sym_Name,
  [2888] = 1,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
  [2892] = 1,
    ACTIONS(785), 1,
      anon_sym_version,
  [2896] = 1,
    ACTIONS(787), 1,
      aux_sym_PI_token1,
  [2900] = 1,
    ACTIONS(789), 1,
      sym__S,
  [2904] = 1,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [2908] = 1,
    ACTIONS(609), 1,
      anon_sym_PIPE,
  [2912] = 1,
    ACTIONS(539), 1,
      anon_sym_STAR,
  [2916] = 1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [2920] = 1,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
  [2924] = 1,
    ACTIONS(601), 1,
      anon_sym_LBRACK,
  [2928] = 1,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
  [2932] = 1,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [2936] = 1,
    ACTIONS(795), 1,
      anon_sym_GT,
  [2940] = 1,
    ACTIONS(797), 1,
      sym_Name,
  [2944] = 1,
    ACTIONS(799), 1,
      sym__S,
  [2948] = 1,
    ACTIONS(553), 1,
      sym__S,
  [2952] = 1,
    ACTIONS(801), 1,
      anon_sym_SEMI,
  [2956] = 1,
    ACTIONS(803), 1,
      sym__S,
  [2960] = 1,
    ACTIONS(805), 1,
      sym__S,
  [2964] = 1,
    ACTIONS(807), 1,
      sym__S,
  [2968] = 1,
    ACTIONS(809), 1,
      sym__S,
  [2972] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [2976] = 1,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
  [2980] = 1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [2984] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [2988] = 1,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [2992] = 1,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [2996] = 1,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [3000] = 1,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [3004] = 1,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [3008] = 1,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [3012] = 1,
    ACTIONS(831), 1,
      anon_sym_SEMI,
  [3016] = 1,
    ACTIONS(833), 1,
      sym_Name,
  [3020] = 1,
    ACTIONS(835), 1,
      sym_Name,
  [3024] = 1,
    ACTIONS(837), 1,
      aux_sym_CharRef_token1,
  [3028] = 1,
    ACTIONS(837), 1,
      aux_sym_CharRef_token2,
  [3032] = 1,
    ACTIONS(839), 1,
      sym_Name,
  [3036] = 1,
    ACTIONS(841), 1,
      sym_Name,
  [3040] = 1,
    ACTIONS(843), 1,
      aux_sym_CharRef_token1,
  [3044] = 1,
    ACTIONS(843), 1,
      aux_sym_CharRef_token2,
  [3048] = 1,
    ACTIONS(845), 1,
      sym_Name,
  [3052] = 1,
    ACTIONS(847), 1,
      aux_sym_CharRef_token1,
  [3056] = 1,
    ACTIONS(847), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 623,
  [SMALL_STATE(21)] = 647,
  [SMALL_STATE(22)] = 671,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 767,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 802,
  [SMALL_STATE(29)] = 815,
  [SMALL_STATE(30)] = 828,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 865,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 912,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 938,
  [SMALL_STATE(39)] = 951,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 988,
  [SMALL_STATE(43)] = 1001,
  [SMALL_STATE(44)] = 1014,
  [SMALL_STATE(45)] = 1027,
  [SMALL_STATE(46)] = 1052,
  [SMALL_STATE(47)] = 1073,
  [SMALL_STATE(48)] = 1086,
  [SMALL_STATE(49)] = 1099,
  [SMALL_STATE(50)] = 1112,
  [SMALL_STATE(51)] = 1123,
  [SMALL_STATE(52)] = 1136,
  [SMALL_STATE(53)] = 1149,
  [SMALL_STATE(54)] = 1169,
  [SMALL_STATE(55)] = 1189,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1229,
  [SMALL_STATE(58)] = 1251,
  [SMALL_STATE(59)] = 1263,
  [SMALL_STATE(60)] = 1274,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1308,
  [SMALL_STATE(63)] = 1319,
  [SMALL_STATE(64)] = 1336,
  [SMALL_STATE(65)] = 1355,
  [SMALL_STATE(66)] = 1366,
  [SMALL_STATE(67)] = 1377,
  [SMALL_STATE(68)] = 1388,
  [SMALL_STATE(69)] = 1399,
  [SMALL_STATE(70)] = 1418,
  [SMALL_STATE(71)] = 1429,
  [SMALL_STATE(72)] = 1440,
  [SMALL_STATE(73)] = 1457,
  [SMALL_STATE(74)] = 1468,
  [SMALL_STATE(75)] = 1487,
  [SMALL_STATE(76)] = 1504,
  [SMALL_STATE(77)] = 1523,
  [SMALL_STATE(78)] = 1534,
  [SMALL_STATE(79)] = 1545,
  [SMALL_STATE(80)] = 1564,
  [SMALL_STATE(81)] = 1578,
  [SMALL_STATE(82)] = 1588,
  [SMALL_STATE(83)] = 1602,
  [SMALL_STATE(84)] = 1616,
  [SMALL_STATE(85)] = 1626,
  [SMALL_STATE(86)] = 1640,
  [SMALL_STATE(87)] = 1650,
  [SMALL_STATE(88)] = 1664,
  [SMALL_STATE(89)] = 1674,
  [SMALL_STATE(90)] = 1684,
  [SMALL_STATE(91)] = 1694,
  [SMALL_STATE(92)] = 1708,
  [SMALL_STATE(93)] = 1718,
  [SMALL_STATE(94)] = 1732,
  [SMALL_STATE(95)] = 1745,
  [SMALL_STATE(96)] = 1758,
  [SMALL_STATE(97)] = 1771,
  [SMALL_STATE(98)] = 1782,
  [SMALL_STATE(99)] = 1795,
  [SMALL_STATE(100)] = 1806,
  [SMALL_STATE(101)] = 1813,
  [SMALL_STATE(102)] = 1820,
  [SMALL_STATE(103)] = 1833,
  [SMALL_STATE(104)] = 1840,
  [SMALL_STATE(105)] = 1853,
  [SMALL_STATE(106)] = 1866,
  [SMALL_STATE(107)] = 1879,
  [SMALL_STATE(108)] = 1886,
  [SMALL_STATE(109)] = 1893,
  [SMALL_STATE(110)] = 1906,
  [SMALL_STATE(111)] = 1915,
  [SMALL_STATE(112)] = 1924,
  [SMALL_STATE(113)] = 1931,
  [SMALL_STATE(114)] = 1944,
  [SMALL_STATE(115)] = 1957,
  [SMALL_STATE(116)] = 1970,
  [SMALL_STATE(117)] = 1983,
  [SMALL_STATE(118)] = 1996,
  [SMALL_STATE(119)] = 2009,
  [SMALL_STATE(120)] = 2020,
  [SMALL_STATE(121)] = 2033,
  [SMALL_STATE(122)] = 2044,
  [SMALL_STATE(123)] = 2050,
  [SMALL_STATE(124)] = 2060,
  [SMALL_STATE(125)] = 2068,
  [SMALL_STATE(126)] = 2078,
  [SMALL_STATE(127)] = 2088,
  [SMALL_STATE(128)] = 2098,
  [SMALL_STATE(129)] = 2108,
  [SMALL_STATE(130)] = 2114,
  [SMALL_STATE(131)] = 2122,
  [SMALL_STATE(132)] = 2130,
  [SMALL_STATE(133)] = 2140,
  [SMALL_STATE(134)] = 2150,
  [SMALL_STATE(135)] = 2160,
  [SMALL_STATE(136)] = 2170,
  [SMALL_STATE(137)] = 2180,
  [SMALL_STATE(138)] = 2190,
  [SMALL_STATE(139)] = 2200,
  [SMALL_STATE(140)] = 2210,
  [SMALL_STATE(141)] = 2216,
  [SMALL_STATE(142)] = 2224,
  [SMALL_STATE(143)] = 2234,
  [SMALL_STATE(144)] = 2244,
  [SMALL_STATE(145)] = 2250,
  [SMALL_STATE(146)] = 2258,
  [SMALL_STATE(147)] = 2264,
  [SMALL_STATE(148)] = 2272,
  [SMALL_STATE(149)] = 2280,
  [SMALL_STATE(150)] = 2290,
  [SMALL_STATE(151)] = 2296,
  [SMALL_STATE(152)] = 2306,
  [SMALL_STATE(153)] = 2316,
  [SMALL_STATE(154)] = 2326,
  [SMALL_STATE(155)] = 2333,
  [SMALL_STATE(156)] = 2338,
  [SMALL_STATE(157)] = 2345,
  [SMALL_STATE(158)] = 2352,
  [SMALL_STATE(159)] = 2357,
  [SMALL_STATE(160)] = 2362,
  [SMALL_STATE(161)] = 2367,
  [SMALL_STATE(162)] = 2374,
  [SMALL_STATE(163)] = 2381,
  [SMALL_STATE(164)] = 2388,
  [SMALL_STATE(165)] = 2393,
  [SMALL_STATE(166)] = 2398,
  [SMALL_STATE(167)] = 2403,
  [SMALL_STATE(168)] = 2410,
  [SMALL_STATE(169)] = 2417,
  [SMALL_STATE(170)] = 2422,
  [SMALL_STATE(171)] = 2427,
  [SMALL_STATE(172)] = 2434,
  [SMALL_STATE(173)] = 2441,
  [SMALL_STATE(174)] = 2448,
  [SMALL_STATE(175)] = 2455,
  [SMALL_STATE(176)] = 2460,
  [SMALL_STATE(177)] = 2467,
  [SMALL_STATE(178)] = 2474,
  [SMALL_STATE(179)] = 2479,
  [SMALL_STATE(180)] = 2484,
  [SMALL_STATE(181)] = 2491,
  [SMALL_STATE(182)] = 2498,
  [SMALL_STATE(183)] = 2505,
  [SMALL_STATE(184)] = 2510,
  [SMALL_STATE(185)] = 2517,
  [SMALL_STATE(186)] = 2522,
  [SMALL_STATE(187)] = 2527,
  [SMALL_STATE(188)] = 2534,
  [SMALL_STATE(189)] = 2539,
  [SMALL_STATE(190)] = 2546,
  [SMALL_STATE(191)] = 2553,
  [SMALL_STATE(192)] = 2558,
  [SMALL_STATE(193)] = 2565,
  [SMALL_STATE(194)] = 2570,
  [SMALL_STATE(195)] = 2577,
  [SMALL_STATE(196)] = 2582,
  [SMALL_STATE(197)] = 2587,
  [SMALL_STATE(198)] = 2594,
  [SMALL_STATE(199)] = 2601,
  [SMALL_STATE(200)] = 2606,
  [SMALL_STATE(201)] = 2613,
  [SMALL_STATE(202)] = 2618,
  [SMALL_STATE(203)] = 2625,
  [SMALL_STATE(204)] = 2632,
  [SMALL_STATE(205)] = 2637,
  [SMALL_STATE(206)] = 2642,
  [SMALL_STATE(207)] = 2647,
  [SMALL_STATE(208)] = 2652,
  [SMALL_STATE(209)] = 2657,
  [SMALL_STATE(210)] = 2664,
  [SMALL_STATE(211)] = 2671,
  [SMALL_STATE(212)] = 2678,
  [SMALL_STATE(213)] = 2683,
  [SMALL_STATE(214)] = 2690,
  [SMALL_STATE(215)] = 2695,
  [SMALL_STATE(216)] = 2700,
  [SMALL_STATE(217)] = 2705,
  [SMALL_STATE(218)] = 2710,
  [SMALL_STATE(219)] = 2715,
  [SMALL_STATE(220)] = 2722,
  [SMALL_STATE(221)] = 2727,
  [SMALL_STATE(222)] = 2732,
  [SMALL_STATE(223)] = 2736,
  [SMALL_STATE(224)] = 2740,
  [SMALL_STATE(225)] = 2744,
  [SMALL_STATE(226)] = 2748,
  [SMALL_STATE(227)] = 2752,
  [SMALL_STATE(228)] = 2756,
  [SMALL_STATE(229)] = 2760,
  [SMALL_STATE(230)] = 2764,
  [SMALL_STATE(231)] = 2768,
  [SMALL_STATE(232)] = 2772,
  [SMALL_STATE(233)] = 2776,
  [SMALL_STATE(234)] = 2780,
  [SMALL_STATE(235)] = 2784,
  [SMALL_STATE(236)] = 2788,
  [SMALL_STATE(237)] = 2792,
  [SMALL_STATE(238)] = 2796,
  [SMALL_STATE(239)] = 2800,
  [SMALL_STATE(240)] = 2804,
  [SMALL_STATE(241)] = 2808,
  [SMALL_STATE(242)] = 2812,
  [SMALL_STATE(243)] = 2816,
  [SMALL_STATE(244)] = 2820,
  [SMALL_STATE(245)] = 2824,
  [SMALL_STATE(246)] = 2828,
  [SMALL_STATE(247)] = 2832,
  [SMALL_STATE(248)] = 2836,
  [SMALL_STATE(249)] = 2840,
  [SMALL_STATE(250)] = 2844,
  [SMALL_STATE(251)] = 2848,
  [SMALL_STATE(252)] = 2852,
  [SMALL_STATE(253)] = 2856,
  [SMALL_STATE(254)] = 2860,
  [SMALL_STATE(255)] = 2864,
  [SMALL_STATE(256)] = 2868,
  [SMALL_STATE(257)] = 2872,
  [SMALL_STATE(258)] = 2876,
  [SMALL_STATE(259)] = 2880,
  [SMALL_STATE(260)] = 2884,
  [SMALL_STATE(261)] = 2888,
  [SMALL_STATE(262)] = 2892,
  [SMALL_STATE(263)] = 2896,
  [SMALL_STATE(264)] = 2900,
  [SMALL_STATE(265)] = 2904,
  [SMALL_STATE(266)] = 2908,
  [SMALL_STATE(267)] = 2912,
  [SMALL_STATE(268)] = 2916,
  [SMALL_STATE(269)] = 2920,
  [SMALL_STATE(270)] = 2924,
  [SMALL_STATE(271)] = 2928,
  [SMALL_STATE(272)] = 2932,
  [SMALL_STATE(273)] = 2936,
  [SMALL_STATE(274)] = 2940,
  [SMALL_STATE(275)] = 2944,
  [SMALL_STATE(276)] = 2948,
  [SMALL_STATE(277)] = 2952,
  [SMALL_STATE(278)] = 2956,
  [SMALL_STATE(279)] = 2960,
  [SMALL_STATE(280)] = 2964,
  [SMALL_STATE(281)] = 2968,
  [SMALL_STATE(282)] = 2972,
  [SMALL_STATE(283)] = 2976,
  [SMALL_STATE(284)] = 2980,
  [SMALL_STATE(285)] = 2984,
  [SMALL_STATE(286)] = 2988,
  [SMALL_STATE(287)] = 2992,
  [SMALL_STATE(288)] = 2996,
  [SMALL_STATE(289)] = 3000,
  [SMALL_STATE(290)] = 3004,
  [SMALL_STATE(291)] = 3008,
  [SMALL_STATE(292)] = 3012,
  [SMALL_STATE(293)] = 3016,
  [SMALL_STATE(294)] = 3020,
  [SMALL_STATE(295)] = 3024,
  [SMALL_STATE(296)] = 3028,
  [SMALL_STATE(297)] = 3032,
  [SMALL_STATE(298)] = 3036,
  [SMALL_STATE(299)] = 3040,
  [SMALL_STATE(300)] = 3044,
  [SMALL_STATE(301)] = 3048,
  [SMALL_STATE(302)] = 3052,
  [SMALL_STATE(303)] = 3056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(260),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(274),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(293),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(231),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(235),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(237),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(297),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(294),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(295),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(296),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(301),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(302),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(303),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(298),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(299),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(300),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(23),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(53),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(159),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(111),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(251),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(136),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(112),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(101),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(105),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(266),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(211),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(248),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(146),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(144),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(129),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [813] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dtd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_Name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
