#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 2
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
  sym_Comment = 57,
  anon_sym_EQ = 58,
  sym_PITarget = 59,
  sym__pi_content = 60,
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
  [sym_Comment] = "Comment",
  [anon_sym_EQ] = "=",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
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
  [sym_Comment] = sym_Comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
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
  [sym_Comment] = {
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
  [59] = 12,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 12,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 63,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 64,
  [82] = 82,
  [83] = 70,
  [84] = 63,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 63,
  [91] = 70,
  [92] = 92,
  [93] = 64,
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
  [283] = 275,
  [284] = 273,
  [285] = 271,
  [286] = 275,
  [287] = 273,
  [288] = 271,
  [289] = 273,
  [290] = 271,
  [291] = 269,
  [292] = 235,
  [293] = 237,
  [294] = 241,
  [295] = 269,
  [296] = 235,
  [297] = 237,
  [298] = 241,
  [299] = 235,
  [300] = 237,
  [301] = 241,
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
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '?') ADVANCE(136);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'Q') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'X') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(90);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(113);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'Y') ADVANCE(65);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'Y') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(91);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 141:
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
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 46},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 46},
  [62] = {.lex_state = 46},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 46},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 46},
  [76] = {.lex_state = 46},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 46},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 46},
  [100] = {.lex_state = 46},
  [101] = {.lex_state = 46},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 46},
  [105] = {.lex_state = 46},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 46},
  [110] = {.lex_state = 46},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 46},
  [114] = {.lex_state = 46},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 46},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 46},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 46},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 46},
  [142] = {.lex_state = 46},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 46},
  [148] = {.lex_state = 46},
  [149] = {.lex_state = 46},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 46, .external_lex_state = 2},
  [157] = {.lex_state = 46},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 46},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 46},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 46},
  [165] = {.lex_state = 46},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 46},
  [169] = {.lex_state = 46},
  [170] = {.lex_state = 46},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 46},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 46},
  [176] = {.lex_state = 46},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 46},
  [179] = {.lex_state = 46},
  [180] = {.lex_state = 46},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 46},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 46},
  [189] = {.lex_state = 42},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 46},
  [192] = {.lex_state = 46},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 46},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 46},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 46},
  [203] = {.lex_state = 46},
  [204] = {.lex_state = 46},
  [205] = {.lex_state = 46},
  [206] = {.lex_state = 46},
  [207] = {.lex_state = 46},
  [208] = {.lex_state = 46},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 46},
  [211] = {.lex_state = 46},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 134},
  [218] = {.lex_state = 46},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 46},
  [222] = {.lex_state = 46},
  [223] = {.lex_state = 46},
  [224] = {.lex_state = 46},
  [225] = {.lex_state = 46},
  [226] = {.lex_state = 46},
  [227] = {.lex_state = 46},
  [228] = {.lex_state = 46},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 42},
  [232] = {.lex_state = 46},
  [233] = {.lex_state = 46},
  [234] = {.lex_state = 46},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 46},
  [237] = {.lex_state = 46},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 46},
  [240] = {.lex_state = 46},
  [241] = {.lex_state = 44},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 46},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 42},
  [246] = {.lex_state = 46},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 46},
  [253] = {.lex_state = 46},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 45},
  [256] = {.lex_state = 46},
  [257] = {.lex_state = 45},
  [258] = {.lex_state = 46},
  [259] = {.lex_state = 46},
  [260] = {.lex_state = 46},
  [261] = {.lex_state = 46},
  [262] = {.lex_state = 46},
  [263] = {.lex_state = 46},
  [264] = {.lex_state = 132},
  [265] = {.lex_state = 46},
  [266] = {.lex_state = 46},
  [267] = {.lex_state = 46},
  [268] = {.lex_state = 46},
  [269] = {.lex_state = 46},
  [270] = {.lex_state = 46},
  [271] = {.lex_state = 46},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 46},
  [274] = {.lex_state = 135},
  [275] = {.lex_state = 46},
  [276] = {.lex_state = 46},
  [277] = {.lex_state = 46},
  [278] = {.lex_state = 46},
  [279] = {.lex_state = 46},
  [280] = {.lex_state = 46},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 133},
  [283] = {.lex_state = 46},
  [284] = {.lex_state = 46},
  [285] = {.lex_state = 46},
  [286] = {.lex_state = 46},
  [287] = {.lex_state = 46},
  [288] = {.lex_state = 46},
  [289] = {.lex_state = 46},
  [290] = {.lex_state = 46},
  [291] = {.lex_state = 46},
  [292] = {.lex_state = 46},
  [293] = {.lex_state = 46},
  [294] = {.lex_state = 44},
  [295] = {.lex_state = 46},
  [296] = {.lex_state = 46},
  [297] = {.lex_state = 46},
  [298] = {.lex_state = 44},
  [299] = {.lex_state = 46},
  [300] = {.lex_state = 46},
  [301] = {.lex_state = 44},
};

enum {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
  },
  [2] = {
    [ts_external_token_PITarget] = true,
  },
  [3] = {
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
    [sym_Comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(281),
    [sym__extSubsetDecl] = STATE(9),
    [sym_conditionalSect] = STATE(9),
    [sym__markupdecl] = STATE(9),
    [sym__DeclSep] = STATE(9),
    [sym_elementdecl] = STATE(36),
    [sym_AttlistDecl] = STATE(36),
    [sym__EntityDecl] = STATE(36),
    [sym_GEDecl] = STATE(48),
    [sym_PEDecl] = STATE(48),
    [sym_NotationDecl] = STATE(36),
    [sym_PEReference] = STATE(9),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(36),
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
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(47), 1,
      sym__S,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym__S,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(51), 1,
      sym__S,
    ACTIONS(53), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(41), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(51), 1,
      sym__S,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(51), 1,
      sym__S,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(35), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(39), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      sym__S,
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    STATE(48), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(36), 5,
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
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_AMP_POUND,
    ACTIONS(73), 1,
      anon_sym_AMP_POUNDx,
    STATE(68), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [458] = 8,
    ACTIONS(75), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_AMP_POUND,
    ACTIONS(89), 1,
      anon_sym_AMP_POUNDx,
    STATE(68), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [486] = 8,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [514] = 8,
    ACTIONS(63), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_AMP_POUND,
    ACTIONS(73), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_EntityValue_token1,
    STATE(68), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [542] = 8,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(106), 1,
      aux_sym_EntityValue_token2,
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(15), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [570] = 8,
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
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [598] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_NOTATION,
    STATE(201), 1,
      sym__AttType,
    ACTIONS(127), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(200), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(208), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [623] = 7,
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
    STATE(25), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(81), 2,
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
    STATE(81), 2,
      sym_EntityRef,
      sym_CharRef,
  [671] = 7,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_POUND,
    ACTIONS(163), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(166), 1,
      aux_sym_AttValue_token1,
    STATE(22), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [695] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__choice,
    STATE(205), 1,
      sym_contentspec,
    ACTIONS(169), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(206), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [717] = 7,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_AMP_POUND,
    ACTIONS(177), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(179), 1,
      aux_sym_AttValue_token1,
    STATE(26), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [741] = 7,
    ACTIONS(133), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(137), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_AttValue_token2,
    STATE(21), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(81), 2,
      sym_EntityRef,
      sym_CharRef,
  [765] = 7,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_AMP_POUND,
    ACTIONS(177), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_AttValue_token1,
    STATE(22), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
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
  [828] = 2,
    ACTIONS(201), 1,
      anon_sym_LT_BANG,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [841] = 2,
    ACTIONS(205), 1,
      anon_sym_LT_BANG,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [854] = 2,
    ACTIONS(209), 1,
      anon_sym_LT_BANG,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [867] = 6,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [888] = 2,
    ACTIONS(223), 1,
      anon_sym_LT_BANG,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [901] = 1,
    ACTIONS(225), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
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
  [938] = 6,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      sym__S,
    STATE(99), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [959] = 2,
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
  [972] = 2,
    ACTIONS(245), 1,
      anon_sym_LT_BANG,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [985] = 2,
    ACTIONS(249), 1,
      anon_sym_LT_BANG,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [998] = 2,
    ACTIONS(253), 1,
      anon_sym_LT_BANG,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1011] = 8,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(261), 1,
      sym__S,
    STATE(33), 1,
      sym_PEReference,
    STATE(55), 1,
      sym__choice,
    STATE(86), 1,
      sym__cp,
  [1036] = 1,
    ACTIONS(263), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1047] = 2,
    ACTIONS(267), 1,
      anon_sym_LT_BANG,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1060] = 2,
    ACTIONS(271), 1,
      anon_sym_LT_BANG,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1073] = 1,
    ACTIONS(273), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1084] = 2,
    ACTIONS(277), 1,
      anon_sym_LT_BANG,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1097] = 2,
    ACTIONS(281), 1,
      anon_sym_LT_BANG,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
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
      anon_sym_RBRACK_RBRACK_GT,
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
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym__S,
    STATE(103), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1169] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      sym__S,
    STATE(95), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1189] = 2,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(217), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1201] = 7,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_POUNDPCDATA,
    STATE(38), 1,
      sym_PEReference,
    STATE(55), 1,
      sym__choice,
    STATE(87), 1,
      sym__cp,
  [1223] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym__S,
    STATE(86), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1243] = 6,
    ACTIONS(305), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_AttValue,
    STATE(215), 1,
      sym_DefaultDecl,
    ACTIONS(303), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1263] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1274] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(311), 1,
      anon_sym_SYSTEM,
    ACTIONS(313), 1,
      anon_sym_PUBLIC,
    STATE(227), 1,
      sym_PEReference,
    STATE(188), 2,
      sym_ExternalID,
      sym_PublicID,
  [1291] = 2,
    ACTIONS(317), 1,
      anon_sym_LT_BANG,
    ACTIONS(315), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1302] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1319] = 2,
    ACTIONS(321), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(319), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1330] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1341] = 2,
    ACTIONS(61), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(59), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1352] = 2,
    ACTIONS(329), 1,
      anon_sym_LT_BANG,
    ACTIONS(327), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1363] = 5,
    ACTIONS(311), 1,
      anon_sym_SYSTEM,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_PUBLIC,
    STATE(162), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1380] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1391] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      sym_Name,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    STATE(79), 1,
      aux_sym_NotationType_repeat1,
    STATE(180), 1,
      sym_PEReference,
  [1410] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1421] = 2,
    ACTIONS(321), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(319), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1432] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1449] = 6,
    ACTIONS(311), 1,
      anon_sym_SYSTEM,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_PUBLIC,
    STATE(149), 1,
      sym_ExternalID,
    STATE(183), 1,
      sym_EntityValue,
  [1468] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(347), 1,
      sym_Name,
    STATE(89), 1,
      aux_sym_NotationType_repeat1,
    STATE(167), 1,
      sym_PEReference,
  [1487] = 2,
    ACTIONS(351), 1,
      anon_sym_LT_BANG,
    ACTIONS(349), 5,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1498] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(353), 1,
      sym_Name,
    STATE(74), 1,
      aux_sym_NotationType_repeat1,
    STATE(173), 1,
      sym_PEReference,
  [1517] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1528] = 5,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(255), 1,
      sym_Name,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym__cp,
    STATE(55), 2,
      sym__choice,
      sym_PEReference,
  [1545] = 6,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(353), 1,
      sym_Name,
    STATE(89), 1,
      aux_sym_NotationType_repeat1,
    STATE(173), 1,
      sym_PEReference,
  [1564] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(82), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1578] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
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
  [1602] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1612] = 2,
    ACTIONS(321), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(319), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1622] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1636] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1650] = 4,
    ACTIONS(359), 1,
      sym__S,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym__choice_repeat1,
    ACTIONS(355), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1664] = 2,
    ACTIONS(373), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(375), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1674] = 4,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(382), 1,
      sym__S,
    STATE(89), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(377), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1688] = 2,
    ACTIONS(321), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(319), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1698] = 2,
    ACTIONS(345), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(343), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1708] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(387), 1,
      sym__S,
    STATE(158), 1,
      sym_PEReference,
    ACTIONS(385), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1722] = 2,
    ACTIONS(325), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(323), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1732] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      sym_Name,
    ACTIONS(391), 1,
      sym__S,
    STATE(69), 1,
      sym_PEReference,
  [1745] = 1,
    ACTIONS(364), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1752] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym__S,
    STATE(110), 1,
      aux_sym_Enumeration_repeat1,
  [1765] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(401), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_Enumeration_repeat1,
  [1778] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      sym_Name,
    ACTIONS(405), 1,
      anon_sym_GT,
    STATE(222), 1,
      sym_PEReference,
  [1791] = 4,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
  [1804] = 4,
    ACTIONS(411), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
  [1817] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      sym_Name,
    ACTIONS(421), 1,
      sym__S,
    STATE(145), 1,
      sym_PEReference,
  [1830] = 3,
    ACTIONS(423), 1,
      anon_sym_GT,
    ACTIONS(425), 1,
      sym__S,
    STATE(102), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1841] = 1,
    ACTIONS(428), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1848] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym__S,
    STATE(111), 1,
      aux_sym_Enumeration_repeat1,
  [1861] = 4,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Mixed_repeat1,
  [1874] = 4,
    ACTIONS(430), 1,
      anon_sym_ELEMENT,
    ACTIONS(432), 1,
      anon_sym_ATTLIST,
    ACTIONS(434), 1,
      anon_sym_NOTATION,
    ACTIONS(436), 1,
      anon_sym_ENTITY,
  [1887] = 3,
    ACTIONS(438), 1,
      anon_sym_GT,
    ACTIONS(440), 1,
      sym__S,
    STATE(102), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1898] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      sym_Name,
    ACTIONS(438), 1,
      anon_sym_GT,
    STATE(222), 1,
      sym_PEReference,
  [1911] = 1,
    ACTIONS(442), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1918] = 4,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      sym__S,
    STATE(111), 1,
      aux_sym_Enumeration_repeat1,
  [1931] = 4,
    ACTIONS(448), 1,
      anon_sym_PIPE,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      sym__S,
    STATE(111), 1,
      aux_sym_Enumeration_repeat1,
  [1944] = 1,
    ACTIONS(456), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1951] = 3,
    ACTIONS(458), 1,
      anon_sym_GT,
    ACTIONS(460), 1,
      sym__S,
    STATE(107), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1962] = 2,
    ACTIONS(464), 1,
      sym__S,
    ACTIONS(462), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1971] = 1,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1978] = 2,
    ACTIONS(467), 1,
      sym__S,
    ACTIONS(377), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1987] = 1,
    ACTIONS(470), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1994] = 4,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      sym__S,
    STATE(99), 1,
      aux_sym_Mixed_repeat1,
  [2007] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    STATE(155), 1,
      sym_PEReference,
    ACTIONS(472), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2018] = 4,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(409), 1,
      sym__S,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
  [2031] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(476), 1,
      sym_Name,
    ACTIONS(478), 1,
      sym__S,
    STATE(148), 1,
      sym_PEReference,
  [2044] = 2,
    ACTIONS(482), 1,
      sym__S,
    ACTIONS(480), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2052] = 3,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym_PubidLiteral,
  [2062] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(489), 1,
      sym_Name,
    STATE(240), 1,
      sym_PEReference,
  [2072] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(491), 1,
      sym_Name,
    STATE(113), 1,
      sym_PEReference,
  [2082] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      sym_Name,
    STATE(239), 1,
      sym_PEReference,
  [2092] = 1,
    ACTIONS(495), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2098] = 3,
    ACTIONS(497), 1,
      sym_Name,
    ACTIONS(499), 1,
      anon_sym_PERCENT,
    STATE(234), 1,
      sym_PEReference,
  [2108] = 3,
    ACTIONS(501), 1,
      sym__S,
    ACTIONS(503), 1,
      anon_sym_QMARK_GT,
    STATE(198), 1,
      sym__EncodingDecl,
  [2118] = 2,
    ACTIONS(507), 1,
      anon_sym_STAR,
    ACTIONS(505), 2,
      anon_sym_GT,
      sym__S,
  [2126] = 1,
    ACTIONS(509), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2132] = 3,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
    STATE(157), 1,
      sym_SystemLiteral,
  [2142] = 1,
    ACTIONS(515), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2148] = 3,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym_PubidLiteral,
  [2158] = 3,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_AttValue,
  [2168] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(517), 1,
      sym_Name,
    STATE(76), 1,
      sym_PEReference,
  [2178] = 1,
    ACTIONS(451), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2184] = 3,
    ACTIONS(519), 1,
      sym__S,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(212), 1,
      sym__Eq,
  [2194] = 1,
    ACTIONS(480), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2200] = 2,
    ACTIONS(525), 1,
      sym__S,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2208] = 3,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      sym_PubidLiteral,
  [2218] = 3,
    ACTIONS(519), 1,
      sym__S,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(178), 1,
      sym__Eq,
  [2228] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym_Name,
    STATE(122), 1,
      sym_PEReference,
  [2238] = 1,
    ACTIONS(529), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2244] = 2,
    ACTIONS(531), 1,
      sym__S,
    ACTIONS(529), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2252] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(534), 1,
      sym_Name,
    STATE(196), 1,
      sym_PEReference,
  [2262] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      sym_Name,
    STATE(145), 1,
      sym_PEReference,
  [2272] = 2,
    ACTIONS(536), 1,
      sym__S,
    ACTIONS(414), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2280] = 3,
    ACTIONS(539), 1,
      anon_sym_GT,
    ACTIONS(541), 1,
      sym__S,
    STATE(197), 1,
      sym_NDataDecl,
  [2290] = 2,
    ACTIONS(545), 1,
      anon_sym_STAR,
    ACTIONS(543), 2,
      anon_sym_GT,
      sym__S,
  [2298] = 3,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym_SystemLiteral,
  [2308] = 3,
    ACTIONS(7), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      sym_Name,
    STATE(222), 1,
      sym_PEReference,
  [2318] = 2,
    ACTIONS(549), 1,
      sym__S,
    ACTIONS(547), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
      anon_sym_xml,
    ACTIONS(559), 1,
      sym_PITarget,
  [2345] = 1,
    ACTIONS(561), 2,
      anon_sym_GT,
      sym__S,
  [2350] = 2,
    ACTIONS(563), 1,
      anon_sym_LBRACK,
    ACTIONS(565), 1,
      sym__S,
  [2357] = 2,
    ACTIONS(567), 1,
      sym__S,
    ACTIONS(569), 1,
      anon_sym_QMARK_GT,
  [2364] = 2,
    ACTIONS(571), 1,
      anon_sym_GT,
    ACTIONS(573), 1,
      sym__S,
  [2371] = 1,
    ACTIONS(571), 2,
      anon_sym_GT,
      sym__S,
  [2376] = 2,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      sym__S,
  [2383] = 2,
    ACTIONS(579), 1,
      sym__S,
    STATE(129), 1,
      sym__VersionInfo,
  [2390] = 1,
    ACTIONS(581), 2,
      anon_sym_GT,
      sym__S,
  [2395] = 1,
    ACTIONS(583), 2,
      anon_sym_GT,
      sym__S,
  [2400] = 1,
    ACTIONS(585), 2,
      anon_sym_GT,
      sym__S,
  [2405] = 2,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      sym__S,
  [2412] = 1,
    ACTIONS(591), 2,
      anon_sym_GT,
      sym__S,
  [2417] = 1,
    ACTIONS(593), 2,
      anon_sym_GT,
      sym__S,
  [2422] = 1,
    ACTIONS(595), 2,
      anon_sym_GT,
      sym__S,
  [2427] = 1,
    ACTIONS(597), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2432] = 1,
    ACTIONS(599), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2437] = 2,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      sym__S,
  [2444] = 1,
    ACTIONS(543), 2,
      anon_sym_GT,
      sym__S,
  [2449] = 2,
    ACTIONS(605), 1,
      anon_sym_GT,
    ACTIONS(607), 1,
      anon_sym_NDATA,
  [2456] = 1,
    ACTIONS(609), 2,
      anon_sym_GT,
      sym__S,
  [2461] = 1,
    ACTIONS(611), 2,
      anon_sym_GT,
      sym__S,
  [2466] = 2,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
  [2473] = 2,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym_PIPE,
  [2480] = 2,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      sym__S,
  [2487] = 2,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym_PIPE,
  [2494] = 1,
    ACTIONS(547), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2499] = 2,
    ACTIONS(539), 1,
      anon_sym_GT,
    ACTIONS(623), 1,
      sym__S,
  [2506] = 2,
    ACTIONS(625), 1,
      anon_sym_PIPE,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [2513] = 1,
    ACTIONS(629), 2,
      anon_sym_GT,
      sym__S,
  [2518] = 1,
    ACTIONS(631), 2,
      anon_sym_GT,
      sym__S,
  [2523] = 2,
    ACTIONS(633), 1,
      sym_Name,
    ACTIONS(635), 1,
      sym__S,
  [2530] = 2,
    ACTIONS(637), 1,
      anon_sym_GT,
    ACTIONS(639), 1,
      sym__S,
  [2537] = 2,
    ACTIONS(641), 1,
      sym__S,
    ACTIONS(643), 1,
      sym_Nmtoken,
  [2544] = 1,
    ACTIONS(645), 2,
      anon_sym_GT,
      sym__S,
  [2549] = 2,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_PIPE,
  [2556] = 1,
    ACTIONS(647), 2,
      anon_sym_GT,
      sym__S,
  [2561] = 1,
    ACTIONS(649), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2566] = 1,
    ACTIONS(651), 2,
      anon_sym_GT,
      sym__S,
  [2571] = 2,
    ACTIONS(653), 1,
      anon_sym_QMARK_GT,
    ACTIONS(655), 1,
      anon_sym_encoding,
  [2578] = 1,
    ACTIONS(657), 2,
      anon_sym_GT,
      sym__S,
  [2583] = 2,
    ACTIONS(605), 1,
      anon_sym_GT,
    ACTIONS(659), 1,
      sym__S,
  [2590] = 2,
    ACTIONS(653), 1,
      anon_sym_QMARK_GT,
    ACTIONS(661), 1,
      sym__S,
  [2597] = 1,
    ACTIONS(663), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2602] = 1,
    ACTIONS(665), 2,
      anon_sym_GT,
      sym__S,
  [2607] = 2,
    ACTIONS(667), 1,
      anon_sym_GT,
    ACTIONS(669), 1,
      sym__S,
  [2614] = 1,
    ACTIONS(671), 2,
      anon_sym_GT,
      sym__S,
  [2619] = 1,
    ACTIONS(673), 2,
      anon_sym_GT,
      sym__S,
  [2624] = 1,
    ACTIONS(675), 2,
      anon_sym_GT,
      sym__S,
  [2629] = 2,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      sym__S,
  [2636] = 1,
    ACTIONS(681), 2,
      anon_sym_GT,
      sym__S,
  [2641] = 1,
    ACTIONS(683), 2,
      anon_sym_GT,
      sym__S,
  [2646] = 1,
    ACTIONS(685), 2,
      anon_sym_GT,
      sym__S,
  [2651] = 2,
    ACTIONS(687), 1,
      sym__S,
    ACTIONS(689), 1,
      sym_Nmtoken,
  [2658] = 1,
    ACTIONS(691), 2,
      anon_sym_GT,
      sym__S,
  [2663] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_PIPE,
  [2670] = 2,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
  [2677] = 2,
    ACTIONS(697), 1,
      sym__S,
    ACTIONS(699), 1,
      sym_Nmtoken,
  [2684] = 1,
    ACTIONS(701), 2,
      anon_sym_GT,
      sym__S,
  [2689] = 1,
    ACTIONS(703), 2,
      anon_sym_GT,
      sym__S,
  [2694] = 1,
    ACTIONS(705), 1,
      anon_sym_SQUOTE,
  [2698] = 1,
    ACTIONS(707), 1,
      aux_sym_PubidLiteral_token1,
  [2702] = 1,
    ACTIONS(709), 1,
      sym__S,
  [2706] = 1,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
  [2710] = 1,
    ACTIONS(713), 1,
      anon_sym_STAR,
  [2714] = 1,
    ACTIONS(715), 1,
      sym__S,
  [2718] = 1,
    ACTIONS(717), 1,
      sym__S,
  [2722] = 1,
    ACTIONS(719), 1,
      sym__S,
  [2726] = 1,
    ACTIONS(721), 1,
      anon_sym_GT,
  [2730] = 1,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
  [2734] = 1,
    ACTIONS(725), 1,
      anon_sym_GT,
  [2738] = 1,
    ACTIONS(727), 1,
      sym__S,
  [2742] = 1,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
  [2746] = 1,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
  [2750] = 1,
    ACTIONS(731), 1,
      anon_sym_QMARK_GT,
  [2754] = 1,
    ACTIONS(643), 1,
      sym_Nmtoken,
  [2758] = 1,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
  [2762] = 1,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
  [2766] = 1,
    ACTIONS(735), 1,
      sym__S,
  [2770] = 1,
    ACTIONS(737), 1,
      sym_Name,
  [2774] = 1,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
  [2778] = 1,
    ACTIONS(741), 1,
      aux_sym_CharRef_token1,
  [2782] = 1,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [2786] = 1,
    ACTIONS(745), 1,
      sym__S,
  [2790] = 1,
    ACTIONS(747), 1,
      sym__S,
  [2794] = 1,
    ACTIONS(741), 1,
      aux_sym_CharRef_token2,
  [2798] = 1,
    ACTIONS(749), 1,
      sym_Nmtoken,
  [2802] = 1,
    ACTIONS(751), 1,
      sym__S,
  [2806] = 1,
    ACTIONS(605), 1,
      anon_sym_GT,
  [2810] = 1,
    ACTIONS(753), 1,
      sym_Nmtoken,
  [2814] = 1,
    ACTIONS(625), 1,
      anon_sym_PIPE,
  [2818] = 1,
    ACTIONS(755), 1,
      anon_sym_LBRACK,
  [2822] = 1,
    ACTIONS(757), 1,
      sym_VersionNum,
  [2826] = 1,
    ACTIONS(759), 1,
      anon_sym_PIPE,
  [2830] = 1,
    ACTIONS(761), 1,
      sym_VersionNum,
  [2834] = 1,
    ACTIONS(763), 1,
      anon_sym_version,
  [2838] = 1,
    ACTIONS(617), 1,
      anon_sym_PIPE,
  [2842] = 1,
    ACTIONS(545), 1,
      anon_sym_STAR,
  [2846] = 1,
    ACTIONS(765), 1,
      sym__pi_content,
  [2850] = 1,
    ACTIONS(767), 1,
      sym_EncName,
  [2854] = 1,
    ACTIONS(769), 1,
      anon_sym_GT,
  [2858] = 1,
    ACTIONS(771), 1,
      sym_EncName,
  [2862] = 1,
    ACTIONS(773), 1,
      sym__S,
  [2866] = 1,
    ACTIONS(775), 1,
      sym_Name,
  [2870] = 1,
    ACTIONS(777), 1,
      sym__S,
  [2874] = 1,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
  [2878] = 1,
    ACTIONS(779), 1,
      anon_sym_GT,
  [2882] = 1,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [2886] = 1,
    ACTIONS(781), 1,
      aux_sym_SystemLiteral_token1,
  [2890] = 1,
    ACTIONS(783), 1,
      sym__S,
  [2894] = 1,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [2898] = 1,
    ACTIONS(573), 1,
      sym__S,
  [2902] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
  [2906] = 1,
    ACTIONS(633), 1,
      sym_Name,
  [2910] = 1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [2914] = 1,
    ACTIONS(787), 1,
      anon_sym_SEMI,
  [2918] = 1,
    ACTIONS(559), 1,
      sym_PITarget,
  [2922] = 1,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [2926] = 1,
    ACTIONS(791), 1,
      aux_sym_PubidLiteral_token2,
  [2930] = 1,
    ACTIONS(793), 1,
      anon_sym_SEMI,
  [2934] = 1,
    ACTIONS(795), 1,
      sym__S,
  [2938] = 1,
    ACTIONS(797), 1,
      sym__S,
  [2942] = 1,
    ACTIONS(799), 1,
      sym__S,
  [2946] = 1,
    ACTIONS(801), 1,
      sym__S,
  [2950] = 1,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
  [2954] = 1,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
  [2958] = 1,
    ACTIONS(805), 1,
      aux_sym_SystemLiteral_token2,
  [2962] = 1,
    ACTIONS(807), 1,
      anon_sym_SEMI,
  [2966] = 1,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [2970] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [2974] = 1,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [2978] = 1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [2982] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [2986] = 1,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [2990] = 1,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [2994] = 1,
    ACTIONS(823), 1,
      sym_Name,
  [2998] = 1,
    ACTIONS(825), 1,
      sym_Name,
  [3002] = 1,
    ACTIONS(827), 1,
      aux_sym_CharRef_token1,
  [3006] = 1,
    ACTIONS(827), 1,
      aux_sym_CharRef_token2,
  [3010] = 1,
    ACTIONS(829), 1,
      sym_Name,
  [3014] = 1,
    ACTIONS(831), 1,
      sym_Name,
  [3018] = 1,
    ACTIONS(833), 1,
      aux_sym_CharRef_token1,
  [3022] = 1,
    ACTIONS(833), 1,
      aux_sym_CharRef_token2,
  [3026] = 1,
    ACTIONS(835), 1,
      sym_Name,
  [3030] = 1,
    ACTIONS(837), 1,
      aux_sym_CharRef_token1,
  [3034] = 1,
    ACTIONS(837), 1,
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
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 802,
  [SMALL_STATE(29)] = 815,
  [SMALL_STATE(30)] = 828,
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 854,
  [SMALL_STATE(33)] = 867,
  [SMALL_STATE(34)] = 888,
  [SMALL_STATE(35)] = 901,
  [SMALL_STATE(36)] = 912,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 938,
  [SMALL_STATE(39)] = 959,
  [SMALL_STATE(40)] = 972,
  [SMALL_STATE(41)] = 985,
  [SMALL_STATE(42)] = 998,
  [SMALL_STATE(43)] = 1011,
  [SMALL_STATE(44)] = 1036,
  [SMALL_STATE(45)] = 1047,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1073,
  [SMALL_STATE(48)] = 1084,
  [SMALL_STATE(49)] = 1097,
  [SMALL_STATE(50)] = 1110,
  [SMALL_STATE(51)] = 1123,
  [SMALL_STATE(52)] = 1136,
  [SMALL_STATE(53)] = 1149,
  [SMALL_STATE(54)] = 1169,
  [SMALL_STATE(55)] = 1189,
  [SMALL_STATE(56)] = 1201,
  [SMALL_STATE(57)] = 1223,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1263,
  [SMALL_STATE(60)] = 1274,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1302,
  [SMALL_STATE(63)] = 1319,
  [SMALL_STATE(64)] = 1330,
  [SMALL_STATE(65)] = 1341,
  [SMALL_STATE(66)] = 1352,
  [SMALL_STATE(67)] = 1363,
  [SMALL_STATE(68)] = 1380,
  [SMALL_STATE(69)] = 1391,
  [SMALL_STATE(70)] = 1410,
  [SMALL_STATE(71)] = 1421,
  [SMALL_STATE(72)] = 1432,
  [SMALL_STATE(73)] = 1449,
  [SMALL_STATE(74)] = 1468,
  [SMALL_STATE(75)] = 1487,
  [SMALL_STATE(76)] = 1498,
  [SMALL_STATE(77)] = 1517,
  [SMALL_STATE(78)] = 1528,
  [SMALL_STATE(79)] = 1545,
  [SMALL_STATE(80)] = 1564,
  [SMALL_STATE(81)] = 1578,
  [SMALL_STATE(82)] = 1588,
  [SMALL_STATE(83)] = 1602,
  [SMALL_STATE(84)] = 1612,
  [SMALL_STATE(85)] = 1622,
  [SMALL_STATE(86)] = 1636,
  [SMALL_STATE(87)] = 1650,
  [SMALL_STATE(88)] = 1664,
  [SMALL_STATE(89)] = 1674,
  [SMALL_STATE(90)] = 1688,
  [SMALL_STATE(91)] = 1698,
  [SMALL_STATE(92)] = 1708,
  [SMALL_STATE(93)] = 1722,
  [SMALL_STATE(94)] = 1732,
  [SMALL_STATE(95)] = 1745,
  [SMALL_STATE(96)] = 1752,
  [SMALL_STATE(97)] = 1765,
  [SMALL_STATE(98)] = 1778,
  [SMALL_STATE(99)] = 1791,
  [SMALL_STATE(100)] = 1804,
  [SMALL_STATE(101)] = 1817,
  [SMALL_STATE(102)] = 1830,
  [SMALL_STATE(103)] = 1841,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1861,
  [SMALL_STATE(106)] = 1874,
  [SMALL_STATE(107)] = 1887,
  [SMALL_STATE(108)] = 1898,
  [SMALL_STATE(109)] = 1911,
  [SMALL_STATE(110)] = 1918,
  [SMALL_STATE(111)] = 1931,
  [SMALL_STATE(112)] = 1944,
  [SMALL_STATE(113)] = 1951,
  [SMALL_STATE(114)] = 1962,
  [SMALL_STATE(115)] = 1971,
  [SMALL_STATE(116)] = 1978,
  [SMALL_STATE(117)] = 1987,
  [SMALL_STATE(118)] = 1994,
  [SMALL_STATE(119)] = 2007,
  [SMALL_STATE(120)] = 2018,
  [SMALL_STATE(121)] = 2031,
  [SMALL_STATE(122)] = 2044,
  [SMALL_STATE(123)] = 2052,
  [SMALL_STATE(124)] = 2062,
  [SMALL_STATE(125)] = 2072,
  [SMALL_STATE(126)] = 2082,
  [SMALL_STATE(127)] = 2092,
  [SMALL_STATE(128)] = 2098,
  [SMALL_STATE(129)] = 2108,
  [SMALL_STATE(130)] = 2118,
  [SMALL_STATE(131)] = 2126,
  [SMALL_STATE(132)] = 2132,
  [SMALL_STATE(133)] = 2142,
  [SMALL_STATE(134)] = 2148,
  [SMALL_STATE(135)] = 2158,
  [SMALL_STATE(136)] = 2168,
  [SMALL_STATE(137)] = 2178,
  [SMALL_STATE(138)] = 2184,
  [SMALL_STATE(139)] = 2194,
  [SMALL_STATE(140)] = 2200,
  [SMALL_STATE(141)] = 2208,
  [SMALL_STATE(142)] = 2218,
  [SMALL_STATE(143)] = 2228,
  [SMALL_STATE(144)] = 2238,
  [SMALL_STATE(145)] = 2244,
  [SMALL_STATE(146)] = 2252,
  [SMALL_STATE(147)] = 2262,
  [SMALL_STATE(148)] = 2272,
  [SMALL_STATE(149)] = 2280,
  [SMALL_STATE(150)] = 2290,
  [SMALL_STATE(151)] = 2298,
  [SMALL_STATE(152)] = 2308,
  [SMALL_STATE(153)] = 2318,
  [SMALL_STATE(154)] = 2326,
  [SMALL_STATE(155)] = 2331,
  [SMALL_STATE(156)] = 2338,
  [SMALL_STATE(157)] = 2345,
  [SMALL_STATE(158)] = 2350,
  [SMALL_STATE(159)] = 2357,
  [SMALL_STATE(160)] = 2364,
  [SMALL_STATE(161)] = 2371,
  [SMALL_STATE(162)] = 2376,
  [SMALL_STATE(163)] = 2383,
  [SMALL_STATE(164)] = 2390,
  [SMALL_STATE(165)] = 2395,
  [SMALL_STATE(166)] = 2400,
  [SMALL_STATE(167)] = 2405,
  [SMALL_STATE(168)] = 2412,
  [SMALL_STATE(169)] = 2417,
  [SMALL_STATE(170)] = 2422,
  [SMALL_STATE(171)] = 2427,
  [SMALL_STATE(172)] = 2432,
  [SMALL_STATE(173)] = 2437,
  [SMALL_STATE(174)] = 2444,
  [SMALL_STATE(175)] = 2449,
  [SMALL_STATE(176)] = 2456,
  [SMALL_STATE(177)] = 2461,
  [SMALL_STATE(178)] = 2466,
  [SMALL_STATE(179)] = 2473,
  [SMALL_STATE(180)] = 2480,
  [SMALL_STATE(181)] = 2487,
  [SMALL_STATE(182)] = 2494,
  [SMALL_STATE(183)] = 2499,
  [SMALL_STATE(184)] = 2506,
  [SMALL_STATE(185)] = 2513,
  [SMALL_STATE(186)] = 2518,
  [SMALL_STATE(187)] = 2523,
  [SMALL_STATE(188)] = 2530,
  [SMALL_STATE(189)] = 2537,
  [SMALL_STATE(190)] = 2544,
  [SMALL_STATE(191)] = 2549,
  [SMALL_STATE(192)] = 2556,
  [SMALL_STATE(193)] = 2561,
  [SMALL_STATE(194)] = 2566,
  [SMALL_STATE(195)] = 2571,
  [SMALL_STATE(196)] = 2578,
  [SMALL_STATE(197)] = 2583,
  [SMALL_STATE(198)] = 2590,
  [SMALL_STATE(199)] = 2597,
  [SMALL_STATE(200)] = 2602,
  [SMALL_STATE(201)] = 2607,
  [SMALL_STATE(202)] = 2614,
  [SMALL_STATE(203)] = 2619,
  [SMALL_STATE(204)] = 2624,
  [SMALL_STATE(205)] = 2629,
  [SMALL_STATE(206)] = 2636,
  [SMALL_STATE(207)] = 2641,
  [SMALL_STATE(208)] = 2646,
  [SMALL_STATE(209)] = 2651,
  [SMALL_STATE(210)] = 2658,
  [SMALL_STATE(211)] = 2663,
  [SMALL_STATE(212)] = 2670,
  [SMALL_STATE(213)] = 2677,
  [SMALL_STATE(214)] = 2684,
  [SMALL_STATE(215)] = 2689,
  [SMALL_STATE(216)] = 2694,
  [SMALL_STATE(217)] = 2698,
  [SMALL_STATE(218)] = 2702,
  [SMALL_STATE(219)] = 2706,
  [SMALL_STATE(220)] = 2710,
  [SMALL_STATE(221)] = 2714,
  [SMALL_STATE(222)] = 2718,
  [SMALL_STATE(223)] = 2722,
  [SMALL_STATE(224)] = 2726,
  [SMALL_STATE(225)] = 2730,
  [SMALL_STATE(226)] = 2734,
  [SMALL_STATE(227)] = 2738,
  [SMALL_STATE(228)] = 2742,
  [SMALL_STATE(229)] = 2746,
  [SMALL_STATE(230)] = 2750,
  [SMALL_STATE(231)] = 2754,
  [SMALL_STATE(232)] = 2758,
  [SMALL_STATE(233)] = 2762,
  [SMALL_STATE(234)] = 2766,
  [SMALL_STATE(235)] = 2770,
  [SMALL_STATE(236)] = 2774,
  [SMALL_STATE(237)] = 2778,
  [SMALL_STATE(238)] = 2782,
  [SMALL_STATE(239)] = 2786,
  [SMALL_STATE(240)] = 2790,
  [SMALL_STATE(241)] = 2794,
  [SMALL_STATE(242)] = 2798,
  [SMALL_STATE(243)] = 2802,
  [SMALL_STATE(244)] = 2806,
  [SMALL_STATE(245)] = 2810,
  [SMALL_STATE(246)] = 2814,
  [SMALL_STATE(247)] = 2818,
  [SMALL_STATE(248)] = 2822,
  [SMALL_STATE(249)] = 2826,
  [SMALL_STATE(250)] = 2830,
  [SMALL_STATE(251)] = 2834,
  [SMALL_STATE(252)] = 2838,
  [SMALL_STATE(253)] = 2842,
  [SMALL_STATE(254)] = 2846,
  [SMALL_STATE(255)] = 2850,
  [SMALL_STATE(256)] = 2854,
  [SMALL_STATE(257)] = 2858,
  [SMALL_STATE(258)] = 2862,
  [SMALL_STATE(259)] = 2866,
  [SMALL_STATE(260)] = 2870,
  [SMALL_STATE(261)] = 2874,
  [SMALL_STATE(262)] = 2878,
  [SMALL_STATE(263)] = 2882,
  [SMALL_STATE(264)] = 2886,
  [SMALL_STATE(265)] = 2890,
  [SMALL_STATE(266)] = 2894,
  [SMALL_STATE(267)] = 2898,
  [SMALL_STATE(268)] = 2902,
  [SMALL_STATE(269)] = 2906,
  [SMALL_STATE(270)] = 2910,
  [SMALL_STATE(271)] = 2914,
  [SMALL_STATE(272)] = 2918,
  [SMALL_STATE(273)] = 2922,
  [SMALL_STATE(274)] = 2926,
  [SMALL_STATE(275)] = 2930,
  [SMALL_STATE(276)] = 2934,
  [SMALL_STATE(277)] = 2938,
  [SMALL_STATE(278)] = 2942,
  [SMALL_STATE(279)] = 2946,
  [SMALL_STATE(280)] = 2950,
  [SMALL_STATE(281)] = 2954,
  [SMALL_STATE(282)] = 2958,
  [SMALL_STATE(283)] = 2962,
  [SMALL_STATE(284)] = 2966,
  [SMALL_STATE(285)] = 2970,
  [SMALL_STATE(286)] = 2974,
  [SMALL_STATE(287)] = 2978,
  [SMALL_STATE(288)] = 2982,
  [SMALL_STATE(289)] = 2986,
  [SMALL_STATE(290)] = 2990,
  [SMALL_STATE(291)] = 2994,
  [SMALL_STATE(292)] = 2998,
  [SMALL_STATE(293)] = 3002,
  [SMALL_STATE(294)] = 3006,
  [SMALL_STATE(295)] = 3010,
  [SMALL_STATE(296)] = 3014,
  [SMALL_STATE(297)] = 3018,
  [SMALL_STATE(298)] = 3022,
  [SMALL_STATE(299)] = 3026,
  [SMALL_STATE(300)] = 3030,
  [SMALL_STATE(301)] = 3034,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(269),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(272),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(291),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(235),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(237),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(241),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(295),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(18),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(292),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(293),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(294),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(299),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(300),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(301),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(296),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(297),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(298),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(54),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(193),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(114),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(249),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(121),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(252),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(152),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(209),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(246),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(115),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(117),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(133),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(139),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(144),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [803] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
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
