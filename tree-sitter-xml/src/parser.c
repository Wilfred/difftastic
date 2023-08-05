#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 423
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

enum {
  sym_Name = 1,
  anon_sym_LT_BANGELEMENT = 2,
  anon_sym_GT = 3,
  anon_sym_EMPTY = 4,
  anon_sym_ANY = 5,
  anon_sym_LPAREN = 6,
  anon_sym_POUNDPCDATA = 7,
  anon_sym_PIPE = 8,
  anon_sym_RPAREN = 9,
  anon_sym_STAR = 10,
  anon_sym_COMMA = 11,
  anon_sym_LT_BANGATTLIST = 12,
  sym_StringType = 13,
  sym_TokenizedType = 14,
  anon_sym_NOTATION = 15,
  anon_sym_POUNDREQUIRED = 16,
  anon_sym_POUNDIMPLIED = 17,
  anon_sym_POUNDFIXED = 18,
  anon_sym_LT_BANGENTITY = 19,
  anon_sym_PERCENT = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_EntityValue_token1 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_EntityValue_token2 = 24,
  anon_sym_NDATA = 25,
  anon_sym_LT_BANGNOTATION = 26,
  anon_sym_SEMI = 27,
  anon_sym_QMARK = 28,
  anon_sym_PLUS = 29,
  sym__Char = 30,
  sym__S = 31,
  sym_Nmtoken = 32,
  anon_sym_AMP = 33,
  anon_sym_AMP_POUND = 34,
  aux_sym_CharRef_token1 = 35,
  anon_sym_AMP_POUNDx = 36,
  aux_sym_CharRef_token2 = 37,
  aux_sym_AttValue_token1 = 38,
  aux_sym_AttValue_token2 = 39,
  anon_sym_SYSTEM = 40,
  anon_sym_PUBLIC = 41,
  aux_sym_SystemLiteral_token1 = 42,
  aux_sym_SystemLiteral_token2 = 43,
  aux_sym_PubidLiteral_token1 = 44,
  aux_sym_PubidLiteral_token2 = 45,
  anon_sym_LT_QMARK = 46,
  aux_sym_PI_token1 = 47,
  anon_sym_QMARK_GT = 48,
  sym_Comment = 49,
  anon_sym_LT_QMARKxml = 50,
  anon_sym_version = 51,
  sym_VersionNum = 52,
  anon_sym_encoding = 53,
  sym_EncName = 54,
  anon_sym_standalone = 55,
  anon_sym_yes = 56,
  anon_sym_no = 57,
  anon_sym_LT_BANGDOCTYPE = 58,
  anon_sym_LBRACK = 59,
  anon_sym_RBRACK = 60,
  anon_sym_LT = 61,
  anon_sym_SLASH_GT = 62,
  anon_sym_LT_SLASH = 63,
  sym_CharData = 64,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 65,
  anon_sym_RBRACK_RBRACK_GT = 66,
  sym_CData = 67,
  anon_sym_EQ = 68,
  sym_document = 69,
  sym__markupdecl = 70,
  sym__DeclSep = 71,
  sym_elementdecl = 72,
  sym_contentspec = 73,
  sym_Mixed = 74,
  sym_children = 75,
  sym__cp = 76,
  sym__choice = 77,
  sym__seq = 78,
  sym_AttlistDecl = 79,
  sym_AttDef = 80,
  sym__AttType = 81,
  sym__EnumeratedType = 82,
  sym_NotationType = 83,
  sym_Enumeration = 84,
  sym_DefaultDecl = 85,
  sym__EntityDecl = 86,
  sym_GEDecl = 87,
  sym_PEDecl = 88,
  sym_EntityValue = 89,
  sym_NDataDecl = 90,
  sym_NotationDecl = 91,
  sym_PEReference = 92,
  sym__Reference = 93,
  sym_EntityRef = 94,
  sym_CharRef = 95,
  sym_AttValue = 96,
  sym_ExternalID = 97,
  sym_PublicID = 98,
  sym_SystemLiteral = 99,
  sym_PubidLiteral = 100,
  sym_PI = 101,
  sym_prolog = 102,
  sym__Misc = 103,
  sym_XMLDecl = 104,
  sym__VersionInfo = 105,
  sym__EncodingDecl = 106,
  sym__SDDecl = 107,
  sym_doctypedecl = 108,
  aux_sym__intSubset = 109,
  sym_element = 110,
  sym_EmptyElemTag = 111,
  sym_Attribute = 112,
  sym_STag = 113,
  sym_ETag = 114,
  sym_content = 115,
  sym_CDSect = 116,
  sym__Eq = 117,
  aux_sym_document_repeat1 = 118,
  aux_sym_Mixed_repeat1 = 119,
  aux_sym__choice_repeat1 = 120,
  aux_sym__seq_repeat1 = 121,
  aux_sym_AttlistDecl_repeat1 = 122,
  aux_sym_NotationType_repeat1 = 123,
  aux_sym_Enumeration_repeat1 = 124,
  aux_sym_EntityValue_repeat1 = 125,
  aux_sym_EntityValue_repeat2 = 126,
  aux_sym_AttValue_repeat1 = 127,
  aux_sym_AttValue_repeat2 = 128,
  aux_sym_EmptyElemTag_repeat1 = 129,
  aux_sym_content_repeat1 = 130,
  alias_sym_PITarget = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
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
  [aux_sym_PI_token1] = "PI_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [sym_Comment] = "Comment",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_version] = "version",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_LT_BANGDOCTYPE] = "<!DOCTYPE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "<![CDATA[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [sym_CData] = "CData",
  [anon_sym_EQ] = "=",
  [sym_document] = "document",
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
  [sym_PI] = "PI",
  [sym_prolog] = "prolog",
  [sym__Misc] = "_Misc",
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym__SDDecl] = "_SDDecl",
  [sym_doctypedecl] = "doctypedecl",
  [aux_sym__intSubset] = "_intSubset",
  [sym_element] = "element",
  [sym_EmptyElemTag] = "EmptyElemTag",
  [sym_Attribute] = "Attribute",
  [sym_STag] = "STag",
  [sym_ETag] = "ETag",
  [sym_content] = "content",
  [sym_CDSect] = "CDSect",
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
  [aux_sym_EmptyElemTag_repeat1] = "EmptyElemTag_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_PITarget] = "PITarget",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
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
  [aux_sym_PI_token1] = aux_sym_PI_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym_Comment] = sym_Comment,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_version] = anon_sym_version,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_LT_BANGDOCTYPE] = anon_sym_LT_BANGDOCTYPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CharData] = sym_CharData,
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [sym_CData] = sym_CData,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_document] = sym_document,
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
  [sym_PI] = sym_PI,
  [sym_prolog] = sym_prolog,
  [sym__Misc] = sym__Misc,
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym__SDDecl] = sym__SDDecl,
  [sym_doctypedecl] = sym_doctypedecl,
  [aux_sym__intSubset] = aux_sym__intSubset,
  [sym_element] = sym_element,
  [sym_EmptyElemTag] = sym_EmptyElemTag,
  [sym_Attribute] = sym_Attribute,
  [sym_STag] = sym_STag,
  [sym_ETag] = sym_ETag,
  [sym_content] = sym_content,
  [sym_CDSect] = sym_CDSect,
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
  [aux_sym_EmptyElemTag_repeat1] = aux_sym_EmptyElemTag_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
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
  [aux_sym_PI_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARKxml] = {
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
  [anon_sym_standalone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGDOCTYPE] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_CharData] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_CData] = {
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
  [sym_PI] = {
    .visible = true,
    .named = true,
  },
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym__Misc] = {
    .visible = false,
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
  [sym__SDDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_doctypedecl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__intSubset] = {
    .visible = false,
    .named = false,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_EmptyElemTag] = {
    .visible = true,
    .named = true,
  },
  [sym_Attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_STag] = {
    .visible = true,
    .named = true,
  },
  [sym_ETag] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_CDSect] = {
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
  [aux_sym_EmptyElemTag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
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
  field_root = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_root] = "root",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_root, 0},
  [1] =
    {field_root, 1},
  [2] =
    {field_root, 2},
  [3] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
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
  [3] = 2,
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
  [78] = 36,
  [79] = 79,
  [80] = 49,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 34,
  [87] = 38,
  [88] = 88,
  [89] = 31,
  [90] = 34,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 38,
  [95] = 31,
  [96] = 96,
  [97] = 97,
  [98] = 10,
  [99] = 10,
  [100] = 100,
  [101] = 101,
  [102] = 38,
  [103] = 34,
  [104] = 104,
  [105] = 31,
  [106] = 38,
  [107] = 34,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 31,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 43,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 117,
  [125] = 125,
  [126] = 30,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 40,
  [131] = 131,
  [132] = 122,
  [133] = 133,
  [134] = 134,
  [135] = 37,
  [136] = 136,
  [137] = 32,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 120,
  [143] = 143,
  [144] = 144,
  [145] = 35,
  [146] = 146,
  [147] = 147,
  [148] = 118,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 50,
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
  [168] = 33,
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
  [256] = 243,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 237,
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
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 230,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 331,
  [392] = 323,
  [393] = 393,
  [394] = 342,
  [395] = 395,
  [396] = 390,
  [397] = 333,
  [398] = 331,
  [399] = 323,
  [400] = 333,
  [401] = 331,
  [402] = 323,
  [403] = 331,
  [404] = 323,
  [405] = 358,
  [406] = 383,
  [407] = 373,
  [408] = 372,
  [409] = 371,
  [410] = 370,
  [411] = 366,
  [412] = 389,
  [413] = 373,
  [414] = 372,
  [415] = 371,
  [416] = 389,
  [417] = 373,
  [418] = 372,
  [419] = 371,
  [420] = 373,
  [421] = 372,
  [422] = 371,
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
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == ';') ADVANCE(118);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(119);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(155);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(113);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(105);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(105);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == ';') ADVANCE(118);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(119);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == '[') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '[') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'P') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'Q') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == 'U') ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == 'X') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == '[') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(146);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(119);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(115);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(163);
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
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
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(17);
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
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'Y') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(32);
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
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'Y') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'K') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'Y') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 162},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 88},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 162},
  [31] = {.lex_state = 162},
  [32] = {.lex_state = 162},
  [33] = {.lex_state = 162},
  [34] = {.lex_state = 162},
  [35] = {.lex_state = 162},
  [36] = {.lex_state = 162},
  [37] = {.lex_state = 162},
  [38] = {.lex_state = 162},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 162},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 162},
  [43] = {.lex_state = 162},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 88},
  [47] = {.lex_state = 162},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 87},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 87},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 87},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 87},
  [74] = {.lex_state = 87},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 88},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 87},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 88},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 88},
  [109] = {.lex_state = 88},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 88},
  [115] = {.lex_state = 87},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 88},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 87},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 88},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 87},
  [131] = {.lex_state = 88},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 88},
  [135] = {.lex_state = 87},
  [136] = {.lex_state = 88},
  [137] = {.lex_state = 87},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 87},
  [146] = {.lex_state = 88},
  [147] = {.lex_state = 88},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 88},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 87},
  [155] = {.lex_state = 88},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 88},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 87},
  [169] = {.lex_state = 88},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 88},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 88},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 88},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 81},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 88},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 88},
  [257] = {.lex_state = 88},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 88},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 136},
  [265] = {.lex_state = 88},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 138},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 140},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 142},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 88},
  [298] = {.lex_state = 81},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 88},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 81},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 168},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 2},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 81},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 81},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 88},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 84},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 81},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 146},
  [367] = {.lex_state = 88},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 2},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 83},
  [372] = {.lex_state = 87},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 84},
  [381] = {.lex_state = 88},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 88},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 2},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 2},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 87},
  [409] = {.lex_state = 83},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 146},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 87},
  [415] = {.lex_state = 83},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 2},
  [418] = {.lex_state = 87},
  [419] = {.lex_state = 83},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 87},
  [422] = {.lex_state = 83},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
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
    [sym_Comment] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(382),
    [sym_PI] = STATE(17),
    [sym_prolog] = STATE(27),
    [sym__Misc] = STATE(17),
    [sym_XMLDecl] = STATE(46),
    [sym_doctypedecl] = STATE(123),
    [sym_element] = STATE(73),
    [sym_EmptyElemTag] = STATE(130),
    [sym_STag] = STATE(3),
    [aux_sym_document_repeat1] = STATE(17),
    [sym__S] = ACTIONS(3),
    [anon_sym_LT_QMARK] = ACTIONS(5),
    [sym_Comment] = ACTIONS(3),
    [anon_sym_LT_QMARKxml] = ACTIONS(7),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_AMP_POUND,
    ACTIONS(17), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      sym_Comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_CharData,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(2), 1,
      sym_STag,
    STATE(37), 1,
      sym_ETag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(237), 1,
      sym_content,
    STATE(31), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [51] = 15,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_AMP_POUND,
    ACTIONS(17), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      sym_Comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_CharData,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_STag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(135), 1,
      sym_ETag,
    STATE(260), 1,
      sym_content,
    STATE(31), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [102] = 13,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      anon_sym_AMP_POUND,
    ACTIONS(17), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(33), 1,
      sym_Comment,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym_CharData,
    STATE(2), 1,
      sym_STag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(31), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [147] = 13,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(42), 1,
      anon_sym_AMP_POUND,
    ACTIONS(45), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(48), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      sym_Comment,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      sym_CharData,
    ACTIONS(62), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(2), 1,
      sym_STag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(31), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [192] = 12,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [234] = 12,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [276] = 12,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [318] = 12,
    ACTIONS(85), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(91), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(94), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(97), 1,
      sym__S,
    ACTIONS(100), 1,
      anon_sym_LT_QMARK,
    ACTIONS(103), 1,
      sym_Comment,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [360] = 1,
    ACTIONS(108), 17,
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
      anon_sym_RBRACK,
  [380] = 12,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [422] = 11,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [461] = 11,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [500] = 11,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [539] = 11,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [578] = 9,
    ACTIONS(65), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(67), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(71), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(121), 1,
      sym__markupdecl,
    STATE(311), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(301), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [611] = 9,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(75), 1,
      sym_element,
    STATE(130), 1,
      sym_EmptyElemTag,
    STATE(134), 1,
      sym_doctypedecl,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [642] = 8,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(120), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_AMP_POUND,
    ACTIONS(124), 1,
      anon_sym_AMP_POUNDx,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(20), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [670] = 8,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_PERCENT,
    ACTIONS(128), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(134), 1,
      anon_sym_AMP_POUNDx,
    STATE(95), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [698] = 8,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_AMP_POUND,
    ACTIONS(124), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      aux_sym_EntityValue_token2,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [726] = 8,
    ACTIONS(126), 1,
      anon_sym_PERCENT,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(134), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_EntityValue_token1,
    STATE(95), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [754] = 8,
    ACTIONS(142), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(150), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_AMP_POUND,
    ACTIONS(156), 1,
      anon_sym_AMP_POUNDx,
    STATE(89), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [782] = 8,
    ACTIONS(159), 1,
      anon_sym_PERCENT,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(167), 1,
      anon_sym_AMP,
    ACTIONS(170), 1,
      anon_sym_AMP_POUND,
    ACTIONS(173), 1,
      anon_sym_AMP_POUNDx,
    STATE(95), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [810] = 7,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_NOTATION,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    STATE(252), 1,
      sym__AttType,
    ACTIONS(178), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(250), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(253), 2,
      sym_NotationType,
      sym_Enumeration,
  [835] = 7,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(83), 1,
      sym_element,
    STATE(130), 1,
      sym_EmptyElemTag,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [860] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_contentspec,
    ACTIONS(184), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(113), 2,
      sym__choice,
      sym__seq,
    STATE(282), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [883] = 7,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(75), 1,
      sym_element,
    STATE(130), 1,
      sym_EmptyElemTag,
    ACTIONS(188), 2,
      sym__S,
      sym_Comment,
    STATE(25), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [908] = 5,
    ACTIONS(195), 1,
      anon_sym_LT_QMARK,
    ACTIONS(198), 1,
      anon_sym_LT,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(192), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [928] = 7,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_AMP_POUND,
    ACTIONS(208), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(211), 1,
      aux_sym_AttValue_token2,
    STATE(29), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(105), 2,
      sym_EntityRef,
      sym_CharRef,
  [952] = 2,
    ACTIONS(214), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(216), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [966] = 2,
    ACTIONS(218), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(220), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [980] = 2,
    ACTIONS(222), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(224), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [994] = 2,
    ACTIONS(226), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(228), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1008] = 2,
    ACTIONS(230), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(232), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1022] = 2,
    ACTIONS(234), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(236), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1036] = 2,
    ACTIONS(238), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(240), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1050] = 2,
    ACTIONS(242), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(244), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1064] = 2,
    ACTIONS(246), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(248), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1078] = 7,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(255), 1,
      anon_sym_AMP_POUND,
    ACTIONS(258), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(261), 1,
      aux_sym_AttValue_token1,
    STATE(39), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1102] = 2,
    ACTIONS(264), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(266), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1116] = 7,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      anon_sym_AMP_POUND,
    ACTIONS(274), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(276), 1,
      aux_sym_AttValue_token1,
    STATE(39), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1140] = 2,
    ACTIONS(278), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(280), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1154] = 2,
    ACTIONS(282), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(284), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1168] = 8,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(292), 1,
      sym__S,
    STATE(54), 1,
      sym_PEReference,
    STATE(100), 1,
      sym__cp,
    STATE(70), 2,
      sym__choice,
      sym__seq,
  [1194] = 7,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_AMP,
    ACTIONS(296), 1,
      anon_sym_AMP_POUND,
    ACTIONS(298), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(300), 1,
      aux_sym_AttValue_token2,
    STATE(29), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(105), 2,
      sym_EntityRef,
      sym_CharRef,
  [1218] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(304), 1,
      anon_sym_LT,
    STATE(134), 1,
      sym_doctypedecl,
    ACTIONS(302), 2,
      sym__S,
      sym_Comment,
    STATE(69), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1240] = 2,
    ACTIONS(306), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(308), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1254] = 7,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      anon_sym_AMP_POUND,
    ACTIONS(274), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_AttValue_token1,
    STATE(41), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1278] = 2,
    ACTIONS(314), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(316), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1292] = 2,
    ACTIONS(318), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(320), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1306] = 7,
    ACTIONS(294), 1,
      anon_sym_AMP,
    ACTIONS(296), 1,
      anon_sym_AMP_POUND,
    ACTIONS(298), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      aux_sym_AttValue_token2,
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(105), 2,
      sym_EntityRef,
      sym_CharRef,
  [1330] = 2,
    ACTIONS(324), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(326), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1344] = 2,
    ACTIONS(328), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(330), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1358] = 6,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      sym__S,
    STATE(127), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(336), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1379] = 1,
    ACTIONS(342), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1390] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym__S,
    STATE(176), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1411] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym__S,
    STATE(175), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1432] = 1,
    ACTIONS(106), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1443] = 1,
    ACTIONS(348), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1454] = 1,
    ACTIONS(350), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1465] = 1,
    ACTIONS(352), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1476] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__S,
    STATE(190), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1497] = 1,
    ACTIONS(356), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1508] = 1,
    ACTIONS(358), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1519] = 7,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_POUNDPCDATA,
    STATE(67), 1,
      sym_PEReference,
    STATE(93), 1,
      sym__cp,
    STATE(70), 2,
      sym__choice,
      sym__seq,
  [1542] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym__S,
    STATE(193), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1563] = 6,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      sym__S,
    STATE(156), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(336), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1584] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      sym__S,
    STATE(100), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1605] = 5,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    STATE(151), 1,
      sym_doctypedecl,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1624] = 2,
    ACTIONS(336), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(338), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1636] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1654] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1672] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 2,
      sym__S,
      sym_Comment,
    STATE(77), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1688] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1704] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 2,
      sym__S,
      sym_Comment,
    STATE(84), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1720] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1738] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1754] = 2,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1766] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1784] = 2,
    ACTIONS(314), 1,
      anon_sym_LT,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1796] = 6,
    ACTIONS(384), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_AttValue,
    STATE(313), 1,
      sym_DefaultDecl,
    ACTIONS(382), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1816] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(286), 1,
      sym_Name,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__cp,
    STATE(70), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1834] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 2,
      sym__S,
      sym_Comment,
    STATE(74), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1850] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      sym__S,
      sym_Comment,
    STATE(28), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1866] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(396), 1,
      sym_Name,
    ACTIONS(398), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      sym__S,
    STATE(112), 1,
      aux_sym_NotationType_repeat1,
    STATE(275), 1,
      sym_PEReference,
  [1885] = 2,
    ACTIONS(230), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1896] = 2,
    ACTIONS(246), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(248), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1907] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      sym__S,
    ACTIONS(402), 1,
      sym_Name,
    STATE(92), 1,
      aux_sym_NotationType_repeat1,
    STATE(290), 1,
      sym_PEReference,
  [1926] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1937] = 2,
    ACTIONS(230), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1948] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      sym__S,
    ACTIONS(404), 1,
      sym_Name,
    STATE(85), 1,
      aux_sym_NotationType_repeat1,
    STATE(285), 1,
      sym_PEReference,
  [1967] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      sym__S,
    ACTIONS(404), 1,
      sym_Name,
    STATE(112), 1,
      aux_sym_NotationType_repeat1,
    STATE(285), 1,
      sym_PEReference,
  [1986] = 6,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      sym__S,
    STATE(157), 1,
      aux_sym__choice_repeat1,
    STATE(162), 1,
      aux_sym__seq_repeat1,
  [2005] = 2,
    ACTIONS(246), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(248), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2016] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2027] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(414), 1,
      anon_sym_SYSTEM,
    ACTIONS(416), 1,
      anon_sym_PUBLIC,
    STATE(386), 1,
      sym_PEReference,
    STATE(267), 2,
      sym_ExternalID,
      sym_PublicID,
  [2044] = 6,
    ACTIONS(414), 1,
      anon_sym_SYSTEM,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_PUBLIC,
    STATE(202), 1,
      sym_ExternalID,
    STATE(273), 1,
      sym_EntityValue,
  [2063] = 2,
    ACTIONS(424), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(108), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2074] = 2,
    ACTIONS(424), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(108), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2085] = 6,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      sym__S,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym__choice_repeat1,
    STATE(141), 1,
      aux_sym__seq_repeat1,
  [2104] = 5,
    ACTIONS(414), 1,
      anon_sym_SYSTEM,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_PUBLIC,
    STATE(254), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2121] = 2,
    ACTIONS(246), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(248), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2131] = 2,
    ACTIONS(230), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2141] = 2,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(428), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2151] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2161] = 2,
    ACTIONS(246), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(248), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2171] = 2,
    ACTIONS(230), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2181] = 2,
    ACTIONS(434), 1,
      anon_sym_LT,
    ACTIONS(432), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2191] = 2,
    ACTIONS(438), 1,
      anon_sym_LT,
    ACTIONS(436), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2201] = 5,
    ACTIONS(414), 1,
      anon_sym_SYSTEM,
    ACTIONS(422), 1,
      anon_sym_PUBLIC,
    ACTIONS(440), 1,
      anon_sym_GT,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_ExternalID,
  [2217] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2227] = 4,
    ACTIONS(446), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      sym__S,
    STATE(112), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(444), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2241] = 2,
    ACTIONS(452), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(454), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2251] = 2,
    ACTIONS(458), 1,
      anon_sym_LT,
    ACTIONS(456), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2261] = 1,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2268] = 4,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      sym__S,
    STATE(158), 1,
      aux_sym_Enumeration_repeat1,
  [2281] = 4,
    ACTIONS(466), 1,
      sym_Name,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(470), 1,
      anon_sym_SLASH_GT,
    STATE(226), 1,
      sym_Attribute,
  [2294] = 4,
    ACTIONS(472), 1,
      anon_sym_GT,
    ACTIONS(474), 1,
      sym__S,
    ACTIONS(476), 1,
      anon_sym_SLASH_GT,
    STATE(133), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2307] = 2,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(478), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2316] = 4,
    ACTIONS(466), 1,
      sym_Name,
    ACTIONS(472), 1,
      anon_sym_GT,
    ACTIONS(476), 1,
      anon_sym_SLASH_GT,
    STATE(226), 1,
      sym_Attribute,
  [2329] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(482), 1,
      sym__S,
    STATE(60), 2,
      sym__DeclSep,
      sym_PEReference,
  [2340] = 4,
    ACTIONS(484), 1,
      anon_sym_GT,
    ACTIONS(486), 1,
      sym__S,
    ACTIONS(488), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2353] = 2,
    ACTIONS(304), 1,
      anon_sym_LT,
    ACTIONS(490), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2362] = 4,
    ACTIONS(466), 1,
      sym_Name,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
    STATE(226), 1,
      sym_Attribute,
  [2375] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      sym__S,
    STATE(156), 1,
      aux_sym_Mixed_repeat1,
  [2388] = 1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2395] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 1,
      sym__S,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
  [2408] = 2,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(498), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2417] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(502), 1,
      sym_Name,
    ACTIONS(504), 1,
      sym__S,
    STATE(205), 1,
      sym_PEReference,
  [2430] = 1,
    ACTIONS(266), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2437] = 4,
    ACTIONS(506), 1,
      sym__S,
    ACTIONS(508), 1,
      anon_sym_QMARK_GT,
    STATE(210), 1,
      sym__EncodingDecl,
    STATE(265), 1,
      sym__SDDecl,
  [2450] = 4,
    ACTIONS(484), 1,
      anon_sym_GT,
    ACTIONS(510), 1,
      sym__S,
    ACTIONS(512), 1,
      anon_sym_SLASH_GT,
    STATE(148), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2463] = 3,
    ACTIONS(516), 1,
      sym__S,
    STATE(133), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(514), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2474] = 2,
    ACTIONS(521), 1,
      anon_sym_LT,
    ACTIONS(519), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2483] = 1,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2490] = 2,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(523), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2499] = 1,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2506] = 4,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      sym__S,
    STATE(163), 1,
      aux_sym__choice_repeat1,
  [2519] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym__S,
    STATE(127), 1,
      aux_sym_Mixed_repeat1,
  [2532] = 1,
    ACTIONS(531), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2539] = 4,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      sym__S,
    STATE(165), 1,
      aux_sym__seq_repeat1,
  [2552] = 4,
    ACTIONS(466), 1,
      sym_Name,
    ACTIONS(472), 1,
      anon_sym_GT,
    ACTIONS(535), 1,
      anon_sym_SLASH_GT,
    STATE(226), 1,
      sym_Attribute,
  [2565] = 2,
    ACTIONS(537), 1,
      sym__S,
    ACTIONS(444), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2574] = 1,
    ACTIONS(444), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2581] = 1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2588] = 2,
    ACTIONS(542), 1,
      anon_sym_LT,
    ACTIONS(540), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2597] = 2,
    ACTIONS(546), 1,
      anon_sym_LT,
    ACTIONS(544), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2606] = 4,
    ACTIONS(472), 1,
      anon_sym_GT,
    ACTIONS(535), 1,
      anon_sym_SLASH_GT,
    ACTIONS(548), 1,
      sym__S,
    STATE(133), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2619] = 2,
    ACTIONS(552), 1,
      sym__S,
    ACTIONS(550), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2628] = 3,
    ACTIONS(555), 1,
      anon_sym_GT,
    ACTIONS(557), 1,
      sym__S,
    STATE(172), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2639] = 2,
    ACTIONS(561), 1,
      anon_sym_LT,
    ACTIONS(559), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2648] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(563), 1,
      sym_Name,
    ACTIONS(565), 1,
      sym__S,
    STATE(180), 1,
      sym_PEReference,
  [2661] = 4,
    ACTIONS(567), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      sym__S,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
  [2674] = 1,
    ACTIONS(320), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2681] = 2,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(575), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2690] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      sym__S,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
  [2703] = 4,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(529), 1,
      sym__S,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym__choice_repeat1,
  [2716] = 4,
    ACTIONS(583), 1,
      anon_sym_PIPE,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      sym__S,
    STATE(158), 1,
      aux_sym_Enumeration_repeat1,
  [2729] = 3,
    ACTIONS(591), 1,
      anon_sym_GT,
    ACTIONS(593), 1,
      sym__S,
    STATE(159), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2740] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(596), 1,
      sym_Name,
    ACTIONS(598), 1,
      anon_sym_GT,
    STATE(356), 1,
      sym_PEReference,
  [2753] = 4,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      sym__S,
    STATE(158), 1,
      aux_sym_Enumeration_repeat1,
  [2766] = 4,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      sym__S,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym__seq_repeat1,
  [2779] = 4,
    ACTIONS(606), 1,
      anon_sym_PIPE,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(611), 1,
      sym__S,
    STATE(163), 1,
      aux_sym__choice_repeat1,
  [2792] = 2,
    ACTIONS(616), 1,
      anon_sym_LT,
    ACTIONS(614), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2801] = 4,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      sym__S,
    STATE(165), 1,
      aux_sym__seq_repeat1,
  [2814] = 4,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      sym__S,
    STATE(116), 1,
      aux_sym_Enumeration_repeat1,
  [2827] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(630), 1,
      sym_Name,
    ACTIONS(632), 1,
      sym__S,
    STATE(88), 1,
      sym_PEReference,
  [2840] = 1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2847] = 2,
    ACTIONS(636), 1,
      anon_sym_LT,
    ACTIONS(634), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2856] = 1,
    ACTIONS(638), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2863] = 4,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_Enumeration_repeat1,
  [2876] = 3,
    ACTIONS(640), 1,
      anon_sym_GT,
    ACTIONS(642), 1,
      sym__S,
    STATE(159), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2887] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(644), 1,
      sym__S,
    STATE(58), 2,
      sym__DeclSep,
      sym_PEReference,
  [2898] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(596), 1,
      sym_Name,
    ACTIONS(640), 1,
      anon_sym_GT,
    STATE(356), 1,
      sym_PEReference,
  [2911] = 1,
    ACTIONS(646), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2917] = 1,
    ACTIONS(648), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2923] = 3,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_SystemLiteral,
  [2933] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(654), 1,
      sym_Name,
    STATE(185), 1,
      sym_PEReference,
  [2943] = 1,
    ACTIONS(656), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2949] = 2,
    ACTIONS(658), 1,
      sym__S,
    ACTIONS(656), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2957] = 1,
    ACTIONS(661), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [2963] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(663), 1,
      sym_Name,
    STATE(315), 1,
      sym_PEReference,
  [2973] = 1,
    ACTIONS(665), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2979] = 1,
    ACTIONS(667), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2985] = 2,
    ACTIONS(669), 1,
      sym__S,
    ACTIONS(665), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2993] = 1,
    ACTIONS(672), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2999] = 1,
    ACTIONS(674), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3005] = 1,
    ACTIONS(676), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3011] = 2,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(678), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3019] = 1,
    ACTIONS(618), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3025] = 3,
    ACTIONS(682), 1,
      anon_sym_GT,
    ACTIONS(684), 1,
      sym__S,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
  [3035] = 3,
    ACTIONS(688), 1,
      sym__S,
    ACTIONS(690), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym__Eq,
  [3045] = 1,
    ACTIONS(609), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3051] = 3,
    ACTIONS(688), 1,
      sym__S,
    ACTIONS(690), 1,
      anon_sym_EQ,
    STATE(247), 1,
      sym__Eq,
  [3061] = 1,
    ACTIONS(692), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [3067] = 1,
    ACTIONS(586), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3073] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(216), 1,
      sym_AttValue,
  [3083] = 1,
    ACTIONS(694), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3089] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(696), 1,
      sym_Name,
    STATE(91), 1,
      sym_PEReference,
  [3099] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym_AttValue,
  [3109] = 2,
    ACTIONS(700), 1,
      anon_sym_STAR,
    ACTIONS(698), 2,
      anon_sym_GT,
      sym__S,
  [3117] = 3,
    ACTIONS(702), 1,
      anon_sym_GT,
    ACTIONS(704), 1,
      sym__S,
    STATE(241), 1,
      sym_NDataDecl,
  [3127] = 1,
    ACTIONS(706), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3133] = 1,
    ACTIONS(708), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3139] = 2,
    ACTIONS(710), 1,
      sym__S,
    ACTIONS(570), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3147] = 1,
    ACTIONS(713), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3153] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(563), 1,
      sym_Name,
    STATE(180), 1,
      sym_PEReference,
  [3163] = 1,
    ACTIONS(715), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [3169] = 3,
    ACTIONS(717), 1,
      anon_sym_GT,
    ACTIONS(719), 1,
      sym__S,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
  [3179] = 3,
    ACTIONS(723), 1,
      sym__S,
    ACTIONS(725), 1,
      anon_sym_QMARK_GT,
    STATE(257), 1,
      sym__SDDecl,
  [3189] = 3,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
    STATE(261), 1,
      sym_PubidLiteral,
  [3199] = 3,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      sym_PubidLiteral,
  [3209] = 3,
    ACTIONS(725), 1,
      anon_sym_QMARK_GT,
    ACTIONS(731), 1,
      anon_sym_encoding,
    ACTIONS(733), 1,
      anon_sym_standalone,
  [3219] = 3,
    ACTIONS(688), 1,
      sym__S,
    ACTIONS(690), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym__Eq,
  [3229] = 3,
    ACTIONS(688), 1,
      sym__S,
    ACTIONS(690), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym__Eq,
  [3239] = 1,
    ACTIONS(735), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3245] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(737), 1,
      sym_Name,
    STATE(336), 1,
      sym_PEReference,
  [3255] = 2,
    ACTIONS(741), 1,
      anon_sym_STAR,
    ACTIONS(739), 2,
      anon_sym_GT,
      sym__S,
  [3263] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(596), 1,
      sym_Name,
    STATE(356), 1,
      sym_PEReference,
  [3273] = 2,
    ACTIONS(745), 1,
      sym__S,
    ACTIONS(743), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3281] = 3,
    ACTIONS(747), 1,
      sym_Name,
    ACTIONS(749), 1,
      anon_sym_PERCENT,
    STATE(339), 1,
      sym_PEReference,
  [3291] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(751), 1,
      sym_Name,
    STATE(150), 1,
      sym_PEReference,
  [3301] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(753), 1,
      sym_Name,
    STATE(343), 1,
      sym_PEReference,
  [3311] = 3,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
    STATE(350), 1,
      sym_PubidLiteral,
  [3321] = 3,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym_SystemLiteral,
  [3331] = 1,
    ACTIONS(514), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3337] = 1,
    ACTIONS(755), 2,
      anon_sym_GT,
      sym__S,
  [3342] = 1,
    ACTIONS(757), 2,
      anon_sym_GT,
      sym__S,
  [3347] = 1,
    ACTIONS(759), 2,
      anon_sym_yes,
      anon_sym_no,
  [3352] = 2,
    ACTIONS(761), 1,
      anon_sym_GT,
    ACTIONS(763), 1,
      sym__S,
  [3359] = 1,
    ACTIONS(765), 2,
      anon_sym_PERCENT,
      sym__S,
  [3364] = 2,
    ACTIONS(767), 1,
      anon_sym_GT,
    ACTIONS(769), 1,
      anon_sym_LBRACK,
  [3371] = 1,
    ACTIONS(771), 2,
      anon_sym_GT,
      sym__S,
  [3376] = 1,
    ACTIONS(743), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3381] = 1,
    ACTIONS(773), 2,
      anon_sym_PERCENT,
      sym__S,
  [3386] = 1,
    ACTIONS(775), 2,
      anon_sym_GT,
      sym__S,
  [3391] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(33), 1,
      sym_ETag,
  [3398] = 1,
    ACTIONS(777), 2,
      anon_sym_PERCENT,
      sym__S,
  [3403] = 2,
    ACTIONS(767), 1,
      anon_sym_GT,
    ACTIONS(779), 1,
      sym__S,
  [3410] = 2,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_NDATA,
  [3417] = 2,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(785), 1,
      sym__S,
  [3424] = 1,
    ACTIONS(787), 2,
      anon_sym_PERCENT,
      sym__S,
  [3429] = 2,
    ACTIONS(789), 1,
      sym__S,
    ACTIONS(791), 1,
      anon_sym_QMARK_GT,
  [3436] = 2,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(793), 1,
      anon_sym_PIPE,
  [3443] = 2,
    ACTIONS(795), 1,
      anon_sym_PIPE,
    ACTIONS(797), 1,
      anon_sym_COMMA,
  [3450] = 2,
    ACTIONS(799), 1,
      sym__S,
    STATE(131), 1,
      sym__VersionInfo,
  [3457] = 2,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
  [3464] = 1,
    ACTIONS(805), 2,
      anon_sym_PERCENT,
      sym__S,
  [3469] = 2,
    ACTIONS(807), 1,
      sym__S,
    ACTIONS(809), 1,
      sym_Nmtoken,
  [3476] = 1,
    ACTIONS(811), 2,
      anon_sym_GT,
      sym__S,
  [3481] = 2,
    ACTIONS(733), 1,
      anon_sym_standalone,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
  [3488] = 2,
    ACTIONS(815), 1,
      anon_sym_GT,
    ACTIONS(817), 1,
      sym__S,
  [3495] = 1,
    ACTIONS(819), 2,
      anon_sym_GT,
      sym__S,
  [3500] = 2,
    ACTIONS(821), 1,
      anon_sym_GT,
    ACTIONS(823), 1,
      sym__S,
  [3507] = 1,
    ACTIONS(825), 2,
      anon_sym_GT,
      sym__S,
  [3512] = 2,
    ACTIONS(827), 1,
      sym__S,
    ACTIONS(829), 1,
      anon_sym_QMARK_GT,
  [3519] = 2,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
    ACTIONS(831), 1,
      sym__S,
  [3526] = 1,
    ACTIONS(833), 2,
      anon_sym_PERCENT,
      sym__S,
  [3531] = 1,
    ACTIONS(835), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3536] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(168), 1,
      sym_ETag,
  [3543] = 2,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      sym__S,
  [3550] = 1,
    ACTIONS(837), 2,
      anon_sym_GT,
      sym__S,
  [3555] = 1,
    ACTIONS(841), 2,
      anon_sym_PERCENT,
      sym__S,
  [3560] = 2,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(845), 1,
      aux_sym_SystemLiteral_token1,
  [3567] = 2,
    ACTIONS(725), 1,
      anon_sym_QMARK_GT,
    ACTIONS(847), 1,
      sym__S,
  [3574] = 1,
    ACTIONS(698), 2,
      anon_sym_GT,
      sym__S,
  [3579] = 2,
    ACTIONS(849), 1,
      anon_sym_GT,
    ACTIONS(851), 1,
      sym__S,
  [3586] = 2,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      aux_sym_SystemLiteral_token2,
  [3593] = 1,
    ACTIONS(855), 2,
      anon_sym_GT,
      sym__S,
  [3598] = 1,
    ACTIONS(857), 2,
      anon_sym_yes,
      anon_sym_no,
  [3603] = 1,
    ACTIONS(859), 2,
      anon_sym_GT,
      sym__S,
  [3608] = 2,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(793), 1,
      anon_sym_PIPE,
  [3615] = 2,
    ACTIONS(702), 1,
      anon_sym_GT,
    ACTIONS(861), 1,
      sym__S,
  [3622] = 2,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      aux_sym_PubidLiteral_token1,
  [3629] = 2,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    ACTIONS(869), 1,
      sym__S,
  [3636] = 2,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
  [3643] = 1,
    ACTIONS(875), 2,
      anon_sym_GT,
      sym__S,
  [3648] = 1,
    ACTIONS(877), 2,
      anon_sym_PERCENT,
      sym__S,
  [3653] = 2,
    ACTIONS(863), 1,
      anon_sym_SQUOTE,
    ACTIONS(879), 1,
      aux_sym_PubidLiteral_token2,
  [3660] = 2,
    ACTIONS(881), 1,
      anon_sym_GT,
    ACTIONS(883), 1,
      sym__S,
  [3667] = 2,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    ACTIONS(887), 1,
      anon_sym_SQUOTE,
  [3674] = 1,
    ACTIONS(889), 2,
      anon_sym_GT,
      sym__S,
  [3679] = 1,
    ACTIONS(891), 2,
      anon_sym_GT,
      sym__S,
  [3684] = 2,
    ACTIONS(893), 1,
      anon_sym_GT,
    ACTIONS(895), 1,
      sym__S,
  [3691] = 2,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      sym__S,
  [3698] = 1,
    ACTIONS(901), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3703] = 2,
    ACTIONS(903), 1,
      anon_sym_GT,
    ACTIONS(905), 1,
      sym__S,
  [3710] = 1,
    ACTIONS(907), 2,
      anon_sym_GT,
      sym__S,
  [3715] = 1,
    ACTIONS(909), 2,
      anon_sym_GT,
      sym__S,
  [3720] = 2,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(913), 1,
      sym__S,
  [3727] = 2,
    ACTIONS(915), 1,
      sym_Name,
    ACTIONS(917), 1,
      sym__S,
  [3734] = 1,
    ACTIONS(919), 2,
      anon_sym_PERCENT,
      sym__S,
  [3739] = 2,
    ACTIONS(921), 1,
      anon_sym_PIPE,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [3746] = 1,
    ACTIONS(925), 2,
      anon_sym_GT,
      sym__S,
  [3751] = 1,
    ACTIONS(927), 2,
      anon_sym_PERCENT,
      sym__S,
  [3756] = 2,
    ACTIONS(466), 1,
      sym_Name,
    STATE(226), 1,
      sym_Attribute,
  [3763] = 1,
    ACTIONS(929), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3768] = 2,
    ACTIONS(931), 1,
      sym__S,
    ACTIONS(933), 1,
      sym_Nmtoken,
  [3775] = 1,
    ACTIONS(935), 2,
      anon_sym_GT,
      sym__S,
  [3780] = 1,
    ACTIONS(937), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3785] = 1,
    ACTIONS(939), 2,
      anon_sym_PERCENT,
      sym__S,
  [3790] = 2,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_PIPE,
  [3797] = 1,
    ACTIONS(941), 2,
      anon_sym_GT,
      sym__S,
  [3802] = 1,
    ACTIONS(943), 2,
      anon_sym_PERCENT,
      sym__S,
  [3807] = 2,
    ACTIONS(945), 1,
      anon_sym_GT,
    ACTIONS(947), 1,
      sym__S,
  [3814] = 1,
    ACTIONS(949), 2,
      anon_sym_GT,
      sym__S,
  [3819] = 2,
    ACTIONS(951), 1,
      anon_sym_GT,
    ACTIONS(953), 1,
      sym__S,
  [3826] = 2,
    ACTIONS(955), 1,
      sym__S,
    ACTIONS(957), 1,
      sym_Nmtoken,
  [3833] = 1,
    ACTIONS(959), 2,
      anon_sym_GT,
      sym__S,
  [3838] = 2,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_PIPE,
  [3845] = 1,
    ACTIONS(961), 2,
      anon_sym_PERCENT,
      sym__S,
  [3850] = 1,
    ACTIONS(963), 2,
      anon_sym_GT,
      sym__S,
  [3855] = 1,
    ACTIONS(965), 2,
      anon_sym_GT,
      sym__S,
  [3860] = 1,
    ACTIONS(967), 2,
      anon_sym_PERCENT,
      sym__S,
  [3865] = 1,
    ACTIONS(969), 2,
      anon_sym_GT,
      sym__S,
  [3870] = 1,
    ACTIONS(971), 1,
      sym__S,
  [3874] = 1,
    ACTIONS(973), 1,
      sym_CData,
  [3878] = 1,
    ACTIONS(975), 1,
      anon_sym_SQUOTE,
  [3882] = 1,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
  [3886] = 1,
    ACTIONS(977), 1,
      sym__S,
  [3890] = 1,
    ACTIONS(979), 1,
      sym_VersionNum,
  [3894] = 1,
    ACTIONS(981), 1,
      anon_sym_SQUOTE,
  [3898] = 1,
    ACTIONS(983), 1,
      anon_sym_SEMI,
  [3902] = 1,
    ACTIONS(985), 1,
      sym_Name,
  [3906] = 1,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
  [3910] = 1,
    ACTIONS(933), 1,
      sym_Nmtoken,
  [3914] = 1,
    ACTIONS(987), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [3918] = 1,
    ACTIONS(989), 1,
      anon_sym_STAR,
  [3922] = 1,
    ACTIONS(991), 1,
      sym__S,
  [3926] = 1,
    ACTIONS(993), 1,
      sym__S,
  [3930] = 1,
    ACTIONS(995), 1,
      anon_sym_SEMI,
  [3934] = 1,
    ACTIONS(893), 1,
      anon_sym_GT,
  [3938] = 1,
    ACTIONS(997), 1,
      anon_sym_SEMI,
  [3942] = 1,
    ACTIONS(999), 1,
      sym__S,
  [3946] = 1,
    ACTIONS(1001), 1,
      sym__S,
  [3950] = 1,
    ACTIONS(1003), 1,
      sym__S,
  [3954] = 1,
    ACTIONS(1005), 1,
      sym_Nmtoken,
  [3958] = 1,
    ACTIONS(921), 1,
      anon_sym_PIPE,
  [3962] = 1,
    ACTIONS(1007), 1,
      sym__S,
  [3966] = 1,
    ACTIONS(1009), 1,
      anon_sym_GT,
  [3970] = 1,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
  [3974] = 1,
    ACTIONS(1013), 1,
      anon_sym_QMARK_GT,
  [3978] = 1,
    ACTIONS(1015), 1,
      sym__S,
  [3982] = 1,
    ACTIONS(1017), 1,
      sym_EncName,
  [3986] = 1,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [3990] = 1,
    ACTIONS(1021), 1,
      sym_Nmtoken,
  [3994] = 1,
    ACTIONS(797), 1,
      anon_sym_COMMA,
  [3998] = 1,
    ACTIONS(1023), 1,
      anon_sym_DQUOTE,
  [4002] = 1,
    ACTIONS(903), 1,
      anon_sym_GT,
  [4006] = 1,
    ACTIONS(839), 1,
      sym__S,
  [4010] = 1,
    ACTIONS(795), 1,
      anon_sym_PIPE,
  [4014] = 1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [4018] = 1,
    ACTIONS(1025), 1,
      anon_sym_EQ,
  [4022] = 1,
    ACTIONS(1027), 1,
      sym__S,
  [4026] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [4030] = 1,
    ACTIONS(1029), 1,
      sym__S,
  [4034] = 1,
    ACTIONS(1031), 1,
      sym__S,
  [4038] = 1,
    ACTIONS(1033), 1,
      sym_Name,
  [4042] = 1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
  [4046] = 1,
    ACTIONS(1037), 1,
      sym__S,
  [4050] = 1,
    ACTIONS(793), 1,
      anon_sym_PIPE,
  [4054] = 1,
    ACTIONS(700), 1,
      anon_sym_STAR,
  [4058] = 1,
    ACTIONS(1039), 1,
      anon_sym_GT,
  [4062] = 1,
    ACTIONS(1041), 1,
      anon_sym_SQUOTE,
  [4066] = 1,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
  [4070] = 1,
    ACTIONS(1043), 1,
      aux_sym_PI_token1,
  [4074] = 1,
    ACTIONS(1045), 1,
      anon_sym_QMARK_GT,
  [4078] = 1,
    ACTIONS(1047), 1,
      anon_sym_SQUOTE,
  [4082] = 1,
    ACTIONS(951), 1,
      anon_sym_GT,
  [4086] = 1,
    ACTIONS(1049), 1,
      sym_Name,
  [4090] = 1,
    ACTIONS(1051), 1,
      aux_sym_CharRef_token2,
  [4094] = 1,
    ACTIONS(1051), 1,
      aux_sym_CharRef_token1,
  [4098] = 1,
    ACTIONS(1053), 1,
      sym_Name,
  [4102] = 1,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
  [4106] = 1,
    ACTIONS(1055), 1,
      anon_sym_GT,
  [4110] = 1,
    ACTIONS(1057), 1,
      sym_Name,
  [4114] = 1,
    ACTIONS(1023), 1,
      anon_sym_SQUOTE,
  [4118] = 1,
    ACTIONS(1059), 1,
      anon_sym_version,
  [4122] = 1,
    ACTIONS(1061), 1,
      sym__S,
  [4126] = 1,
    ACTIONS(1063), 1,
      sym_EncName,
  [4130] = 1,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
  [4134] = 1,
    ACTIONS(1065), 1,
      ts_builtin_sym_end,
  [4138] = 1,
    ACTIONS(1067), 1,
      sym_Name,
  [4142] = 1,
    ACTIONS(1069), 1,
      sym__S,
  [4146] = 1,
    ACTIONS(1071), 1,
      sym__S,
  [4150] = 1,
    ACTIONS(1073), 1,
      sym__S,
  [4154] = 1,
    ACTIONS(1075), 1,
      anon_sym_GT,
  [4158] = 1,
    ACTIONS(781), 1,
      anon_sym_GT,
  [4162] = 1,
    ACTIONS(915), 1,
      sym_Name,
  [4166] = 1,
    ACTIONS(1077), 1,
      anon_sym_GT,
  [4170] = 1,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
  [4174] = 1,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
  [4178] = 1,
    ACTIONS(1083), 1,
      anon_sym_GT,
  [4182] = 1,
    ACTIONS(1085), 1,
      anon_sym_QMARK_GT,
  [4186] = 1,
    ACTIONS(1087), 1,
      sym_VersionNum,
  [4190] = 1,
    ACTIONS(1089), 1,
      anon_sym_GT,
  [4194] = 1,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
  [4198] = 1,
    ACTIONS(1093), 1,
      anon_sym_SEMI,
  [4202] = 1,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
  [4206] = 1,
    ACTIONS(1097), 1,
      anon_sym_SEMI,
  [4210] = 1,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
  [4214] = 1,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
  [4218] = 1,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
  [4222] = 1,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
  [4226] = 1,
    ACTIONS(1107), 1,
      sym_Name,
  [4230] = 1,
    ACTIONS(1109), 1,
      sym_Name,
  [4234] = 1,
    ACTIONS(1111), 1,
      sym_Name,
  [4238] = 1,
    ACTIONS(1113), 1,
      aux_sym_CharRef_token1,
  [4242] = 1,
    ACTIONS(1113), 1,
      aux_sym_CharRef_token2,
  [4246] = 1,
    ACTIONS(1115), 1,
      sym_Name,
  [4250] = 1,
    ACTIONS(1117), 1,
      aux_sym_PI_token1,
  [4254] = 1,
    ACTIONS(1119), 1,
      sym_Name,
  [4258] = 1,
    ACTIONS(1121), 1,
      sym_Name,
  [4262] = 1,
    ACTIONS(1123), 1,
      aux_sym_CharRef_token1,
  [4266] = 1,
    ACTIONS(1123), 1,
      aux_sym_CharRef_token2,
  [4270] = 1,
    ACTIONS(1125), 1,
      sym_Name,
  [4274] = 1,
    ACTIONS(1127), 1,
      sym_Name,
  [4278] = 1,
    ACTIONS(1129), 1,
      aux_sym_CharRef_token1,
  [4282] = 1,
    ACTIONS(1129), 1,
      aux_sym_CharRef_token2,
  [4286] = 1,
    ACTIONS(1131), 1,
      sym_Name,
  [4290] = 1,
    ACTIONS(1133), 1,
      aux_sym_CharRef_token1,
  [4294] = 1,
    ACTIONS(1133), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 318,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 461,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 578,
  [SMALL_STATE(17)] = 611,
  [SMALL_STATE(18)] = 642,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 698,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 754,
  [SMALL_STATE(23)] = 782,
  [SMALL_STATE(24)] = 810,
  [SMALL_STATE(25)] = 835,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 883,
  [SMALL_STATE(28)] = 908,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 980,
  [SMALL_STATE(33)] = 994,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1022,
  [SMALL_STATE(36)] = 1036,
  [SMALL_STATE(37)] = 1050,
  [SMALL_STATE(38)] = 1064,
  [SMALL_STATE(39)] = 1078,
  [SMALL_STATE(40)] = 1102,
  [SMALL_STATE(41)] = 1116,
  [SMALL_STATE(42)] = 1140,
  [SMALL_STATE(43)] = 1154,
  [SMALL_STATE(44)] = 1168,
  [SMALL_STATE(45)] = 1194,
  [SMALL_STATE(46)] = 1218,
  [SMALL_STATE(47)] = 1240,
  [SMALL_STATE(48)] = 1254,
  [SMALL_STATE(49)] = 1278,
  [SMALL_STATE(50)] = 1292,
  [SMALL_STATE(51)] = 1306,
  [SMALL_STATE(52)] = 1330,
  [SMALL_STATE(53)] = 1344,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1379,
  [SMALL_STATE(56)] = 1390,
  [SMALL_STATE(57)] = 1411,
  [SMALL_STATE(58)] = 1432,
  [SMALL_STATE(59)] = 1443,
  [SMALL_STATE(60)] = 1454,
  [SMALL_STATE(61)] = 1465,
  [SMALL_STATE(62)] = 1476,
  [SMALL_STATE(63)] = 1497,
  [SMALL_STATE(64)] = 1508,
  [SMALL_STATE(65)] = 1519,
  [SMALL_STATE(66)] = 1542,
  [SMALL_STATE(67)] = 1563,
  [SMALL_STATE(68)] = 1584,
  [SMALL_STATE(69)] = 1605,
  [SMALL_STATE(70)] = 1624,
  [SMALL_STATE(71)] = 1636,
  [SMALL_STATE(72)] = 1654,
  [SMALL_STATE(73)] = 1672,
  [SMALL_STATE(74)] = 1688,
  [SMALL_STATE(75)] = 1704,
  [SMALL_STATE(76)] = 1720,
  [SMALL_STATE(77)] = 1738,
  [SMALL_STATE(78)] = 1754,
  [SMALL_STATE(79)] = 1766,
  [SMALL_STATE(80)] = 1784,
  [SMALL_STATE(81)] = 1796,
  [SMALL_STATE(82)] = 1816,
  [SMALL_STATE(83)] = 1834,
  [SMALL_STATE(84)] = 1850,
  [SMALL_STATE(85)] = 1866,
  [SMALL_STATE(86)] = 1885,
  [SMALL_STATE(87)] = 1896,
  [SMALL_STATE(88)] = 1907,
  [SMALL_STATE(89)] = 1926,
  [SMALL_STATE(90)] = 1937,
  [SMALL_STATE(91)] = 1948,
  [SMALL_STATE(92)] = 1967,
  [SMALL_STATE(93)] = 1986,
  [SMALL_STATE(94)] = 2005,
  [SMALL_STATE(95)] = 2016,
  [SMALL_STATE(96)] = 2027,
  [SMALL_STATE(97)] = 2044,
  [SMALL_STATE(98)] = 2063,
  [SMALL_STATE(99)] = 2074,
  [SMALL_STATE(100)] = 2085,
  [SMALL_STATE(101)] = 2104,
  [SMALL_STATE(102)] = 2121,
  [SMALL_STATE(103)] = 2131,
  [SMALL_STATE(104)] = 2141,
  [SMALL_STATE(105)] = 2151,
  [SMALL_STATE(106)] = 2161,
  [SMALL_STATE(107)] = 2171,
  [SMALL_STATE(108)] = 2181,
  [SMALL_STATE(109)] = 2191,
  [SMALL_STATE(110)] = 2201,
  [SMALL_STATE(111)] = 2217,
  [SMALL_STATE(112)] = 2227,
  [SMALL_STATE(113)] = 2241,
  [SMALL_STATE(114)] = 2251,
  [SMALL_STATE(115)] = 2261,
  [SMALL_STATE(116)] = 2268,
  [SMALL_STATE(117)] = 2281,
  [SMALL_STATE(118)] = 2294,
  [SMALL_STATE(119)] = 2307,
  [SMALL_STATE(120)] = 2316,
  [SMALL_STATE(121)] = 2329,
  [SMALL_STATE(122)] = 2340,
  [SMALL_STATE(123)] = 2353,
  [SMALL_STATE(124)] = 2362,
  [SMALL_STATE(125)] = 2375,
  [SMALL_STATE(126)] = 2388,
  [SMALL_STATE(127)] = 2395,
  [SMALL_STATE(128)] = 2408,
  [SMALL_STATE(129)] = 2417,
  [SMALL_STATE(130)] = 2430,
  [SMALL_STATE(131)] = 2437,
  [SMALL_STATE(132)] = 2450,
  [SMALL_STATE(133)] = 2463,
  [SMALL_STATE(134)] = 2474,
  [SMALL_STATE(135)] = 2483,
  [SMALL_STATE(136)] = 2490,
  [SMALL_STATE(137)] = 2499,
  [SMALL_STATE(138)] = 2506,
  [SMALL_STATE(139)] = 2519,
  [SMALL_STATE(140)] = 2532,
  [SMALL_STATE(141)] = 2539,
  [SMALL_STATE(142)] = 2552,
  [SMALL_STATE(143)] = 2565,
  [SMALL_STATE(144)] = 2574,
  [SMALL_STATE(145)] = 2581,
  [SMALL_STATE(146)] = 2588,
  [SMALL_STATE(147)] = 2597,
  [SMALL_STATE(148)] = 2606,
  [SMALL_STATE(149)] = 2619,
  [SMALL_STATE(150)] = 2628,
  [SMALL_STATE(151)] = 2639,
  [SMALL_STATE(152)] = 2648,
  [SMALL_STATE(153)] = 2661,
  [SMALL_STATE(154)] = 2674,
  [SMALL_STATE(155)] = 2681,
  [SMALL_STATE(156)] = 2690,
  [SMALL_STATE(157)] = 2703,
  [SMALL_STATE(158)] = 2716,
  [SMALL_STATE(159)] = 2729,
  [SMALL_STATE(160)] = 2740,
  [SMALL_STATE(161)] = 2753,
  [SMALL_STATE(162)] = 2766,
  [SMALL_STATE(163)] = 2779,
  [SMALL_STATE(164)] = 2792,
  [SMALL_STATE(165)] = 2801,
  [SMALL_STATE(166)] = 2814,
  [SMALL_STATE(167)] = 2827,
  [SMALL_STATE(168)] = 2840,
  [SMALL_STATE(169)] = 2847,
  [SMALL_STATE(170)] = 2856,
  [SMALL_STATE(171)] = 2863,
  [SMALL_STATE(172)] = 2876,
  [SMALL_STATE(173)] = 2887,
  [SMALL_STATE(174)] = 2898,
  [SMALL_STATE(175)] = 2911,
  [SMALL_STATE(176)] = 2917,
  [SMALL_STATE(177)] = 2923,
  [SMALL_STATE(178)] = 2933,
  [SMALL_STATE(179)] = 2943,
  [SMALL_STATE(180)] = 2949,
  [SMALL_STATE(181)] = 2957,
  [SMALL_STATE(182)] = 2963,
  [SMALL_STATE(183)] = 2973,
  [SMALL_STATE(184)] = 2979,
  [SMALL_STATE(185)] = 2985,
  [SMALL_STATE(186)] = 2993,
  [SMALL_STATE(187)] = 2999,
  [SMALL_STATE(188)] = 3005,
  [SMALL_STATE(189)] = 3011,
  [SMALL_STATE(190)] = 3019,
  [SMALL_STATE(191)] = 3025,
  [SMALL_STATE(192)] = 3035,
  [SMALL_STATE(193)] = 3045,
  [SMALL_STATE(194)] = 3051,
  [SMALL_STATE(195)] = 3061,
  [SMALL_STATE(196)] = 3067,
  [SMALL_STATE(197)] = 3073,
  [SMALL_STATE(198)] = 3083,
  [SMALL_STATE(199)] = 3089,
  [SMALL_STATE(200)] = 3099,
  [SMALL_STATE(201)] = 3109,
  [SMALL_STATE(202)] = 3117,
  [SMALL_STATE(203)] = 3127,
  [SMALL_STATE(204)] = 3133,
  [SMALL_STATE(205)] = 3139,
  [SMALL_STATE(206)] = 3147,
  [SMALL_STATE(207)] = 3153,
  [SMALL_STATE(208)] = 3163,
  [SMALL_STATE(209)] = 3169,
  [SMALL_STATE(210)] = 3179,
  [SMALL_STATE(211)] = 3189,
  [SMALL_STATE(212)] = 3199,
  [SMALL_STATE(213)] = 3209,
  [SMALL_STATE(214)] = 3219,
  [SMALL_STATE(215)] = 3229,
  [SMALL_STATE(216)] = 3239,
  [SMALL_STATE(217)] = 3245,
  [SMALL_STATE(218)] = 3255,
  [SMALL_STATE(219)] = 3263,
  [SMALL_STATE(220)] = 3273,
  [SMALL_STATE(221)] = 3281,
  [SMALL_STATE(222)] = 3291,
  [SMALL_STATE(223)] = 3301,
  [SMALL_STATE(224)] = 3311,
  [SMALL_STATE(225)] = 3321,
  [SMALL_STATE(226)] = 3331,
  [SMALL_STATE(227)] = 3337,
  [SMALL_STATE(228)] = 3342,
  [SMALL_STATE(229)] = 3347,
  [SMALL_STATE(230)] = 3352,
  [SMALL_STATE(231)] = 3359,
  [SMALL_STATE(232)] = 3364,
  [SMALL_STATE(233)] = 3371,
  [SMALL_STATE(234)] = 3376,
  [SMALL_STATE(235)] = 3381,
  [SMALL_STATE(236)] = 3386,
  [SMALL_STATE(237)] = 3391,
  [SMALL_STATE(238)] = 3398,
  [SMALL_STATE(239)] = 3403,
  [SMALL_STATE(240)] = 3410,
  [SMALL_STATE(241)] = 3417,
  [SMALL_STATE(242)] = 3424,
  [SMALL_STATE(243)] = 3429,
  [SMALL_STATE(244)] = 3436,
  [SMALL_STATE(245)] = 3443,
  [SMALL_STATE(246)] = 3450,
  [SMALL_STATE(247)] = 3457,
  [SMALL_STATE(248)] = 3464,
  [SMALL_STATE(249)] = 3469,
  [SMALL_STATE(250)] = 3476,
  [SMALL_STATE(251)] = 3481,
  [SMALL_STATE(252)] = 3488,
  [SMALL_STATE(253)] = 3495,
  [SMALL_STATE(254)] = 3500,
  [SMALL_STATE(255)] = 3507,
  [SMALL_STATE(256)] = 3512,
  [SMALL_STATE(257)] = 3519,
  [SMALL_STATE(258)] = 3526,
  [SMALL_STATE(259)] = 3531,
  [SMALL_STATE(260)] = 3536,
  [SMALL_STATE(261)] = 3543,
  [SMALL_STATE(262)] = 3550,
  [SMALL_STATE(263)] = 3555,
  [SMALL_STATE(264)] = 3560,
  [SMALL_STATE(265)] = 3567,
  [SMALL_STATE(266)] = 3574,
  [SMALL_STATE(267)] = 3579,
  [SMALL_STATE(268)] = 3586,
  [SMALL_STATE(269)] = 3593,
  [SMALL_STATE(270)] = 3598,
  [SMALL_STATE(271)] = 3603,
  [SMALL_STATE(272)] = 3608,
  [SMALL_STATE(273)] = 3615,
  [SMALL_STATE(274)] = 3622,
  [SMALL_STATE(275)] = 3629,
  [SMALL_STATE(276)] = 3636,
  [SMALL_STATE(277)] = 3643,
  [SMALL_STATE(278)] = 3648,
  [SMALL_STATE(279)] = 3653,
  [SMALL_STATE(280)] = 3660,
  [SMALL_STATE(281)] = 3667,
  [SMALL_STATE(282)] = 3674,
  [SMALL_STATE(283)] = 3679,
  [SMALL_STATE(284)] = 3684,
  [SMALL_STATE(285)] = 3691,
  [SMALL_STATE(286)] = 3698,
  [SMALL_STATE(287)] = 3703,
  [SMALL_STATE(288)] = 3710,
  [SMALL_STATE(289)] = 3715,
  [SMALL_STATE(290)] = 3720,
  [SMALL_STATE(291)] = 3727,
  [SMALL_STATE(292)] = 3734,
  [SMALL_STATE(293)] = 3739,
  [SMALL_STATE(294)] = 3746,
  [SMALL_STATE(295)] = 3751,
  [SMALL_STATE(296)] = 3756,
  [SMALL_STATE(297)] = 3763,
  [SMALL_STATE(298)] = 3768,
  [SMALL_STATE(299)] = 3775,
  [SMALL_STATE(300)] = 3780,
  [SMALL_STATE(301)] = 3785,
  [SMALL_STATE(302)] = 3790,
  [SMALL_STATE(303)] = 3797,
  [SMALL_STATE(304)] = 3802,
  [SMALL_STATE(305)] = 3807,
  [SMALL_STATE(306)] = 3814,
  [SMALL_STATE(307)] = 3819,
  [SMALL_STATE(308)] = 3826,
  [SMALL_STATE(309)] = 3833,
  [SMALL_STATE(310)] = 3838,
  [SMALL_STATE(311)] = 3845,
  [SMALL_STATE(312)] = 3850,
  [SMALL_STATE(313)] = 3855,
  [SMALL_STATE(314)] = 3860,
  [SMALL_STATE(315)] = 3865,
  [SMALL_STATE(316)] = 3870,
  [SMALL_STATE(317)] = 3874,
  [SMALL_STATE(318)] = 3878,
  [SMALL_STATE(319)] = 3882,
  [SMALL_STATE(320)] = 3886,
  [SMALL_STATE(321)] = 3890,
  [SMALL_STATE(322)] = 3894,
  [SMALL_STATE(323)] = 3898,
  [SMALL_STATE(324)] = 3902,
  [SMALL_STATE(325)] = 3906,
  [SMALL_STATE(326)] = 3910,
  [SMALL_STATE(327)] = 3914,
  [SMALL_STATE(328)] = 3918,
  [SMALL_STATE(329)] = 3922,
  [SMALL_STATE(330)] = 3926,
  [SMALL_STATE(331)] = 3930,
  [SMALL_STATE(332)] = 3934,
  [SMALL_STATE(333)] = 3938,
  [SMALL_STATE(334)] = 3942,
  [SMALL_STATE(335)] = 3946,
  [SMALL_STATE(336)] = 3950,
  [SMALL_STATE(337)] = 3954,
  [SMALL_STATE(338)] = 3958,
  [SMALL_STATE(339)] = 3962,
  [SMALL_STATE(340)] = 3966,
  [SMALL_STATE(341)] = 3970,
  [SMALL_STATE(342)] = 3974,
  [SMALL_STATE(343)] = 3978,
  [SMALL_STATE(344)] = 3982,
  [SMALL_STATE(345)] = 3986,
  [SMALL_STATE(346)] = 3990,
  [SMALL_STATE(347)] = 3994,
  [SMALL_STATE(348)] = 3998,
  [SMALL_STATE(349)] = 4002,
  [SMALL_STATE(350)] = 4006,
  [SMALL_STATE(351)] = 4010,
  [SMALL_STATE(352)] = 4014,
  [SMALL_STATE(353)] = 4018,
  [SMALL_STATE(354)] = 4022,
  [SMALL_STATE(355)] = 4026,
  [SMALL_STATE(356)] = 4030,
  [SMALL_STATE(357)] = 4034,
  [SMALL_STATE(358)] = 4038,
  [SMALL_STATE(359)] = 4042,
  [SMALL_STATE(360)] = 4046,
  [SMALL_STATE(361)] = 4050,
  [SMALL_STATE(362)] = 4054,
  [SMALL_STATE(363)] = 4058,
  [SMALL_STATE(364)] = 4062,
  [SMALL_STATE(365)] = 4066,
  [SMALL_STATE(366)] = 4070,
  [SMALL_STATE(367)] = 4074,
  [SMALL_STATE(368)] = 4078,
  [SMALL_STATE(369)] = 4082,
  [SMALL_STATE(370)] = 4086,
  [SMALL_STATE(371)] = 4090,
  [SMALL_STATE(372)] = 4094,
  [SMALL_STATE(373)] = 4098,
  [SMALL_STATE(374)] = 4102,
  [SMALL_STATE(375)] = 4106,
  [SMALL_STATE(376)] = 4110,
  [SMALL_STATE(377)] = 4114,
  [SMALL_STATE(378)] = 4118,
  [SMALL_STATE(379)] = 4122,
  [SMALL_STATE(380)] = 4126,
  [SMALL_STATE(381)] = 4130,
  [SMALL_STATE(382)] = 4134,
  [SMALL_STATE(383)] = 4138,
  [SMALL_STATE(384)] = 4142,
  [SMALL_STATE(385)] = 4146,
  [SMALL_STATE(386)] = 4150,
  [SMALL_STATE(387)] = 4154,
  [SMALL_STATE(388)] = 4158,
  [SMALL_STATE(389)] = 4162,
  [SMALL_STATE(390)] = 4166,
  [SMALL_STATE(391)] = 4170,
  [SMALL_STATE(392)] = 4174,
  [SMALL_STATE(393)] = 4178,
  [SMALL_STATE(394)] = 4182,
  [SMALL_STATE(395)] = 4186,
  [SMALL_STATE(396)] = 4190,
  [SMALL_STATE(397)] = 4194,
  [SMALL_STATE(398)] = 4198,
  [SMALL_STATE(399)] = 4202,
  [SMALL_STATE(400)] = 4206,
  [SMALL_STATE(401)] = 4210,
  [SMALL_STATE(402)] = 4214,
  [SMALL_STATE(403)] = 4218,
  [SMALL_STATE(404)] = 4222,
  [SMALL_STATE(405)] = 4226,
  [SMALL_STATE(406)] = 4230,
  [SMALL_STATE(407)] = 4234,
  [SMALL_STATE(408)] = 4238,
  [SMALL_STATE(409)] = 4242,
  [SMALL_STATE(410)] = 4246,
  [SMALL_STATE(411)] = 4250,
  [SMALL_STATE(412)] = 4254,
  [SMALL_STATE(413)] = 4258,
  [SMALL_STATE(414)] = 4262,
  [SMALL_STATE(415)] = 4266,
  [SMALL_STATE(416)] = 4270,
  [SMALL_STATE(417)] = 4274,
  [SMALL_STATE(418)] = 4278,
  [SMALL_STATE(419)] = 4282,
  [SMALL_STATE(420)] = 4286,
  [SMALL_STATE(421)] = 4290,
  [SMALL_STATE(422)] = 4294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(373),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(372),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(371),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(405),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(406),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(317),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(335),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(334),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(330),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(329),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(358),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(301),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(416),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(22),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(420),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(421),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(422),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(412),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(23),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(417),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(418),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(419),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(358),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(413),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(414),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(415),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(29),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(407),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(408),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(409),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(39),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(149),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(341),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(296),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(140),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(144),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(129),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(361),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(308),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(338),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(219),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(66),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(351),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(62),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(347),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(183),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 5),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(203),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(179),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1065] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml(void) {
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
