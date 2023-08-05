#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 308
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 62
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
  anon_sym_RBRACK = 6,
  anon_sym_RBRACK_GT = 7,
  anon_sym_LT_BANG = 8,
  anon_sym_ELEMENT = 9,
  anon_sym_GT = 10,
  anon_sym_EMPTY = 11,
  anon_sym_ANY = 12,
  anon_sym_LPAREN = 13,
  anon_sym_POUNDPCDATA = 14,
  anon_sym_PIPE = 15,
  anon_sym_RPAREN = 16,
  anon_sym_STAR = 17,
  anon_sym_QMARK = 18,
  anon_sym_PLUS = 19,
  anon_sym_COMMA = 20,
  anon_sym_ATTLIST = 21,
  sym_StringType = 22,
  sym_TokenizedType = 23,
  anon_sym_NOTATION = 24,
  anon_sym_POUNDREQUIRED = 25,
  anon_sym_POUNDIMPLIED = 26,
  anon_sym_POUNDFIXED = 27,
  anon_sym_ENTITY = 28,
  anon_sym_PERCENT = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_EntityValue_token1 = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_EntityValue_token2 = 33,
  anon_sym_NDATA = 34,
  anon_sym_SEMI = 35,
  sym__Char = 36,
  sym__S = 37,
  sym_Nmtoken = 38,
  anon_sym_AMP = 39,
  anon_sym_AMP_POUND = 40,
  aux_sym_CharRef_token1 = 41,
  anon_sym_AMP_POUNDx = 42,
  aux_sym_CharRef_token2 = 43,
  aux_sym_AttValue_token1 = 44,
  aux_sym_AttValue_token2 = 45,
  anon_sym_SYSTEM = 46,
  anon_sym_PUBLIC = 47,
  aux_sym_SystemLiteral_token1 = 48,
  aux_sym_SystemLiteral_token2 = 49,
  aux_sym_PubidLiteral_token1 = 50,
  aux_sym_PubidLiteral_token2 = 51,
  anon_sym_LT_QMARK = 52,
  anon_sym_xml = 53,
  anon_sym_QMARK_GT = 54,
  anon_sym_version = 55,
  sym_VersionNum = 56,
  anon_sym_encoding = 57,
  sym_EncName = 58,
  aux_sym_PI_token1 = 59,
  sym_Comment = 60,
  anon_sym_EQ = 61,
  sym_document = 62,
  sym__extSubsetDecl = 63,
  sym_conditionalSect = 64,
  sym__markupdecl = 65,
  sym__DeclSep = 66,
  sym_elementdecl = 67,
  sym_contentspec = 68,
  sym_Mixed = 69,
  sym_children = 70,
  sym__cp = 71,
  sym__choice = 72,
  sym_AttlistDecl = 73,
  sym_AttDef = 74,
  sym__AttType = 75,
  sym__EnumeratedType = 76,
  sym_NotationType = 77,
  sym_Enumeration = 78,
  sym_DefaultDecl = 79,
  sym__EntityDecl = 80,
  sym_GEDecl = 81,
  sym_PEDecl = 82,
  sym_EntityValue = 83,
  sym_NDataDecl = 84,
  sym_NotationDecl = 85,
  sym_PEReference = 86,
  sym__Reference = 87,
  sym_EntityRef = 88,
  sym_CharRef = 89,
  sym_AttValue = 90,
  sym_ExternalID = 91,
  sym_PublicID = 92,
  sym_SystemLiteral = 93,
  sym_PubidLiteral = 94,
  sym_XMLDecl = 95,
  sym__VersionInfo = 96,
  sym__EncodingDecl = 97,
  sym_PI = 98,
  sym__Eq = 99,
  aux_sym_document_repeat1 = 100,
  aux_sym_Mixed_repeat1 = 101,
  aux_sym__choice_repeat1 = 102,
  aux_sym_AttlistDecl_repeat1 = 103,
  aux_sym_NotationType_repeat1 = 104,
  aux_sym_Enumeration_repeat1 = 105,
  aux_sym_EntityValue_repeat1 = 106,
  aux_sym_EntityValue_repeat2 = 107,
  aux_sym_AttValue_repeat1 = 108,
  aux_sym_AttValue_repeat2 = 109,
  alias_sym_PITarget = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACK_GT] = "]>",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACK_GT] = anon_sym_RBRACK_GT,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_GT] = {
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
  [61] = 12,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 12,
  [70] = 70,
  [71] = 62,
  [72] = 72,
  [73] = 63,
  [74] = 74,
  [75] = 65,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 65,
  [83] = 62,
  [84] = 63,
  [85] = 85,
  [86] = 62,
  [87] = 87,
  [88] = 63,
  [89] = 89,
  [90] = 90,
  [91] = 65,
  [92] = 92,
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
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 281,
  [290] = 223,
  [291] = 280,
  [292] = 281,
  [293] = 223,
  [294] = 280,
  [295] = 223,
  [296] = 280,
  [297] = 279,
  [298] = 238,
  [299] = 241,
  [300] = 247,
  [301] = 279,
  [302] = 238,
  [303] = 241,
  [304] = 247,
  [305] = 238,
  [306] = 241,
  [307] = 247,
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
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '|') ADVANCE(54);
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
          lookahead == 65535) ADVANCE(71);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(71);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '?') ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
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
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(49);
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
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(66);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(143);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
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
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(92);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(65);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 75:
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
    case 76:
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
      if (lookahead == '!') ADVANCE(50);
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
      if (lookahead == 'D') ADVANCE(61);
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
      if (lookahead == 'F') ADVANCE(62);
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
      if (lookahead == 'F') ADVANCE(63);
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
      if (lookahead == 'Y') ADVANCE(64);
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
      if (lookahead == 'Y') ADVANCE(65);
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
      if (lookahead == 'N') ADVANCE(62);
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
      if (lookahead == 'N') ADVANCE(63);
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
      if (lookahead == 'S') ADVANCE(64);
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
      if (lookahead == 'S') ADVANCE(65);
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
      if (lookahead == '"') ADVANCE(70);
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
      if (lookahead == '"') ADVANCE(70);
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
      if (lookahead == '?') ADVANCE(42);
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
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 43},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 43},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 43},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 43},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 43},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 43},
  [106] = {.lex_state = 43},
  [107] = {.lex_state = 43},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 43},
  [110] = {.lex_state = 43},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 43},
  [113] = {.lex_state = 43},
  [114] = {.lex_state = 43},
  [115] = {.lex_state = 43},
  [116] = {.lex_state = 43},
  [117] = {.lex_state = 43},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 43},
  [120] = {.lex_state = 43},
  [121] = {.lex_state = 43},
  [122] = {.lex_state = 43},
  [123] = {.lex_state = 43},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 43},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 43},
  [128] = {.lex_state = 43},
  [129] = {.lex_state = 43},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 43},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 43},
  [138] = {.lex_state = 43},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 43},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 43},
  [145] = {.lex_state = 43},
  [146] = {.lex_state = 43},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 43},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 43},
  [153] = {.lex_state = 43},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 43},
  [156] = {.lex_state = 131},
  [157] = {.lex_state = 133},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 135},
  [160] = {.lex_state = 137},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 43},
  [163] = {.lex_state = 43},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 43},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 43},
  [176] = {.lex_state = 43},
  [177] = {.lex_state = 43},
  [178] = {.lex_state = 43},
  [179] = {.lex_state = 43},
  [180] = {.lex_state = 43},
  [181] = {.lex_state = 43},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 43},
  [184] = {.lex_state = 43},
  [185] = {.lex_state = 43},
  [186] = {.lex_state = 43},
  [187] = {.lex_state = 43},
  [188] = {.lex_state = 43},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 43},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 43},
  [196] = {.lex_state = 38},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 43},
  [199] = {.lex_state = 43},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 43},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 43},
  [208] = {.lex_state = 38},
  [209] = {.lex_state = 43},
  [210] = {.lex_state = 43},
  [211] = {.lex_state = 43},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 43},
  [214] = {.lex_state = 43},
  [215] = {.lex_state = 38},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 43},
  [219] = {.lex_state = 43},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 43},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 43},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 43},
  [228] = {.lex_state = 43},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 43},
  [231] = {.lex_state = 43},
  [232] = {.lex_state = 43},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 43},
  [235] = {.lex_state = 43},
  [236] = {.lex_state = 43},
  [237] = {.lex_state = 38},
  [238] = {.lex_state = 43},
  [239] = {.lex_state = 43},
  [240] = {.lex_state = 43},
  [241] = {.lex_state = 43},
  [242] = {.lex_state = 43},
  [243] = {.lex_state = 43},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 43},
  [246] = {.lex_state = 43},
  [247] = {.lex_state = 40},
  [248] = {.lex_state = 43},
  [249] = {.lex_state = 43},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 38},
  [252] = {.lex_state = 43},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 43},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 43},
  [258] = {.lex_state = 43},
  [259] = {.lex_state = 43},
  [260] = {.lex_state = 143},
  [261] = {.lex_state = 41},
  [262] = {.lex_state = 43},
  [263] = {.lex_state = 43},
  [264] = {.lex_state = 43},
  [265] = {.lex_state = 43},
  [266] = {.lex_state = 43},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 43},
  [269] = {.lex_state = 43},
  [270] = {.lex_state = 43},
  [271] = {.lex_state = 43},
  [272] = {.lex_state = 43},
  [273] = {.lex_state = 43},
  [274] = {.lex_state = 43},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 43},
  [277] = {.lex_state = 43},
  [278] = {.lex_state = 43},
  [279] = {.lex_state = 43},
  [280] = {.lex_state = 43},
  [281] = {.lex_state = 43},
  [282] = {.lex_state = 43},
  [283] = {.lex_state = 43},
  [284] = {.lex_state = 43},
  [285] = {.lex_state = 43},
  [286] = {.lex_state = 43},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 43},
  [289] = {.lex_state = 43},
  [290] = {.lex_state = 43},
  [291] = {.lex_state = 43},
  [292] = {.lex_state = 43},
  [293] = {.lex_state = 43},
  [294] = {.lex_state = 43},
  [295] = {.lex_state = 43},
  [296] = {.lex_state = 43},
  [297] = {.lex_state = 43},
  [298] = {.lex_state = 43},
  [299] = {.lex_state = 43},
  [300] = {.lex_state = 40},
  [301] = {.lex_state = 43},
  [302] = {.lex_state = 43},
  [303] = {.lex_state = 43},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 43},
  [306] = {.lex_state = 43},
  [307] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_GT] = ACTIONS(1),
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
    [sym_document] = STATE(287),
    [sym__extSubsetDecl] = STATE(8),
    [sym_conditionalSect] = STATE(8),
    [sym__markupdecl] = STATE(8),
    [sym__DeclSep] = STATE(8),
    [sym_elementdecl] = STATE(39),
    [sym_AttlistDecl] = STATE(39),
    [sym__EntityDecl] = STATE(39),
    [sym_GEDecl] = STATE(43),
    [sym_PEDecl] = STATE(43),
    [sym_NotationDecl] = STATE(39),
    [sym_PEReference] = STATE(8),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(39),
    [aux_sym_document_repeat1] = STATE(8),
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
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
      anon_sym_RBRACK,
    ACTIONS(43), 1,
      sym__S,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(6), 6,
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
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym__S,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      sym__S,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 1,
      sym__S,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(9), 6,
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
    ACTIONS(47), 1,
      sym__S,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
    ACTIONS(47), 1,
      sym__S,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
    ACTIONS(47), 1,
      sym__S,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
    STATE(43), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(39), 5,
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
  [408] = 2,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(71), 1,
      anon_sym_AMP,
    ACTIONS(74), 1,
      anon_sym_AMP_POUND,
    ACTIONS(77), 1,
      anon_sym_AMP_POUNDx,
    STATE(65), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [458] = 8,
    ACTIONS(80), 1,
      anon_sym_PERCENT,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_AMP_POUND,
    ACTIONS(90), 1,
      anon_sym_AMP_POUNDx,
    STATE(65), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [486] = 8,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    STATE(75), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [514] = 8,
    ACTIONS(80), 1,
      anon_sym_PERCENT,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_AMP_POUND,
    ACTIONS(90), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      aux_sym_EntityValue_token2,
    STATE(65), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [542] = 8,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_AMP_POUND,
    ACTIONS(120), 1,
      anon_sym_AMP_POUNDx,
    STATE(75), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [570] = 8,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(123), 1,
      aux_sym_EntityValue_token1,
    STATE(75), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
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
    STATE(203), 1,
      sym__AttType,
    ACTIONS(127), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(175), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(207), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [623] = 7,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_AMP_POUND,
    ACTIONS(139), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(142), 1,
      aux_sym_AttValue_token1,
    STATE(20), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [647] = 7,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_AMP_POUND,
    ACTIONS(151), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(153), 1,
      aux_sym_AttValue_token1,
    STATE(25), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [671] = 7,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_POUND,
    ACTIONS(163), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(166), 1,
      aux_sym_AttValue_token2,
    STATE(22), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [695] = 7,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      anon_sym_AMP_POUND,
    ACTIONS(175), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(177), 1,
      aux_sym_AttValue_token2,
    STATE(22), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [719] = 7,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      anon_sym_AMP_POUND,
    ACTIONS(175), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(179), 1,
      aux_sym_AttValue_token2,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [743] = 7,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_AMP_POUND,
    ACTIONS(151), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_AttValue_token1,
    STATE(20), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [767] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__choice,
    STATE(201), 1,
      sym_contentspec,
    ACTIONS(183), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(202), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [789] = 2,
    ACTIONS(189), 1,
      anon_sym_LT_BANG,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_RBRACK,
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
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [828] = 2,
    ACTIONS(201), 1,
      anon_sym_LT_BANG,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [841] = 6,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      sym__S,
    STATE(112), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [862] = 1,
    ACTIONS(213), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [873] = 2,
    ACTIONS(217), 1,
      anon_sym_LT_BANG,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [886] = 2,
    ACTIONS(221), 1,
      anon_sym_LT_BANG,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [912] = 6,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 1,
      sym__S,
    STATE(115), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [933] = 2,
    ACTIONS(233), 1,
      anon_sym_LT_BANG,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [946] = 2,
    ACTIONS(237), 1,
      anon_sym_LT_BANG,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [959] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [972] = 2,
    ACTIONS(245), 1,
      anon_sym_LT_BANG,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [985] = 1,
    ACTIONS(247), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [996] = 2,
    ACTIONS(251), 1,
      anon_sym_LT_BANG,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1009] = 2,
    ACTIONS(255), 1,
      anon_sym_LT_BANG,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1022] = 2,
    ACTIONS(259), 1,
      anon_sym_LT_BANG,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1035] = 8,
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
    STATE(36), 1,
      sym_PEReference,
    STATE(57), 1,
      sym__choice,
    STATE(92), 1,
      sym__cp,
  [1060] = 2,
    ACTIONS(271), 1,
      anon_sym_LT_BANG,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1073] = 2,
    ACTIONS(275), 1,
      anon_sym_LT_BANG,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1086] = 1,
    ACTIONS(277), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1097] = 2,
    ACTIONS(281), 1,
      anon_sym_LT_BANG,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1110] = 2,
    ACTIONS(285), 1,
      anon_sym_LT_BANG,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1123] = 2,
    ACTIONS(289), 1,
      anon_sym_LT_BANG,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1149] = 6,
    ACTIONS(297), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      sym_DefaultDecl,
    STATE(220), 1,
      sym_AttValue,
    ACTIONS(295), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1169] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      sym__S,
    STATE(121), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1189] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__S,
    STATE(92), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1209] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_POUNDPCDATA,
    STATE(31), 1,
      sym_PEReference,
    STATE(57), 1,
      sym__choice,
    STATE(87), 1,
      sym__cp,
  [1231] = 2,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(209), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1243] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym__S,
    STATE(104), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1263] = 2,
    ACTIONS(313), 1,
      anon_sym_LT_BANG,
    ACTIONS(311), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1274] = 5,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(321), 1,
      anon_sym_PUBLIC,
    STATE(164), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1291] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1302] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1313] = 2,
    ACTIONS(329), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(327), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1324] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(331), 1,
      anon_sym_PUBLIC,
    STATE(258), 1,
      sym_PEReference,
    STATE(186), 2,
      sym_ExternalID,
      sym_PublicID,
  [1341] = 2,
    ACTIONS(335), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(333), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1352] = 6,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(321), 1,
      anon_sym_PUBLIC,
    STATE(123), 1,
      sym_ExternalID,
    STATE(183), 1,
      sym_EntityValue,
  [1371] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      sym_Name,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    STATE(77), 1,
      aux_sym_NotationType_repeat1,
    STATE(184), 1,
      sym_PEReference,
  [1390] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1407] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1418] = 2,
    ACTIONS(345), 1,
      anon_sym_LT_BANG,
    ACTIONS(343), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1429] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1440] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(347), 1,
      sym_Name,
    STATE(78), 1,
      aux_sym_NotationType_repeat1,
    STATE(188), 1,
      sym_PEReference,
  [1459] = 2,
    ACTIONS(329), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(327), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1470] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1487] = 2,
    ACTIONS(335), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(333), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1498] = 2,
    ACTIONS(351), 1,
      anon_sym_LT_BANG,
    ACTIONS(349), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1509] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(353), 1,
      sym_Name,
    STATE(81), 1,
      aux_sym_NotationType_repeat1,
    STATE(172), 1,
      sym_PEReference,
  [1528] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      sym_Name,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    STATE(81), 1,
      aux_sym_NotationType_repeat1,
    STATE(184), 1,
      sym_PEReference,
  [1547] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym__cp,
    STATE(57), 2,
      sym__choice,
      sym_PEReference,
  [1564] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(90), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1578] = 4,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      sym__S,
    STATE(81), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(361), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1592] = 2,
    ACTIONS(335), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(333), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1602] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1612] = 2,
    ACTIONS(329), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(327), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1622] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1636] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1646] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1660] = 2,
    ACTIONS(329), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(327), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1670] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(373), 1,
      sym__S,
    STATE(165), 1,
      sym_PEReference,
    ACTIONS(371), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1684] = 4,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym__S,
    STATE(90), 1,
      aux_sym__choice_repeat1,
    ACTIONS(375), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1698] = 2,
    ACTIONS(335), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(333), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1708] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1722] = 2,
    ACTIONS(385), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(387), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1732] = 3,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(391), 1,
      sym__S,
    STATE(99), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1743] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Enumeration_repeat1,
  [1756] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      sym_Name,
    ACTIONS(401), 1,
      anon_sym_GT,
    STATE(232), 1,
      sym_PEReference,
  [1769] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 1,
      sym__S,
    STATE(115), 1,
      aux_sym_Mixed_repeat1,
  [1782] = 1,
    ACTIONS(361), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1789] = 3,
    ACTIONS(403), 1,
      anon_sym_GT,
    ACTIONS(405), 1,
      sym__S,
    STATE(99), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1800] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [1813] = 3,
    ACTIONS(412), 1,
      anon_sym_GT,
    ACTIONS(414), 1,
      sym__S,
    STATE(94), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1824] = 1,
    ACTIONS(416), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1831] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      sym_Name,
    ACTIONS(420), 1,
      sym__S,
    STATE(147), 1,
      sym_PEReference,
  [1844] = 1,
    ACTIONS(422), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1851] = 4,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      sym__S,
    STATE(105), 1,
      aux_sym_Mixed_repeat1,
  [1864] = 2,
    ACTIONS(432), 1,
      sym__S,
    ACTIONS(361), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1873] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      sym__S,
    STATE(95), 1,
      aux_sym_Enumeration_repeat1,
  [1886] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    STATE(155), 1,
      sym_PEReference,
    ACTIONS(439), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1897] = 1,
    ACTIONS(441), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1904] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(399), 1,
      sym_Name,
    STATE(232), 1,
      sym_PEReference,
  [1917] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(443), 1,
      sym_Name,
    ACTIONS(445), 1,
      sym__S,
    STATE(72), 1,
      sym_PEReference,
  [1930] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      sym__S,
    STATE(105), 1,
      aux_sym_Mixed_repeat1,
  [1943] = 1,
    ACTIONS(451), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1950] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      sym__S,
    STATE(112), 1,
      aux_sym_Mixed_repeat1,
  [1963] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      sym__S,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_Mixed_repeat1,
  [1976] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(455), 1,
      sym_Name,
    ACTIONS(457), 1,
      sym__S,
    STATE(153), 1,
      sym_PEReference,
  [1989] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Enumeration_repeat1,
  [2002] = 4,
    ACTIONS(459), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Enumeration_repeat1,
  [2015] = 2,
    ACTIONS(469), 1,
      sym__S,
    ACTIONS(467), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2024] = 4,
    ACTIONS(472), 1,
      anon_sym_ELEMENT,
    ACTIONS(474), 1,
      anon_sym_ATTLIST,
    ACTIONS(476), 1,
      anon_sym_NOTATION,
    ACTIONS(478), 1,
      anon_sym_ENTITY,
  [2037] = 1,
    ACTIONS(378), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2044] = 2,
    ACTIONS(482), 1,
      sym__S,
    ACTIONS(480), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2052] = 3,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      sym__S,
    STATE(179), 1,
      sym_NDataDecl,
  [2062] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(489), 1,
      sym_Name,
    STATE(245), 1,
      sym_PEReference,
  [2072] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(491), 1,
      sym_Name,
    STATE(101), 1,
      sym_PEReference,
  [2082] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      sym_Name,
    STATE(242), 1,
      sym_PEReference,
  [2092] = 1,
    ACTIONS(495), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2098] = 3,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      sym_PubidLiteral,
  [2108] = 3,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(503), 1,
      anon_sym_PERCENT,
    STATE(236), 1,
      sym_PEReference,
  [2118] = 3,
    ACTIONS(505), 1,
      sym__S,
    ACTIONS(507), 1,
      anon_sym_QMARK_GT,
    STATE(221), 1,
      sym__EncodingDecl,
  [2128] = 1,
    ACTIONS(509), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2134] = 1,
    ACTIONS(511), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2140] = 3,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym_AttValue,
  [2150] = 2,
    ACTIONS(515), 1,
      anon_sym_STAR,
    ACTIONS(513), 2,
      anon_sym_GT,
      sym__S,
  [2158] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(517), 1,
      sym_Name,
    STATE(67), 1,
      sym_PEReference,
  [2168] = 1,
    ACTIONS(462), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2174] = 3,
    ACTIONS(519), 1,
      sym__S,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym__Eq,
  [2184] = 1,
    ACTIONS(480), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2190] = 2,
    ACTIONS(525), 1,
      sym__S,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2198] = 3,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_PubidLiteral,
  [2208] = 3,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      sym_PubidLiteral,
  [2218] = 3,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      sym_SystemLiteral,
  [2228] = 3,
    ACTIONS(519), 1,
      sym__S,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(169), 1,
      sym__Eq,
  [2238] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      sym_Name,
    STATE(232), 1,
      sym_PEReference,
  [2248] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      sym_Name,
    STATE(122), 1,
      sym_PEReference,
  [2258] = 1,
    ACTIONS(533), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2264] = 2,
    ACTIONS(535), 1,
      sym__S,
    ACTIONS(533), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2272] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(538), 1,
      sym_Name,
    STATE(204), 1,
      sym_PEReference,
  [2282] = 3,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      sym_SystemLiteral,
  [2292] = 2,
    ACTIONS(542), 1,
      sym__S,
    ACTIONS(540), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2300] = 2,
    ACTIONS(546), 1,
      anon_sym_STAR,
    ACTIONS(544), 2,
      anon_sym_GT,
      sym__S,
  [2308] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      sym_Name,
    STATE(147), 1,
      sym_PEReference,
  [2318] = 2,
    ACTIONS(548), 1,
      sym__S,
    ACTIONS(427), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2326] = 1,
    ACTIONS(551), 2,
      anon_sym_GT,
      sym__S,
  [2331] = 2,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 1,
      sym__S,
  [2338] = 2,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      aux_sym_SystemLiteral_token1,
  [2345] = 2,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      aux_sym_SystemLiteral_token2,
  [2352] = 1,
    ACTIONS(563), 2,
      anon_sym_GT,
      sym__S,
  [2357] = 2,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      aux_sym_PubidLiteral_token1,
  [2364] = 2,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
    ACTIONS(569), 1,
      aux_sym_PubidLiteral_token2,
  [2371] = 2,
    ACTIONS(571), 1,
      anon_sym_GT,
    ACTIONS(573), 1,
      sym__S,
  [2378] = 1,
    ACTIONS(571), 2,
      anon_sym_GT,
      sym__S,
  [2383] = 2,
    ACTIONS(575), 1,
      sym_Name,
    ACTIONS(577), 1,
      anon_sym_xml,
  [2390] = 2,
    ACTIONS(579), 1,
      anon_sym_GT,
    ACTIONS(581), 1,
      sym__S,
  [2397] = 2,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    ACTIONS(585), 1,
      sym__S,
  [2404] = 2,
    ACTIONS(587), 1,
      sym__S,
    ACTIONS(589), 1,
      anon_sym_QMARK_GT,
  [2411] = 1,
    ACTIONS(591), 2,
      anon_sym_GT,
      sym__S,
  [2416] = 2,
    ACTIONS(593), 1,
      sym__S,
    STATE(130), 1,
      sym__VersionInfo,
  [2423] = 2,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      anon_sym_SQUOTE,
  [2430] = 1,
    ACTIONS(599), 2,
      anon_sym_GT,
      sym__S,
  [2435] = 1,
    ACTIONS(601), 2,
      anon_sym_GT,
      sym__S,
  [2440] = 2,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      sym__S,
  [2447] = 1,
    ACTIONS(607), 2,
      anon_sym_GT,
      sym__S,
  [2452] = 1,
    ACTIONS(609), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2457] = 1,
    ACTIONS(611), 2,
      anon_sym_GT,
      sym__S,
  [2462] = 1,
    ACTIONS(613), 2,
      anon_sym_GT,
      sym__S,
  [2467] = 1,
    ACTIONS(544), 2,
      anon_sym_GT,
      sym__S,
  [2472] = 2,
    ACTIONS(615), 1,
      anon_sym_GT,
    ACTIONS(617), 1,
      anon_sym_NDATA,
  [2479] = 2,
    ACTIONS(615), 1,
      anon_sym_GT,
    ACTIONS(619), 1,
      sym__S,
  [2486] = 1,
    ACTIONS(621), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2491] = 1,
    ACTIONS(540), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2496] = 2,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [2503] = 2,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(625), 1,
      sym__S,
  [2510] = 2,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      sym__S,
  [2517] = 1,
    ACTIONS(631), 2,
      anon_sym_GT,
      sym__S,
  [2522] = 2,
    ACTIONS(633), 1,
      anon_sym_GT,
    ACTIONS(635), 1,
      sym__S,
  [2529] = 1,
    ACTIONS(637), 2,
      anon_sym_GT,
      sym__S,
  [2534] = 2,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      sym__S,
  [2541] = 2,
    ACTIONS(643), 1,
      anon_sym_PIPE,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
  [2548] = 1,
    ACTIONS(647), 2,
      anon_sym_GT,
      sym__S,
  [2553] = 1,
    ACTIONS(649), 2,
      anon_sym_GT,
      sym__S,
  [2558] = 1,
    ACTIONS(651), 2,
      anon_sym_GT,
      sym__S,
  [2563] = 2,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [2570] = 2,
    ACTIONS(653), 1,
      sym_Name,
    ACTIONS(655), 1,
      sym__S,
  [2577] = 1,
    ACTIONS(657), 2,
      anon_sym_GT,
      sym__S,
  [2582] = 2,
    ACTIONS(659), 1,
      sym__S,
    ACTIONS(661), 1,
      sym_Nmtoken,
  [2589] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_PIPE,
  [2596] = 1,
    ACTIONS(663), 2,
      anon_sym_GT,
      sym__S,
  [2601] = 1,
    ACTIONS(665), 2,
      anon_sym_GT,
      sym__S,
  [2606] = 1,
    ACTIONS(667), 2,
      anon_sym_GT,
      sym__S,
  [2611] = 2,
    ACTIONS(669), 1,
      anon_sym_GT,
    ACTIONS(671), 1,
      sym__S,
  [2618] = 1,
    ACTIONS(673), 2,
      anon_sym_GT,
      sym__S,
  [2623] = 2,
    ACTIONS(675), 1,
      anon_sym_GT,
    ACTIONS(677), 1,
      sym__S,
  [2630] = 1,
    ACTIONS(679), 2,
      anon_sym_GT,
      sym__S,
  [2635] = 1,
    ACTIONS(681), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2640] = 2,
    ACTIONS(683), 1,
      anon_sym_QMARK_GT,
    ACTIONS(685), 1,
      anon_sym_encoding,
  [2647] = 1,
    ACTIONS(687), 2,
      anon_sym_GT,
      sym__S,
  [2652] = 2,
    ACTIONS(689), 1,
      sym__S,
    ACTIONS(691), 1,
      sym_Nmtoken,
  [2659] = 1,
    ACTIONS(693), 2,
      anon_sym_GT,
      sym__S,
  [2664] = 1,
    ACTIONS(695), 2,
      anon_sym_GT,
      sym__S,
  [2669] = 1,
    ACTIONS(697), 2,
      anon_sym_GT,
      sym__S,
  [2674] = 1,
    ACTIONS(699), 2,
      anon_sym_GT,
      sym__S,
  [2679] = 2,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
  [2686] = 1,
    ACTIONS(705), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2691] = 2,
    ACTIONS(707), 1,
      sym__S,
    ACTIONS(709), 1,
      sym_Nmtoken,
  [2698] = 1,
    ACTIONS(711), 2,
      anon_sym_GT,
      sym__S,
  [2703] = 2,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_PIPE,
  [2710] = 1,
    ACTIONS(713), 2,
      anon_sym_GT,
      sym__S,
  [2715] = 1,
    ACTIONS(715), 2,
      anon_sym_GT,
      sym__S,
  [2720] = 1,
    ACTIONS(717), 2,
      anon_sym_GT,
      sym__S,
  [2725] = 2,
    ACTIONS(683), 1,
      anon_sym_QMARK_GT,
    ACTIONS(719), 1,
      sym__S,
  [2732] = 1,
    ACTIONS(721), 1,
      sym__S,
  [2736] = 1,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [2740] = 1,
    ACTIONS(725), 1,
      sym_Name,
  [2744] = 1,
    ACTIONS(727), 1,
      anon_sym_EQ,
  [2748] = 1,
    ACTIONS(729), 1,
      anon_sym_QMARK_GT,
  [2752] = 1,
    ACTIONS(731), 1,
      anon_sym_STAR,
  [2756] = 1,
    ACTIONS(733), 1,
      sym__S,
  [2760] = 1,
    ACTIONS(735), 1,
      anon_sym_RBRACK_GT,
  [2764] = 1,
    ACTIONS(737), 1,
      anon_sym_GT,
  [2768] = 1,
    ACTIONS(546), 1,
      anon_sym_STAR,
  [2772] = 1,
    ACTIONS(739), 1,
      sym__S,
  [2776] = 1,
    ACTIONS(741), 1,
      anon_sym_QMARK_GT,
  [2780] = 1,
    ACTIONS(615), 1,
      anon_sym_GT,
  [2784] = 1,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
  [2788] = 1,
    ACTIONS(745), 1,
      sym__S,
  [2792] = 1,
    ACTIONS(661), 1,
      sym_Nmtoken,
  [2796] = 1,
    ACTIONS(747), 1,
      sym_Name,
  [2800] = 1,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
  [2804] = 1,
    ACTIONS(749), 1,
      anon_sym_SQUOTE,
  [2808] = 1,
    ACTIONS(751), 1,
      aux_sym_CharRef_token1,
  [2812] = 1,
    ACTIONS(753), 1,
      sym__S,
  [2816] = 1,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
  [2820] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACK_GT,
  [2824] = 1,
    ACTIONS(757), 1,
      sym__S,
  [2828] = 1,
    ACTIONS(759), 1,
      anon_sym_LBRACK,
  [2832] = 1,
    ACTIONS(751), 1,
      aux_sym_CharRef_token2,
  [2836] = 1,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
  [2840] = 1,
    ACTIONS(763), 1,
      sym__S,
  [2844] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACK_GT,
  [2848] = 1,
    ACTIONS(767), 1,
      sym_Nmtoken,
  [2852] = 1,
    ACTIONS(643), 1,
      anon_sym_PIPE,
  [2856] = 1,
    ACTIONS(769), 1,
      anon_sym_RBRACK_GT,
  [2860] = 1,
    ACTIONS(771), 1,
      sym_EncName,
  [2864] = 1,
    ACTIONS(773), 1,
      anon_sym_PIPE,
  [2868] = 1,
    ACTIONS(775), 1,
      sym_Nmtoken,
  [2872] = 1,
    ACTIONS(777), 1,
      anon_sym_version,
  [2876] = 1,
    ACTIONS(779), 1,
      sym__S,
  [2880] = 1,
    ACTIONS(781), 1,
      sym__S,
  [2884] = 1,
    ACTIONS(783), 1,
      aux_sym_PI_token1,
  [2888] = 1,
    ACTIONS(785), 1,
      sym_EncName,
  [2892] = 1,
    ACTIONS(787), 1,
      anon_sym_SQUOTE,
  [2896] = 1,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
  [2900] = 1,
    ACTIONS(789), 1,
      sym__S,
  [2904] = 1,
    ACTIONS(791), 1,
      sym__S,
  [2908] = 1,
    ACTIONS(793), 1,
      anon_sym_GT,
  [2912] = 1,
    ACTIONS(795), 1,
      sym_VersionNum,
  [2916] = 1,
    ACTIONS(797), 1,
      anon_sym_SQUOTE,
  [2920] = 1,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [2924] = 1,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
  [2928] = 1,
    ACTIONS(799), 1,
      anon_sym_GT,
  [2932] = 1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [2936] = 1,
    ACTIONS(801), 1,
      sym__S,
  [2940] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
  [2944] = 1,
    ACTIONS(803), 1,
      sym_VersionNum,
  [2948] = 1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [2952] = 1,
    ACTIONS(573), 1,
      sym__S,
  [2956] = 1,
    ACTIONS(807), 1,
      sym_Name,
  [2960] = 1,
    ACTIONS(653), 1,
      sym_Name,
  [2964] = 1,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [2968] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [2972] = 1,
    ACTIONS(813), 1,
      sym__S,
  [2976] = 1,
    ACTIONS(815), 1,
      sym__S,
  [2980] = 1,
    ACTIONS(817), 1,
      sym__S,
  [2984] = 1,
    ACTIONS(819), 1,
      sym__S,
  [2988] = 1,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [2992] = 1,
    ACTIONS(821), 1,
      ts_builtin_sym_end,
  [2996] = 1,
    ACTIONS(823), 1,
      anon_sym_GT,
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
      anon_sym_SEMI,
  [3020] = 1,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [3024] = 1,
    ACTIONS(837), 1,
      anon_sym_SEMI,
  [3028] = 1,
    ACTIONS(839), 1,
      anon_sym_SEMI,
  [3032] = 1,
    ACTIONS(841), 1,
      sym_Name,
  [3036] = 1,
    ACTIONS(843), 1,
      sym_Name,
  [3040] = 1,
    ACTIONS(845), 1,
      aux_sym_CharRef_token1,
  [3044] = 1,
    ACTIONS(845), 1,
      aux_sym_CharRef_token2,
  [3048] = 1,
    ACTIONS(847), 1,
      sym_Name,
  [3052] = 1,
    ACTIONS(849), 1,
      sym_Name,
  [3056] = 1,
    ACTIONS(851), 1,
      aux_sym_CharRef_token1,
  [3060] = 1,
    ACTIONS(851), 1,
      aux_sym_CharRef_token2,
  [3064] = 1,
    ACTIONS(853), 1,
      sym_Name,
  [3068] = 1,
    ACTIONS(855), 1,
      aux_sym_CharRef_token1,
  [3072] = 1,
    ACTIONS(855), 1,
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
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 862,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 912,
  [SMALL_STATE(37)] = 933,
  [SMALL_STATE(38)] = 946,
  [SMALL_STATE(39)] = 959,
  [SMALL_STATE(40)] = 972,
  [SMALL_STATE(41)] = 985,
  [SMALL_STATE(42)] = 996,
  [SMALL_STATE(43)] = 1009,
  [SMALL_STATE(44)] = 1022,
  [SMALL_STATE(45)] = 1035,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1073,
  [SMALL_STATE(48)] = 1086,
  [SMALL_STATE(49)] = 1097,
  [SMALL_STATE(50)] = 1110,
  [SMALL_STATE(51)] = 1123,
  [SMALL_STATE(52)] = 1136,
  [SMALL_STATE(53)] = 1149,
  [SMALL_STATE(54)] = 1169,
  [SMALL_STATE(55)] = 1189,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1231,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1263,
  [SMALL_STATE(60)] = 1274,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1302,
  [SMALL_STATE(63)] = 1313,
  [SMALL_STATE(64)] = 1324,
  [SMALL_STATE(65)] = 1341,
  [SMALL_STATE(66)] = 1352,
  [SMALL_STATE(67)] = 1371,
  [SMALL_STATE(68)] = 1390,
  [SMALL_STATE(69)] = 1407,
  [SMALL_STATE(70)] = 1418,
  [SMALL_STATE(71)] = 1429,
  [SMALL_STATE(72)] = 1440,
  [SMALL_STATE(73)] = 1459,
  [SMALL_STATE(74)] = 1470,
  [SMALL_STATE(75)] = 1487,
  [SMALL_STATE(76)] = 1498,
  [SMALL_STATE(77)] = 1509,
  [SMALL_STATE(78)] = 1528,
  [SMALL_STATE(79)] = 1547,
  [SMALL_STATE(80)] = 1564,
  [SMALL_STATE(81)] = 1578,
  [SMALL_STATE(82)] = 1592,
  [SMALL_STATE(83)] = 1602,
  [SMALL_STATE(84)] = 1612,
  [SMALL_STATE(85)] = 1622,
  [SMALL_STATE(86)] = 1636,
  [SMALL_STATE(87)] = 1646,
  [SMALL_STATE(88)] = 1660,
  [SMALL_STATE(89)] = 1670,
  [SMALL_STATE(90)] = 1684,
  [SMALL_STATE(91)] = 1698,
  [SMALL_STATE(92)] = 1708,
  [SMALL_STATE(93)] = 1722,
  [SMALL_STATE(94)] = 1732,
  [SMALL_STATE(95)] = 1743,
  [SMALL_STATE(96)] = 1756,
  [SMALL_STATE(97)] = 1769,
  [SMALL_STATE(98)] = 1782,
  [SMALL_STATE(99)] = 1789,
  [SMALL_STATE(100)] = 1800,
  [SMALL_STATE(101)] = 1813,
  [SMALL_STATE(102)] = 1824,
  [SMALL_STATE(103)] = 1831,
  [SMALL_STATE(104)] = 1844,
  [SMALL_STATE(105)] = 1851,
  [SMALL_STATE(106)] = 1864,
  [SMALL_STATE(107)] = 1873,
  [SMALL_STATE(108)] = 1886,
  [SMALL_STATE(109)] = 1897,
  [SMALL_STATE(110)] = 1904,
  [SMALL_STATE(111)] = 1917,
  [SMALL_STATE(112)] = 1930,
  [SMALL_STATE(113)] = 1943,
  [SMALL_STATE(114)] = 1950,
  [SMALL_STATE(115)] = 1963,
  [SMALL_STATE(116)] = 1976,
  [SMALL_STATE(117)] = 1989,
  [SMALL_STATE(118)] = 2002,
  [SMALL_STATE(119)] = 2015,
  [SMALL_STATE(120)] = 2024,
  [SMALL_STATE(121)] = 2037,
  [SMALL_STATE(122)] = 2044,
  [SMALL_STATE(123)] = 2052,
  [SMALL_STATE(124)] = 2062,
  [SMALL_STATE(125)] = 2072,
  [SMALL_STATE(126)] = 2082,
  [SMALL_STATE(127)] = 2092,
  [SMALL_STATE(128)] = 2098,
  [SMALL_STATE(129)] = 2108,
  [SMALL_STATE(130)] = 2118,
  [SMALL_STATE(131)] = 2128,
  [SMALL_STATE(132)] = 2134,
  [SMALL_STATE(133)] = 2140,
  [SMALL_STATE(134)] = 2150,
  [SMALL_STATE(135)] = 2158,
  [SMALL_STATE(136)] = 2168,
  [SMALL_STATE(137)] = 2174,
  [SMALL_STATE(138)] = 2184,
  [SMALL_STATE(139)] = 2190,
  [SMALL_STATE(140)] = 2198,
  [SMALL_STATE(141)] = 2208,
  [SMALL_STATE(142)] = 2218,
  [SMALL_STATE(143)] = 2228,
  [SMALL_STATE(144)] = 2238,
  [SMALL_STATE(145)] = 2248,
  [SMALL_STATE(146)] = 2258,
  [SMALL_STATE(147)] = 2264,
  [SMALL_STATE(148)] = 2272,
  [SMALL_STATE(149)] = 2282,
  [SMALL_STATE(150)] = 2292,
  [SMALL_STATE(151)] = 2300,
  [SMALL_STATE(152)] = 2308,
  [SMALL_STATE(153)] = 2318,
  [SMALL_STATE(154)] = 2326,
  [SMALL_STATE(155)] = 2331,
  [SMALL_STATE(156)] = 2338,
  [SMALL_STATE(157)] = 2345,
  [SMALL_STATE(158)] = 2352,
  [SMALL_STATE(159)] = 2357,
  [SMALL_STATE(160)] = 2364,
  [SMALL_STATE(161)] = 2371,
  [SMALL_STATE(162)] = 2378,
  [SMALL_STATE(163)] = 2383,
  [SMALL_STATE(164)] = 2390,
  [SMALL_STATE(165)] = 2397,
  [SMALL_STATE(166)] = 2404,
  [SMALL_STATE(167)] = 2411,
  [SMALL_STATE(168)] = 2416,
  [SMALL_STATE(169)] = 2423,
  [SMALL_STATE(170)] = 2430,
  [SMALL_STATE(171)] = 2435,
  [SMALL_STATE(172)] = 2440,
  [SMALL_STATE(173)] = 2447,
  [SMALL_STATE(174)] = 2452,
  [SMALL_STATE(175)] = 2457,
  [SMALL_STATE(176)] = 2462,
  [SMALL_STATE(177)] = 2467,
  [SMALL_STATE(178)] = 2472,
  [SMALL_STATE(179)] = 2479,
  [SMALL_STATE(180)] = 2486,
  [SMALL_STATE(181)] = 2491,
  [SMALL_STATE(182)] = 2496,
  [SMALL_STATE(183)] = 2503,
  [SMALL_STATE(184)] = 2510,
  [SMALL_STATE(185)] = 2517,
  [SMALL_STATE(186)] = 2522,
  [SMALL_STATE(187)] = 2529,
  [SMALL_STATE(188)] = 2534,
  [SMALL_STATE(189)] = 2541,
  [SMALL_STATE(190)] = 2548,
  [SMALL_STATE(191)] = 2553,
  [SMALL_STATE(192)] = 2558,
  [SMALL_STATE(193)] = 2563,
  [SMALL_STATE(194)] = 2570,
  [SMALL_STATE(195)] = 2577,
  [SMALL_STATE(196)] = 2582,
  [SMALL_STATE(197)] = 2589,
  [SMALL_STATE(198)] = 2596,
  [SMALL_STATE(199)] = 2601,
  [SMALL_STATE(200)] = 2606,
  [SMALL_STATE(201)] = 2611,
  [SMALL_STATE(202)] = 2618,
  [SMALL_STATE(203)] = 2623,
  [SMALL_STATE(204)] = 2630,
  [SMALL_STATE(205)] = 2635,
  [SMALL_STATE(206)] = 2640,
  [SMALL_STATE(207)] = 2647,
  [SMALL_STATE(208)] = 2652,
  [SMALL_STATE(209)] = 2659,
  [SMALL_STATE(210)] = 2664,
  [SMALL_STATE(211)] = 2669,
  [SMALL_STATE(212)] = 2674,
  [SMALL_STATE(213)] = 2679,
  [SMALL_STATE(214)] = 2686,
  [SMALL_STATE(215)] = 2691,
  [SMALL_STATE(216)] = 2698,
  [SMALL_STATE(217)] = 2703,
  [SMALL_STATE(218)] = 2710,
  [SMALL_STATE(219)] = 2715,
  [SMALL_STATE(220)] = 2720,
  [SMALL_STATE(221)] = 2725,
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
  [SMALL_STATE(304)] = 3060,
  [SMALL_STATE(305)] = 3064,
  [SMALL_STATE(306)] = 3068,
  [SMALL_STATE(307)] = 3072,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(279),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(278),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(301),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(298),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(299),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(300),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(297),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(238),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(241),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(247),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(302),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(303),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(304),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(305),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(306),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(307),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(119),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(255),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(214),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(144),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(286),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(102),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(215),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(252),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(98),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(132),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(138),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(146),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [821] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
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
