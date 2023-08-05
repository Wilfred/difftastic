#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 317
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  sym_Name = 1,
  anon_sym_LT_BANG_LBRACK = 2,
  anon_sym_IGNORE = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK_RBRACK_GT = 6,
  anon_sym_LT_BANGELEMENT = 7,
  anon_sym_GT = 8,
  anon_sym_EMPTY = 9,
  anon_sym_ANY = 10,
  anon_sym_LPAREN = 11,
  anon_sym_POUNDPCDATA = 12,
  anon_sym_PIPE = 13,
  anon_sym_RPAREN = 14,
  anon_sym_STAR = 15,
  anon_sym_COMMA = 16,
  anon_sym_LT_BANGATTLIST = 17,
  sym_StringType = 18,
  sym_TokenizedType = 19,
  anon_sym_NOTATION = 20,
  anon_sym_POUNDREQUIRED = 21,
  anon_sym_POUNDIMPLIED = 22,
  anon_sym_POUNDFIXED = 23,
  anon_sym_LT_BANGENTITY = 24,
  anon_sym_PERCENT = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_EntityValue_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_EntityValue_token2 = 29,
  anon_sym_NDATA = 30,
  anon_sym_LT_BANGNOTATION = 31,
  anon_sym_SEMI = 32,
  anon_sym_QMARK = 33,
  anon_sym_PLUS = 34,
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
  sym__seq = 72,
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
  aux_sym__seq_repeat1 = 103,
  aux_sym_AttlistDecl_repeat1 = 104,
  aux_sym_NotationType_repeat1 = 105,
  aux_sym_Enumeration_repeat1 = 106,
  aux_sym_EntityValue_repeat1 = 107,
  aux_sym_EntityValue_repeat2 = 108,
  aux_sym_AttValue_repeat1 = 109,
  aux_sym_AttValue_repeat2 = 110,
  alias_sym_PITarget = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_BANGELEMENT] = "<!ELEMENT",
  [anon_sym_GT] = ">",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_POUNDPCDATA] = "#PCDATA",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT_BANGATTLIST] = "<!ATTLIST",
  [sym_StringType] = "StringType",
  [sym_TokenizedType] = "TokenizedType",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_LT_BANGENTITY] = "<!ENTITY",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_EntityValue_token1] = "EntityValue_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_EntityValue_token2] = "EntityValue_token2",
  [anon_sym_NDATA] = "NDATA",
  [anon_sym_LT_BANGNOTATION] = "<!NOTATION",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
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
  [sym__seq] = "_seq",
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
  [aux_sym__seq_repeat1] = "_seq_repeat1",
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
  [anon_sym_LT_BANGELEMENT] = anon_sym_LT_BANGELEMENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_POUNDPCDATA] = anon_sym_POUNDPCDATA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT_BANGATTLIST] = anon_sym_LT_BANGATTLIST,
  [sym_StringType] = sym_StringType,
  [sym_TokenizedType] = sym_TokenizedType,
  [anon_sym_NOTATION] = anon_sym_NOTATION,
  [anon_sym_POUNDREQUIRED] = anon_sym_POUNDREQUIRED,
  [anon_sym_POUNDIMPLIED] = anon_sym_POUNDIMPLIED,
  [anon_sym_POUNDFIXED] = anon_sym_POUNDFIXED,
  [anon_sym_LT_BANGENTITY] = anon_sym_LT_BANGENTITY,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_EntityValue_token1] = aux_sym_EntityValue_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_EntityValue_token2] = aux_sym_EntityValue_token2,
  [anon_sym_NDATA] = anon_sym_NDATA,
  [anon_sym_LT_BANGNOTATION] = anon_sym_LT_BANGNOTATION,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym__seq] = sym__seq,
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
  [aux_sym__seq_repeat1] = aux_sym__seq_repeat1,
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
  [anon_sym_LT_BANGELEMENT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGATTLIST] = {
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
  [anon_sym_LT_BANGENTITY] = {
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
  [anon_sym_LT_BANGNOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym__seq] = {
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
  [aux_sym__seq_repeat1] = {
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
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 71,
  [81] = 12,
  [82] = 77,
  [83] = 83,
  [84] = 84,
  [85] = 12,
  [86] = 86,
  [87] = 83,
  [88] = 71,
  [89] = 83,
  [90] = 90,
  [91] = 91,
  [92] = 77,
  [93] = 77,
  [94] = 71,
  [95] = 95,
  [96] = 83,
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
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 290,
  [299] = 275,
  [300] = 279,
  [301] = 290,
  [302] = 275,
  [303] = 279,
  [304] = 275,
  [305] = 279,
  [306] = 295,
  [307] = 238,
  [308] = 240,
  [309] = 241,
  [310] = 295,
  [311] = 238,
  [312] = 240,
  [313] = 241,
  [314] = 238,
  [315] = 240,
  [316] = 241,
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
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(95);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(87);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(87);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '?') ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '&') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'Q') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'X') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 65:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(131);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '?') ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(97);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_Comment);
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
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(19);
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
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(34);
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
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(48);
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
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'Y') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'K') ADVANCE(61);
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
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'Y') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(71);
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
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(79);
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
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(68);
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
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 67},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 67},
  [73] = {.lex_state = 67},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 67},
  [76] = {.lex_state = 67},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 67},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 67},
  [91] = {.lex_state = 67},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 67},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 67},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 67},
  [108] = {.lex_state = 67},
  [109] = {.lex_state = 67},
  [110] = {.lex_state = 67},
  [111] = {.lex_state = 67},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 67},
  [114] = {.lex_state = 67},
  [115] = {.lex_state = 67},
  [116] = {.lex_state = 67},
  [117] = {.lex_state = 67},
  [118] = {.lex_state = 67},
  [119] = {.lex_state = 67},
  [120] = {.lex_state = 67},
  [121] = {.lex_state = 67},
  [122] = {.lex_state = 67},
  [123] = {.lex_state = 67},
  [124] = {.lex_state = 67},
  [125] = {.lex_state = 67},
  [126] = {.lex_state = 67},
  [127] = {.lex_state = 67},
  [128] = {.lex_state = 67},
  [129] = {.lex_state = 67},
  [130] = {.lex_state = 67},
  [131] = {.lex_state = 67},
  [132] = {.lex_state = 67},
  [133] = {.lex_state = 67},
  [134] = {.lex_state = 67},
  [135] = {.lex_state = 67},
  [136] = {.lex_state = 67},
  [137] = {.lex_state = 67},
  [138] = {.lex_state = 67},
  [139] = {.lex_state = 67},
  [140] = {.lex_state = 67},
  [141] = {.lex_state = 67},
  [142] = {.lex_state = 67},
  [143] = {.lex_state = 67},
  [144] = {.lex_state = 67},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 67},
  [147] = {.lex_state = 67},
  [148] = {.lex_state = 67},
  [149] = {.lex_state = 67},
  [150] = {.lex_state = 67},
  [151] = {.lex_state = 67},
  [152] = {.lex_state = 67},
  [153] = {.lex_state = 67},
  [154] = {.lex_state = 67},
  [155] = {.lex_state = 67},
  [156] = {.lex_state = 67},
  [157] = {.lex_state = 67},
  [158] = {.lex_state = 67},
  [159] = {.lex_state = 67},
  [160] = {.lex_state = 67},
  [161] = {.lex_state = 67},
  [162] = {.lex_state = 67},
  [163] = {.lex_state = 67},
  [164] = {.lex_state = 67},
  [165] = {.lex_state = 67},
  [166] = {.lex_state = 67},
  [167] = {.lex_state = 67},
  [168] = {.lex_state = 67},
  [169] = {.lex_state = 67},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 67},
  [172] = {.lex_state = 67},
  [173] = {.lex_state = 67},
  [174] = {.lex_state = 67},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 67},
  [177] = {.lex_state = 67},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 67},
  [180] = {.lex_state = 125},
  [181] = {.lex_state = 123},
  [182] = {.lex_state = 67},
  [183] = {.lex_state = 121},
  [184] = {.lex_state = 119},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 67},
  [187] = {.lex_state = 67},
  [188] = {.lex_state = 67},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 67},
  [191] = {.lex_state = 67},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 67},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 67},
  [196] = {.lex_state = 67},
  [197] = {.lex_state = 67},
  [198] = {.lex_state = 67},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 67},
  [201] = {.lex_state = 67},
  [202] = {.lex_state = 67},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 62},
  [205] = {.lex_state = 67},
  [206] = {.lex_state = 67},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 67},
  [209] = {.lex_state = 67},
  [210] = {.lex_state = 67},
  [211] = {.lex_state = 62},
  [212] = {.lex_state = 67},
  [213] = {.lex_state = 67},
  [214] = {.lex_state = 67},
  [215] = {.lex_state = 67},
  [216] = {.lex_state = 67},
  [217] = {.lex_state = 67},
  [218] = {.lex_state = 67},
  [219] = {.lex_state = 67},
  [220] = {.lex_state = 67},
  [221] = {.lex_state = 67},
  [222] = {.lex_state = 62},
  [223] = {.lex_state = 67},
  [224] = {.lex_state = 67},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 67},
  [227] = {.lex_state = 67},
  [228] = {.lex_state = 67},
  [229] = {.lex_state = 67},
  [230] = {.lex_state = 67},
  [231] = {.lex_state = 67},
  [232] = {.lex_state = 67},
  [233] = {.lex_state = 67},
  [234] = {.lex_state = 67},
  [235] = {.lex_state = 67},
  [236] = {.lex_state = 65},
  [237] = {.lex_state = 67},
  [238] = {.lex_state = 67},
  [239] = {.lex_state = 67},
  [240] = {.lex_state = 67},
  [241] = {.lex_state = 64},
  [242] = {.lex_state = 67},
  [243] = {.lex_state = 67},
  [244] = {.lex_state = 67},
  [245] = {.lex_state = 67},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 67},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 67},
  [250] = {.lex_state = 67},
  [251] = {.lex_state = 67},
  [252] = {.lex_state = 67},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 67},
  [255] = {.lex_state = 67},
  [256] = {.lex_state = 67},
  [257] = {.lex_state = 67},
  [258] = {.lex_state = 67},
  [259] = {.lex_state = 67},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 67},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 67},
  [264] = {.lex_state = 67},
  [265] = {.lex_state = 67},
  [266] = {.lex_state = 67},
  [267] = {.lex_state = 67},
  [268] = {.lex_state = 67},
  [269] = {.lex_state = 67},
  [270] = {.lex_state = 131},
  [271] = {.lex_state = 67},
  [272] = {.lex_state = 67},
  [273] = {.lex_state = 62},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 67},
  [276] = {.lex_state = 67},
  [277] = {.lex_state = 67},
  [278] = {.lex_state = 67},
  [279] = {.lex_state = 67},
  [280] = {.lex_state = 67},
  [281] = {.lex_state = 67},
  [282] = {.lex_state = 67},
  [283] = {.lex_state = 67},
  [284] = {.lex_state = 67},
  [285] = {.lex_state = 67},
  [286] = {.lex_state = 67},
  [287] = {.lex_state = 67},
  [288] = {.lex_state = 67},
  [289] = {.lex_state = 67},
  [290] = {.lex_state = 67},
  [291] = {.lex_state = 67},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 65},
  [294] = {.lex_state = 67},
  [295] = {.lex_state = 67},
  [296] = {.lex_state = 67},
  [297] = {.lex_state = 67},
  [298] = {.lex_state = 67},
  [299] = {.lex_state = 67},
  [300] = {.lex_state = 67},
  [301] = {.lex_state = 67},
  [302] = {.lex_state = 67},
  [303] = {.lex_state = 67},
  [304] = {.lex_state = 67},
  [305] = {.lex_state = 67},
  [306] = {.lex_state = 67},
  [307] = {.lex_state = 67},
  [308] = {.lex_state = 67},
  [309] = {.lex_state = 64},
  [310] = {.lex_state = 67},
  [311] = {.lex_state = 67},
  [312] = {.lex_state = 67},
  [313] = {.lex_state = 64},
  [314] = {.lex_state = 67},
  [315] = {.lex_state = 67},
  [316] = {.lex_state = 64},
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
    [anon_sym_LT_BANGELEMENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EMPTY] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDPCDATA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(1),
    [sym_StringType] = ACTIONS(1),
    [sym_TokenizedType] = ACTIONS(1),
    [anon_sym_NOTATION] = ACTIONS(1),
    [anon_sym_POUNDREQUIRED] = ACTIONS(1),
    [anon_sym_POUNDIMPLIED] = ACTIONS(1),
    [anon_sym_POUNDFIXED] = ACTIONS(1),
    [anon_sym_LT_BANGENTITY] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token2] = ACTIONS(1),
    [anon_sym_NDATA] = ACTIONS(1),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [sym_document] = STATE(292),
    [sym__extSubsetDecl] = STATE(3),
    [sym_conditionalSect] = STATE(3),
    [sym__markupdecl] = STATE(3),
    [sym__DeclSep] = STATE(3),
    [sym_elementdecl] = STATE(26),
    [sym_AttlistDecl] = STATE(26),
    [sym__EntityDecl] = STATE(26),
    [sym_GEDecl] = STATE(24),
    [sym_PEDecl] = STATE(24),
    [sym_NotationDecl] = STATE(26),
    [sym_PEReference] = STATE(3),
    [sym_XMLDecl] = STATE(11),
    [sym_PI] = STATE(26),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(3),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(5),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(7),
    [anon_sym_LT_BANGENTITY] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(13),
    [sym__S] = ACTIONS(15),
    [anon_sym_LT_QMARK] = ACTIONS(17),
    [sym_Comment] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(29), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(32), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(35), 1,
      anon_sym_PERCENT,
    ACTIONS(38), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(41), 1,
      sym__S,
    ACTIONS(44), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      sym_Comment,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [51] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym__S,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [101] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(52), 1,
      sym__S,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(56), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [151] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(58), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(60), 1,
      sym__S,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [201] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(52), 1,
      sym__S,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(58), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [251] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(56), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(62), 1,
      sym__S,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [301] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(66), 1,
      sym__S,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [351] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(52), 1,
      sym__S,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [401] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(52), 1,
      sym__S,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(70), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [451] = 12,
    ACTIONS(3), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(7), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(9), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(54), 1,
      anon_sym_LT_QMARK,
    ACTIONS(72), 1,
      sym__S,
    STATE(24), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(26), 5,
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
  [498] = 1,
    ACTIONS(74), 20,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
      sym_Name,
      anon_sym_LT_QMARK,
      sym_Comment,
  [521] = 1,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [535] = 1,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [549] = 1,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [563] = 1,
    ACTIONS(82), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [577] = 8,
    ACTIONS(84), 1,
      anon_sym_PERCENT,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_AMP_POUND,
    ACTIONS(94), 1,
      anon_sym_AMP_POUNDx,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(35), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [605] = 8,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_PERCENT,
    ACTIONS(98), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(100), 1,
      anon_sym_AMP,
    ACTIONS(102), 1,
      anon_sym_AMP_POUND,
    ACTIONS(104), 1,
      anon_sym_AMP_POUNDx,
    STATE(71), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(34), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [633] = 1,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [647] = 1,
    ACTIONS(108), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [661] = 1,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [675] = 1,
    ACTIONS(112), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [689] = 1,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [703] = 1,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [717] = 1,
    ACTIONS(118), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [731] = 1,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [745] = 1,
    ACTIONS(122), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [759] = 1,
    ACTIONS(124), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [773] = 1,
    ACTIONS(126), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [787] = 1,
    ACTIONS(128), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [801] = 1,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [815] = 1,
    ACTIONS(132), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [829] = 1,
    ACTIONS(134), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [843] = 8,
    ACTIONS(136), 1,
      anon_sym_PERCENT,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_AMP_POUND,
    ACTIONS(150), 1,
      anon_sym_AMP_POUNDx,
    STATE(71), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(34), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [871] = 8,
    ACTIONS(153), 1,
      anon_sym_PERCENT,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(164), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(35), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [899] = 1,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [913] = 8,
    ACTIONS(96), 1,
      anon_sym_PERCENT,
    ACTIONS(100), 1,
      anon_sym_AMP,
    ACTIONS(102), 1,
      anon_sym_AMP_POUND,
    ACTIONS(104), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_EntityValue_token1,
    STATE(71), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [941] = 8,
    ACTIONS(84), 1,
      anon_sym_PERCENT,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_AMP_POUND,
    ACTIONS(94), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      aux_sym_EntityValue_token2,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [969] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_contentspec,
    ACTIONS(178), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(95), 2,
      sym__choice,
      sym__seq,
    STATE(205), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [992] = 7,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_NOTATION,
    STATE(194), 1,
      sym__AttType,
    ACTIONS(184), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(193), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(197), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [1017] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_AMP,
    ACTIONS(192), 1,
      anon_sym_AMP_POUND,
    ACTIONS(194), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(196), 1,
      aux_sym_AttValue_token2,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [1041] = 7,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token1,
    STATE(49), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
  [1065] = 1,
    ACTIONS(208), 9,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1077] = 7,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(210), 1,
      aux_sym_AttValue_token1,
    STATE(42), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
  [1101] = 8,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(218), 1,
      sym__S,
    STATE(62), 1,
      sym_PEReference,
    STATE(72), 1,
      sym__cp,
    STATE(67), 2,
      sym__choice,
      sym__seq,
  [1127] = 7,
    ACTIONS(190), 1,
      anon_sym_AMP,
    ACTIONS(192), 1,
      anon_sym_AMP_POUND,
    ACTIONS(194), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      aux_sym_AttValue_token2,
    STATE(48), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [1151] = 1,
    ACTIONS(222), 9,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1163] = 7,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_AMP,
    ACTIONS(229), 1,
      anon_sym_AMP_POUND,
    ACTIONS(232), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(235), 1,
      aux_sym_AttValue_token2,
    STATE(48), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
  [1187] = 7,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_AMP_POUND,
    ACTIONS(246), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(249), 1,
      aux_sym_AttValue_token1,
    STATE(49), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
  [1211] = 1,
    ACTIONS(252), 9,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_PERCENT,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1223] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym__S,
    STATE(150), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1244] = 1,
    ACTIONS(256), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1255] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym__S,
    STATE(152), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1276] = 6,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1297] = 1,
    ACTIONS(270), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1308] = 1,
    ACTIONS(272), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1319] = 1,
    ACTIONS(274), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1330] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym__S,
    STATE(143), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1351] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      sym__S,
    STATE(142), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1372] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      sym__S,
    STATE(72), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1393] = 1,
    ACTIONS(282), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1404] = 6,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      sym__S,
    STATE(123), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1425] = 7,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_POUNDPCDATA,
    STATE(54), 1,
      sym_PEReference,
    STATE(75), 1,
      sym__cp,
    STATE(67), 2,
      sym__choice,
      sym__seq,
  [1448] = 6,
    ACTIONS(292), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym_AttValue,
    STATE(230), 1,
      sym_DefaultDecl,
    ACTIONS(290), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1468] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1486] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1504] = 2,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(266), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1516] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1534] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1552] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_Name,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym__cp,
    STATE(67), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1570] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1581] = 6,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      sym__S,
    STATE(114), 1,
      aux_sym__seq_repeat1,
    STATE(115), 1,
      aux_sym__choice_repeat1,
  [1600] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(310), 1,
      sym_Name,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      sym__S,
    STATE(86), 1,
      aux_sym_NotationType_repeat1,
    STATE(196), 1,
      sym_PEReference,
  [1619] = 6,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_SYSTEM,
    ACTIONS(322), 1,
      anon_sym_PUBLIC,
    STATE(160), 1,
      sym_ExternalID,
    STATE(212), 1,
      sym_EntityValue,
  [1638] = 6,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      sym__S,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym__seq_repeat1,
    STATE(98), 1,
      aux_sym__choice_repeat1,
  [1657] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(320), 1,
      anon_sym_SYSTEM,
    ACTIONS(326), 1,
      anon_sym_PUBLIC,
    STATE(242), 1,
      sym_PEReference,
    STATE(219), 2,
      sym_ExternalID,
      sym_PublicID,
  [1674] = 2,
    ACTIONS(330), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(328), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1685] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      sym__S,
    ACTIONS(332), 1,
      sym_Name,
    STATE(90), 1,
      aux_sym_NotationType_repeat1,
    STATE(178), 1,
      sym_PEReference,
  [1704] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      sym__S,
    ACTIONS(334), 1,
      sym_Name,
    STATE(78), 1,
      aux_sym_NotationType_repeat1,
    STATE(189), 1,
      sym_PEReference,
  [1723] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1734] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(74), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1745] = 2,
    ACTIONS(330), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(328), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1756] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1767] = 5,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_SYSTEM,
    ACTIONS(322), 1,
      anon_sym_PUBLIC,
    STATE(191), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1784] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(74), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1795] = 6,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      sym__S,
    ACTIONS(334), 1,
      sym_Name,
    STATE(90), 1,
      aux_sym_NotationType_repeat1,
    STATE(189), 1,
      sym_PEReference,
  [1814] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1825] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1835] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1845] = 4,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(347), 1,
      sym__S,
    STATE(90), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(342), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1859] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(352), 1,
      sym__S,
    STATE(168), 1,
      sym_PEReference,
    ACTIONS(350), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1873] = 2,
    ACTIONS(330), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(328), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1883] = 2,
    ACTIONS(330), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(328), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1893] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1903] = 2,
    ACTIONS(354), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(356), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1913] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1923] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      sym__S,
    STATE(107), 1,
      aux_sym__seq_repeat1,
  [1936] = 4,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      sym__S,
    STATE(106), 1,
      aux_sym__choice_repeat1,
  [1949] = 4,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Enumeration_repeat1,
  [1962] = 2,
    ACTIONS(372), 1,
      sym__S,
    ACTIONS(342), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1971] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      sym_Name,
    ACTIONS(377), 1,
      anon_sym_GT,
    STATE(252), 1,
      sym_PEReference,
  [1984] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(379), 1,
      sym_Name,
    ACTIONS(381), 1,
      sym__S,
    STATE(73), 1,
      sym_PEReference,
  [1997] = 4,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      sym__S,
    STATE(123), 1,
      aux_sym_Mixed_repeat1,
  [2010] = 1,
    ACTIONS(383), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2017] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      sym_Name,
    ACTIONS(387), 1,
      sym__S,
    STATE(132), 1,
      sym_PEReference,
  [2030] = 4,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      sym__S,
    STATE(106), 1,
      aux_sym__choice_repeat1,
  [2043] = 4,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      sym__S,
    STATE(107), 1,
      aux_sym__seq_repeat1,
  [2056] = 4,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      sym__S,
    STATE(112), 1,
      aux_sym_Enumeration_repeat1,
  [2069] = 2,
    ACTIONS(411), 1,
      sym__S,
    ACTIONS(409), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2078] = 3,
    ACTIONS(414), 1,
      anon_sym_GT,
    ACTIONS(416), 1,
      sym__S,
    STATE(117), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2089] = 1,
    ACTIONS(418), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2096] = 4,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_Enumeration_repeat1,
  [2109] = 1,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2116] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      sym__S,
    STATE(107), 1,
      aux_sym__seq_repeat1,
  [2129] = 4,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      sym__S,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__choice_repeat1,
  [2142] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      sym_Name,
    ACTIONS(422), 1,
      anon_sym_GT,
    STATE(252), 1,
      sym_PEReference,
  [2155] = 3,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(424), 1,
      sym__S,
    STATE(126), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2166] = 4,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      sym__S,
    STATE(125), 1,
      aux_sym_Mixed_repeat1,
  [2179] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    STATE(186), 1,
      sym_PEReference,
    ACTIONS(430), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2190] = 4,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_Enumeration_repeat1,
  [2203] = 4,
    ACTIONS(436), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_Enumeration_repeat1,
  [2216] = 4,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      sym_Name,
    ACTIONS(446), 1,
      sym__S,
    STATE(164), 1,
      sym_PEReference,
  [2229] = 4,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      sym__S,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat1,
  [2242] = 4,
    ACTIONS(260), 1,
      anon_sym_PIPE,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      sym__S,
    STATE(118), 1,
      aux_sym_Mixed_repeat1,
  [2255] = 4,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      sym__S,
    STATE(125), 1,
      aux_sym_Mixed_repeat1,
  [2268] = 3,
    ACTIONS(458), 1,
      anon_sym_GT,
    ACTIONS(460), 1,
      sym__S,
    STATE(126), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2279] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(463), 1,
      sym_Name,
    STATE(272), 1,
      sym_PEReference,
  [2289] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(465), 1,
      sym_Name,
    STATE(228), 1,
      sym_PEReference,
  [2299] = 1,
    ACTIONS(467), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2305] = 2,
    ACTIONS(471), 1,
      anon_sym_STAR,
    ACTIONS(469), 2,
      anon_sym_GT,
      sym__S,
  [2313] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(473), 1,
      sym_Name,
    STATE(79), 1,
      sym_PEReference,
  [2323] = 2,
    ACTIONS(477), 1,
      sym__S,
    ACTIONS(475), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2331] = 1,
    ACTIONS(475), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2337] = 3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_SystemLiteral,
  [2347] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      sym_Name,
    STATE(157), 1,
      sym_PEReference,
  [2357] = 2,
    ACTIONS(488), 1,
      sym__S,
    ACTIONS(486), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2365] = 3,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(492), 1,
      anon_sym_EQ,
    STATE(221), 1,
      sym__Eq,
  [2375] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      sym_Name,
    STATE(276), 1,
      sym_PEReference,
  [2385] = 3,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      sym_PubidLiteral,
  [2395] = 3,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_PubidLiteral,
  [2405] = 1,
    ACTIONS(500), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2411] = 1,
    ACTIONS(502), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2417] = 1,
    ACTIONS(504), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2423] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(506), 1,
      sym_Name,
    STATE(110), 1,
      sym_PEReference,
  [2433] = 3,
    ACTIONS(508), 1,
      sym__S,
    ACTIONS(510), 1,
      anon_sym_QMARK_GT,
    STATE(203), 1,
      sym__EncodingDecl,
  [2443] = 3,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    STATE(282), 1,
      sym_PubidLiteral,
  [2453] = 3,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym_SystemLiteral,
  [2463] = 3,
    ACTIONS(512), 1,
      sym_Name,
    ACTIONS(514), 1,
      anon_sym_PERCENT,
    STATE(234), 1,
      sym_PEReference,
  [2473] = 1,
    ACTIONS(516), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2479] = 1,
    ACTIONS(397), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2485] = 3,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_AttValue,
  [2495] = 1,
    ACTIONS(392), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2501] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      sym_Name,
    STATE(252), 1,
      sym_PEReference,
  [2511] = 3,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(492), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym__Eq,
  [2521] = 2,
    ACTIONS(520), 1,
      sym__S,
    ACTIONS(518), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2529] = 1,
    ACTIONS(522), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2535] = 2,
    ACTIONS(524), 1,
      sym__S,
    ACTIONS(522), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2543] = 1,
    ACTIONS(527), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2549] = 1,
    ACTIONS(529), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2555] = 3,
    ACTIONS(531), 1,
      anon_sym_GT,
    ACTIONS(533), 1,
      sym__S,
    STATE(217), 1,
      sym_NDataDecl,
  [2565] = 2,
    ACTIONS(537), 1,
      anon_sym_STAR,
    ACTIONS(535), 2,
      anon_sym_GT,
      sym__S,
  [2573] = 1,
    ACTIONS(439), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2579] = 3,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      sym_Name,
    STATE(132), 1,
      sym_PEReference,
  [2589] = 2,
    ACTIONS(539), 1,
      sym__S,
    ACTIONS(453), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2597] = 1,
    ACTIONS(542), 2,
      anon_sym_GT,
      sym__S,
  [2602] = 1,
    ACTIONS(544), 2,
      anon_sym_GT,
      sym__S,
  [2607] = 2,
    ACTIONS(546), 1,
      sym_Name,
    ACTIONS(548), 1,
      anon_sym_xml,
  [2614] = 2,
    ACTIONS(550), 1,
      anon_sym_LBRACK,
    ACTIONS(552), 1,
      sym__S,
  [2621] = 1,
    ACTIONS(535), 2,
      anon_sym_GT,
      sym__S,
  [2626] = 2,
    ACTIONS(554), 1,
      sym__S,
    ACTIONS(556), 1,
      anon_sym_QMARK_GT,
  [2633] = 2,
    ACTIONS(558), 1,
      sym__S,
    STATE(145), 1,
      sym__VersionInfo,
  [2640] = 2,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2647] = 1,
    ACTIONS(564), 2,
      anon_sym_GT,
      sym__S,
  [2652] = 2,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_PIPE,
  [2659] = 1,
    ACTIONS(568), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2664] = 2,
    ACTIONS(542), 1,
      anon_sym_GT,
    ACTIONS(570), 1,
      sym__S,
  [2671] = 1,
    ACTIONS(572), 2,
      anon_sym_GT,
      sym__S,
  [2676] = 2,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      sym__S,
  [2683] = 1,
    ACTIONS(578), 2,
      anon_sym_GT,
      sym__S,
  [2688] = 2,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(582), 1,
      aux_sym_PubidLiteral_token2,
  [2695] = 2,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    ACTIONS(584), 1,
      aux_sym_PubidLiteral_token1,
  [2702] = 1,
    ACTIONS(586), 2,
      anon_sym_GT,
      sym__S,
  [2707] = 2,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    ACTIONS(590), 1,
      aux_sym_SystemLiteral_token2,
  [2714] = 2,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(592), 1,
      aux_sym_SystemLiteral_token1,
  [2721] = 1,
    ACTIONS(594), 2,
      anon_sym_GT,
      sym__S,
  [2726] = 2,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      sym__S,
  [2733] = 1,
    ACTIONS(600), 2,
      anon_sym_GT,
      sym__S,
  [2738] = 2,
    ACTIONS(602), 1,
      sym_Name,
    ACTIONS(604), 1,
      sym__S,
  [2745] = 2,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      sym__S,
  [2752] = 1,
    ACTIONS(610), 2,
      anon_sym_GT,
      sym__S,
  [2757] = 2,
    ACTIONS(612), 1,
      anon_sym_GT,
    ACTIONS(614), 1,
      sym__S,
  [2764] = 1,
    ACTIONS(616), 2,
      anon_sym_GT,
      sym__S,
  [2769] = 1,
    ACTIONS(618), 2,
      anon_sym_GT,
      sym__S,
  [2774] = 2,
    ACTIONS(620), 1,
      anon_sym_GT,
    ACTIONS(622), 1,
      sym__S,
  [2781] = 1,
    ACTIONS(624), 2,
      anon_sym_GT,
      sym__S,
  [2786] = 2,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      sym__S,
  [2793] = 1,
    ACTIONS(630), 2,
      anon_sym_GT,
      sym__S,
  [2798] = 1,
    ACTIONS(632), 2,
      anon_sym_GT,
      sym__S,
  [2803] = 2,
    ACTIONS(634), 1,
      anon_sym_QMARK_GT,
    ACTIONS(636), 1,
      anon_sym_encoding,
  [2810] = 2,
    ACTIONS(638), 1,
      anon_sym_PIPE,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
  [2817] = 1,
    ACTIONS(642), 2,
      anon_sym_GT,
      sym__S,
  [2822] = 1,
    ACTIONS(644), 2,
      anon_sym_GT,
      sym__S,
  [2827] = 2,
    ACTIONS(634), 1,
      anon_sym_QMARK_GT,
    ACTIONS(646), 1,
      sym__S,
  [2834] = 2,
    ACTIONS(648), 1,
      sym__S,
    ACTIONS(650), 1,
      sym_Nmtoken,
  [2841] = 1,
    ACTIONS(652), 2,
      anon_sym_GT,
      sym__S,
  [2846] = 2,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_PIPE,
  [2853] = 1,
    ACTIONS(654), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2858] = 2,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      sym__S,
  [2865] = 1,
    ACTIONS(660), 2,
      anon_sym_GT,
      sym__S,
  [2870] = 2,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
  [2877] = 2,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      sym_Nmtoken,
  [2884] = 2,
    ACTIONS(531), 1,
      anon_sym_GT,
    ACTIONS(670), 1,
      sym__S,
  [2891] = 1,
    ACTIONS(672), 2,
      anon_sym_GT,
      sym__S,
  [2896] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      anon_sym_PIPE,
  [2903] = 1,
    ACTIONS(486), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2908] = 1,
    ACTIONS(674), 2,
      anon_sym_GT,
      sym__S,
  [2913] = 2,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      sym__S,
  [2920] = 2,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(680), 1,
      anon_sym_NDATA,
  [2927] = 2,
    ACTIONS(682), 1,
      anon_sym_GT,
    ACTIONS(684), 1,
      sym__S,
  [2934] = 1,
    ACTIONS(686), 2,
      anon_sym_GT,
      sym__S,
  [2939] = 2,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
    ACTIONS(690), 1,
      anon_sym_SQUOTE,
  [2946] = 2,
    ACTIONS(692), 1,
      sym__S,
    ACTIONS(694), 1,
      sym_Nmtoken,
  [2953] = 1,
    ACTIONS(696), 2,
      anon_sym_GT,
      sym__S,
  [2958] = 2,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      anon_sym_PIPE,
  [2965] = 1,
    ACTIONS(698), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [2970] = 1,
    ACTIONS(700), 2,
      anon_sym_GT,
      sym__S,
  [2975] = 1,
    ACTIONS(702), 2,
      anon_sym_GT,
      sym__S,
  [2980] = 1,
    ACTIONS(704), 2,
      anon_sym_GT,
      sym__S,
  [2985] = 1,
    ACTIONS(706), 2,
      anon_sym_GT,
      sym__S,
  [2990] = 1,
    ACTIONS(708), 2,
      anon_sym_GT,
      sym__S,
  [2995] = 1,
    ACTIONS(710), 2,
      anon_sym_GT,
      sym__S,
  [3000] = 1,
    ACTIONS(712), 2,
      anon_sym_GT,
      sym__S,
  [3005] = 1,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
  [3009] = 1,
    ACTIONS(716), 1,
      sym__S,
  [3013] = 1,
    ACTIONS(718), 1,
      anon_sym_GT,
  [3017] = 1,
    ACTIONS(720), 1,
      sym_EncName,
  [3021] = 1,
    ACTIONS(722), 1,
      sym__S,
  [3025] = 1,
    ACTIONS(724), 1,
      sym_Name,
  [3029] = 1,
    ACTIONS(726), 1,
      anon_sym_EQ,
  [3033] = 1,
    ACTIONS(728), 1,
      aux_sym_CharRef_token1,
  [3037] = 1,
    ACTIONS(728), 1,
      aux_sym_CharRef_token2,
  [3041] = 1,
    ACTIONS(730), 1,
      sym__S,
  [3045] = 1,
    ACTIONS(676), 1,
      anon_sym_GT,
  [3049] = 1,
    ACTIONS(732), 1,
      anon_sym_GT,
  [3053] = 1,
    ACTIONS(734), 1,
      sym__S,
  [3057] = 1,
    ACTIONS(668), 1,
      sym_Nmtoken,
  [3061] = 1,
    ACTIONS(736), 1,
      anon_sym_STAR,
  [3065] = 1,
    ACTIONS(738), 1,
      sym_VersionNum,
  [3069] = 1,
    ACTIONS(740), 1,
      sym__S,
  [3073] = 1,
    ACTIONS(742), 1,
      sym__S,
  [3077] = 1,
    ACTIONS(744), 1,
      sym__S,
  [3081] = 1,
    ACTIONS(746), 1,
      sym__S,
  [3085] = 1,
    ACTIONS(748), 1,
      sym_VersionNum,
  [3089] = 1,
    ACTIONS(750), 1,
      anon_sym_SQUOTE,
  [3093] = 1,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
  [3097] = 1,
    ACTIONS(752), 1,
      sym__S,
  [3101] = 1,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
  [3105] = 1,
    ACTIONS(754), 1,
      anon_sym_SQUOTE,
  [3109] = 1,
    ACTIONS(756), 1,
      anon_sym_SQUOTE,
  [3113] = 1,
    ACTIONS(758), 1,
      sym_Nmtoken,
  [3117] = 1,
    ACTIONS(638), 1,
      anon_sym_PIPE,
  [3121] = 1,
    ACTIONS(760), 1,
      anon_sym_QMARK_GT,
  [3125] = 1,
    ACTIONS(762), 1,
      sym_Name,
  [3129] = 1,
    ACTIONS(764), 1,
      anon_sym_PIPE,
  [3133] = 1,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
  [3137] = 1,
    ACTIONS(766), 1,
      anon_sym_LBRACK,
  [3141] = 1,
    ACTIONS(768), 1,
      sym__S,
  [3145] = 1,
    ACTIONS(770), 1,
      anon_sym_GT,
  [3149] = 1,
    ACTIONS(772), 1,
      anon_sym_version,
  [3153] = 1,
    ACTIONS(774), 1,
      aux_sym_PI_token1,
  [3157] = 1,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
  [3161] = 1,
    ACTIONS(778), 1,
      sym__S,
  [3165] = 1,
    ACTIONS(780), 1,
      sym_Nmtoken,
  [3169] = 1,
    ACTIONS(782), 1,
      anon_sym_QMARK_GT,
  [3173] = 1,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [3177] = 1,
    ACTIONS(786), 1,
      sym__S,
  [3181] = 1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [3185] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [3189] = 1,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [3193] = 1,
    ACTIONS(560), 1,
      anon_sym_PIPE,
  [3197] = 1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3201] = 1,
    ACTIONS(570), 1,
      sym__S,
  [3205] = 1,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
  [3209] = 1,
    ACTIONS(790), 1,
      sym__S,
  [3213] = 1,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [3217] = 1,
    ACTIONS(794), 1,
      anon_sym_GT,
  [3221] = 1,
    ACTIONS(796), 1,
      sym_Name,
  [3225] = 1,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
  [3229] = 1,
    ACTIONS(566), 1,
      anon_sym_PIPE,
  [3233] = 1,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [3237] = 1,
    ACTIONS(537), 1,
      anon_sym_STAR,
  [3241] = 1,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
  [3245] = 1,
    ACTIONS(802), 1,
      sym_EncName,
  [3249] = 1,
    ACTIONS(804), 1,
      sym__S,
  [3253] = 1,
    ACTIONS(602), 1,
      sym_Name,
  [3257] = 1,
    ACTIONS(806), 1,
      sym__S,
  [3261] = 1,
    ACTIONS(808), 1,
      sym__S,
  [3265] = 1,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [3269] = 1,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [3273] = 1,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [3277] = 1,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [3281] = 1,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [3285] = 1,
    ACTIONS(820), 1,
      anon_sym_SEMI,
  [3289] = 1,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [3293] = 1,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [3297] = 1,
    ACTIONS(826), 1,
      sym_Name,
  [3301] = 1,
    ACTIONS(828), 1,
      sym_Name,
  [3305] = 1,
    ACTIONS(830), 1,
      aux_sym_CharRef_token1,
  [3309] = 1,
    ACTIONS(830), 1,
      aux_sym_CharRef_token2,
  [3313] = 1,
    ACTIONS(832), 1,
      sym_Name,
  [3317] = 1,
    ACTIONS(834), 1,
      sym_Name,
  [3321] = 1,
    ACTIONS(836), 1,
      aux_sym_CharRef_token1,
  [3325] = 1,
    ACTIONS(836), 1,
      aux_sym_CharRef_token2,
  [3329] = 1,
    ACTIONS(838), 1,
      sym_Name,
  [3333] = 1,
    ACTIONS(840), 1,
      aux_sym_CharRef_token1,
  [3337] = 1,
    ACTIONS(840), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 201,
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 301,
  [SMALL_STATE(9)] = 351,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 535,
  [SMALL_STATE(15)] = 549,
  [SMALL_STATE(16)] = 563,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 647,
  [SMALL_STATE(21)] = 661,
  [SMALL_STATE(22)] = 675,
  [SMALL_STATE(23)] = 689,
  [SMALL_STATE(24)] = 703,
  [SMALL_STATE(25)] = 717,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 773,
  [SMALL_STATE(30)] = 787,
  [SMALL_STATE(31)] = 801,
  [SMALL_STATE(32)] = 815,
  [SMALL_STATE(33)] = 829,
  [SMALL_STATE(34)] = 843,
  [SMALL_STATE(35)] = 871,
  [SMALL_STATE(36)] = 899,
  [SMALL_STATE(37)] = 913,
  [SMALL_STATE(38)] = 941,
  [SMALL_STATE(39)] = 969,
  [SMALL_STATE(40)] = 992,
  [SMALL_STATE(41)] = 1017,
  [SMALL_STATE(42)] = 1041,
  [SMALL_STATE(43)] = 1065,
  [SMALL_STATE(44)] = 1077,
  [SMALL_STATE(45)] = 1101,
  [SMALL_STATE(46)] = 1127,
  [SMALL_STATE(47)] = 1151,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1187,
  [SMALL_STATE(50)] = 1211,
  [SMALL_STATE(51)] = 1223,
  [SMALL_STATE(52)] = 1244,
  [SMALL_STATE(53)] = 1255,
  [SMALL_STATE(54)] = 1276,
  [SMALL_STATE(55)] = 1297,
  [SMALL_STATE(56)] = 1308,
  [SMALL_STATE(57)] = 1319,
  [SMALL_STATE(58)] = 1330,
  [SMALL_STATE(59)] = 1351,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1393,
  [SMALL_STATE(62)] = 1404,
  [SMALL_STATE(63)] = 1425,
  [SMALL_STATE(64)] = 1448,
  [SMALL_STATE(65)] = 1468,
  [SMALL_STATE(66)] = 1486,
  [SMALL_STATE(67)] = 1504,
  [SMALL_STATE(68)] = 1516,
  [SMALL_STATE(69)] = 1534,
  [SMALL_STATE(70)] = 1552,
  [SMALL_STATE(71)] = 1570,
  [SMALL_STATE(72)] = 1581,
  [SMALL_STATE(73)] = 1600,
  [SMALL_STATE(74)] = 1619,
  [SMALL_STATE(75)] = 1638,
  [SMALL_STATE(76)] = 1657,
  [SMALL_STATE(77)] = 1674,
  [SMALL_STATE(78)] = 1685,
  [SMALL_STATE(79)] = 1704,
  [SMALL_STATE(80)] = 1723,
  [SMALL_STATE(81)] = 1734,
  [SMALL_STATE(82)] = 1745,
  [SMALL_STATE(83)] = 1756,
  [SMALL_STATE(84)] = 1767,
  [SMALL_STATE(85)] = 1784,
  [SMALL_STATE(86)] = 1795,
  [SMALL_STATE(87)] = 1814,
  [SMALL_STATE(88)] = 1825,
  [SMALL_STATE(89)] = 1835,
  [SMALL_STATE(90)] = 1845,
  [SMALL_STATE(91)] = 1859,
  [SMALL_STATE(92)] = 1873,
  [SMALL_STATE(93)] = 1883,
  [SMALL_STATE(94)] = 1893,
  [SMALL_STATE(95)] = 1903,
  [SMALL_STATE(96)] = 1913,
  [SMALL_STATE(97)] = 1923,
  [SMALL_STATE(98)] = 1936,
  [SMALL_STATE(99)] = 1949,
  [SMALL_STATE(100)] = 1962,
  [SMALL_STATE(101)] = 1971,
  [SMALL_STATE(102)] = 1984,
  [SMALL_STATE(103)] = 1997,
  [SMALL_STATE(104)] = 2010,
  [SMALL_STATE(105)] = 2017,
  [SMALL_STATE(106)] = 2030,
  [SMALL_STATE(107)] = 2043,
  [SMALL_STATE(108)] = 2056,
  [SMALL_STATE(109)] = 2069,
  [SMALL_STATE(110)] = 2078,
  [SMALL_STATE(111)] = 2089,
  [SMALL_STATE(112)] = 2096,
  [SMALL_STATE(113)] = 2109,
  [SMALL_STATE(114)] = 2116,
  [SMALL_STATE(115)] = 2129,
  [SMALL_STATE(116)] = 2142,
  [SMALL_STATE(117)] = 2155,
  [SMALL_STATE(118)] = 2166,
  [SMALL_STATE(119)] = 2179,
  [SMALL_STATE(120)] = 2190,
  [SMALL_STATE(121)] = 2203,
  [SMALL_STATE(122)] = 2216,
  [SMALL_STATE(123)] = 2229,
  [SMALL_STATE(124)] = 2242,
  [SMALL_STATE(125)] = 2255,
  [SMALL_STATE(126)] = 2268,
  [SMALL_STATE(127)] = 2279,
  [SMALL_STATE(128)] = 2289,
  [SMALL_STATE(129)] = 2299,
  [SMALL_STATE(130)] = 2305,
  [SMALL_STATE(131)] = 2313,
  [SMALL_STATE(132)] = 2323,
  [SMALL_STATE(133)] = 2331,
  [SMALL_STATE(134)] = 2337,
  [SMALL_STATE(135)] = 2347,
  [SMALL_STATE(136)] = 2357,
  [SMALL_STATE(137)] = 2365,
  [SMALL_STATE(138)] = 2375,
  [SMALL_STATE(139)] = 2385,
  [SMALL_STATE(140)] = 2395,
  [SMALL_STATE(141)] = 2405,
  [SMALL_STATE(142)] = 2411,
  [SMALL_STATE(143)] = 2417,
  [SMALL_STATE(144)] = 2423,
  [SMALL_STATE(145)] = 2433,
  [SMALL_STATE(146)] = 2443,
  [SMALL_STATE(147)] = 2453,
  [SMALL_STATE(148)] = 2463,
  [SMALL_STATE(149)] = 2473,
  [SMALL_STATE(150)] = 2479,
  [SMALL_STATE(151)] = 2485,
  [SMALL_STATE(152)] = 2495,
  [SMALL_STATE(153)] = 2501,
  [SMALL_STATE(154)] = 2511,
  [SMALL_STATE(155)] = 2521,
  [SMALL_STATE(156)] = 2529,
  [SMALL_STATE(157)] = 2535,
  [SMALL_STATE(158)] = 2543,
  [SMALL_STATE(159)] = 2549,
  [SMALL_STATE(160)] = 2555,
  [SMALL_STATE(161)] = 2565,
  [SMALL_STATE(162)] = 2573,
  [SMALL_STATE(163)] = 2579,
  [SMALL_STATE(164)] = 2589,
  [SMALL_STATE(165)] = 2597,
  [SMALL_STATE(166)] = 2602,
  [SMALL_STATE(167)] = 2607,
  [SMALL_STATE(168)] = 2614,
  [SMALL_STATE(169)] = 2621,
  [SMALL_STATE(170)] = 2626,
  [SMALL_STATE(171)] = 2633,
  [SMALL_STATE(172)] = 2640,
  [SMALL_STATE(173)] = 2647,
  [SMALL_STATE(174)] = 2652,
  [SMALL_STATE(175)] = 2659,
  [SMALL_STATE(176)] = 2664,
  [SMALL_STATE(177)] = 2671,
  [SMALL_STATE(178)] = 2676,
  [SMALL_STATE(179)] = 2683,
  [SMALL_STATE(180)] = 2688,
  [SMALL_STATE(181)] = 2695,
  [SMALL_STATE(182)] = 2702,
  [SMALL_STATE(183)] = 2707,
  [SMALL_STATE(184)] = 2714,
  [SMALL_STATE(185)] = 2721,
  [SMALL_STATE(186)] = 2726,
  [SMALL_STATE(187)] = 2733,
  [SMALL_STATE(188)] = 2738,
  [SMALL_STATE(189)] = 2745,
  [SMALL_STATE(190)] = 2752,
  [SMALL_STATE(191)] = 2757,
  [SMALL_STATE(192)] = 2764,
  [SMALL_STATE(193)] = 2769,
  [SMALL_STATE(194)] = 2774,
  [SMALL_STATE(195)] = 2781,
  [SMALL_STATE(196)] = 2786,
  [SMALL_STATE(197)] = 2793,
  [SMALL_STATE(198)] = 2798,
  [SMALL_STATE(199)] = 2803,
  [SMALL_STATE(200)] = 2810,
  [SMALL_STATE(201)] = 2817,
  [SMALL_STATE(202)] = 2822,
  [SMALL_STATE(203)] = 2827,
  [SMALL_STATE(204)] = 2834,
  [SMALL_STATE(205)] = 2841,
  [SMALL_STATE(206)] = 2846,
  [SMALL_STATE(207)] = 2853,
  [SMALL_STATE(208)] = 2858,
  [SMALL_STATE(209)] = 2865,
  [SMALL_STATE(210)] = 2870,
  [SMALL_STATE(211)] = 2877,
  [SMALL_STATE(212)] = 2884,
  [SMALL_STATE(213)] = 2891,
  [SMALL_STATE(214)] = 2896,
  [SMALL_STATE(215)] = 2903,
  [SMALL_STATE(216)] = 2908,
  [SMALL_STATE(217)] = 2913,
  [SMALL_STATE(218)] = 2920,
  [SMALL_STATE(219)] = 2927,
  [SMALL_STATE(220)] = 2934,
  [SMALL_STATE(221)] = 2939,
  [SMALL_STATE(222)] = 2946,
  [SMALL_STATE(223)] = 2953,
  [SMALL_STATE(224)] = 2958,
  [SMALL_STATE(225)] = 2965,
  [SMALL_STATE(226)] = 2970,
  [SMALL_STATE(227)] = 2975,
  [SMALL_STATE(228)] = 2980,
  [SMALL_STATE(229)] = 2985,
  [SMALL_STATE(230)] = 2990,
  [SMALL_STATE(231)] = 2995,
  [SMALL_STATE(232)] = 3000,
  [SMALL_STATE(233)] = 3005,
  [SMALL_STATE(234)] = 3009,
  [SMALL_STATE(235)] = 3013,
  [SMALL_STATE(236)] = 3017,
  [SMALL_STATE(237)] = 3021,
  [SMALL_STATE(238)] = 3025,
  [SMALL_STATE(239)] = 3029,
  [SMALL_STATE(240)] = 3033,
  [SMALL_STATE(241)] = 3037,
  [SMALL_STATE(242)] = 3041,
  [SMALL_STATE(243)] = 3045,
  [SMALL_STATE(244)] = 3049,
  [SMALL_STATE(245)] = 3053,
  [SMALL_STATE(246)] = 3057,
  [SMALL_STATE(247)] = 3061,
  [SMALL_STATE(248)] = 3065,
  [SMALL_STATE(249)] = 3069,
  [SMALL_STATE(250)] = 3073,
  [SMALL_STATE(251)] = 3077,
  [SMALL_STATE(252)] = 3081,
  [SMALL_STATE(253)] = 3085,
  [SMALL_STATE(254)] = 3089,
  [SMALL_STATE(255)] = 3093,
  [SMALL_STATE(256)] = 3097,
  [SMALL_STATE(257)] = 3101,
  [SMALL_STATE(258)] = 3105,
  [SMALL_STATE(259)] = 3109,
  [SMALL_STATE(260)] = 3113,
  [SMALL_STATE(261)] = 3117,
  [SMALL_STATE(262)] = 3121,
  [SMALL_STATE(263)] = 3125,
  [SMALL_STATE(264)] = 3129,
  [SMALL_STATE(265)] = 3133,
  [SMALL_STATE(266)] = 3137,
  [SMALL_STATE(267)] = 3141,
  [SMALL_STATE(268)] = 3145,
  [SMALL_STATE(269)] = 3149,
  [SMALL_STATE(270)] = 3153,
  [SMALL_STATE(271)] = 3157,
  [SMALL_STATE(272)] = 3161,
  [SMALL_STATE(273)] = 3165,
  [SMALL_STATE(274)] = 3169,
  [SMALL_STATE(275)] = 3173,
  [SMALL_STATE(276)] = 3177,
  [SMALL_STATE(277)] = 3181,
  [SMALL_STATE(278)] = 3185,
  [SMALL_STATE(279)] = 3189,
  [SMALL_STATE(280)] = 3193,
  [SMALL_STATE(281)] = 3197,
  [SMALL_STATE(282)] = 3201,
  [SMALL_STATE(283)] = 3205,
  [SMALL_STATE(284)] = 3209,
  [SMALL_STATE(285)] = 3213,
  [SMALL_STATE(286)] = 3217,
  [SMALL_STATE(287)] = 3221,
  [SMALL_STATE(288)] = 3225,
  [SMALL_STATE(289)] = 3229,
  [SMALL_STATE(290)] = 3233,
  [SMALL_STATE(291)] = 3237,
  [SMALL_STATE(292)] = 3241,
  [SMALL_STATE(293)] = 3245,
  [SMALL_STATE(294)] = 3249,
  [SMALL_STATE(295)] = 3253,
  [SMALL_STATE(296)] = 3257,
  [SMALL_STATE(297)] = 3261,
  [SMALL_STATE(298)] = 3265,
  [SMALL_STATE(299)] = 3269,
  [SMALL_STATE(300)] = 3273,
  [SMALL_STATE(301)] = 3277,
  [SMALL_STATE(302)] = 3281,
  [SMALL_STATE(303)] = 3285,
  [SMALL_STATE(304)] = 3289,
  [SMALL_STATE(305)] = 3293,
  [SMALL_STATE(306)] = 3297,
  [SMALL_STATE(307)] = 3301,
  [SMALL_STATE(308)] = 3305,
  [SMALL_STATE(309)] = 3309,
  [SMALL_STATE(310)] = 3313,
  [SMALL_STATE(311)] = 3317,
  [SMALL_STATE(312)] = 3321,
  [SMALL_STATE(313)] = 3325,
  [SMALL_STATE(314)] = 3329,
  [SMALL_STATE(315)] = 3333,
  [SMALL_STATE(316)] = 3337,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(256),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(297),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(296),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(295),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(294),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(287),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(306),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(34),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(238),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(240),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(241),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(310),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(35),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(307),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(308),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(309),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(314),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(315),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(316),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(311),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(312),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(313),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(49),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(109),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(264),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(104),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(53),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(280),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(51),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(277),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(113),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(222),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(261),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(122),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(289),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(153),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(156),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(141),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(133),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [800] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
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
