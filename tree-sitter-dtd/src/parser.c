#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 1
#define TOKEN_COUNT 60
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
  sym__S = 35,
  sym_Nmtoken = 36,
  anon_sym_AMP = 37,
  anon_sym_AMP_POUND = 38,
  aux_sym_CharRef_token1 = 39,
  anon_sym_AMP_POUNDx = 40,
  aux_sym_CharRef_token2 = 41,
  aux_sym_AttValue_token1 = 42,
  aux_sym_AttValue_token2 = 43,
  anon_sym_SYSTEM = 44,
  anon_sym_PUBLIC = 45,
  aux_sym_SystemLiteral_token1 = 46,
  aux_sym_SystemLiteral_token2 = 47,
  aux_sym_PubidLiteral_token1 = 48,
  aux_sym_PubidLiteral_token2 = 49,
  anon_sym_LT_QMARK = 50,
  anon_sym_xml = 51,
  anon_sym_QMARK_GT = 52,
  anon_sym_version = 53,
  sym_VersionNum = 54,
  anon_sym_encoding = 55,
  sym_EncName = 56,
  aux_sym_PI_token1 = 57,
  aux_sym_Comment_token1 = 58,
  anon_sym_EQ = 59,
  sym_document = 60,
  sym__extSubsetDecl = 61,
  sym_conditionalSect = 62,
  sym__markupdecl = 63,
  sym__DeclSep = 64,
  sym_elementdecl = 65,
  sym_contentspec = 66,
  sym_Mixed = 67,
  sym_children = 68,
  sym__cp = 69,
  sym__choice = 70,
  sym_AttlistDecl = 71,
  sym_AttDef = 72,
  sym__AttType = 73,
  sym__EnumeratedType = 74,
  sym_NotationType = 75,
  sym_Enumeration = 76,
  sym_DefaultDecl = 77,
  sym__EntityDecl = 78,
  sym_GEDecl = 79,
  sym_PEDecl = 80,
  sym_EntityValue = 81,
  sym_NDataDecl = 82,
  sym_NotationDecl = 83,
  sym_PEReference = 84,
  sym__Reference = 85,
  sym_EntityRef = 86,
  sym_CharRef = 87,
  sym_AttValue = 88,
  sym_ExternalID = 89,
  sym_PublicID = 90,
  sym_SystemLiteral = 91,
  sym_PubidLiteral = 92,
  sym_XMLDecl = 93,
  sym__VersionInfo = 94,
  sym__EncodingDecl = 95,
  sym_PI = 96,
  sym_Comment = 97,
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
  [aux_sym_SystemLiteral_token1] = "URI",
  [aux_sym_SystemLiteral_token2] = "URI",
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
  [aux_sym_Comment_token1] = "Comment_token1",
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
  [sym_Comment] = "Comment",
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
  [aux_sym_SystemLiteral_token2] = aux_sym_SystemLiteral_token1,
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
  [aux_sym_Comment_token1] = aux_sym_Comment_token1,
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
  [sym_Comment] = sym_Comment,
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
    .visible = true,
    .named = true,
  },
  [aux_sym_SystemLiteral_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_Comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_Comment] = {
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 61,
  [76] = 76,
  [77] = 12,
  [78] = 74,
  [79] = 79,
  [80] = 12,
  [81] = 81,
  [82] = 66,
  [83] = 83,
  [84] = 61,
  [85] = 74,
  [86] = 86,
  [87] = 87,
  [88] = 66,
  [89] = 89,
  [90] = 90,
  [91] = 61,
  [92] = 74,
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
  [284] = 276,
  [285] = 274,
  [286] = 272,
  [287] = 276,
  [288] = 274,
  [289] = 272,
  [290] = 274,
  [291] = 272,
  [292] = 270,
  [293] = 236,
  [294] = 238,
  [295] = 242,
  [296] = 270,
  [297] = 236,
  [298] = 238,
  [299] = 242,
  [300] = 236,
  [301] = 238,
  [302] = 242,
};

static inline bool aux_sym_EntityValue_token1_character_set_1(int32_t c) {
  return (c < 8204
    ? (c < 192
      ? (c < ':'
        ? c == 0
        : (c <= ':' || c == '_'))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 893 || (c >= 895 && c <= 8191)))))
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
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
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
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
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(80);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(69);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '?') ADVANCE(133);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == '?') ADVANCE(10);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'Q') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(42);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(42);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(42);
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(117);
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
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(90);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(63);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(121);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(59);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(94);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(108);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(104);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(61);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'Y') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(114);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'Y') ADVANCE(63);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(92);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(113);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(112);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(61);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(100);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(63);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(97);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(106);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(98);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_Comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(42);
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 139:
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 3},
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
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 43},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
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
  [156] = {.lex_state = 43},
  [157] = {.lex_state = 43},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 43},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 43},
  [163] = {.lex_state = 43},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 43},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 43},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 43},
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
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 43},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 43},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 43},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 43},
  [206] = {.lex_state = 43},
  [207] = {.lex_state = 43},
  [208] = {.lex_state = 43},
  [209] = {.lex_state = 43},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 43},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 43},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 43},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 131},
  [219] = {.lex_state = 43},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 43},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 43},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 43},
  [226] = {.lex_state = 43},
  [227] = {.lex_state = 43},
  [228] = {.lex_state = 43},
  [229] = {.lex_state = 43},
  [230] = {.lex_state = 43},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 43},
  [234] = {.lex_state = 43},
  [235] = {.lex_state = 43},
  [236] = {.lex_state = 43},
  [237] = {.lex_state = 43},
  [238] = {.lex_state = 43},
  [239] = {.lex_state = 43},
  [240] = {.lex_state = 43},
  [241] = {.lex_state = 43},
  [242] = {.lex_state = 38},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 43},
  [245] = {.lex_state = 43},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 43},
  [248] = {.lex_state = 43},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 43},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 43},
  [253] = {.lex_state = 43},
  [254] = {.lex_state = 43},
  [255] = {.lex_state = 137},
  [256] = {.lex_state = 39},
  [257] = {.lex_state = 43},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 43},
  [260] = {.lex_state = 43},
  [261] = {.lex_state = 43},
  [262] = {.lex_state = 43},
  [263] = {.lex_state = 43},
  [264] = {.lex_state = 43},
  [265] = {.lex_state = 129},
  [266] = {.lex_state = 43},
  [267] = {.lex_state = 43},
  [268] = {.lex_state = 43},
  [269] = {.lex_state = 43},
  [270] = {.lex_state = 43},
  [271] = {.lex_state = 43},
  [272] = {.lex_state = 43},
  [273] = {.lex_state = 43},
  [274] = {.lex_state = 43},
  [275] = {.lex_state = 132},
  [276] = {.lex_state = 43},
  [277] = {.lex_state = 43},
  [278] = {.lex_state = 43},
  [279] = {.lex_state = 43},
  [280] = {.lex_state = 43},
  [281] = {.lex_state = 43},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 130},
  [284] = {.lex_state = 43},
  [285] = {.lex_state = 43},
  [286] = {.lex_state = 43},
  [287] = {.lex_state = 43},
  [288] = {.lex_state = 43},
  [289] = {.lex_state = 43},
  [290] = {.lex_state = 43},
  [291] = {.lex_state = 43},
  [292] = {.lex_state = 43},
  [293] = {.lex_state = 43},
  [294] = {.lex_state = 43},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 43},
  [297] = {.lex_state = 43},
  [298] = {.lex_state = 43},
  [299] = {.lex_state = 38},
  [300] = {.lex_state = 43},
  [301] = {.lex_state = 43},
  [302] = {.lex_state = 38},
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
    [aux_sym_Comment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(282),
    [sym__extSubsetDecl] = STATE(8),
    [sym_conditionalSect] = STATE(8),
    [sym__markupdecl] = STATE(8),
    [sym__DeclSep] = STATE(8),
    [sym_elementdecl] = STATE(52),
    [sym_AttlistDecl] = STATE(52),
    [sym__EntityDecl] = STATE(52),
    [sym_GEDecl] = STATE(51),
    [sym_PEDecl] = STATE(51),
    [sym_NotationDecl] = STATE(52),
    [sym_PEReference] = STATE(8),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(52),
    [sym_Comment] = STATE(52),
    [aux_sym_document_repeat1] = STATE(8),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [sym__S] = ACTIONS(9),
    [anon_sym_LT_QMARK] = ACTIONS(11),
    [aux_sym_Comment_token1] = ACTIONS(13),
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
      aux_sym_Comment_token1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [43] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [85] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(41), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [127] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(45), 1,
      sym__S,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(10), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [169] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(49), 1,
      sym__S,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(4), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [211] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [253] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [295] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(53), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(55), 1,
      sym__S,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(7), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [337] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(53), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [379] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      aux_sym_Comment_token1,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(57), 1,
      sym__S,
    STATE(51), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(3), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
    STATE(52), 6,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
      sym_Comment,
  [418] = 2,
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
      aux_sym_Comment_token1,
  [440] = 8,
    ACTIONS(63), 1,
      anon_sym_PERCENT,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_AMP_POUND,
    ACTIONS(73), 1,
      anon_sym_AMP_POUNDx,
    STATE(70), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [468] = 8,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PERCENT,
    ACTIONS(77), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(79), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_AMP_POUND,
    ACTIONS(83), 1,
      anon_sym_AMP_POUNDx,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [496] = 8,
    ACTIONS(75), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_AMP_POUND,
    ACTIONS(83), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_EntityValue_token1,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [524] = 8,
    ACTIONS(63), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_AMP_POUND,
    ACTIONS(73), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      aux_sym_EntityValue_token2,
    STATE(70), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [552] = 8,
    ACTIONS(91), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(102), 1,
      anon_sym_AMP_POUND,
    ACTIONS(105), 1,
      anon_sym_AMP_POUNDx,
    STATE(66), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [580] = 8,
    ACTIONS(108), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(119), 1,
      anon_sym_AMP_POUND,
    ACTIONS(122), 1,
      anon_sym_AMP_POUNDx,
    STATE(70), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [608] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_NOTATION,
    STATE(202), 1,
      sym__AttType,
    ACTIONS(127), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(201), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(209), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [633] = 7,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(139), 1,
      aux_sym_AttValue_token2,
    STATE(21), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [657] = 7,
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
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [681] = 7,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(161), 1,
      aux_sym_AttValue_token1,
    STATE(26), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [705] = 7,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      aux_sym_AttValue_token1,
    STATE(22), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [729] = 7,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_AttValue_token2,
    STATE(20), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [753] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym__choice,
    STATE(206), 1,
      sym_contentspec,
    ACTIONS(169), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(207), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [775] = 7,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      anon_sym_AMP_POUND,
    ACTIONS(181), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(184), 1,
      aux_sym_AttValue_token1,
    STATE(26), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
  [799] = 2,
    ACTIONS(189), 1,
      anon_sym_LT_BANG,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [812] = 2,
    ACTIONS(193), 1,
      anon_sym_LT_BANG,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [825] = 2,
    ACTIONS(197), 1,
      anon_sym_LT_BANG,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [838] = 2,
    ACTIONS(201), 1,
      anon_sym_LT_BANG,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [851] = 6,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [872] = 2,
    ACTIONS(215), 1,
      anon_sym_LT_BANG,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [885] = 2,
    ACTIONS(219), 1,
      anon_sym_LT_BANG,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [898] = 1,
    ACTIONS(221), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [909] = 2,
    ACTIONS(225), 1,
      anon_sym_LT_BANG,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [922] = 2,
    ACTIONS(229), 1,
      anon_sym_LT_BANG,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [935] = 6,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [956] = 2,
    ACTIONS(237), 1,
      anon_sym_LT_BANG,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [969] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [982] = 2,
    ACTIONS(245), 1,
      anon_sym_LT_BANG,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [995] = 2,
    ACTIONS(249), 1,
      anon_sym_LT_BANG,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1008] = 2,
    ACTIONS(253), 1,
      anon_sym_LT_BANG,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1021] = 1,
    ACTIONS(255), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1032] = 8,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(263), 1,
      sym__S,
    STATE(37), 1,
      sym_PEReference,
    STATE(58), 1,
      sym__choice,
    STATE(93), 1,
      sym__cp,
  [1057] = 2,
    ACTIONS(267), 1,
      anon_sym_LT_BANG,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1070] = 2,
    ACTIONS(271), 1,
      anon_sym_LT_BANG,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1083] = 2,
    ACTIONS(275), 1,
      anon_sym_LT_BANG,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1096] = 2,
    ACTIONS(279), 1,
      anon_sym_LT_BANG,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1109] = 1,
    ACTIONS(281), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1120] = 2,
    ACTIONS(285), 1,
      anon_sym_LT_BANG,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1133] = 2,
    ACTIONS(289), 1,
      anon_sym_LT_BANG,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1146] = 2,
    ACTIONS(293), 1,
      anon_sym_LT_BANG,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1159] = 2,
    ACTIONS(297), 1,
      anon_sym_LT_BANG,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1172] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym__S,
    STATE(105), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1192] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_POUNDPCDATA,
    STATE(31), 1,
      sym_PEReference,
    STATE(58), 1,
      sym__choice,
    STATE(89), 1,
      sym__cp,
  [1214] = 6,
    ACTIONS(305), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_AttValue,
    STATE(216), 1,
      sym_DefaultDecl,
    ACTIONS(303), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1234] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      sym__S,
    STATE(117), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1254] = 2,
    ACTIONS(207), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(209), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1266] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym__S,
    STATE(93), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1286] = 6,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(321), 1,
      anon_sym_PUBLIC,
    STATE(150), 1,
      sym_ExternalID,
    STATE(184), 1,
      sym_EntityValue,
  [1305] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1316] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      sym_Name,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      sym__S,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    STATE(168), 1,
      sym_PEReference,
  [1335] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      sym__S,
    ACTIONS(333), 1,
      sym_Name,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    STATE(174), 1,
      sym_PEReference,
  [1354] = 2,
    ACTIONS(337), 1,
      anon_sym_LT_BANG,
    ACTIONS(335), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1365] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1382] = 2,
    ACTIONS(341), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(339), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1393] = 2,
    ACTIONS(345), 1,
      anon_sym_LT_BANG,
    ACTIONS(343), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1404] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1421] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(347), 1,
      anon_sym_PUBLIC,
    STATE(228), 1,
      sym_PEReference,
    STATE(189), 2,
      sym_ExternalID,
      sym_PublicID,
  [1438] = 2,
    ACTIONS(341), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(339), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1449] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      sym__S,
    ACTIONS(333), 1,
      sym_Name,
    STATE(62), 1,
      aux_sym_NotationType_repeat1,
    STATE(174), 1,
      sym_PEReference,
  [1468] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(257), 1,
      sym_Name,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1485] = 2,
    ACTIONS(351), 1,
      anon_sym_LT_BANG,
    ACTIONS(349), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      aux_sym_Comment_token1,
  [1496] = 2,
    ACTIONS(355), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(353), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1507] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1518] = 5,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_SYSTEM,
    ACTIONS(321), 1,
      anon_sym_PUBLIC,
    STATE(163), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1535] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1546] = 2,
    ACTIONS(355), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(353), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1557] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      sym__S,
    ACTIONS(357), 1,
      sym_Name,
    STATE(63), 1,
      aux_sym_NotationType_repeat1,
    STATE(181), 1,
      sym_PEReference,
  [1576] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1587] = 4,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      sym__S,
    STATE(81), 1,
      aux_sym__choice_repeat1,
    ACTIONS(359), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1601] = 2,
    ACTIONS(341), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(339), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1611] = 4,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      sym__S,
    STATE(81), 1,
      aux_sym__choice_repeat1,
    ACTIONS(367), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1625] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1635] = 2,
    ACTIONS(355), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(353), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1645] = 2,
    ACTIONS(373), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(375), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1655] = 4,
    ACTIONS(371), 1,
      sym__S,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym__choice_repeat1,
    ACTIONS(367), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1669] = 2,
    ACTIONS(341), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(339), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1679] = 4,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      sym__S,
    STATE(87), 1,
      aux_sym__choice_repeat1,
    ACTIONS(367), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1693] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(381), 1,
      sym__S,
    STATE(159), 1,
      sym_PEReference,
    ACTIONS(379), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1707] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1717] = 2,
    ACTIONS(355), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(353), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1727] = 4,
    ACTIONS(371), 1,
      sym__S,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym__choice_repeat1,
    ACTIONS(367), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1741] = 4,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      sym__S,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(385), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1755] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(393), 1,
      sym_Name,
    ACTIONS(395), 1,
      anon_sym_GT,
    STATE(223), 1,
      sym_PEReference,
  [1768] = 4,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      sym__S,
    STATE(96), 1,
      aux_sym_Mixed_repeat1,
  [1781] = 1,
    ACTIONS(385), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1788] = 2,
    ACTIONS(407), 1,
      sym__S,
    ACTIONS(405), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1797] = 2,
    ACTIONS(410), 1,
      sym__S,
    ACTIONS(385), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1806] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(413), 1,
      sym_Name,
    ACTIONS(415), 1,
      sym__S,
    STATE(146), 1,
      sym_PEReference,
  [1819] = 1,
    ACTIONS(417), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1826] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_Mixed_repeat1,
  [1839] = 4,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Enumeration_repeat1,
  [1852] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      sym__S,
    STATE(96), 1,
      aux_sym_Mixed_repeat1,
  [1865] = 1,
    ACTIONS(362), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1872] = 3,
    ACTIONS(429), 1,
      anon_sym_GT,
    ACTIONS(431), 1,
      sym__S,
    STATE(116), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1883] = 4,
    ACTIONS(433), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Enumeration_repeat1,
  [1896] = 4,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_Enumeration_repeat1,
  [1909] = 4,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      sym__S,
    STATE(107), 1,
      aux_sym_Enumeration_repeat1,
  [1922] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    STATE(156), 1,
      sym_PEReference,
    ACTIONS(449), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1933] = 1,
    ACTIONS(451), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1940] = 3,
    ACTIONS(453), 1,
      anon_sym_GT,
    ACTIONS(455), 1,
      sym__S,
    STATE(112), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1951] = 1,
    ACTIONS(458), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1958] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(460), 1,
      sym_Name,
    ACTIONS(462), 1,
      sym__S,
    STATE(79), 1,
      sym_PEReference,
  [1971] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(393), 1,
      sym_Name,
    ACTIONS(464), 1,
      anon_sym_GT,
    STATE(223), 1,
      sym_PEReference,
  [1984] = 3,
    ACTIONS(464), 1,
      anon_sym_GT,
    ACTIONS(466), 1,
      sym__S,
    STATE(112), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1995] = 1,
    ACTIONS(468), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2002] = 4,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_Enumeration_repeat1,
  [2015] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_Mixed_repeat1,
  [2028] = 4,
    ACTIONS(470), 1,
      anon_sym_ELEMENT,
    ACTIONS(472), 1,
      anon_sym_ATTLIST,
    ACTIONS(474), 1,
      anon_sym_NOTATION,
    ACTIONS(476), 1,
      anon_sym_ENTITY,
  [2041] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(427), 1,
      sym__S,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_Mixed_repeat1,
  [2054] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(480), 1,
      sym_Name,
    ACTIONS(482), 1,
      sym__S,
    STATE(149), 1,
      sym_PEReference,
  [2067] = 2,
    ACTIONS(486), 1,
      sym__S,
    ACTIONS(484), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2075] = 3,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      sym_PubidLiteral,
  [2085] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      sym_Name,
    STATE(241), 1,
      sym_PEReference,
  [2095] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(495), 1,
      sym_Name,
    STATE(106), 1,
      sym_PEReference,
  [2105] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(497), 1,
      sym_Name,
    STATE(240), 1,
      sym_PEReference,
  [2115] = 1,
    ACTIONS(499), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2121] = 3,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(503), 1,
      anon_sym_PERCENT,
    STATE(235), 1,
      sym_PEReference,
  [2131] = 3,
    ACTIONS(505), 1,
      sym__S,
    ACTIONS(507), 1,
      anon_sym_QMARK_GT,
    STATE(199), 1,
      sym__EncodingDecl,
  [2141] = 2,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(509), 2,
      anon_sym_GT,
      sym__S,
  [2149] = 1,
    ACTIONS(513), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2155] = 3,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      sym_SystemLiteral,
  [2165] = 1,
    ACTIONS(519), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2171] = 3,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      sym_PubidLiteral,
  [2181] = 3,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_AttValue,
  [2191] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(521), 1,
      sym_Name,
    STATE(71), 1,
      sym_PEReference,
  [2201] = 1,
    ACTIONS(436), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2207] = 3,
    ACTIONS(523), 1,
      sym__S,
    ACTIONS(525), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym__Eq,
  [2217] = 1,
    ACTIONS(484), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2223] = 2,
    ACTIONS(529), 1,
      sym__S,
    ACTIONS(527), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2231] = 3,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_PubidLiteral,
  [2241] = 3,
    ACTIONS(523), 1,
      sym__S,
    ACTIONS(525), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym__Eq,
  [2251] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      sym_Name,
    STATE(123), 1,
      sym_PEReference,
  [2261] = 1,
    ACTIONS(533), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2267] = 2,
    ACTIONS(535), 1,
      sym__S,
    ACTIONS(533), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2275] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(538), 1,
      sym_Name,
    STATE(197), 1,
      sym_PEReference,
  [2285] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(413), 1,
      sym_Name,
    STATE(146), 1,
      sym_PEReference,
  [2295] = 2,
    ACTIONS(540), 1,
      sym__S,
    ACTIONS(400), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2303] = 3,
    ACTIONS(543), 1,
      anon_sym_GT,
    ACTIONS(545), 1,
      sym__S,
    STATE(198), 1,
      sym_NDataDecl,
  [2313] = 2,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(547), 2,
      anon_sym_GT,
      sym__S,
  [2321] = 3,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      sym_SystemLiteral,
  [2331] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(393), 1,
      sym_Name,
    STATE(223), 1,
      sym_PEReference,
  [2341] = 2,
    ACTIONS(553), 1,
      sym__S,
    ACTIONS(551), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2349] = 1,
    ACTIONS(555), 2,
      anon_sym_GT,
      sym__S,
  [2354] = 2,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__S,
  [2361] = 2,
    ACTIONS(561), 1,
      sym_Name,
    ACTIONS(563), 1,
      anon_sym_xml,
  [2368] = 1,
    ACTIONS(565), 2,
      anon_sym_GT,
      sym__S,
  [2373] = 2,
    ACTIONS(567), 1,
      anon_sym_LBRACK,
    ACTIONS(569), 1,
      sym__S,
  [2380] = 2,
    ACTIONS(571), 1,
      sym__S,
    ACTIONS(573), 1,
      anon_sym_QMARK_GT,
  [2387] = 2,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      sym__S,
  [2394] = 1,
    ACTIONS(575), 2,
      anon_sym_GT,
      sym__S,
  [2399] = 2,
    ACTIONS(579), 1,
      anon_sym_GT,
    ACTIONS(581), 1,
      sym__S,
  [2406] = 2,
    ACTIONS(583), 1,
      sym__S,
    STATE(130), 1,
      sym__VersionInfo,
  [2413] = 1,
    ACTIONS(585), 2,
      anon_sym_GT,
      sym__S,
  [2418] = 1,
    ACTIONS(587), 2,
      anon_sym_GT,
      sym__S,
  [2423] = 1,
    ACTIONS(589), 2,
      anon_sym_GT,
      sym__S,
  [2428] = 2,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      sym__S,
  [2435] = 1,
    ACTIONS(595), 2,
      anon_sym_GT,
      sym__S,
  [2440] = 1,
    ACTIONS(597), 2,
      anon_sym_GT,
      sym__S,
  [2445] = 1,
    ACTIONS(599), 2,
      anon_sym_GT,
      sym__S,
  [2450] = 1,
    ACTIONS(601), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2455] = 1,
    ACTIONS(603), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2460] = 2,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      sym__S,
  [2467] = 1,
    ACTIONS(547), 2,
      anon_sym_GT,
      sym__S,
  [2472] = 2,
    ACTIONS(609), 1,
      anon_sym_GT,
    ACTIONS(611), 1,
      anon_sym_NDATA,
  [2479] = 1,
    ACTIONS(613), 2,
      anon_sym_GT,
      sym__S,
  [2484] = 1,
    ACTIONS(615), 2,
      anon_sym_GT,
      sym__S,
  [2489] = 2,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      anon_sym_SQUOTE,
  [2496] = 2,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      anon_sym_PIPE,
  [2503] = 2,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      sym__S,
  [2510] = 2,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      anon_sym_PIPE,
  [2517] = 1,
    ACTIONS(551), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2522] = 2,
    ACTIONS(543), 1,
      anon_sym_GT,
    ACTIONS(627), 1,
      sym__S,
  [2529] = 2,
    ACTIONS(629), 1,
      anon_sym_PIPE,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [2536] = 1,
    ACTIONS(633), 2,
      anon_sym_GT,
      sym__S,
  [2541] = 1,
    ACTIONS(635), 2,
      anon_sym_GT,
      sym__S,
  [2546] = 2,
    ACTIONS(637), 1,
      sym_Name,
    ACTIONS(639), 1,
      sym__S,
  [2553] = 2,
    ACTIONS(641), 1,
      anon_sym_GT,
    ACTIONS(643), 1,
      sym__S,
  [2560] = 2,
    ACTIONS(645), 1,
      sym__S,
    ACTIONS(647), 1,
      sym_Nmtoken,
  [2567] = 1,
    ACTIONS(649), 2,
      anon_sym_GT,
      sym__S,
  [2572] = 2,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_PIPE,
  [2579] = 1,
    ACTIONS(651), 2,
      anon_sym_GT,
      sym__S,
  [2584] = 1,
    ACTIONS(653), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2589] = 1,
    ACTIONS(655), 2,
      anon_sym_GT,
      sym__S,
  [2594] = 2,
    ACTIONS(657), 1,
      anon_sym_QMARK_GT,
    ACTIONS(659), 1,
      anon_sym_encoding,
  [2601] = 1,
    ACTIONS(661), 2,
      anon_sym_GT,
      sym__S,
  [2606] = 2,
    ACTIONS(609), 1,
      anon_sym_GT,
    ACTIONS(663), 1,
      sym__S,
  [2613] = 2,
    ACTIONS(657), 1,
      anon_sym_QMARK_GT,
    ACTIONS(665), 1,
      sym__S,
  [2620] = 1,
    ACTIONS(667), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2625] = 1,
    ACTIONS(669), 2,
      anon_sym_GT,
      sym__S,
  [2630] = 2,
    ACTIONS(671), 1,
      anon_sym_GT,
    ACTIONS(673), 1,
      sym__S,
  [2637] = 1,
    ACTIONS(675), 2,
      anon_sym_GT,
      sym__S,
  [2642] = 1,
    ACTIONS(677), 2,
      anon_sym_GT,
      sym__S,
  [2647] = 1,
    ACTIONS(679), 2,
      anon_sym_GT,
      sym__S,
  [2652] = 2,
    ACTIONS(681), 1,
      anon_sym_GT,
    ACTIONS(683), 1,
      sym__S,
  [2659] = 1,
    ACTIONS(685), 2,
      anon_sym_GT,
      sym__S,
  [2664] = 1,
    ACTIONS(687), 2,
      anon_sym_GT,
      sym__S,
  [2669] = 1,
    ACTIONS(689), 2,
      anon_sym_GT,
      sym__S,
  [2674] = 2,
    ACTIONS(691), 1,
      sym__S,
    ACTIONS(693), 1,
      sym_Nmtoken,
  [2681] = 1,
    ACTIONS(695), 2,
      anon_sym_GT,
      sym__S,
  [2686] = 2,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_PIPE,
  [2693] = 2,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [2700] = 2,
    ACTIONS(701), 1,
      sym__S,
    ACTIONS(703), 1,
      sym_Nmtoken,
  [2707] = 1,
    ACTIONS(705), 2,
      anon_sym_GT,
      sym__S,
  [2712] = 1,
    ACTIONS(707), 2,
      anon_sym_GT,
      sym__S,
  [2717] = 1,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
  [2721] = 1,
    ACTIONS(711), 1,
      aux_sym_PubidLiteral_token1,
  [2725] = 1,
    ACTIONS(713), 1,
      sym__S,
  [2729] = 1,
    ACTIONS(715), 1,
      anon_sym_QMARK_GT,
  [2733] = 1,
    ACTIONS(717), 1,
      anon_sym_STAR,
  [2737] = 1,
    ACTIONS(719), 1,
      sym__S,
  [2741] = 1,
    ACTIONS(721), 1,
      sym__S,
  [2745] = 1,
    ACTIONS(723), 1,
      sym__S,
  [2749] = 1,
    ACTIONS(725), 1,
      anon_sym_GT,
  [2753] = 1,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
  [2757] = 1,
    ACTIONS(729), 1,
      anon_sym_GT,
  [2761] = 1,
    ACTIONS(731), 1,
      sym__S,
  [2765] = 1,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
  [2769] = 1,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
  [2773] = 1,
    ACTIONS(735), 1,
      anon_sym_QMARK_GT,
  [2777] = 1,
    ACTIONS(647), 1,
      sym_Nmtoken,
  [2781] = 1,
    ACTIONS(737), 1,
      anon_sym_SQUOTE,
  [2785] = 1,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
  [2789] = 1,
    ACTIONS(739), 1,
      sym__S,
  [2793] = 1,
    ACTIONS(741), 1,
      sym_Name,
  [2797] = 1,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
  [2801] = 1,
    ACTIONS(745), 1,
      aux_sym_CharRef_token1,
  [2805] = 1,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [2809] = 1,
    ACTIONS(749), 1,
      sym__S,
  [2813] = 1,
    ACTIONS(751), 1,
      sym__S,
  [2817] = 1,
    ACTIONS(745), 1,
      aux_sym_CharRef_token2,
  [2821] = 1,
    ACTIONS(753), 1,
      sym_Nmtoken,
  [2825] = 1,
    ACTIONS(755), 1,
      sym__S,
  [2829] = 1,
    ACTIONS(609), 1,
      anon_sym_GT,
  [2833] = 1,
    ACTIONS(757), 1,
      sym_Nmtoken,
  [2837] = 1,
    ACTIONS(629), 1,
      anon_sym_PIPE,
  [2841] = 1,
    ACTIONS(759), 1,
      anon_sym_LBRACK,
  [2845] = 1,
    ACTIONS(761), 1,
      sym_VersionNum,
  [2849] = 1,
    ACTIONS(763), 1,
      anon_sym_PIPE,
  [2853] = 1,
    ACTIONS(765), 1,
      sym_VersionNum,
  [2857] = 1,
    ACTIONS(767), 1,
      anon_sym_version,
  [2861] = 1,
    ACTIONS(621), 1,
      anon_sym_PIPE,
  [2865] = 1,
    ACTIONS(549), 1,
      anon_sym_STAR,
  [2869] = 1,
    ACTIONS(769), 1,
      aux_sym_PI_token1,
  [2873] = 1,
    ACTIONS(771), 1,
      sym_EncName,
  [2877] = 1,
    ACTIONS(773), 1,
      anon_sym_GT,
  [2881] = 1,
    ACTIONS(775), 1,
      sym_EncName,
  [2885] = 1,
    ACTIONS(777), 1,
      sym__S,
  [2889] = 1,
    ACTIONS(779), 1,
      sym_Name,
  [2893] = 1,
    ACTIONS(781), 1,
      sym__S,
  [2897] = 1,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
  [2901] = 1,
    ACTIONS(783), 1,
      anon_sym_GT,
  [2905] = 1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [2909] = 1,
    ACTIONS(785), 1,
      aux_sym_SystemLiteral_token1,
  [2913] = 1,
    ACTIONS(787), 1,
      sym__S,
  [2917] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [2921] = 1,
    ACTIONS(577), 1,
      sym__S,
  [2925] = 1,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
  [2929] = 1,
    ACTIONS(637), 1,
      sym_Name,
  [2933] = 1,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [2937] = 1,
    ACTIONS(791), 1,
      anon_sym_SEMI,
  [2941] = 1,
    ACTIONS(793), 1,
      sym_Name,
  [2945] = 1,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [2949] = 1,
    ACTIONS(797), 1,
      aux_sym_PubidLiteral_token2,
  [2953] = 1,
    ACTIONS(799), 1,
      anon_sym_SEMI,
  [2957] = 1,
    ACTIONS(801), 1,
      sym__S,
  [2961] = 1,
    ACTIONS(803), 1,
      sym__S,
  [2965] = 1,
    ACTIONS(805), 1,
      sym__S,
  [2969] = 1,
    ACTIONS(807), 1,
      sym__S,
  [2973] = 1,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
  [2977] = 1,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
  [2981] = 1,
    ACTIONS(811), 1,
      aux_sym_SystemLiteral_token2,
  [2985] = 1,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [2989] = 1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [2993] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [2997] = 1,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [3001] = 1,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [3005] = 1,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [3009] = 1,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [3013] = 1,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [3017] = 1,
    ACTIONS(829), 1,
      sym_Name,
  [3021] = 1,
    ACTIONS(831), 1,
      sym_Name,
  [3025] = 1,
    ACTIONS(833), 1,
      aux_sym_CharRef_token1,
  [3029] = 1,
    ACTIONS(833), 1,
      aux_sym_CharRef_token2,
  [3033] = 1,
    ACTIONS(835), 1,
      sym_Name,
  [3037] = 1,
    ACTIONS(837), 1,
      sym_Name,
  [3041] = 1,
    ACTIONS(839), 1,
      aux_sym_CharRef_token1,
  [3045] = 1,
    ACTIONS(839), 1,
      aux_sym_CharRef_token2,
  [3049] = 1,
    ACTIONS(841), 1,
      sym_Name,
  [3053] = 1,
    ACTIONS(843), 1,
      aux_sym_CharRef_token1,
  [3057] = 1,
    ACTIONS(843), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 496,
  [SMALL_STATE(16)] = 524,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 608,
  [SMALL_STATE(20)] = 633,
  [SMALL_STATE(21)] = 657,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 705,
  [SMALL_STATE(24)] = 729,
  [SMALL_STATE(25)] = 753,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 799,
  [SMALL_STATE(28)] = 812,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 838,
  [SMALL_STATE(31)] = 851,
  [SMALL_STATE(32)] = 872,
  [SMALL_STATE(33)] = 885,
  [SMALL_STATE(34)] = 898,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 922,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 956,
  [SMALL_STATE(39)] = 969,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 995,
  [SMALL_STATE(42)] = 1008,
  [SMALL_STATE(43)] = 1021,
  [SMALL_STATE(44)] = 1032,
  [SMALL_STATE(45)] = 1057,
  [SMALL_STATE(46)] = 1070,
  [SMALL_STATE(47)] = 1083,
  [SMALL_STATE(48)] = 1096,
  [SMALL_STATE(49)] = 1109,
  [SMALL_STATE(50)] = 1120,
  [SMALL_STATE(51)] = 1133,
  [SMALL_STATE(52)] = 1146,
  [SMALL_STATE(53)] = 1159,
  [SMALL_STATE(54)] = 1172,
  [SMALL_STATE(55)] = 1192,
  [SMALL_STATE(56)] = 1214,
  [SMALL_STATE(57)] = 1234,
  [SMALL_STATE(58)] = 1254,
  [SMALL_STATE(59)] = 1266,
  [SMALL_STATE(60)] = 1286,
  [SMALL_STATE(61)] = 1305,
  [SMALL_STATE(62)] = 1316,
  [SMALL_STATE(63)] = 1335,
  [SMALL_STATE(64)] = 1354,
  [SMALL_STATE(65)] = 1365,
  [SMALL_STATE(66)] = 1382,
  [SMALL_STATE(67)] = 1393,
  [SMALL_STATE(68)] = 1404,
  [SMALL_STATE(69)] = 1421,
  [SMALL_STATE(70)] = 1438,
  [SMALL_STATE(71)] = 1449,
  [SMALL_STATE(72)] = 1468,
  [SMALL_STATE(73)] = 1485,
  [SMALL_STATE(74)] = 1496,
  [SMALL_STATE(75)] = 1507,
  [SMALL_STATE(76)] = 1518,
  [SMALL_STATE(77)] = 1535,
  [SMALL_STATE(78)] = 1546,
  [SMALL_STATE(79)] = 1557,
  [SMALL_STATE(80)] = 1576,
  [SMALL_STATE(81)] = 1587,
  [SMALL_STATE(82)] = 1601,
  [SMALL_STATE(83)] = 1611,
  [SMALL_STATE(84)] = 1625,
  [SMALL_STATE(85)] = 1635,
  [SMALL_STATE(86)] = 1645,
  [SMALL_STATE(87)] = 1655,
  [SMALL_STATE(88)] = 1669,
  [SMALL_STATE(89)] = 1679,
  [SMALL_STATE(90)] = 1693,
  [SMALL_STATE(91)] = 1707,
  [SMALL_STATE(92)] = 1717,
  [SMALL_STATE(93)] = 1727,
  [SMALL_STATE(94)] = 1741,
  [SMALL_STATE(95)] = 1755,
  [SMALL_STATE(96)] = 1768,
  [SMALL_STATE(97)] = 1781,
  [SMALL_STATE(98)] = 1788,
  [SMALL_STATE(99)] = 1797,
  [SMALL_STATE(100)] = 1806,
  [SMALL_STATE(101)] = 1819,
  [SMALL_STATE(102)] = 1826,
  [SMALL_STATE(103)] = 1839,
  [SMALL_STATE(104)] = 1852,
  [SMALL_STATE(105)] = 1865,
  [SMALL_STATE(106)] = 1872,
  [SMALL_STATE(107)] = 1883,
  [SMALL_STATE(108)] = 1896,
  [SMALL_STATE(109)] = 1909,
  [SMALL_STATE(110)] = 1922,
  [SMALL_STATE(111)] = 1933,
  [SMALL_STATE(112)] = 1940,
  [SMALL_STATE(113)] = 1951,
  [SMALL_STATE(114)] = 1958,
  [SMALL_STATE(115)] = 1971,
  [SMALL_STATE(116)] = 1984,
  [SMALL_STATE(117)] = 1995,
  [SMALL_STATE(118)] = 2002,
  [SMALL_STATE(119)] = 2015,
  [SMALL_STATE(120)] = 2028,
  [SMALL_STATE(121)] = 2041,
  [SMALL_STATE(122)] = 2054,
  [SMALL_STATE(123)] = 2067,
  [SMALL_STATE(124)] = 2075,
  [SMALL_STATE(125)] = 2085,
  [SMALL_STATE(126)] = 2095,
  [SMALL_STATE(127)] = 2105,
  [SMALL_STATE(128)] = 2115,
  [SMALL_STATE(129)] = 2121,
  [SMALL_STATE(130)] = 2131,
  [SMALL_STATE(131)] = 2141,
  [SMALL_STATE(132)] = 2149,
  [SMALL_STATE(133)] = 2155,
  [SMALL_STATE(134)] = 2165,
  [SMALL_STATE(135)] = 2171,
  [SMALL_STATE(136)] = 2181,
  [SMALL_STATE(137)] = 2191,
  [SMALL_STATE(138)] = 2201,
  [SMALL_STATE(139)] = 2207,
  [SMALL_STATE(140)] = 2217,
  [SMALL_STATE(141)] = 2223,
  [SMALL_STATE(142)] = 2231,
  [SMALL_STATE(143)] = 2241,
  [SMALL_STATE(144)] = 2251,
  [SMALL_STATE(145)] = 2261,
  [SMALL_STATE(146)] = 2267,
  [SMALL_STATE(147)] = 2275,
  [SMALL_STATE(148)] = 2285,
  [SMALL_STATE(149)] = 2295,
  [SMALL_STATE(150)] = 2303,
  [SMALL_STATE(151)] = 2313,
  [SMALL_STATE(152)] = 2321,
  [SMALL_STATE(153)] = 2331,
  [SMALL_STATE(154)] = 2341,
  [SMALL_STATE(155)] = 2349,
  [SMALL_STATE(156)] = 2354,
  [SMALL_STATE(157)] = 2361,
  [SMALL_STATE(158)] = 2368,
  [SMALL_STATE(159)] = 2373,
  [SMALL_STATE(160)] = 2380,
  [SMALL_STATE(161)] = 2387,
  [SMALL_STATE(162)] = 2394,
  [SMALL_STATE(163)] = 2399,
  [SMALL_STATE(164)] = 2406,
  [SMALL_STATE(165)] = 2413,
  [SMALL_STATE(166)] = 2418,
  [SMALL_STATE(167)] = 2423,
  [SMALL_STATE(168)] = 2428,
  [SMALL_STATE(169)] = 2435,
  [SMALL_STATE(170)] = 2440,
  [SMALL_STATE(171)] = 2445,
  [SMALL_STATE(172)] = 2450,
  [SMALL_STATE(173)] = 2455,
  [SMALL_STATE(174)] = 2460,
  [SMALL_STATE(175)] = 2467,
  [SMALL_STATE(176)] = 2472,
  [SMALL_STATE(177)] = 2479,
  [SMALL_STATE(178)] = 2484,
  [SMALL_STATE(179)] = 2489,
  [SMALL_STATE(180)] = 2496,
  [SMALL_STATE(181)] = 2503,
  [SMALL_STATE(182)] = 2510,
  [SMALL_STATE(183)] = 2517,
  [SMALL_STATE(184)] = 2522,
  [SMALL_STATE(185)] = 2529,
  [SMALL_STATE(186)] = 2536,
  [SMALL_STATE(187)] = 2541,
  [SMALL_STATE(188)] = 2546,
  [SMALL_STATE(189)] = 2553,
  [SMALL_STATE(190)] = 2560,
  [SMALL_STATE(191)] = 2567,
  [SMALL_STATE(192)] = 2572,
  [SMALL_STATE(193)] = 2579,
  [SMALL_STATE(194)] = 2584,
  [SMALL_STATE(195)] = 2589,
  [SMALL_STATE(196)] = 2594,
  [SMALL_STATE(197)] = 2601,
  [SMALL_STATE(198)] = 2606,
  [SMALL_STATE(199)] = 2613,
  [SMALL_STATE(200)] = 2620,
  [SMALL_STATE(201)] = 2625,
  [SMALL_STATE(202)] = 2630,
  [SMALL_STATE(203)] = 2637,
  [SMALL_STATE(204)] = 2642,
  [SMALL_STATE(205)] = 2647,
  [SMALL_STATE(206)] = 2652,
  [SMALL_STATE(207)] = 2659,
  [SMALL_STATE(208)] = 2664,
  [SMALL_STATE(209)] = 2669,
  [SMALL_STATE(210)] = 2674,
  [SMALL_STATE(211)] = 2681,
  [SMALL_STATE(212)] = 2686,
  [SMALL_STATE(213)] = 2693,
  [SMALL_STATE(214)] = 2700,
  [SMALL_STATE(215)] = 2707,
  [SMALL_STATE(216)] = 2712,
  [SMALL_STATE(217)] = 2717,
  [SMALL_STATE(218)] = 2721,
  [SMALL_STATE(219)] = 2725,
  [SMALL_STATE(220)] = 2729,
  [SMALL_STATE(221)] = 2733,
  [SMALL_STATE(222)] = 2737,
  [SMALL_STATE(223)] = 2741,
  [SMALL_STATE(224)] = 2745,
  [SMALL_STATE(225)] = 2749,
  [SMALL_STATE(226)] = 2753,
  [SMALL_STATE(227)] = 2757,
  [SMALL_STATE(228)] = 2761,
  [SMALL_STATE(229)] = 2765,
  [SMALL_STATE(230)] = 2769,
  [SMALL_STATE(231)] = 2773,
  [SMALL_STATE(232)] = 2777,
  [SMALL_STATE(233)] = 2781,
  [SMALL_STATE(234)] = 2785,
  [SMALL_STATE(235)] = 2789,
  [SMALL_STATE(236)] = 2793,
  [SMALL_STATE(237)] = 2797,
  [SMALL_STATE(238)] = 2801,
  [SMALL_STATE(239)] = 2805,
  [SMALL_STATE(240)] = 2809,
  [SMALL_STATE(241)] = 2813,
  [SMALL_STATE(242)] = 2817,
  [SMALL_STATE(243)] = 2821,
  [SMALL_STATE(244)] = 2825,
  [SMALL_STATE(245)] = 2829,
  [SMALL_STATE(246)] = 2833,
  [SMALL_STATE(247)] = 2837,
  [SMALL_STATE(248)] = 2841,
  [SMALL_STATE(249)] = 2845,
  [SMALL_STATE(250)] = 2849,
  [SMALL_STATE(251)] = 2853,
  [SMALL_STATE(252)] = 2857,
  [SMALL_STATE(253)] = 2861,
  [SMALL_STATE(254)] = 2865,
  [SMALL_STATE(255)] = 2869,
  [SMALL_STATE(256)] = 2873,
  [SMALL_STATE(257)] = 2877,
  [SMALL_STATE(258)] = 2881,
  [SMALL_STATE(259)] = 2885,
  [SMALL_STATE(260)] = 2889,
  [SMALL_STATE(261)] = 2893,
  [SMALL_STATE(262)] = 2897,
  [SMALL_STATE(263)] = 2901,
  [SMALL_STATE(264)] = 2905,
  [SMALL_STATE(265)] = 2909,
  [SMALL_STATE(266)] = 2913,
  [SMALL_STATE(267)] = 2917,
  [SMALL_STATE(268)] = 2921,
  [SMALL_STATE(269)] = 2925,
  [SMALL_STATE(270)] = 2929,
  [SMALL_STATE(271)] = 2933,
  [SMALL_STATE(272)] = 2937,
  [SMALL_STATE(273)] = 2941,
  [SMALL_STATE(274)] = 2945,
  [SMALL_STATE(275)] = 2949,
  [SMALL_STATE(276)] = 2953,
  [SMALL_STATE(277)] = 2957,
  [SMALL_STATE(278)] = 2961,
  [SMALL_STATE(279)] = 2965,
  [SMALL_STATE(280)] = 2969,
  [SMALL_STATE(281)] = 2973,
  [SMALL_STATE(282)] = 2977,
  [SMALL_STATE(283)] = 2981,
  [SMALL_STATE(284)] = 2985,
  [SMALL_STATE(285)] = 2989,
  [SMALL_STATE(286)] = 2993,
  [SMALL_STATE(287)] = 2997,
  [SMALL_STATE(288)] = 3001,
  [SMALL_STATE(289)] = 3005,
  [SMALL_STATE(290)] = 3009,
  [SMALL_STATE(291)] = 3013,
  [SMALL_STATE(292)] = 3017,
  [SMALL_STATE(293)] = 3021,
  [SMALL_STATE(294)] = 3025,
  [SMALL_STATE(295)] = 3029,
  [SMALL_STATE(296)] = 3033,
  [SMALL_STATE(297)] = 3037,
  [SMALL_STATE(298)] = 3041,
  [SMALL_STATE(299)] = 3045,
  [SMALL_STATE(300)] = 3049,
  [SMALL_STATE(301)] = 3053,
  [SMALL_STATE(302)] = 3057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(270),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(273),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(292),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(17),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(236),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(238),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(242),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(296),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(18),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(293),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(294),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(295),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(300),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(301),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(302),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(297),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(298),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(299),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Comment, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Comment, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(54),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(194),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(98),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(250),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(122),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(253),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(97),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(101),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(210),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(247),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(153),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(134),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(140),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(145),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [809] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
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
