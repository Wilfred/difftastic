#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 305
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_EQ = 57,
  sym_PITarget = 58,
  sym__pi_content = 59,
  sym_Comment = 60,
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
  [anon_sym_EQ] = "=",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_Comment] = "Comment",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_Comment] = sym_Comment,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_PITarget] = {
    .visible = true,
    .named = true,
  },
  [sym__pi_content] = {
    .visible = false,
    .named = true,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
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
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [34] = 16,
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
  [61] = 16,
  [62] = 16,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 69,
  [76] = 74,
  [77] = 65,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 69,
  [82] = 65,
  [83] = 74,
  [84] = 65,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 69,
  [89] = 89,
  [90] = 90,
  [91] = 74,
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
  [284] = 276,
  [285] = 238,
  [286] = 220,
  [287] = 276,
  [288] = 238,
  [289] = 220,
  [290] = 276,
  [291] = 238,
  [292] = 220,
  [293] = 255,
  [294] = 224,
  [295] = 228,
  [296] = 229,
  [297] = 255,
  [298] = 224,
  [299] = 228,
  [300] = 229,
  [301] = 255,
  [302] = 224,
  [303] = 228,
  [304] = 229,
};

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
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '?') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '?') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'Q') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 38:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'Y') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
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
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 39, .external_lex_state = 2},
  [2] = {.lex_state = 39, .external_lex_state = 2},
  [3] = {.lex_state = 39, .external_lex_state = 2},
  [4] = {.lex_state = 39, .external_lex_state = 2},
  [5] = {.lex_state = 39, .external_lex_state = 2},
  [6] = {.lex_state = 39, .external_lex_state = 2},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 39, .external_lex_state = 2},
  [9] = {.lex_state = 39, .external_lex_state = 2},
  [10] = {.lex_state = 39, .external_lex_state = 2},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39, .external_lex_state = 2},
  [29] = {.lex_state = 39, .external_lex_state = 2},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39, .external_lex_state = 2},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39, .external_lex_state = 2},
  [34] = {.lex_state = 39, .external_lex_state = 2},
  [35] = {.lex_state = 39, .external_lex_state = 2},
  [36] = {.lex_state = 39, .external_lex_state = 2},
  [37] = {.lex_state = 39, .external_lex_state = 2},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39, .external_lex_state = 2},
  [40] = {.lex_state = 39, .external_lex_state = 2},
  [41] = {.lex_state = 39, .external_lex_state = 2},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39, .external_lex_state = 2},
  [44] = {.lex_state = 39, .external_lex_state = 2},
  [45] = {.lex_state = 39, .external_lex_state = 2},
  [46] = {.lex_state = 39, .external_lex_state = 2},
  [47] = {.lex_state = 39, .external_lex_state = 2},
  [48] = {.lex_state = 39, .external_lex_state = 2},
  [49] = {.lex_state = 39, .external_lex_state = 2},
  [50] = {.lex_state = 39, .external_lex_state = 2},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39, .external_lex_state = 2},
  [53] = {.lex_state = 39, .external_lex_state = 2},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 39, .external_lex_state = 2},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39, .external_lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 39, .external_lex_state = 2},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 39},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 39},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 39},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 39},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 39},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 39},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 39},
  [157] = {.lex_state = 39, .external_lex_state = 3},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 39},
  [169] = {.lex_state = 39},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 39},
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 39},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 35},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 39},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 39},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 39},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 39},
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 39},
  [216] = {.lex_state = 39},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 39},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 39},
  [222] = {.lex_state = 39},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 39},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 37},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 39},
  [237] = {.lex_state = 39},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 38},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 35},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 39},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 39},
  [253] = {.lex_state = 35},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 39},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 125},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 126},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 127},
  [269] = {.lex_state = 128},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 39},
  [272] = {.lex_state = 39},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 39},
  [276] = {.lex_state = 39},
  [277] = {.lex_state = 39},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 39},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 39},
  [284] = {.lex_state = 39},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 39},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 39},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 39},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 39},
  [293] = {.lex_state = 39},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 37},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 37},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 39},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 37},
};

enum {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
  },
  [2] = {
    [ts_external_token_Comment] = true,
  },
  [3] = {
    [ts_external_token_PITarget] = true,
  },
  [4] = {
    [ts_external_token__pi_content] = true,
  },
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
    [anon_sym_EQ] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(282),
    [sym__extSubsetDecl] = STATE(9),
    [sym_conditionalSect] = STATE(9),
    [sym__markupdecl] = STATE(9),
    [sym__DeclSep] = STATE(9),
    [sym_elementdecl] = STATE(50),
    [sym_AttlistDecl] = STATE(50),
    [sym__EntityDecl] = STATE(50),
    [sym_GEDecl] = STATE(47),
    [sym_PEDecl] = STATE(47),
    [sym_NotationDecl] = STATE(50),
    [sym_PEReference] = STATE(9),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(50),
    [aux_sym_document_repeat1] = STATE(9),
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
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
  [124] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(41), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    ACTIONS(45), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(47), 1,
      sym__S,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
  [206] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    ACTIONS(37), 1,
      sym__S,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
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
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(55), 1,
      sym__S,
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(3), 6,
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
    STATE(47), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(50), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(7), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_document_repeat1,
  [408] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    STATE(74), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(15), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [436] = 8,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_AMP_POUND,
    ACTIONS(81), 1,
      anon_sym_AMP_POUNDx,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [464] = 8,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(91), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_AMP_POUND,
    ACTIONS(97), 1,
      anon_sym_AMP_POUNDx,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [492] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_EntityValue_token1,
    STATE(74), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [520] = 1,
    ACTIONS(102), 11,
      anon_sym_LBRACK,
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
  [534] = 8,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_AMP_POUND,
    ACTIONS(118), 1,
      anon_sym_AMP_POUNDx,
    STATE(74), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [562] = 8,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_AMP_POUND,
    ACTIONS(81), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(121), 1,
      aux_sym_EntityValue_token2,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [590] = 7,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_NOTATION,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    STATE(179), 1,
      sym__AttType,
    ACTIONS(125), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(178), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(181), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [615] = 7,
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
    STATE(26), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [639] = 7,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_AMP_POUND,
    ACTIONS(145), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(147), 1,
      aux_sym_AttValue_token2,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(83), 2,
      sym_EntityRef,
      sym_CharRef,
  [663] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__choice,
    STATE(194), 1,
      sym_contentspec,
    ACTIONS(149), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(193), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [685] = 7,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      anon_sym_AMP_POUND,
    ACTIONS(161), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(164), 1,
      aux_sym_AttValue_token2,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(83), 2,
      sym_EntityRef,
      sym_CharRef,
  [709] = 7,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_AMP_POUND,
    ACTIONS(145), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_AttValue_token2,
    STATE(21), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(83), 2,
      sym_EntityRef,
      sym_CharRef,
  [733] = 7,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_AttValue_token1,
    STATE(20), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [757] = 7,
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
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
  [781] = 8,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(193), 1,
      sym__S,
    STATE(32), 1,
      sym_PEReference,
    STATE(59), 1,
      sym__choice,
    STATE(89), 1,
      sym__cp,
  [806] = 2,
    ACTIONS(197), 1,
      anon_sym_LT_BANG,
    ACTIONS(195), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [819] = 2,
    ACTIONS(201), 1,
      anon_sym_LT_BANG,
    ACTIONS(199), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [832] = 1,
    ACTIONS(203), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [843] = 2,
    ACTIONS(207), 1,
      anon_sym_LT_BANG,
    ACTIONS(205), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [856] = 6,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [877] = 2,
    ACTIONS(221), 1,
      anon_sym_LT_BANG,
    ACTIONS(219), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [890] = 2,
    ACTIONS(223), 1,
      anon_sym_LT_BANG,
    ACTIONS(102), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [903] = 2,
    ACTIONS(227), 1,
      anon_sym_LT_BANG,
    ACTIONS(225), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [916] = 2,
    ACTIONS(231), 1,
      anon_sym_LT_BANG,
    ACTIONS(229), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [929] = 2,
    ACTIONS(235), 1,
      anon_sym_LT_BANG,
    ACTIONS(233), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [942] = 1,
    ACTIONS(237), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [953] = 2,
    ACTIONS(241), 1,
      anon_sym_LT_BANG,
    ACTIONS(239), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [966] = 2,
    ACTIONS(245), 1,
      anon_sym_LT_BANG,
    ACTIONS(243), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [979] = 2,
    ACTIONS(249), 1,
      anon_sym_LT_BANG,
    ACTIONS(247), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [992] = 6,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      sym__S,
    STATE(105), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1013] = 2,
    ACTIONS(257), 1,
      anon_sym_LT_BANG,
    ACTIONS(255), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1026] = 2,
    ACTIONS(261), 1,
      anon_sym_LT_BANG,
    ACTIONS(259), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1039] = 2,
    ACTIONS(265), 1,
      anon_sym_LT_BANG,
    ACTIONS(263), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1052] = 2,
    ACTIONS(269), 1,
      anon_sym_LT_BANG,
    ACTIONS(267), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1065] = 2,
    ACTIONS(273), 1,
      anon_sym_LT_BANG,
    ACTIONS(271), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1078] = 2,
    ACTIONS(277), 1,
      anon_sym_LT_BANG,
    ACTIONS(275), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1091] = 2,
    ACTIONS(281), 1,
      anon_sym_LT_BANG,
    ACTIONS(279), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1104] = 2,
    ACTIONS(285), 1,
      anon_sym_LT_BANG,
    ACTIONS(283), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1117] = 1,
    ACTIONS(287), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1128] = 2,
    ACTIONS(291), 1,
      anon_sym_LT_BANG,
    ACTIONS(289), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1141] = 2,
    ACTIONS(295), 1,
      anon_sym_LT_BANG,
    ACTIONS(293), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1154] = 6,
    ACTIONS(299), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_AttValue,
    STATE(216), 1,
      sym_DefaultDecl,
    ACTIONS(297), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1174] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__S,
    STATE(89), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1194] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym__S,
    STATE(106), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1214] = 7,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_POUNDPCDATA,
    STATE(42), 1,
      sym_PEReference,
    STATE(59), 1,
      sym__choice,
    STATE(86), 1,
      sym__cp,
  [1236] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      sym__S,
    STATE(109), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1256] = 2,
    ACTIONS(213), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(215), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1268] = 5,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(317), 1,
      anon_sym_SYSTEM,
    ACTIONS(319), 1,
      anon_sym_PUBLIC,
    STATE(160), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1285] = 2,
    ACTIONS(223), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(102), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1296] = 2,
    ACTIONS(223), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(102), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1307] = 2,
    ACTIONS(323), 1,
      anon_sym_LT_BANG,
    ACTIONS(321), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1318] = 5,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1335] = 2,
    ACTIONS(327), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1346] = 6,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(317), 1,
      anon_sym_SYSTEM,
    ACTIONS(319), 1,
      anon_sym_PUBLIC,
    STATE(154), 1,
      sym_ExternalID,
    STATE(204), 1,
      sym_EntityValue,
  [1365] = 5,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1382] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(329), 1,
      sym_Name,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      sym__S,
    STATE(71), 1,
      aux_sym_NotationType_repeat1,
    STATE(186), 1,
      sym_PEReference,
  [1401] = 2,
    ACTIONS(337), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(335), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1412] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      sym__S,
    ACTIONS(339), 1,
      sym_Name,
    STATE(92), 1,
      aux_sym_NotationType_repeat1,
    STATE(171), 1,
      sym_PEReference,
  [1431] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      sym__S,
    ACTIONS(341), 1,
      sym_Name,
    STATE(92), 1,
      aux_sym_NotationType_repeat1,
    STATE(175), 1,
      sym_PEReference,
  [1450] = 5,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(317), 1,
      anon_sym_SYSTEM,
    ACTIONS(343), 1,
      anon_sym_PUBLIC,
    STATE(230), 1,
      sym_PEReference,
    STATE(201), 2,
      sym_ExternalID,
      sym_PublicID,
  [1467] = 2,
    ACTIONS(347), 1,
      anon_sym_LT_BANG,
    ACTIONS(345), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1478] = 2,
    ACTIONS(351), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(349), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1489] = 2,
    ACTIONS(337), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(335), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1500] = 2,
    ACTIONS(351), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(349), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1511] = 2,
    ACTIONS(327), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1522] = 5,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      sym_Name,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym__cp,
    STATE(59), 2,
      sym__choice,
      sym_PEReference,
  [1539] = 6,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      sym__S,
    ACTIONS(341), 1,
      sym_Name,
    STATE(70), 1,
      aux_sym_NotationType_repeat1,
    STATE(175), 1,
      sym_PEReference,
  [1558] = 2,
    ACTIONS(355), 1,
      anon_sym_LT_BANG,
    ACTIONS(353), 5,
      sym_Comment,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
  [1569] = 2,
    ACTIONS(337), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(335), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1579] = 2,
    ACTIONS(327), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1589] = 2,
    ACTIONS(351), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(349), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1599] = 2,
    ACTIONS(327), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1609] = 4,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(357), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1623] = 4,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      sym__S,
    STATE(94), 1,
      aux_sym__choice_repeat1,
    ACTIONS(365), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1637] = 2,
    ACTIONS(371), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(373), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1647] = 2,
    ACTIONS(337), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(335), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1657] = 4,
    ACTIONS(369), 1,
      sym__S,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym__choice_repeat1,
    ACTIONS(365), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1671] = 4,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(365), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1685] = 2,
    ACTIONS(351), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(349), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1695] = 4,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(382), 1,
      sym__S,
    STATE(92), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(377), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1709] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(387), 1,
      sym__S,
    STATE(161), 1,
      sym_PEReference,
    ACTIONS(385), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1723] = 4,
    ACTIONS(369), 1,
      sym__S,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(365), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1737] = 4,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [1750] = 3,
    ACTIONS(397), 1,
      anon_sym_GT,
    ACTIONS(399), 1,
      sym__S,
    STATE(115), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1761] = 4,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [1774] = 1,
    ACTIONS(405), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1781] = 4,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      sym__S,
    STATE(95), 1,
      aux_sym_Enumeration_repeat1,
  [1794] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Mixed_repeat1,
  [1807] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    STATE(169), 1,
      sym_PEReference,
    ACTIONS(407), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1818] = 1,
    ACTIONS(409), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1825] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(411), 1,
      sym_Name,
    ACTIONS(413), 1,
      sym__S,
    STATE(135), 1,
      sym_PEReference,
  [1838] = 4,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_Mixed_repeat1,
  [1851] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_Mixed_repeat1,
  [1864] = 1,
    ACTIONS(360), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1871] = 2,
    ACTIONS(427), 1,
      sym__S,
    ACTIONS(377), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1880] = 1,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1887] = 1,
    ACTIONS(430), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1894] = 4,
    ACTIONS(432), 1,
      anon_sym_ELEMENT,
    ACTIONS(434), 1,
      anon_sym_ATTLIST,
    ACTIONS(436), 1,
      anon_sym_NOTATION,
    ACTIONS(438), 1,
      anon_sym_ENTITY,
  [1907] = 3,
    ACTIONS(440), 1,
      anon_sym_GT,
    ACTIONS(442), 1,
      sym__S,
    STATE(96), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1918] = 1,
    ACTIONS(444), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1925] = 2,
    ACTIONS(448), 1,
      sym__S,
    ACTIONS(446), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1934] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      sym__S,
    STATE(105), 1,
      aux_sym_Mixed_repeat1,
  [1947] = 3,
    ACTIONS(451), 1,
      anon_sym_GT,
    ACTIONS(453), 1,
      sym__S,
    STATE(115), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1958] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(456), 1,
      sym_Name,
    ACTIONS(458), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_PEReference,
  [1971] = 4,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      sym__S,
    STATE(117), 1,
      aux_sym_Enumeration_repeat1,
  [1984] = 4,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(425), 1,
      sym__S,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_Mixed_repeat1,
  [1997] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(470), 1,
      sym_Name,
    ACTIONS(472), 1,
      sym__S,
    STATE(150), 1,
      sym_PEReference,
  [2010] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_GT,
    ACTIONS(456), 1,
      sym_Name,
    STATE(235), 1,
      sym_PEReference,
  [2023] = 4,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(474), 1,
      sym_Name,
    ACTIONS(476), 1,
      sym__S,
    STATE(68), 1,
      sym_PEReference,
  [2036] = 4,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      sym__S,
    STATE(97), 1,
      aux_sym_Enumeration_repeat1,
  [2049] = 1,
    ACTIONS(482), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2055] = 1,
    ACTIONS(484), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2061] = 3,
    ACTIONS(486), 1,
      sym__S,
    ACTIONS(488), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym__Eq,
  [2071] = 2,
    ACTIONS(492), 1,
      sym__S,
    ACTIONS(490), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2079] = 3,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym_SystemLiteral,
  [2089] = 1,
    ACTIONS(498), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2095] = 3,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      sym_AttValue,
  [2105] = 2,
    ACTIONS(502), 1,
      anon_sym_STAR,
    ACTIONS(500), 2,
      anon_sym_GT,
      sym__S,
  [2113] = 1,
    ACTIONS(504), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2119] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(506), 1,
      sym_Name,
    STATE(79), 1,
      sym_PEReference,
  [2129] = 3,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    STATE(283), 1,
      sym_PubidLiteral,
  [2139] = 3,
    ACTIONS(486), 1,
      sym__S,
    ACTIONS(488), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym__Eq,
  [2149] = 2,
    ACTIONS(514), 1,
      sym__S,
    ACTIONS(512), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2157] = 1,
    ACTIONS(512), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2163] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(517), 1,
      sym_Name,
    STATE(141), 1,
      sym_PEReference,
  [2173] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(519), 1,
      sym_Name,
    STATE(205), 1,
      sym_PEReference,
  [2183] = 3,
    ACTIONS(521), 1,
      sym__S,
    ACTIONS(523), 1,
      anon_sym_QMARK_GT,
    STATE(188), 1,
      sym__EncodingDecl,
  [2193] = 1,
    ACTIONS(463), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2199] = 2,
    ACTIONS(525), 1,
      sym__S,
    ACTIONS(498), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2207] = 3,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_PubidLiteral,
  [2217] = 3,
    ACTIONS(528), 1,
      sym_Name,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    STATE(254), 1,
      sym_PEReference,
  [2227] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(532), 1,
      sym_Name,
    STATE(257), 1,
      sym_PEReference,
  [2237] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(534), 1,
      sym_Name,
    STATE(111), 1,
      sym_PEReference,
  [2247] = 3,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_PubidLiteral,
  [2257] = 2,
    ACTIONS(538), 1,
      anon_sym_STAR,
    ACTIONS(536), 2,
      anon_sym_GT,
      sym__S,
  [2265] = 3,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      sym_SystemLiteral,
  [2275] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(456), 1,
      sym_Name,
    STATE(235), 1,
      sym_PEReference,
  [2285] = 2,
    ACTIONS(540), 1,
      sym__S,
    ACTIONS(418), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2293] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(411), 1,
      sym_Name,
    STATE(135), 1,
      sym_PEReference,
  [2303] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(543), 1,
      sym_Name,
    STATE(259), 1,
      sym_PEReference,
  [2313] = 2,
    ACTIONS(547), 1,
      sym__S,
    ACTIONS(545), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2321] = 3,
    ACTIONS(549), 1,
      anon_sym_GT,
    ACTIONS(551), 1,
      sym__S,
    STATE(197), 1,
      sym_NDataDecl,
  [2331] = 1,
    ACTIONS(553), 2,
      anon_sym_GT,
      sym__S,
  [2336] = 1,
    ACTIONS(555), 2,
      anon_sym_GT,
      sym__S,
  [2341] = 2,
    ACTIONS(557), 1,
      anon_sym_xml,
    ACTIONS(559), 1,
      sym_PITarget,
  [2348] = 1,
    ACTIONS(561), 2,
      anon_sym_GT,
      sym__S,
  [2353] = 1,
    ACTIONS(563), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2358] = 2,
    ACTIONS(565), 1,
      anon_sym_GT,
    ACTIONS(567), 1,
      sym__S,
  [2365] = 2,
    ACTIONS(569), 1,
      anon_sym_LBRACK,
    ACTIONS(571), 1,
      sym__S,
  [2372] = 1,
    ACTIONS(573), 2,
      anon_sym_GT,
      sym__S,
  [2377] = 2,
    ACTIONS(575), 1,
      sym__S,
    ACTIONS(577), 1,
      anon_sym_QMARK_GT,
  [2384] = 2,
    ACTIONS(579), 1,
      sym__S,
    STATE(139), 1,
      sym__VersionInfo,
  [2391] = 1,
    ACTIONS(581), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2396] = 1,
    ACTIONS(583), 2,
      anon_sym_GT,
      sym__S,
  [2401] = 1,
    ACTIONS(585), 2,
      anon_sym_GT,
      sym__S,
  [2406] = 2,
    ACTIONS(573), 1,
      anon_sym_GT,
    ACTIONS(587), 1,
      sym__S,
  [2413] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 1,
      sym__S,
  [2420] = 1,
    ACTIONS(536), 2,
      anon_sym_GT,
      sym__S,
  [2425] = 2,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(595), 1,
      sym__S,
  [2432] = 1,
    ACTIONS(597), 2,
      anon_sym_GT,
      sym__S,
  [2437] = 1,
    ACTIONS(599), 2,
      anon_sym_GT,
      sym__S,
  [2442] = 1,
    ACTIONS(601), 2,
      anon_sym_GT,
      sym__S,
  [2447] = 2,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      sym__S,
  [2454] = 2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_PIPE,
  [2461] = 1,
    ACTIONS(609), 2,
      anon_sym_GT,
      sym__S,
  [2466] = 1,
    ACTIONS(611), 2,
      anon_sym_GT,
      sym__S,
  [2471] = 2,
    ACTIONS(613), 1,
      anon_sym_GT,
    ACTIONS(615), 1,
      sym__S,
  [2478] = 2,
    ACTIONS(617), 1,
      sym_Name,
    ACTIONS(619), 1,
      sym__S,
  [2485] = 1,
    ACTIONS(621), 2,
      anon_sym_GT,
      sym__S,
  [2490] = 2,
    ACTIONS(623), 1,
      sym__S,
    ACTIONS(625), 1,
      sym_Nmtoken,
  [2497] = 1,
    ACTIONS(627), 2,
      anon_sym_GT,
      sym__S,
  [2502] = 1,
    ACTIONS(629), 2,
      anon_sym_GT,
      sym__S,
  [2507] = 2,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_PIPE,
  [2514] = 2,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      sym__S,
  [2521] = 2,
    ACTIONS(635), 1,
      anon_sym_QMARK_GT,
    ACTIONS(637), 1,
      anon_sym_encoding,
  [2528] = 2,
    ACTIONS(635), 1,
      anon_sym_QMARK_GT,
    ACTIONS(639), 1,
      sym__S,
  [2535] = 2,
    ACTIONS(641), 1,
      anon_sym_PIPE,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [2542] = 1,
    ACTIONS(645), 2,
      anon_sym_GT,
      sym__S,
  [2547] = 2,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(649), 1,
      anon_sym_SQUOTE,
  [2554] = 1,
    ACTIONS(651), 2,
      anon_sym_GT,
      sym__S,
  [2559] = 1,
    ACTIONS(653), 2,
      anon_sym_GT,
      sym__S,
  [2564] = 2,
    ACTIONS(655), 1,
      anon_sym_GT,
    ACTIONS(657), 1,
      sym__S,
  [2571] = 2,
    ACTIONS(659), 1,
      sym__S,
    ACTIONS(661), 1,
      sym_Nmtoken,
  [2578] = 1,
    ACTIONS(663), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2583] = 2,
    ACTIONS(665), 1,
      anon_sym_GT,
    ACTIONS(667), 1,
      sym__S,
  [2590] = 2,
    ACTIONS(665), 1,
      anon_sym_GT,
    ACTIONS(669), 1,
      anon_sym_NDATA,
  [2597] = 1,
    ACTIONS(671), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2602] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_PIPE,
  [2609] = 2,
    ACTIONS(673), 1,
      anon_sym_GT,
    ACTIONS(675), 1,
      sym__S,
  [2616] = 1,
    ACTIONS(677), 2,
      anon_sym_GT,
      sym__S,
  [2621] = 1,
    ACTIONS(679), 2,
      anon_sym_GT,
      sym__S,
  [2626] = 2,
    ACTIONS(549), 1,
      anon_sym_GT,
    ACTIONS(681), 1,
      sym__S,
  [2633] = 1,
    ACTIONS(683), 2,
      anon_sym_GT,
      sym__S,
  [2638] = 1,
    ACTIONS(685), 2,
      anon_sym_GT,
      sym__S,
  [2643] = 1,
    ACTIONS(545), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2648] = 1,
    ACTIONS(687), 2,
      anon_sym_GT,
      sym__S,
  [2653] = 2,
    ACTIONS(689), 1,
      sym__S,
    ACTIONS(691), 1,
      sym_Nmtoken,
  [2660] = 1,
    ACTIONS(693), 2,
      anon_sym_GT,
      sym__S,
  [2665] = 2,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_PIPE,
  [2672] = 1,
    ACTIONS(695), 2,
      anon_sym_GT,
      sym__S,
  [2677] = 2,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [2684] = 1,
    ACTIONS(701), 2,
      anon_sym_GT,
      sym__S,
  [2689] = 1,
    ACTIONS(703), 2,
      anon_sym_GT,
      sym__S,
  [2694] = 1,
    ACTIONS(705), 2,
      anon_sym_GT,
      sym__S,
  [2699] = 1,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
  [2703] = 1,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
  [2707] = 1,
    ACTIONS(711), 1,
      sym_VersionNum,
  [2711] = 1,
    ACTIONS(713), 1,
      anon_sym_SEMI,
  [2715] = 1,
    ACTIONS(715), 1,
      sym__S,
  [2719] = 1,
    ACTIONS(717), 1,
      anon_sym_GT,
  [2723] = 1,
    ACTIONS(719), 1,
      anon_sym_GT,
  [2727] = 1,
    ACTIONS(721), 1,
      sym_Name,
  [2731] = 1,
    ACTIONS(723), 1,
      sym__S,
  [2735] = 1,
    ACTIONS(725), 1,
      anon_sym_STAR,
  [2739] = 1,
    ACTIONS(727), 1,
      sym__S,
  [2743] = 1,
    ACTIONS(729), 1,
      aux_sym_CharRef_token1,
  [2747] = 1,
    ACTIONS(729), 1,
      aux_sym_CharRef_token2,
  [2751] = 1,
    ACTIONS(731), 1,
      sym__S,
  [2755] = 1,
    ACTIONS(661), 1,
      sym_Nmtoken,
  [2759] = 1,
    ACTIONS(733), 1,
      sym__S,
  [2763] = 1,
    ACTIONS(665), 1,
      anon_sym_GT,
  [2767] = 1,
    ACTIONS(735), 1,
      sym__S,
  [2771] = 1,
    ACTIONS(737), 1,
      sym__S,
  [2775] = 1,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
  [2779] = 1,
    ACTIONS(739), 1,
      anon_sym_GT,
  [2783] = 1,
    ACTIONS(741), 1,
      anon_sym_SEMI,
  [2787] = 1,
    ACTIONS(743), 1,
      anon_sym_QMARK_GT,
  [2791] = 1,
    ACTIONS(745), 1,
      sym_EncName,
  [2795] = 1,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [2799] = 1,
    ACTIONS(749), 1,
      anon_sym_SQUOTE,
  [2803] = 1,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
  [2807] = 1,
    ACTIONS(751), 1,
      sym_Name,
  [2811] = 1,
    ACTIONS(753), 1,
      sym_Nmtoken,
  [2815] = 1,
    ACTIONS(641), 1,
      anon_sym_PIPE,
  [2819] = 1,
    ACTIONS(755), 1,
      anon_sym_SQUOTE,
  [2823] = 1,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
  [2827] = 1,
    ACTIONS(757), 1,
      anon_sym_PIPE,
  [2831] = 1,
    ACTIONS(759), 1,
      sym_EncName,
  [2835] = 1,
    ACTIONS(761), 1,
      anon_sym_QMARK_GT,
  [2839] = 1,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
  [2843] = 1,
    ACTIONS(765), 1,
      sym_Nmtoken,
  [2847] = 1,
    ACTIONS(767), 1,
      sym__S,
  [2851] = 1,
    ACTIONS(769), 1,
      sym_Name,
  [2855] = 1,
    ACTIONS(771), 1,
      sym__S,
  [2859] = 1,
    ACTIONS(773), 1,
      sym__S,
  [2863] = 1,
    ACTIONS(775), 1,
      aux_sym_SystemLiteral_token1,
  [2867] = 1,
    ACTIONS(777), 1,
      sym__S,
  [2871] = 1,
    ACTIONS(779), 1,
      sym_VersionNum,
  [2875] = 1,
    ACTIONS(781), 1,
      anon_sym_version,
  [2879] = 1,
    ACTIONS(783), 1,
      aux_sym_SystemLiteral_token2,
  [2883] = 1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [2887] = 1,
    ACTIONS(785), 1,
      sym__pi_content,
  [2891] = 1,
    ACTIONS(607), 1,
      anon_sym_PIPE,
  [2895] = 1,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [2899] = 1,
    ACTIONS(538), 1,
      anon_sym_STAR,
  [2903] = 1,
    ACTIONS(787), 1,
      aux_sym_PubidLiteral_token1,
  [2907] = 1,
    ACTIONS(789), 1,
      aux_sym_PubidLiteral_token2,
  [2911] = 1,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
  [2915] = 1,
    ACTIONS(793), 1,
      anon_sym_SQUOTE,
  [2919] = 1,
    ACTIONS(589), 1,
      anon_sym_LBRACK,
  [2923] = 1,
    ACTIONS(559), 1,
      sym_PITarget,
  [2927] = 1,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
  [2931] = 1,
    ACTIONS(795), 1,
      anon_sym_GT,
  [2935] = 1,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [2939] = 1,
    ACTIONS(799), 1,
      sym__S,
  [2943] = 1,
    ACTIONS(801), 1,
      sym__S,
  [2947] = 1,
    ACTIONS(803), 1,
      sym__S,
  [2951] = 1,
    ACTIONS(805), 1,
      sym__S,
  [2955] = 1,
    ACTIONS(807), 1,
      sym__S,
  [2959] = 1,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
  [2963] = 1,
    ACTIONS(587), 1,
      sym__S,
  [2967] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [2971] = 1,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [2975] = 1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [2979] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [2983] = 1,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [2987] = 1,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [2991] = 1,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [2995] = 1,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [2999] = 1,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [3003] = 1,
    ACTIONS(617), 1,
      sym_Name,
  [3007] = 1,
    ACTIONS(829), 1,
      sym_Name,
  [3011] = 1,
    ACTIONS(831), 1,
      aux_sym_CharRef_token1,
  [3015] = 1,
    ACTIONS(831), 1,
      aux_sym_CharRef_token2,
  [3019] = 1,
    ACTIONS(833), 1,
      sym_Name,
  [3023] = 1,
    ACTIONS(835), 1,
      sym_Name,
  [3027] = 1,
    ACTIONS(837), 1,
      aux_sym_CharRef_token1,
  [3031] = 1,
    ACTIONS(837), 1,
      aux_sym_CharRef_token2,
  [3035] = 1,
    ACTIONS(839), 1,
      sym_Name,
  [3039] = 1,
    ACTIONS(841), 1,
      sym_Name,
  [3043] = 1,
    ACTIONS(843), 1,
      aux_sym_CharRef_token1,
  [3047] = 1,
    ACTIONS(843), 1,
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
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 534,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 615,
  [SMALL_STATE(21)] = 639,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 733,
  [SMALL_STATE(26)] = 757,
  [SMALL_STATE(27)] = 781,
  [SMALL_STATE(28)] = 806,
  [SMALL_STATE(29)] = 819,
  [SMALL_STATE(30)] = 832,
  [SMALL_STATE(31)] = 843,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 877,
  [SMALL_STATE(34)] = 890,
  [SMALL_STATE(35)] = 903,
  [SMALL_STATE(36)] = 916,
  [SMALL_STATE(37)] = 929,
  [SMALL_STATE(38)] = 942,
  [SMALL_STATE(39)] = 953,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 992,
  [SMALL_STATE(43)] = 1013,
  [SMALL_STATE(44)] = 1026,
  [SMALL_STATE(45)] = 1039,
  [SMALL_STATE(46)] = 1052,
  [SMALL_STATE(47)] = 1065,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1091,
  [SMALL_STATE(50)] = 1104,
  [SMALL_STATE(51)] = 1117,
  [SMALL_STATE(52)] = 1128,
  [SMALL_STATE(53)] = 1141,
  [SMALL_STATE(54)] = 1154,
  [SMALL_STATE(55)] = 1174,
  [SMALL_STATE(56)] = 1194,
  [SMALL_STATE(57)] = 1214,
  [SMALL_STATE(58)] = 1236,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1268,
  [SMALL_STATE(61)] = 1285,
  [SMALL_STATE(62)] = 1296,
  [SMALL_STATE(63)] = 1307,
  [SMALL_STATE(64)] = 1318,
  [SMALL_STATE(65)] = 1335,
  [SMALL_STATE(66)] = 1346,
  [SMALL_STATE(67)] = 1365,
  [SMALL_STATE(68)] = 1382,
  [SMALL_STATE(69)] = 1401,
  [SMALL_STATE(70)] = 1412,
  [SMALL_STATE(71)] = 1431,
  [SMALL_STATE(72)] = 1450,
  [SMALL_STATE(73)] = 1467,
  [SMALL_STATE(74)] = 1478,
  [SMALL_STATE(75)] = 1489,
  [SMALL_STATE(76)] = 1500,
  [SMALL_STATE(77)] = 1511,
  [SMALL_STATE(78)] = 1522,
  [SMALL_STATE(79)] = 1539,
  [SMALL_STATE(80)] = 1558,
  [SMALL_STATE(81)] = 1569,
  [SMALL_STATE(82)] = 1579,
  [SMALL_STATE(83)] = 1589,
  [SMALL_STATE(84)] = 1599,
  [SMALL_STATE(85)] = 1609,
  [SMALL_STATE(86)] = 1623,
  [SMALL_STATE(87)] = 1637,
  [SMALL_STATE(88)] = 1647,
  [SMALL_STATE(89)] = 1657,
  [SMALL_STATE(90)] = 1671,
  [SMALL_STATE(91)] = 1685,
  [SMALL_STATE(92)] = 1695,
  [SMALL_STATE(93)] = 1709,
  [SMALL_STATE(94)] = 1723,
  [SMALL_STATE(95)] = 1737,
  [SMALL_STATE(96)] = 1750,
  [SMALL_STATE(97)] = 1761,
  [SMALL_STATE(98)] = 1774,
  [SMALL_STATE(99)] = 1781,
  [SMALL_STATE(100)] = 1794,
  [SMALL_STATE(101)] = 1807,
  [SMALL_STATE(102)] = 1818,
  [SMALL_STATE(103)] = 1825,
  [SMALL_STATE(104)] = 1838,
  [SMALL_STATE(105)] = 1851,
  [SMALL_STATE(106)] = 1864,
  [SMALL_STATE(107)] = 1871,
  [SMALL_STATE(108)] = 1880,
  [SMALL_STATE(109)] = 1887,
  [SMALL_STATE(110)] = 1894,
  [SMALL_STATE(111)] = 1907,
  [SMALL_STATE(112)] = 1918,
  [SMALL_STATE(113)] = 1925,
  [SMALL_STATE(114)] = 1934,
  [SMALL_STATE(115)] = 1947,
  [SMALL_STATE(116)] = 1958,
  [SMALL_STATE(117)] = 1971,
  [SMALL_STATE(118)] = 1984,
  [SMALL_STATE(119)] = 1997,
  [SMALL_STATE(120)] = 2010,
  [SMALL_STATE(121)] = 2023,
  [SMALL_STATE(122)] = 2036,
  [SMALL_STATE(123)] = 2049,
  [SMALL_STATE(124)] = 2055,
  [SMALL_STATE(125)] = 2061,
  [SMALL_STATE(126)] = 2071,
  [SMALL_STATE(127)] = 2079,
  [SMALL_STATE(128)] = 2089,
  [SMALL_STATE(129)] = 2095,
  [SMALL_STATE(130)] = 2105,
  [SMALL_STATE(131)] = 2113,
  [SMALL_STATE(132)] = 2119,
  [SMALL_STATE(133)] = 2129,
  [SMALL_STATE(134)] = 2139,
  [SMALL_STATE(135)] = 2149,
  [SMALL_STATE(136)] = 2157,
  [SMALL_STATE(137)] = 2163,
  [SMALL_STATE(138)] = 2173,
  [SMALL_STATE(139)] = 2183,
  [SMALL_STATE(140)] = 2193,
  [SMALL_STATE(141)] = 2199,
  [SMALL_STATE(142)] = 2207,
  [SMALL_STATE(143)] = 2217,
  [SMALL_STATE(144)] = 2227,
  [SMALL_STATE(145)] = 2237,
  [SMALL_STATE(146)] = 2247,
  [SMALL_STATE(147)] = 2257,
  [SMALL_STATE(148)] = 2265,
  [SMALL_STATE(149)] = 2275,
  [SMALL_STATE(150)] = 2285,
  [SMALL_STATE(151)] = 2293,
  [SMALL_STATE(152)] = 2303,
  [SMALL_STATE(153)] = 2313,
  [SMALL_STATE(154)] = 2321,
  [SMALL_STATE(155)] = 2331,
  [SMALL_STATE(156)] = 2336,
  [SMALL_STATE(157)] = 2341,
  [SMALL_STATE(158)] = 2348,
  [SMALL_STATE(159)] = 2353,
  [SMALL_STATE(160)] = 2358,
  [SMALL_STATE(161)] = 2365,
  [SMALL_STATE(162)] = 2372,
  [SMALL_STATE(163)] = 2377,
  [SMALL_STATE(164)] = 2384,
  [SMALL_STATE(165)] = 2391,
  [SMALL_STATE(166)] = 2396,
  [SMALL_STATE(167)] = 2401,
  [SMALL_STATE(168)] = 2406,
  [SMALL_STATE(169)] = 2413,
  [SMALL_STATE(170)] = 2420,
  [SMALL_STATE(171)] = 2425,
  [SMALL_STATE(172)] = 2432,
  [SMALL_STATE(173)] = 2437,
  [SMALL_STATE(174)] = 2442,
  [SMALL_STATE(175)] = 2447,
  [SMALL_STATE(176)] = 2454,
  [SMALL_STATE(177)] = 2461,
  [SMALL_STATE(178)] = 2466,
  [SMALL_STATE(179)] = 2471,
  [SMALL_STATE(180)] = 2478,
  [SMALL_STATE(181)] = 2485,
  [SMALL_STATE(182)] = 2490,
  [SMALL_STATE(183)] = 2497,
  [SMALL_STATE(184)] = 2502,
  [SMALL_STATE(185)] = 2507,
  [SMALL_STATE(186)] = 2514,
  [SMALL_STATE(187)] = 2521,
  [SMALL_STATE(188)] = 2528,
  [SMALL_STATE(189)] = 2535,
  [SMALL_STATE(190)] = 2542,
  [SMALL_STATE(191)] = 2547,
  [SMALL_STATE(192)] = 2554,
  [SMALL_STATE(193)] = 2559,
  [SMALL_STATE(194)] = 2564,
  [SMALL_STATE(195)] = 2571,
  [SMALL_STATE(196)] = 2578,
  [SMALL_STATE(197)] = 2583,
  [SMALL_STATE(198)] = 2590,
  [SMALL_STATE(199)] = 2597,
  [SMALL_STATE(200)] = 2602,
  [SMALL_STATE(201)] = 2609,
  [SMALL_STATE(202)] = 2616,
  [SMALL_STATE(203)] = 2621,
  [SMALL_STATE(204)] = 2626,
  [SMALL_STATE(205)] = 2633,
  [SMALL_STATE(206)] = 2638,
  [SMALL_STATE(207)] = 2643,
  [SMALL_STATE(208)] = 2648,
  [SMALL_STATE(209)] = 2653,
  [SMALL_STATE(210)] = 2660,
  [SMALL_STATE(211)] = 2665,
  [SMALL_STATE(212)] = 2672,
  [SMALL_STATE(213)] = 2677,
  [SMALL_STATE(214)] = 2684,
  [SMALL_STATE(215)] = 2689,
  [SMALL_STATE(216)] = 2694,
  [SMALL_STATE(217)] = 2699,
  [SMALL_STATE(218)] = 2703,
  [SMALL_STATE(219)] = 2707,
  [SMALL_STATE(220)] = 2711,
  [SMALL_STATE(221)] = 2715,
  [SMALL_STATE(222)] = 2719,
  [SMALL_STATE(223)] = 2723,
  [SMALL_STATE(224)] = 2727,
  [SMALL_STATE(225)] = 2731,
  [SMALL_STATE(226)] = 2735,
  [SMALL_STATE(227)] = 2739,
  [SMALL_STATE(228)] = 2743,
  [SMALL_STATE(229)] = 2747,
  [SMALL_STATE(230)] = 2751,
  [SMALL_STATE(231)] = 2755,
  [SMALL_STATE(232)] = 2759,
  [SMALL_STATE(233)] = 2763,
  [SMALL_STATE(234)] = 2767,
  [SMALL_STATE(235)] = 2771,
  [SMALL_STATE(236)] = 2775,
  [SMALL_STATE(237)] = 2779,
  [SMALL_STATE(238)] = 2783,
  [SMALL_STATE(239)] = 2787,
  [SMALL_STATE(240)] = 2791,
  [SMALL_STATE(241)] = 2795,
  [SMALL_STATE(242)] = 2799,
  [SMALL_STATE(243)] = 2803,
  [SMALL_STATE(244)] = 2807,
  [SMALL_STATE(245)] = 2811,
  [SMALL_STATE(246)] = 2815,
  [SMALL_STATE(247)] = 2819,
  [SMALL_STATE(248)] = 2823,
  [SMALL_STATE(249)] = 2827,
  [SMALL_STATE(250)] = 2831,
  [SMALL_STATE(251)] = 2835,
  [SMALL_STATE(252)] = 2839,
  [SMALL_STATE(253)] = 2843,
  [SMALL_STATE(254)] = 2847,
  [SMALL_STATE(255)] = 2851,
  [SMALL_STATE(256)] = 2855,
  [SMALL_STATE(257)] = 2859,
  [SMALL_STATE(258)] = 2863,
  [SMALL_STATE(259)] = 2867,
  [SMALL_STATE(260)] = 2871,
  [SMALL_STATE(261)] = 2875,
  [SMALL_STATE(262)] = 2879,
  [SMALL_STATE(263)] = 2883,
  [SMALL_STATE(264)] = 2887,
  [SMALL_STATE(265)] = 2891,
  [SMALL_STATE(266)] = 2895,
  [SMALL_STATE(267)] = 2899,
  [SMALL_STATE(268)] = 2903,
  [SMALL_STATE(269)] = 2907,
  [SMALL_STATE(270)] = 2911,
  [SMALL_STATE(271)] = 2915,
  [SMALL_STATE(272)] = 2919,
  [SMALL_STATE(273)] = 2923,
  [SMALL_STATE(274)] = 2927,
  [SMALL_STATE(275)] = 2931,
  [SMALL_STATE(276)] = 2935,
  [SMALL_STATE(277)] = 2939,
  [SMALL_STATE(278)] = 2943,
  [SMALL_STATE(279)] = 2947,
  [SMALL_STATE(280)] = 2951,
  [SMALL_STATE(281)] = 2955,
  [SMALL_STATE(282)] = 2959,
  [SMALL_STATE(283)] = 2963,
  [SMALL_STATE(284)] = 2967,
  [SMALL_STATE(285)] = 2971,
  [SMALL_STATE(286)] = 2975,
  [SMALL_STATE(287)] = 2979,
  [SMALL_STATE(288)] = 2983,
  [SMALL_STATE(289)] = 2987,
  [SMALL_STATE(290)] = 2991,
  [SMALL_STATE(291)] = 2995,
  [SMALL_STATE(292)] = 2999,
  [SMALL_STATE(293)] = 3003,
  [SMALL_STATE(294)] = 3007,
  [SMALL_STATE(295)] = 3011,
  [SMALL_STATE(296)] = 3015,
  [SMALL_STATE(297)] = 3019,
  [SMALL_STATE(298)] = 3023,
  [SMALL_STATE(299)] = 3027,
  [SMALL_STATE(300)] = 3031,
  [SMALL_STATE(301)] = 3035,
  [SMALL_STATE(302)] = 3039,
  [SMALL_STATE(303)] = 3043,
  [SMALL_STATE(304)] = 3047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(255),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(273),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(301),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(294),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(295),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(296),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(297),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(224),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(228),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(229),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(302),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(303),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(304),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(298),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(299),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(300),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(56),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(159),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(113),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(249),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(119),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(265),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(102),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(108),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(149),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(209),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(246),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(128),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(123),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(136),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [809] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dtd_external_scanner_create(void);
void tree_sitter_dtd_external_scanner_destroy(void *);
bool tree_sitter_dtd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dtd_external_scanner_serialize(void *, char *);
void tree_sitter_dtd_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dtd_external_scanner_create,
      tree_sitter_dtd_external_scanner_destroy,
      tree_sitter_dtd_external_scanner_scan,
      tree_sitter_dtd_external_scanner_serialize,
      tree_sitter_dtd_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
