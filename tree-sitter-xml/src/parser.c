#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 417
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LT_BANGELEMENT = 1,
  anon_sym_GT = 2,
  anon_sym_EMPTY = 3,
  anon_sym_ANY = 4,
  anon_sym_LPAREN = 5,
  anon_sym_POUNDPCDATA = 6,
  anon_sym_PIPE = 7,
  anon_sym_RPAREN = 8,
  anon_sym_STAR = 9,
  anon_sym_COMMA = 10,
  anon_sym_LT_BANGATTLIST = 11,
  sym_StringType = 12,
  sym_TokenizedType = 13,
  anon_sym_NOTATION = 14,
  anon_sym_POUNDREQUIRED = 15,
  anon_sym_POUNDIMPLIED = 16,
  anon_sym_POUNDFIXED = 17,
  anon_sym_LT_BANGENTITY = 18,
  anon_sym_PERCENT = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_EntityValue_token1 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_EntityValue_token2 = 23,
  anon_sym_NDATA = 24,
  anon_sym_LT_BANGNOTATION = 25,
  anon_sym_SEMI = 26,
  anon_sym_QMARK = 27,
  anon_sym_PLUS = 28,
  sym__Char = 29,
  sym__S = 30,
  sym_Name = 31,
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
  sym_intSubset = 70,
  sym__markupdecl = 71,
  sym__DeclSep = 72,
  sym_elementdecl = 73,
  sym_contentspec = 74,
  sym_Mixed = 75,
  sym_children = 76,
  sym__cp = 77,
  sym__choice = 78,
  sym__seq = 79,
  sym_AttlistDecl = 80,
  sym__AttDef = 81,
  sym__AttType = 82,
  sym__EnumeratedType = 83,
  sym_NotationType = 84,
  sym_Enumeration = 85,
  sym_DefaultDecl = 86,
  sym__EntityDecl = 87,
  sym_GEDecl = 88,
  sym_PEDecl = 89,
  sym_EntityValue = 90,
  sym_NDataDecl = 91,
  sym_NotationDecl = 92,
  sym_PEReference = 93,
  sym__Reference = 94,
  sym_EntityRef = 95,
  sym_CharRef = 96,
  sym_AttValue = 97,
  sym_ExternalID = 98,
  sym_PublicID = 99,
  sym_SystemLiteral = 100,
  sym_PubidLiteral = 101,
  sym_PI = 102,
  sym__Misc = 103,
  sym_prolog = 104,
  sym_XMLDecl = 105,
  sym__VersionInfo = 106,
  sym__EncodingDecl = 107,
  sym__SDDecl = 108,
  sym_doctypedecl = 109,
  sym_element = 110,
  sym_EmptyElemTag = 111,
  sym_Attribute = 112,
  sym_STag = 113,
  sym_ETag = 114,
  sym_content = 115,
  sym_CDSect = 116,
  sym__Eq = 117,
  aux_sym_document_repeat1 = 118,
  aux_sym_intSubset_repeat1 = 119,
  aux_sym_Mixed_repeat1 = 120,
  aux_sym__choice_repeat1 = 121,
  aux_sym__seq_repeat1 = 122,
  aux_sym_AttlistDecl_repeat1 = 123,
  aux_sym_NotationType_repeat1 = 124,
  aux_sym_Enumeration_repeat1 = 125,
  aux_sym_EntityValue_repeat1 = 126,
  aux_sym_EntityValue_repeat2 = 127,
  aux_sym_AttValue_repeat1 = 128,
  aux_sym_AttValue_repeat2 = 129,
  aux_sym_EmptyElemTag_repeat1 = 130,
  aux_sym_content_repeat1 = 131,
  alias_sym_PITarget = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_Name] = "Name",
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
  [sym_intSubset] = "intSubset",
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
  [sym__AttDef] = "_AttDef",
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
  [sym__Misc] = "_Misc",
  [sym_prolog] = "prolog",
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym__SDDecl] = "_SDDecl",
  [sym_doctypedecl] = "doctypedecl",
  [sym_element] = "element",
  [sym_EmptyElemTag] = "EmptyElemTag",
  [sym_Attribute] = "Attribute",
  [sym_STag] = "STag",
  [sym_ETag] = "ETag",
  [sym_content] = "content",
  [sym_CDSect] = "CDSect",
  [sym__Eq] = "_Eq",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_intSubset_repeat1] = "intSubset_repeat1",
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
  [sym_Name] = sym_Name,
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
  [sym_intSubset] = sym_intSubset,
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
  [sym__AttDef] = sym__AttDef,
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
  [sym__Misc] = sym__Misc,
  [sym_prolog] = sym_prolog,
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym__SDDecl] = sym__SDDecl,
  [sym_doctypedecl] = sym_doctypedecl,
  [sym_element] = sym_element,
  [sym_EmptyElemTag] = sym_EmptyElemTag,
  [sym_Attribute] = sym_Attribute,
  [sym_STag] = sym_STag,
  [sym_ETag] = sym_ETag,
  [sym_content] = sym_content,
  [sym_CDSect] = sym_CDSect,
  [sym__Eq] = sym__Eq,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_intSubset_repeat1] = aux_sym_intSubset_repeat1,
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
  [sym_Name] = {
    .visible = true,
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
  [sym_intSubset] = {
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
  [sym__AttDef] = {
    .visible = false,
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
  [sym__Misc] = {
    .visible = false,
    .named = true,
  },
  [sym_prolog] = {
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
  [sym__SDDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_doctypedecl] = {
    .visible = true,
    .named = true,
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
  [aux_sym_intSubset_repeat1] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_root, 0},
  [1] =
    {field_root, 1},
  [2] =
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
  [55] = 20,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 36,
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
  [75] = 41,
  [76] = 29,
  [77] = 77,
  [78] = 39,
  [79] = 41,
  [80] = 39,
  [81] = 29,
  [82] = 19,
  [83] = 19,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 39,
  [92] = 92,
  [93] = 29,
  [94] = 41,
  [95] = 39,
  [96] = 96,
  [97] = 41,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 29,
  [104] = 104,
  [105] = 26,
  [106] = 31,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 25,
  [111] = 40,
  [112] = 112,
  [113] = 21,
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
  [124] = 108,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 34,
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
  [141] = 27,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 107,
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
  [161] = 159,
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
  [183] = 158,
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
  [227] = 221,
  [228] = 228,
  [229] = 220,
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
  [286] = 217,
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
  [305] = 305,
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
  [383] = 297,
  [384] = 296,
  [385] = 385,
  [386] = 307,
  [387] = 387,
  [388] = 373,
  [389] = 341,
  [390] = 297,
  [391] = 296,
  [392] = 341,
  [393] = 297,
  [394] = 296,
  [395] = 297,
  [396] = 296,
  [397] = 323,
  [398] = 398,
  [399] = 368,
  [400] = 367,
  [401] = 366,
  [402] = 365,
  [403] = 361,
  [404] = 404,
  [405] = 301,
  [406] = 368,
  [407] = 367,
  [408] = 366,
  [409] = 301,
  [410] = 368,
  [411] = 367,
  [412] = 366,
  [413] = 368,
  [414] = 367,
  [415] = 366,
  [416] = 377,
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
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '1') ADVANCE(190);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'C') ADVANCE(192);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(198);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '[') ADVANCE(322);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(201);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(209);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(189);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(189);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '?') ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(120);
      if (lookahead == '[') ADVANCE(322);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(130);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(189);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(289);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(290);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == '[') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '[') ADVANCE(33);
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
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(329);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(336);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(307);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(306);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(167);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(213);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(293);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(184);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(183);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(177);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'M') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(179);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'Y') ADVANCE(175);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'K') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(291);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(66);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'Q') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 115:
      if (lookahead == 'X') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'Y') ADVANCE(186);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(164);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'Y') ADVANCE(86);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == '[') ADVANCE(335);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(156);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(283);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 154:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(305);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(337);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(279);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_StringType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(283);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(329);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(243);
      if (lookahead == 'N') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'Y') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(283);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(283);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(279);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_NDATA);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'B') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'Y') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'P') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'Y') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'Y') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(283);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(211);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(155);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_standalone);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(279);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '?') ADVANCE(304);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '?') ADVANCE(304);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '?') ADVANCE(303);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '?') ADVANCE(303);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(332);
      if (lookahead == ']') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 331},
  [3] = {.lex_state = 331},
  [4] = {.lex_state = 331},
  [5] = {.lex_state = 331},
  [6] = {.lex_state = 157},
  [7] = {.lex_state = 157},
  [8] = {.lex_state = 157},
  [9] = {.lex_state = 157},
  [10] = {.lex_state = 157},
  [11] = {.lex_state = 157},
  [12] = {.lex_state = 157},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 157},
  [20] = {.lex_state = 331},
  [21] = {.lex_state = 331},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 331},
  [26] = {.lex_state = 331},
  [27] = {.lex_state = 331},
  [28] = {.lex_state = 331},
  [29] = {.lex_state = 331},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 331},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 331},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 331},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 331},
  [39] = {.lex_state = 331},
  [40] = {.lex_state = 331},
  [41] = {.lex_state = 331},
  [42] = {.lex_state = 331},
  [43] = {.lex_state = 331},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 157},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 157},
  [53] = {.lex_state = 157},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 158},
  [57] = {.lex_state = 158},
  [58] = {.lex_state = 157},
  [59] = {.lex_state = 157},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 157},
  [63] = {.lex_state = 157},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 157},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 158},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 157},
  [71] = {.lex_state = 157},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 157},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 157},
  [85] = {.lex_state = 157},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 157},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 157},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 157},
  [99] = {.lex_state = 158},
  [100] = {.lex_state = 158},
  [101] = {.lex_state = 157},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 157},
  [105] = {.lex_state = 157},
  [106] = {.lex_state = 157},
  [107] = {.lex_state = 157},
  [108] = {.lex_state = 157},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 157},
  [111] = {.lex_state = 157},
  [112] = {.lex_state = 157},
  [113] = {.lex_state = 157},
  [114] = {.lex_state = 157},
  [115] = {.lex_state = 157},
  [116] = {.lex_state = 157},
  [117] = {.lex_state = 157},
  [118] = {.lex_state = 157},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 158},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 157},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 157},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 157},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 158},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 157},
  [142] = {.lex_state = 157},
  [143] = {.lex_state = 158},
  [144] = {.lex_state = 158},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 158},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 157},
  [149] = {.lex_state = 158},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 158},
  [155] = {.lex_state = 158},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 158},
  [164] = {.lex_state = 157},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 157},
  [167] = {.lex_state = 157},
  [168] = {.lex_state = 157},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 157},
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
  [187] = {.lex_state = 157},
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
  [204] = {.lex_state = 157},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 301},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 157},
  [219] = {.lex_state = 157},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 157},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 157},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 157},
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
  [243] = {.lex_state = 297},
  [244] = {.lex_state = 295},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 157},
  [247] = {.lex_state = 158},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 151},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 157},
  [256] = {.lex_state = 157},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 151},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 157},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 157},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 151},
  [280] = {.lex_state = 157},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 157},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 299},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 157},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 157},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 151},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 157},
  [302] = {.lex_state = 157},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 158},
  [306] = {.lex_state = 157},
  [307] = {.lex_state = 157},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 151},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 157},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 157},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 151},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 157},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 154},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 157},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 157},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 305},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 154},
  [364] = {.lex_state = 337},
  [365] = {.lex_state = 157},
  [366] = {.lex_state = 153},
  [367] = {.lex_state = 2},
  [368] = {.lex_state = 157},
  [369] = {.lex_state = 2},
  [370] = {.lex_state = 157},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 157},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 157},
  [381] = {.lex_state = 157},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 157},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 2},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 157},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 157},
  [400] = {.lex_state = 2},
  [401] = {.lex_state = 153},
  [402] = {.lex_state = 157},
  [403] = {.lex_state = 305},
  [404] = {.lex_state = 157},
  [405] = {.lex_state = 157},
  [406] = {.lex_state = 157},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 153},
  [409] = {.lex_state = 157},
  [410] = {.lex_state = 157},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 153},
  [413] = {.lex_state = 157},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 153},
  [416] = {.lex_state = 157},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_Name] = ACTIONS(1),
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
    [sym_document] = STATE(376),
    [sym_PI] = STATE(45),
    [sym__Misc] = STATE(45),
    [sym_prolog] = STATE(109),
    [sym_XMLDecl] = STATE(35),
    [sym_doctypedecl] = STATE(57),
    [sym_element] = STATE(58),
    [sym_EmptyElemTag] = STATE(111),
    [sym_STag] = STATE(3),
    [aux_sym_document_repeat1] = STATE(45),
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
    STATE(21), 1,
      sym_ETag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(220), 1,
      sym_content,
    STATE(29), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
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
    STATE(113), 1,
      sym_ETag,
    STATE(229), 1,
      sym_content,
    STATE(29), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [102] = 13,
    ACTIONS(33), 1,
      anon_sym_AMP,
    ACTIONS(36), 1,
      anon_sym_AMP_POUND,
    ACTIONS(39), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(42), 1,
      anon_sym_LT_QMARK,
    ACTIONS(45), 1,
      sym_Comment,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_CharData,
    ACTIONS(56), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(2), 1,
      sym_STag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(29), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [147] = 13,
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
    ACTIONS(59), 1,
      sym_Comment,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_CharData,
    STATE(2), 1,
      sym_STag,
    STATE(40), 1,
      sym_EmptyElemTag,
    STATE(29), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
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
    STATE(7), 1,
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(360), 1,
      sym_intSubset,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
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
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [276] = 12,
    ACTIONS(81), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(84), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(87), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(90), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(93), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(99), 1,
      sym_Comment,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [318] = 12,
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
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(310), 1,
      sym_intSubset,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [360] = 12,
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
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(300), 1,
      sym_intSubset,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [402] = 12,
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
      aux_sym_intSubset_repeat1,
    STATE(135), 1,
      sym__markupdecl,
    STATE(324), 1,
      sym_intSubset,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [444] = 9,
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
    STATE(127), 1,
      sym__markupdecl,
    STATE(265), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(274), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [477] = 8,
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
    STATE(81), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [505] = 8,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(129), 1,
      anon_sym_AMP_POUND,
    ACTIONS(131), 1,
      anon_sym_AMP_POUNDx,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [533] = 8,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(135), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_AMP_POUND,
    ACTIONS(141), 1,
      anon_sym_AMP_POUNDx,
    STATE(81), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(13), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [561] = 8,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(129), 1,
      anon_sym_AMP_POUND,
    ACTIONS(131), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_EntityValue_token2,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [589] = 8,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_AMP_POUND,
    ACTIONS(141), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_EntityValue_token1,
    STATE(81), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(15), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [617] = 8,
    ACTIONS(149), 1,
      anon_sym_PERCENT,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_POUND,
    ACTIONS(163), 1,
      anon_sym_AMP_POUNDx,
    STATE(76), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [645] = 1,
    ACTIONS(166), 10,
      anon_sym_LT_BANGELEMENT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [658] = 2,
    ACTIONS(168), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(170), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [672] = 2,
    ACTIONS(172), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(174), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [686] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(178), 1,
      anon_sym_LT,
    STATE(68), 1,
      sym_doctypedecl,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [708] = 7,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_AMP_POUND,
    ACTIONS(188), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(191), 1,
      aux_sym_AttValue_token1,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
  [732] = 7,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP_POUND,
    ACTIONS(202), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(205), 1,
      aux_sym_AttValue_token2,
    STATE(24), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [756] = 2,
    ACTIONS(208), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(210), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [770] = 2,
    ACTIONS(212), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(214), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [784] = 2,
    ACTIONS(216), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(218), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [798] = 2,
    ACTIONS(220), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(222), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [812] = 2,
    ACTIONS(224), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(226), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [826] = 7,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_AMP,
    ACTIONS(232), 1,
      anon_sym_AMP_POUND,
    ACTIONS(234), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(236), 1,
      aux_sym_AttValue_token2,
    STATE(24), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [850] = 2,
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
  [864] = 7,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_AMP,
    ACTIONS(244), 1,
      anon_sym_AMP_POUND,
    ACTIONS(246), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(248), 1,
      aux_sym_AttValue_token1,
    STATE(23), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
  [888] = 5,
    ACTIONS(255), 1,
      anon_sym_LT_QMARK,
    ACTIONS(258), 1,
      anon_sym_LT,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(252), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [908] = 2,
    ACTIONS(260), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(262), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [922] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(266), 1,
      anon_sym_LT,
    STATE(60), 1,
      sym_doctypedecl,
    ACTIONS(264), 2,
      sym__S,
      sym_Comment,
    STATE(22), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [944] = 2,
    ACTIONS(268), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(270), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [958] = 7,
    ACTIONS(242), 1,
      anon_sym_AMP,
    ACTIONS(244), 1,
      anon_sym_AMP_POUND,
    ACTIONS(246), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      aux_sym_AttValue_token1,
    STATE(32), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
  [982] = 2,
    ACTIONS(276), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(278), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [996] = 2,
    ACTIONS(280), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(282), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1010] = 2,
    ACTIONS(284), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(286), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1024] = 2,
    ACTIONS(288), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(290), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1038] = 2,
    ACTIONS(292), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(294), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1052] = 2,
    ACTIONS(296), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(298), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1066] = 7,
    ACTIONS(230), 1,
      anon_sym_AMP,
    ACTIONS(232), 1,
      anon_sym_AMP_POUND,
    ACTIONS(234), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym_AttValue_token2,
    STATE(30), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(93), 2,
      sym_EntityRef,
      sym_CharRef,
  [1090] = 5,
    ACTIONS(9), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    STATE(60), 1,
      sym_doctypedecl,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1109] = 1,
    ACTIONS(302), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1120] = 6,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_NOTATION,
    STATE(328), 1,
      sym__AttType,
    STATE(335), 1,
      sym__EnumeratedType,
    ACTIONS(306), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(327), 2,
      sym_NotationType,
      sym_Enumeration,
  [1141] = 1,
    ACTIONS(310), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1152] = 5,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_contentspec,
    ACTIONS(312), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(96), 2,
      sym__choice,
      sym__seq,
    STATE(212), 2,
      sym_Mixed,
      sym_children,
  [1171] = 1,
    ACTIONS(316), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1182] = 1,
    ACTIONS(318), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1193] = 1,
    ACTIONS(320), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1204] = 1,
    ACTIONS(102), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1215] = 1,
    ACTIONS(322), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1226] = 2,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1238] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1254] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(266), 1,
      anon_sym_LT,
    ACTIONS(326), 2,
      sym__S,
      sym_Comment,
    STATE(61), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1270] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 2,
      sym__S,
      sym_Comment,
    STATE(62), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1286] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 2,
      sym__S,
      sym_Comment,
    STATE(65), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1302] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(336), 2,
      sym__S,
      sym_Comment,
    STATE(69), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1318] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1334] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1350] = 6,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(344), 1,
      sym__S,
    ACTIONS(346), 1,
      sym_Name,
    STATE(74), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1370] = 2,
    ACTIONS(268), 1,
      anon_sym_LT,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1382] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1398] = 2,
    ACTIONS(352), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(350), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1410] = 6,
    ACTIONS(356), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_DefaultDecl,
    STATE(276), 1,
      sym_AttValue,
    ACTIONS(354), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1430] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(362), 2,
      sym__S,
      sym_Comment,
    STATE(56), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1446] = 4,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(176), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1462] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(366), 1,
      sym__S,
    STATE(74), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1479] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(368), 1,
      sym__S,
    STATE(203), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1496] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(370), 1,
      sym__S,
    STATE(184), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1513] = 5,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_SYSTEM,
    ACTIONS(378), 1,
      anon_sym_PUBLIC,
    STATE(257), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1530] = 6,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      sym__S,
    STATE(136), 1,
      aux_sym__seq_repeat1,
    STATE(137), 1,
      aux_sym__choice_repeat1,
  [1549] = 2,
    ACTIONS(288), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(290), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1560] = 2,
    ACTIONS(224), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(226), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1571] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(388), 1,
      anon_sym_POUNDPCDATA,
    STATE(87), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1588] = 2,
    ACTIONS(280), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(282), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1599] = 2,
    ACTIONS(288), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(290), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1610] = 2,
    ACTIONS(280), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(282), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1621] = 2,
    ACTIONS(224), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(226), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1632] = 2,
    ACTIONS(390), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(166), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1643] = 2,
    ACTIONS(390), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(166), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1654] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(392), 1,
      sym__S,
    STATE(200), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1671] = 5,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(394), 1,
      sym__S,
    STATE(185), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1688] = 6,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_SYSTEM,
    ACTIONS(378), 1,
      anon_sym_PUBLIC,
    STATE(197), 1,
      sym_ExternalID,
    STATE(222), 1,
      sym_EntityValue,
  [1707] = 6,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      sym__S,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym__seq_repeat1,
    STATE(131), 1,
      aux_sym__choice_repeat1,
  [1726] = 2,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(398), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1736] = 2,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(402), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1746] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    STATE(179), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1760] = 2,
    ACTIONS(280), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(282), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1770] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    STATE(87), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1784] = 2,
    ACTIONS(224), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(226), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1794] = 2,
    ACTIONS(288), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(290), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1804] = 2,
    ACTIONS(280), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(282), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1814] = 2,
    ACTIONS(406), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1824] = 2,
    ACTIONS(288), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(290), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1834] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    STATE(185), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1848] = 2,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(410), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1858] = 2,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(414), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1868] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    STATE(184), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1882] = 5,
    ACTIONS(376), 1,
      anon_sym_SYSTEM,
    ACTIONS(378), 1,
      anon_sym_PUBLIC,
    ACTIONS(418), 1,
      anon_sym_GT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_ExternalID,
  [1898] = 2,
    ACTIONS(224), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(226), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1908] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      sym_Name,
    STATE(178), 1,
      sym__cp,
    STATE(66), 2,
      sym__choice,
      sym__seq,
  [1922] = 1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1929] = 1,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1936] = 4,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(424), 1,
      sym_Name,
    ACTIONS(426), 1,
      anon_sym_SLASH_GT,
    STATE(234), 1,
      sym_Attribute,
  [1949] = 4,
    ACTIONS(424), 1,
      sym_Name,
    ACTIONS(428), 1,
      anon_sym_GT,
    ACTIONS(430), 1,
      anon_sym_SLASH_GT,
    STATE(234), 1,
      sym_Attribute,
  [1962] = 4,
    ACTIONS(432), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(59), 1,
      sym_element,
    STATE(111), 1,
      sym_EmptyElemTag,
  [1975] = 1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1982] = 1,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1989] = 4,
    ACTIONS(434), 1,
      sym__S,
    ACTIONS(436), 1,
      anon_sym_QMARK_GT,
    STATE(164), 1,
      sym__EncodingDecl,
    STATE(232), 1,
      sym__SDDecl,
  [2002] = 1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2009] = 4,
    ACTIONS(438), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      sym__S,
    ACTIONS(444), 1,
      sym_Name,
    STATE(114), 1,
      aux_sym_NotationType_repeat1,
  [2022] = 4,
    ACTIONS(446), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      sym__S,
    ACTIONS(450), 1,
      sym_Name,
    STATE(114), 1,
      aux_sym_NotationType_repeat1,
  [2035] = 4,
    ACTIONS(446), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      sym__S,
    ACTIONS(452), 1,
      sym_Name,
    STATE(114), 1,
      aux_sym_NotationType_repeat1,
  [2048] = 4,
    ACTIONS(446), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      sym__S,
    ACTIONS(452), 1,
      sym_Name,
    STATE(115), 1,
      aux_sym_NotationType_repeat1,
  [2061] = 4,
    ACTIONS(446), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      sym__S,
    ACTIONS(454), 1,
      sym_Name,
    STATE(116), 1,
      aux_sym_NotationType_repeat1,
  [2074] = 4,
    ACTIONS(456), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      sym__S,
    STATE(119), 1,
      aux_sym_Enumeration_repeat1,
  [2087] = 4,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      sym__S,
    STATE(119), 1,
      aux_sym_Enumeration_repeat1,
  [2100] = 2,
    ACTIONS(472), 1,
      anon_sym_LT,
    ACTIONS(470), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2109] = 4,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      sym__S,
    STATE(119), 1,
      aux_sym_Enumeration_repeat1,
  [2122] = 4,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Enumeration_repeat1,
  [2135] = 4,
    ACTIONS(424), 1,
      sym_Name,
    ACTIONS(428), 1,
      anon_sym_GT,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
    STATE(234), 1,
      sym_Attribute,
  [2148] = 4,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 1,
      sym__S,
    STATE(122), 1,
      aux_sym_Enumeration_repeat1,
  [2161] = 4,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      sym__S,
    STATE(126), 1,
      aux_sym__seq_repeat1,
  [2174] = 3,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      sym__S,
    STATE(52), 2,
      sym__DeclSep,
      sym_PEReference,
  [2185] = 4,
    ACTIONS(496), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      sym__S,
    STATE(128), 1,
      aux_sym__choice_repeat1,
  [2198] = 1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2205] = 4,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      sym__S,
    STATE(126), 1,
      aux_sym__seq_repeat1,
  [2218] = 4,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      sym__S,
    STATE(128), 1,
      aux_sym__choice_repeat1,
  [2231] = 4,
    ACTIONS(512), 1,
      anon_sym_PIPE,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      sym__S,
    STATE(133), 1,
      aux_sym_Mixed_repeat1,
  [2244] = 4,
    ACTIONS(518), 1,
      anon_sym_PIPE,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      sym__S,
    STATE(133), 1,
      aux_sym_Mixed_repeat1,
  [2257] = 4,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(526), 1,
      sym__S,
    ACTIONS(528), 1,
      sym_Name,
    STATE(189), 1,
      sym_PEReference,
  [2270] = 3,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(530), 1,
      sym__S,
    STATE(53), 2,
      sym__DeclSep,
      sym_PEReference,
  [2281] = 4,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      sym__S,
    STATE(126), 1,
      aux_sym__seq_repeat1,
  [2294] = 4,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      sym__S,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym__choice_repeat1,
  [2307] = 1,
    ACTIONS(534), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2314] = 2,
    ACTIONS(538), 1,
      anon_sym_LT,
    ACTIONS(536), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2323] = 4,
    ACTIONS(512), 1,
      anon_sym_PIPE,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym__S,
    STATE(132), 1,
      aux_sym_Mixed_repeat1,
  [2336] = 1,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2343] = 4,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(544), 1,
      sym__S,
    ACTIONS(546), 1,
      sym_Name,
    STATE(156), 1,
      sym_PEReference,
  [2356] = 2,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(548), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2365] = 2,
    ACTIONS(554), 1,
      anon_sym_LT,
    ACTIONS(552), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2374] = 3,
    ACTIONS(556), 1,
      anon_sym_GT,
    ACTIONS(558), 1,
      sym__S,
    STATE(145), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2385] = 2,
    ACTIONS(563), 1,
      anon_sym_LT,
    ACTIONS(561), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2394] = 3,
    ACTIONS(565), 1,
      anon_sym_GT,
    ACTIONS(567), 1,
      sym__S,
    STATE(145), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2405] = 4,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(424), 1,
      sym_Name,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
    STATE(234), 1,
      sym_Attribute,
  [2418] = 2,
    ACTIONS(573), 1,
      anon_sym_LT,
    ACTIONS(571), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2427] = 3,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      sym__S,
    STATE(147), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2438] = 3,
    ACTIONS(376), 1,
      anon_sym_SYSTEM,
    ACTIONS(579), 1,
      anon_sym_PUBLIC,
    STATE(224), 2,
      sym_ExternalID,
      sym_PublicID,
  [2449] = 4,
    ACTIONS(512), 1,
      anon_sym_PIPE,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      sym__S,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
  [2462] = 4,
    ACTIONS(512), 1,
      anon_sym_PIPE,
    ACTIONS(516), 1,
      sym__S,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_Mixed_repeat1,
  [2475] = 2,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(587), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2484] = 2,
    ACTIONS(593), 1,
      anon_sym_LT,
    ACTIONS(591), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2493] = 2,
    ACTIONS(595), 1,
      sym__S,
    ACTIONS(521), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2501] = 3,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
    STATE(263), 1,
      sym_PubidLiteral,
  [2511] = 3,
    ACTIONS(428), 1,
      anon_sym_GT,
    ACTIONS(602), 1,
      sym__S,
    STATE(192), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2521] = 3,
    ACTIONS(604), 1,
      anon_sym_GT,
    ACTIONS(606), 1,
      sym__S,
    STATE(158), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2531] = 3,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(272), 1,
      sym_AttValue,
  [2541] = 3,
    ACTIONS(604), 1,
      anon_sym_GT,
    ACTIONS(608), 1,
      sym__S,
    STATE(183), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2551] = 3,
    ACTIONS(610), 1,
      sym__S,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym__Eq,
  [2561] = 3,
    ACTIONS(614), 1,
      anon_sym_QMARK_GT,
    ACTIONS(616), 1,
      anon_sym_encoding,
    ACTIONS(618), 1,
      anon_sym_standalone,
  [2571] = 3,
    ACTIONS(614), 1,
      anon_sym_QMARK_GT,
    ACTIONS(620), 1,
      sym__S,
    STATE(246), 1,
      sym__SDDecl,
  [2581] = 3,
    ACTIONS(622), 1,
      anon_sym_GT,
    ACTIONS(624), 1,
      sym__S,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
  [2591] = 1,
    ACTIONS(628), 3,
      anon_sym_PIPE,
      sym__S,
      sym_Name,
  [2597] = 2,
    ACTIONS(630), 1,
      sym__S,
    ACTIONS(444), 2,
      anon_sym_PIPE,
      sym_Name,
  [2605] = 1,
    ACTIONS(444), 3,
      anon_sym_PIPE,
      sym__S,
      sym_Name,
  [2611] = 1,
    ACTIONS(633), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2617] = 2,
    ACTIONS(637), 1,
      sym__S,
    ACTIONS(635), 2,
      anon_sym_PIPE,
      sym_Name,
  [2625] = 3,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_SystemLiteral,
  [2635] = 1,
    ACTIONS(644), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2641] = 1,
    ACTIONS(646), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2647] = 3,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      sym_AttValue,
  [2657] = 3,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
    STATE(398), 1,
      sym_PubidLiteral,
  [2667] = 1,
    ACTIONS(648), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2673] = 1,
    ACTIONS(459), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2679] = 1,
    ACTIONS(650), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2685] = 1,
    ACTIONS(652), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2691] = 2,
    ACTIONS(656), 1,
      sym__S,
    ACTIONS(654), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2699] = 1,
    ACTIONS(654), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2705] = 3,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(196), 1,
      sym_SystemLiteral,
  [2715] = 3,
    ACTIONS(428), 1,
      anon_sym_GT,
    ACTIONS(659), 1,
      sym__S,
    STATE(192), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2725] = 1,
    ACTIONS(661), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2731] = 1,
    ACTIONS(663), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2737] = 3,
    ACTIONS(665), 1,
      anon_sym_GT,
    ACTIONS(667), 1,
      sym__S,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
  [2747] = 3,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(671), 1,
      sym_Name,
    STATE(180), 1,
      sym_PEReference,
  [2757] = 1,
    ACTIONS(673), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2763] = 2,
    ACTIONS(675), 1,
      sym__S,
    ACTIONS(673), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2771] = 1,
    ACTIONS(678), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2777] = 3,
    ACTIONS(610), 1,
      sym__S,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(215), 1,
      sym__Eq,
  [2787] = 3,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      sym__S,
    STATE(192), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2797] = 3,
    ACTIONS(610), 1,
      sym__S,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym__Eq,
  [2807] = 1,
    ACTIONS(685), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2813] = 3,
    ACTIONS(610), 1,
      sym__S,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym__Eq,
  [2823] = 1,
    ACTIONS(687), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_LBRACK,
  [2829] = 3,
    ACTIONS(689), 1,
      anon_sym_GT,
    ACTIONS(691), 1,
      sym__S,
    STATE(238), 1,
      sym_NDataDecl,
  [2839] = 2,
    ACTIONS(695), 1,
      anon_sym_STAR,
    ACTIONS(693), 2,
      anon_sym_GT,
      sym__S,
  [2847] = 2,
    ACTIONS(699), 1,
      anon_sym_STAR,
    ACTIONS(697), 2,
      anon_sym_GT,
      sym__S,
  [2855] = 1,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2861] = 2,
    ACTIONS(703), 1,
      sym__S,
    ACTIONS(701), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2869] = 2,
    ACTIONS(707), 1,
      sym__S,
    ACTIONS(705), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2877] = 1,
    ACTIONS(499), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2883] = 3,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(528), 1,
      sym_Name,
    STATE(189), 1,
      sym_PEReference,
  [2893] = 1,
    ACTIONS(709), 2,
      anon_sym_PERCENT,
      sym__S,
  [2898] = 1,
    ACTIONS(711), 2,
      anon_sym_PERCENT,
      sym__S,
  [2903] = 1,
    ACTIONS(713), 2,
      anon_sym_GT,
      sym__S,
  [2908] = 2,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
    ACTIONS(717), 1,
      aux_sym_PubidLiteral_token2,
  [2915] = 1,
    ACTIONS(719), 2,
      anon_sym_GT,
      sym__S,
  [2920] = 2,
    ACTIONS(721), 1,
      anon_sym_GT,
    ACTIONS(723), 1,
      sym__S,
  [2927] = 2,
    ACTIONS(725), 1,
      anon_sym_GT,
    ACTIONS(727), 1,
      sym__S,
  [2934] = 1,
    ACTIONS(729), 2,
      anon_sym_GT,
      sym__S,
  [2939] = 2,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
  [2946] = 2,
    ACTIONS(735), 1,
      anon_sym_GT,
    ACTIONS(737), 1,
      sym__S,
  [2953] = 2,
    ACTIONS(739), 1,
      anon_sym_DQUOTE,
    ACTIONS(741), 1,
      anon_sym_SQUOTE,
  [2960] = 1,
    ACTIONS(743), 2,
      anon_sym_PERCENT,
      sym__S,
  [2965] = 2,
    ACTIONS(745), 1,
      anon_sym_GT,
    ACTIONS(747), 1,
      sym__S,
  [2972] = 2,
    ACTIONS(749), 1,
      anon_sym_GT,
    ACTIONS(751), 1,
      sym_Name,
  [2979] = 2,
    ACTIONS(424), 1,
      sym_Name,
    STATE(234), 1,
      sym_Attribute,
  [2986] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(34), 1,
      sym_ETag,
  [2993] = 2,
    ACTIONS(753), 1,
      sym__S,
    ACTIONS(755), 1,
      anon_sym_QMARK_GT,
  [3000] = 2,
    ACTIONS(689), 1,
      anon_sym_GT,
    ACTIONS(757), 1,
      sym__S,
  [3007] = 2,
    ACTIONS(759), 1,
      sym__S,
    STATE(112), 1,
      sym__VersionInfo,
  [3014] = 2,
    ACTIONS(761), 1,
      anon_sym_GT,
    ACTIONS(763), 1,
      sym__S,
  [3021] = 1,
    ACTIONS(765), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3026] = 1,
    ACTIONS(705), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3031] = 2,
    ACTIONS(767), 1,
      sym__S,
    ACTIONS(769), 1,
      anon_sym_QMARK_GT,
  [3038] = 1,
    ACTIONS(771), 2,
      anon_sym_PERCENT,
      sym__S,
  [3043] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(129), 1,
      sym_ETag,
  [3050] = 1,
    ACTIONS(773), 2,
      anon_sym_GT,
      sym__S,
  [3055] = 1,
    ACTIONS(775), 2,
      anon_sym_PERCENT,
      sym__S,
  [3060] = 2,
    ACTIONS(614), 1,
      anon_sym_QMARK_GT,
    ACTIONS(777), 1,
      sym__S,
  [3067] = 1,
    ACTIONS(779), 2,
      anon_sym_GT,
      sym__S,
  [3072] = 1,
    ACTIONS(680), 2,
      anon_sym_GT,
      sym__S,
  [3077] = 1,
    ACTIONS(781), 2,
      anon_sym_PERCENT,
      sym__S,
  [3082] = 2,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      sym__S,
  [3089] = 2,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(789), 1,
      anon_sym_NDATA,
  [3096] = 2,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(791), 1,
      sym__S,
  [3103] = 1,
    ACTIONS(793), 2,
      anon_sym_PERCENT,
      sym__S,
  [3108] = 1,
    ACTIONS(795), 2,
      anon_sym_yes,
      anon_sym_no,
  [3113] = 2,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_PIPE,
  [3120] = 2,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      sym__S,
  [3127] = 2,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    ACTIONS(805), 1,
      aux_sym_SystemLiteral_token2,
  [3134] = 2,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 1,
      aux_sym_SystemLiteral_token1,
  [3141] = 1,
    ACTIONS(809), 2,
      anon_sym_GT,
      sym__S,
  [3146] = 2,
    ACTIONS(811), 1,
      sym__S,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
  [3153] = 2,
    ACTIONS(618), 1,
      anon_sym_standalone,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
  [3160] = 2,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    ACTIONS(817), 1,
      anon_sym_COMMA,
  [3167] = 1,
    ACTIONS(819), 2,
      anon_sym_yes,
      anon_sym_no,
  [3172] = 2,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(823), 1,
      sym__S,
  [3179] = 1,
    ACTIONS(825), 2,
      anon_sym_PERCENT,
      sym__S,
  [3184] = 2,
    ACTIONS(827), 1,
      sym__S,
    ACTIONS(829), 1,
      sym_Nmtoken,
  [3191] = 1,
    ACTIONS(831), 2,
      anon_sym_GT,
      sym__S,
  [3196] = 2,
    ACTIONS(833), 1,
      anon_sym_PIPE,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [3203] = 1,
    ACTIONS(837), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3208] = 1,
    ACTIONS(839), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3213] = 2,
    ACTIONS(841), 1,
      anon_sym_GT,
    ACTIONS(843), 1,
      sym__S,
  [3220] = 1,
    ACTIONS(845), 2,
      anon_sym_GT,
      sym__S,
  [3225] = 2,
    ACTIONS(847), 1,
      sym__S,
    ACTIONS(849), 1,
      sym_Nmtoken,
  [3232] = 1,
    ACTIONS(851), 2,
      anon_sym_PERCENT,
      sym__S,
  [3237] = 2,
    ACTIONS(853), 1,
      anon_sym_GT,
    ACTIONS(855), 1,
      anon_sym_LBRACK,
  [3244] = 2,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_PIPE,
  [3251] = 2,
    ACTIONS(857), 1,
      anon_sym_GT,
    ACTIONS(859), 1,
      sym__S,
  [3258] = 1,
    ACTIONS(861), 2,
      anon_sym_PERCENT,
      sym__S,
  [3263] = 1,
    ACTIONS(863), 2,
      anon_sym_PERCENT,
      sym__S,
  [3268] = 1,
    ACTIONS(697), 2,
      anon_sym_GT,
      sym__S,
  [3273] = 1,
    ACTIONS(865), 2,
      anon_sym_GT,
      sym__S,
  [3278] = 1,
    ACTIONS(867), 2,
      anon_sym_GT,
      sym__S,
  [3283] = 1,
    ACTIONS(869), 2,
      anon_sym_GT,
      sym__S,
  [3288] = 1,
    ACTIONS(871), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3293] = 2,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_PIPE,
  [3300] = 1,
    ACTIONS(873), 2,
      anon_sym_GT,
      sym__S,
  [3305] = 2,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
  [3312] = 1,
    ACTIONS(879), 2,
      anon_sym_PERCENT,
      sym__S,
  [3317] = 1,
    ACTIONS(881), 2,
      anon_sym_GT,
      sym__S,
  [3322] = 1,
    ACTIONS(883), 2,
      anon_sym_GT,
      sym__S,
  [3327] = 2,
    ACTIONS(885), 1,
      sym__S,
    ACTIONS(887), 1,
      sym_Name,
  [3334] = 2,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_PIPE,
  [3341] = 2,
    ACTIONS(889), 1,
      sym__S,
    ACTIONS(891), 1,
      sym_Nmtoken,
  [3348] = 2,
    ACTIONS(893), 1,
      anon_sym_PERCENT,
    ACTIONS(895), 1,
      sym_Name,
  [3355] = 2,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      sym__S,
  [3362] = 2,
    ACTIONS(853), 1,
      anon_sym_GT,
    ACTIONS(901), 1,
      sym__S,
  [3369] = 1,
    ACTIONS(903), 2,
      anon_sym_PERCENT,
      sym__S,
  [3374] = 1,
    ACTIONS(905), 2,
      anon_sym_GT,
      sym__S,
  [3379] = 2,
    ACTIONS(565), 1,
      anon_sym_GT,
    ACTIONS(751), 1,
      sym_Name,
  [3386] = 2,
    ACTIONS(907), 1,
      anon_sym_GT,
    ACTIONS(909), 1,
      sym__S,
  [3393] = 2,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    ACTIONS(911), 1,
      aux_sym_PubidLiteral_token1,
  [3400] = 1,
    ACTIONS(913), 2,
      anon_sym_PERCENT,
      sym__S,
  [3405] = 1,
    ACTIONS(915), 1,
      sym__S,
  [3409] = 1,
    ACTIONS(917), 1,
      anon_sym_GT,
  [3413] = 1,
    ACTIONS(919), 1,
      sym__S,
  [3417] = 1,
    ACTIONS(921), 1,
      sym_Name,
  [3421] = 1,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
  [3425] = 1,
    ACTIONS(925), 1,
      sym_Name,
  [3429] = 1,
    ACTIONS(927), 1,
      anon_sym_STAR,
  [3433] = 1,
    ACTIONS(929), 1,
      anon_sym_SEMI,
  [3437] = 1,
    ACTIONS(931), 1,
      anon_sym_SEMI,
  [3441] = 1,
    ACTIONS(933), 1,
      sym_Nmtoken,
  [3445] = 1,
    ACTIONS(817), 1,
      anon_sym_COMMA,
  [3449] = 1,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
  [3453] = 1,
    ACTIONS(937), 1,
      sym_Name,
  [3457] = 1,
    ACTIONS(939), 1,
      sym_Name,
  [3461] = 1,
    ACTIONS(815), 1,
      anon_sym_PIPE,
  [3465] = 1,
    ACTIONS(941), 1,
      sym__S,
  [3469] = 1,
    ACTIONS(943), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [3473] = 1,
    ACTIONS(945), 1,
      sym_Name,
  [3477] = 1,
    ACTIONS(947), 1,
      anon_sym_QMARK_GT,
  [3481] = 1,
    ACTIONS(949), 1,
      anon_sym_EQ,
  [3485] = 1,
    ACTIONS(951), 1,
      sym__S,
  [3489] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
  [3493] = 1,
    ACTIONS(955), 1,
      sym__S,
  [3497] = 1,
    ACTIONS(797), 1,
      anon_sym_PIPE,
  [3501] = 1,
    ACTIONS(897), 1,
      anon_sym_GT,
  [3505] = 1,
    ACTIONS(957), 1,
      anon_sym_SQUOTE,
  [3509] = 1,
    ACTIONS(699), 1,
      anon_sym_STAR,
  [3513] = 1,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
  [3517] = 1,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
  [3521] = 1,
    ACTIONS(961), 1,
      sym__S,
  [3525] = 1,
    ACTIONS(963), 1,
      anon_sym_GT,
  [3529] = 1,
    ACTIONS(965), 1,
      sym__S,
  [3533] = 1,
    ACTIONS(849), 1,
      sym_Nmtoken,
  [3537] = 1,
    ACTIONS(967), 1,
      anon_sym_SQUOTE,
  [3541] = 1,
    ACTIONS(969), 1,
      sym_Name,
  [3545] = 1,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
  [3549] = 1,
    ACTIONS(973), 1,
      sym_Name,
  [3553] = 1,
    ACTIONS(967), 1,
      anon_sym_DQUOTE,
  [3557] = 1,
    ACTIONS(975), 1,
      sym__S,
  [3561] = 1,
    ACTIONS(977), 1,
      sym__S,
  [3565] = 1,
    ACTIONS(787), 1,
      anon_sym_GT,
  [3569] = 1,
    ACTIONS(979), 1,
      sym__S,
  [3573] = 1,
    ACTIONS(981), 1,
      sym__S,
  [3577] = 1,
    ACTIONS(983), 1,
      sym_Nmtoken,
  [3581] = 1,
    ACTIONS(833), 1,
      anon_sym_PIPE,
  [3585] = 1,
    ACTIONS(985), 1,
      sym__S,
  [3589] = 1,
    ACTIONS(987), 1,
      sym__S,
  [3593] = 1,
    ACTIONS(989), 1,
      anon_sym_PIPE,
  [3597] = 1,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
  [3601] = 1,
    ACTIONS(991), 1,
      anon_sym_SQUOTE,
  [3605] = 1,
    ACTIONS(813), 1,
      anon_sym_QMARK_GT,
  [3609] = 1,
    ACTIONS(993), 1,
      sym__S,
  [3613] = 1,
    ACTIONS(995), 1,
      anon_sym_SEMI,
  [3617] = 1,
    ACTIONS(959), 1,
      anon_sym_SQUOTE,
  [3621] = 1,
    ACTIONS(997), 1,
      anon_sym_GT,
  [3625] = 1,
    ACTIONS(725), 1,
      anon_sym_GT,
  [3629] = 1,
    ACTIONS(999), 1,
      sym__S,
  [3633] = 1,
    ACTIONS(1001), 1,
      sym__S,
  [3637] = 1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
  [3641] = 1,
    ACTIONS(1003), 1,
      sym_EncName,
  [3645] = 1,
    ACTIONS(1005), 1,
      sym__S,
  [3649] = 1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [3653] = 1,
    ACTIONS(1007), 1,
      sym_Name,
  [3657] = 1,
    ACTIONS(1009), 1,
      sym__S,
  [3661] = 1,
    ACTIONS(1011), 1,
      sym__S,
  [3665] = 1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [3669] = 1,
    ACTIONS(1015), 1,
      sym__S,
  [3673] = 1,
    ACTIONS(1017), 1,
      sym__S,
  [3677] = 1,
    ACTIONS(751), 1,
      sym_Name,
  [3681] = 1,
    ACTIONS(1019), 1,
      sym__S,
  [3685] = 1,
    ACTIONS(1021), 1,
      sym__S,
  [3689] = 1,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
  [3693] = 1,
    ACTIONS(1025), 1,
      aux_sym_PI_token1,
  [3697] = 1,
    ACTIONS(1027), 1,
      anon_sym_GT,
  [3701] = 1,
    ACTIONS(1029), 1,
      sym_EncName,
  [3705] = 1,
    ACTIONS(1031), 1,
      sym_CData,
  [3709] = 1,
    ACTIONS(1033), 1,
      sym_Name,
  [3713] = 1,
    ACTIONS(1035), 1,
      aux_sym_CharRef_token2,
  [3717] = 1,
    ACTIONS(1035), 1,
      aux_sym_CharRef_token1,
  [3721] = 1,
    ACTIONS(1037), 1,
      sym_Name,
  [3725] = 1,
    ACTIONS(1039), 1,
      sym__S,
  [3729] = 1,
    ACTIONS(1041), 1,
      sym_Name,
  [3733] = 1,
    ACTIONS(1043), 1,
      anon_sym_SQUOTE,
  [3737] = 1,
    ACTIONS(1045), 1,
      anon_sym_version,
  [3741] = 1,
    ACTIONS(1047), 1,
      anon_sym_GT,
  [3745] = 1,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
  [3749] = 1,
    ACTIONS(1049), 1,
      anon_sym_GT,
  [3753] = 1,
    ACTIONS(1051), 1,
      ts_builtin_sym_end,
  [3757] = 1,
    ACTIONS(1053), 1,
      sym_Name,
  [3761] = 1,
    ACTIONS(1055), 1,
      sym__S,
  [3765] = 1,
    ACTIONS(1057), 1,
      sym__S,
  [3769] = 1,
    ACTIONS(1059), 1,
      sym_VersionNum,
  [3773] = 1,
    ACTIONS(1061), 1,
      sym_VersionNum,
  [3777] = 1,
    ACTIONS(1063), 1,
      sym__S,
  [3781] = 1,
    ACTIONS(1065), 1,
      anon_sym_SEMI,
  [3785] = 1,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
  [3789] = 1,
    ACTIONS(1069), 1,
      sym__S,
  [3793] = 1,
    ACTIONS(1071), 1,
      anon_sym_QMARK_GT,
  [3797] = 1,
    ACTIONS(721), 1,
      anon_sym_GT,
  [3801] = 1,
    ACTIONS(1073), 1,
      anon_sym_GT,
  [3805] = 1,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
  [3809] = 1,
    ACTIONS(1077), 1,
      anon_sym_SEMI,
  [3813] = 1,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
  [3817] = 1,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
  [3821] = 1,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
  [3825] = 1,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
  [3829] = 1,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
  [3833] = 1,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
  [3837] = 1,
    ACTIONS(1091), 1,
      sym_Name,
  [3841] = 1,
    ACTIONS(859), 1,
      sym__S,
  [3845] = 1,
    ACTIONS(1093), 1,
      sym_Name,
  [3849] = 1,
    ACTIONS(1095), 1,
      aux_sym_CharRef_token1,
  [3853] = 1,
    ACTIONS(1095), 1,
      aux_sym_CharRef_token2,
  [3857] = 1,
    ACTIONS(1097), 1,
      sym_Name,
  [3861] = 1,
    ACTIONS(1099), 1,
      aux_sym_PI_token1,
  [3865] = 1,
    ACTIONS(1101), 1,
      anon_sym_QMARK_GT,
  [3869] = 1,
    ACTIONS(1103), 1,
      sym_Name,
  [3873] = 1,
    ACTIONS(1105), 1,
      sym_Name,
  [3877] = 1,
    ACTIONS(1107), 1,
      aux_sym_CharRef_token1,
  [3881] = 1,
    ACTIONS(1107), 1,
      aux_sym_CharRef_token2,
  [3885] = 1,
    ACTIONS(1109), 1,
      sym_Name,
  [3889] = 1,
    ACTIONS(1111), 1,
      sym_Name,
  [3893] = 1,
    ACTIONS(1113), 1,
      aux_sym_CharRef_token1,
  [3897] = 1,
    ACTIONS(1113), 1,
      aux_sym_CharRef_token2,
  [3901] = 1,
    ACTIONS(1115), 1,
      sym_Name,
  [3905] = 1,
    ACTIONS(1117), 1,
      aux_sym_CharRef_token1,
  [3909] = 1,
    ACTIONS(1117), 1,
      aux_sym_CharRef_token2,
  [3913] = 1,
    ACTIONS(1119), 1,
      sym_Name,
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
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 505,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 561,
  [SMALL_STATE(17)] = 589,
  [SMALL_STATE(18)] = 617,
  [SMALL_STATE(19)] = 645,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 686,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 732,
  [SMALL_STATE(25)] = 756,
  [SMALL_STATE(26)] = 770,
  [SMALL_STATE(27)] = 784,
  [SMALL_STATE(28)] = 798,
  [SMALL_STATE(29)] = 812,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 850,
  [SMALL_STATE(32)] = 864,
  [SMALL_STATE(33)] = 888,
  [SMALL_STATE(34)] = 908,
  [SMALL_STATE(35)] = 922,
  [SMALL_STATE(36)] = 944,
  [SMALL_STATE(37)] = 958,
  [SMALL_STATE(38)] = 982,
  [SMALL_STATE(39)] = 996,
  [SMALL_STATE(40)] = 1010,
  [SMALL_STATE(41)] = 1024,
  [SMALL_STATE(42)] = 1038,
  [SMALL_STATE(43)] = 1052,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1090,
  [SMALL_STATE(46)] = 1109,
  [SMALL_STATE(47)] = 1120,
  [SMALL_STATE(48)] = 1141,
  [SMALL_STATE(49)] = 1152,
  [SMALL_STATE(50)] = 1171,
  [SMALL_STATE(51)] = 1182,
  [SMALL_STATE(52)] = 1193,
  [SMALL_STATE(53)] = 1204,
  [SMALL_STATE(54)] = 1215,
  [SMALL_STATE(55)] = 1226,
  [SMALL_STATE(56)] = 1238,
  [SMALL_STATE(57)] = 1254,
  [SMALL_STATE(58)] = 1270,
  [SMALL_STATE(59)] = 1286,
  [SMALL_STATE(60)] = 1302,
  [SMALL_STATE(61)] = 1318,
  [SMALL_STATE(62)] = 1334,
  [SMALL_STATE(63)] = 1350,
  [SMALL_STATE(64)] = 1370,
  [SMALL_STATE(65)] = 1382,
  [SMALL_STATE(66)] = 1398,
  [SMALL_STATE(67)] = 1410,
  [SMALL_STATE(68)] = 1430,
  [SMALL_STATE(69)] = 1446,
  [SMALL_STATE(70)] = 1462,
  [SMALL_STATE(71)] = 1479,
  [SMALL_STATE(72)] = 1496,
  [SMALL_STATE(73)] = 1513,
  [SMALL_STATE(74)] = 1530,
  [SMALL_STATE(75)] = 1549,
  [SMALL_STATE(76)] = 1560,
  [SMALL_STATE(77)] = 1571,
  [SMALL_STATE(78)] = 1588,
  [SMALL_STATE(79)] = 1599,
  [SMALL_STATE(80)] = 1610,
  [SMALL_STATE(81)] = 1621,
  [SMALL_STATE(82)] = 1632,
  [SMALL_STATE(83)] = 1643,
  [SMALL_STATE(84)] = 1654,
  [SMALL_STATE(85)] = 1671,
  [SMALL_STATE(86)] = 1688,
  [SMALL_STATE(87)] = 1707,
  [SMALL_STATE(88)] = 1726,
  [SMALL_STATE(89)] = 1736,
  [SMALL_STATE(90)] = 1746,
  [SMALL_STATE(91)] = 1760,
  [SMALL_STATE(92)] = 1770,
  [SMALL_STATE(93)] = 1784,
  [SMALL_STATE(94)] = 1794,
  [SMALL_STATE(95)] = 1804,
  [SMALL_STATE(96)] = 1814,
  [SMALL_STATE(97)] = 1824,
  [SMALL_STATE(98)] = 1834,
  [SMALL_STATE(99)] = 1848,
  [SMALL_STATE(100)] = 1858,
  [SMALL_STATE(101)] = 1868,
  [SMALL_STATE(102)] = 1882,
  [SMALL_STATE(103)] = 1898,
  [SMALL_STATE(104)] = 1908,
  [SMALL_STATE(105)] = 1922,
  [SMALL_STATE(106)] = 1929,
  [SMALL_STATE(107)] = 1936,
  [SMALL_STATE(108)] = 1949,
  [SMALL_STATE(109)] = 1962,
  [SMALL_STATE(110)] = 1975,
  [SMALL_STATE(111)] = 1982,
  [SMALL_STATE(112)] = 1989,
  [SMALL_STATE(113)] = 2002,
  [SMALL_STATE(114)] = 2009,
  [SMALL_STATE(115)] = 2022,
  [SMALL_STATE(116)] = 2035,
  [SMALL_STATE(117)] = 2048,
  [SMALL_STATE(118)] = 2061,
  [SMALL_STATE(119)] = 2074,
  [SMALL_STATE(120)] = 2087,
  [SMALL_STATE(121)] = 2100,
  [SMALL_STATE(122)] = 2109,
  [SMALL_STATE(123)] = 2122,
  [SMALL_STATE(124)] = 2135,
  [SMALL_STATE(125)] = 2148,
  [SMALL_STATE(126)] = 2161,
  [SMALL_STATE(127)] = 2174,
  [SMALL_STATE(128)] = 2185,
  [SMALL_STATE(129)] = 2198,
  [SMALL_STATE(130)] = 2205,
  [SMALL_STATE(131)] = 2218,
  [SMALL_STATE(132)] = 2231,
  [SMALL_STATE(133)] = 2244,
  [SMALL_STATE(134)] = 2257,
  [SMALL_STATE(135)] = 2270,
  [SMALL_STATE(136)] = 2281,
  [SMALL_STATE(137)] = 2294,
  [SMALL_STATE(138)] = 2307,
  [SMALL_STATE(139)] = 2314,
  [SMALL_STATE(140)] = 2323,
  [SMALL_STATE(141)] = 2336,
  [SMALL_STATE(142)] = 2343,
  [SMALL_STATE(143)] = 2356,
  [SMALL_STATE(144)] = 2365,
  [SMALL_STATE(145)] = 2374,
  [SMALL_STATE(146)] = 2385,
  [SMALL_STATE(147)] = 2394,
  [SMALL_STATE(148)] = 2405,
  [SMALL_STATE(149)] = 2418,
  [SMALL_STATE(150)] = 2427,
  [SMALL_STATE(151)] = 2438,
  [SMALL_STATE(152)] = 2449,
  [SMALL_STATE(153)] = 2462,
  [SMALL_STATE(154)] = 2475,
  [SMALL_STATE(155)] = 2484,
  [SMALL_STATE(156)] = 2493,
  [SMALL_STATE(157)] = 2501,
  [SMALL_STATE(158)] = 2511,
  [SMALL_STATE(159)] = 2521,
  [SMALL_STATE(160)] = 2531,
  [SMALL_STATE(161)] = 2541,
  [SMALL_STATE(162)] = 2551,
  [SMALL_STATE(163)] = 2561,
  [SMALL_STATE(164)] = 2571,
  [SMALL_STATE(165)] = 2581,
  [SMALL_STATE(166)] = 2591,
  [SMALL_STATE(167)] = 2597,
  [SMALL_STATE(168)] = 2605,
  [SMALL_STATE(169)] = 2611,
  [SMALL_STATE(170)] = 2617,
  [SMALL_STATE(171)] = 2625,
  [SMALL_STATE(172)] = 2635,
  [SMALL_STATE(173)] = 2641,
  [SMALL_STATE(174)] = 2647,
  [SMALL_STATE(175)] = 2657,
  [SMALL_STATE(176)] = 2667,
  [SMALL_STATE(177)] = 2673,
  [SMALL_STATE(178)] = 2679,
  [SMALL_STATE(179)] = 2685,
  [SMALL_STATE(180)] = 2691,
  [SMALL_STATE(181)] = 2699,
  [SMALL_STATE(182)] = 2705,
  [SMALL_STATE(183)] = 2715,
  [SMALL_STATE(184)] = 2725,
  [SMALL_STATE(185)] = 2731,
  [SMALL_STATE(186)] = 2737,
  [SMALL_STATE(187)] = 2747,
  [SMALL_STATE(188)] = 2757,
  [SMALL_STATE(189)] = 2763,
  [SMALL_STATE(190)] = 2771,
  [SMALL_STATE(191)] = 2777,
  [SMALL_STATE(192)] = 2787,
  [SMALL_STATE(193)] = 2797,
  [SMALL_STATE(194)] = 2807,
  [SMALL_STATE(195)] = 2813,
  [SMALL_STATE(196)] = 2823,
  [SMALL_STATE(197)] = 2829,
  [SMALL_STATE(198)] = 2839,
  [SMALL_STATE(199)] = 2847,
  [SMALL_STATE(200)] = 2855,
  [SMALL_STATE(201)] = 2861,
  [SMALL_STATE(202)] = 2869,
  [SMALL_STATE(203)] = 2877,
  [SMALL_STATE(204)] = 2883,
  [SMALL_STATE(205)] = 2893,
  [SMALL_STATE(206)] = 2898,
  [SMALL_STATE(207)] = 2903,
  [SMALL_STATE(208)] = 2908,
  [SMALL_STATE(209)] = 2915,
  [SMALL_STATE(210)] = 2920,
  [SMALL_STATE(211)] = 2927,
  [SMALL_STATE(212)] = 2934,
  [SMALL_STATE(213)] = 2939,
  [SMALL_STATE(214)] = 2946,
  [SMALL_STATE(215)] = 2953,
  [SMALL_STATE(216)] = 2960,
  [SMALL_STATE(217)] = 2965,
  [SMALL_STATE(218)] = 2972,
  [SMALL_STATE(219)] = 2979,
  [SMALL_STATE(220)] = 2986,
  [SMALL_STATE(221)] = 2993,
  [SMALL_STATE(222)] = 3000,
  [SMALL_STATE(223)] = 3007,
  [SMALL_STATE(224)] = 3014,
  [SMALL_STATE(225)] = 3021,
  [SMALL_STATE(226)] = 3026,
  [SMALL_STATE(227)] = 3031,
  [SMALL_STATE(228)] = 3038,
  [SMALL_STATE(229)] = 3043,
  [SMALL_STATE(230)] = 3050,
  [SMALL_STATE(231)] = 3055,
  [SMALL_STATE(232)] = 3060,
  [SMALL_STATE(233)] = 3067,
  [SMALL_STATE(234)] = 3072,
  [SMALL_STATE(235)] = 3077,
  [SMALL_STATE(236)] = 3082,
  [SMALL_STATE(237)] = 3089,
  [SMALL_STATE(238)] = 3096,
  [SMALL_STATE(239)] = 3103,
  [SMALL_STATE(240)] = 3108,
  [SMALL_STATE(241)] = 3113,
  [SMALL_STATE(242)] = 3120,
  [SMALL_STATE(243)] = 3127,
  [SMALL_STATE(244)] = 3134,
  [SMALL_STATE(245)] = 3141,
  [SMALL_STATE(246)] = 3146,
  [SMALL_STATE(247)] = 3153,
  [SMALL_STATE(248)] = 3160,
  [SMALL_STATE(249)] = 3167,
  [SMALL_STATE(250)] = 3172,
  [SMALL_STATE(251)] = 3179,
  [SMALL_STATE(252)] = 3184,
  [SMALL_STATE(253)] = 3191,
  [SMALL_STATE(254)] = 3196,
  [SMALL_STATE(255)] = 3203,
  [SMALL_STATE(256)] = 3208,
  [SMALL_STATE(257)] = 3213,
  [SMALL_STATE(258)] = 3220,
  [SMALL_STATE(259)] = 3225,
  [SMALL_STATE(260)] = 3232,
  [SMALL_STATE(261)] = 3237,
  [SMALL_STATE(262)] = 3244,
  [SMALL_STATE(263)] = 3251,
  [SMALL_STATE(264)] = 3258,
  [SMALL_STATE(265)] = 3263,
  [SMALL_STATE(266)] = 3268,
  [SMALL_STATE(267)] = 3273,
  [SMALL_STATE(268)] = 3278,
  [SMALL_STATE(269)] = 3283,
  [SMALL_STATE(270)] = 3288,
  [SMALL_STATE(271)] = 3293,
  [SMALL_STATE(272)] = 3300,
  [SMALL_STATE(273)] = 3305,
  [SMALL_STATE(274)] = 3312,
  [SMALL_STATE(275)] = 3317,
  [SMALL_STATE(276)] = 3322,
  [SMALL_STATE(277)] = 3327,
  [SMALL_STATE(278)] = 3334,
  [SMALL_STATE(279)] = 3341,
  [SMALL_STATE(280)] = 3348,
  [SMALL_STATE(281)] = 3355,
  [SMALL_STATE(282)] = 3362,
  [SMALL_STATE(283)] = 3369,
  [SMALL_STATE(284)] = 3374,
  [SMALL_STATE(285)] = 3379,
  [SMALL_STATE(286)] = 3386,
  [SMALL_STATE(287)] = 3393,
  [SMALL_STATE(288)] = 3400,
  [SMALL_STATE(289)] = 3405,
  [SMALL_STATE(290)] = 3409,
  [SMALL_STATE(291)] = 3413,
  [SMALL_STATE(292)] = 3417,
  [SMALL_STATE(293)] = 3421,
  [SMALL_STATE(294)] = 3425,
  [SMALL_STATE(295)] = 3429,
  [SMALL_STATE(296)] = 3433,
  [SMALL_STATE(297)] = 3437,
  [SMALL_STATE(298)] = 3441,
  [SMALL_STATE(299)] = 3445,
  [SMALL_STATE(300)] = 3449,
  [SMALL_STATE(301)] = 3453,
  [SMALL_STATE(302)] = 3457,
  [SMALL_STATE(303)] = 3461,
  [SMALL_STATE(304)] = 3465,
  [SMALL_STATE(305)] = 3469,
  [SMALL_STATE(306)] = 3473,
  [SMALL_STATE(307)] = 3477,
  [SMALL_STATE(308)] = 3481,
  [SMALL_STATE(309)] = 3485,
  [SMALL_STATE(310)] = 3489,
  [SMALL_STATE(311)] = 3493,
  [SMALL_STATE(312)] = 3497,
  [SMALL_STATE(313)] = 3501,
  [SMALL_STATE(314)] = 3505,
  [SMALL_STATE(315)] = 3509,
  [SMALL_STATE(316)] = 3513,
  [SMALL_STATE(317)] = 3517,
  [SMALL_STATE(318)] = 3521,
  [SMALL_STATE(319)] = 3525,
  [SMALL_STATE(320)] = 3529,
  [SMALL_STATE(321)] = 3533,
  [SMALL_STATE(322)] = 3537,
  [SMALL_STATE(323)] = 3541,
  [SMALL_STATE(324)] = 3545,
  [SMALL_STATE(325)] = 3549,
  [SMALL_STATE(326)] = 3553,
  [SMALL_STATE(327)] = 3557,
  [SMALL_STATE(328)] = 3561,
  [SMALL_STATE(329)] = 3565,
  [SMALL_STATE(330)] = 3569,
  [SMALL_STATE(331)] = 3573,
  [SMALL_STATE(332)] = 3577,
  [SMALL_STATE(333)] = 3581,
  [SMALL_STATE(334)] = 3585,
  [SMALL_STATE(335)] = 3589,
  [SMALL_STATE(336)] = 3593,
  [SMALL_STATE(337)] = 3597,
  [SMALL_STATE(338)] = 3601,
  [SMALL_STATE(339)] = 3605,
  [SMALL_STATE(340)] = 3609,
  [SMALL_STATE(341)] = 3613,
  [SMALL_STATE(342)] = 3617,
  [SMALL_STATE(343)] = 3621,
  [SMALL_STATE(344)] = 3625,
  [SMALL_STATE(345)] = 3629,
  [SMALL_STATE(346)] = 3633,
  [SMALL_STATE(347)] = 3637,
  [SMALL_STATE(348)] = 3641,
  [SMALL_STATE(349)] = 3645,
  [SMALL_STATE(350)] = 3649,
  [SMALL_STATE(351)] = 3653,
  [SMALL_STATE(352)] = 3657,
  [SMALL_STATE(353)] = 3661,
  [SMALL_STATE(354)] = 3665,
  [SMALL_STATE(355)] = 3669,
  [SMALL_STATE(356)] = 3673,
  [SMALL_STATE(357)] = 3677,
  [SMALL_STATE(358)] = 3681,
  [SMALL_STATE(359)] = 3685,
  [SMALL_STATE(360)] = 3689,
  [SMALL_STATE(361)] = 3693,
  [SMALL_STATE(362)] = 3697,
  [SMALL_STATE(363)] = 3701,
  [SMALL_STATE(364)] = 3705,
  [SMALL_STATE(365)] = 3709,
  [SMALL_STATE(366)] = 3713,
  [SMALL_STATE(367)] = 3717,
  [SMALL_STATE(368)] = 3721,
  [SMALL_STATE(369)] = 3725,
  [SMALL_STATE(370)] = 3729,
  [SMALL_STATE(371)] = 3733,
  [SMALL_STATE(372)] = 3737,
  [SMALL_STATE(373)] = 3741,
  [SMALL_STATE(374)] = 3745,
  [SMALL_STATE(375)] = 3749,
  [SMALL_STATE(376)] = 3753,
  [SMALL_STATE(377)] = 3757,
  [SMALL_STATE(378)] = 3761,
  [SMALL_STATE(379)] = 3765,
  [SMALL_STATE(380)] = 3769,
  [SMALL_STATE(381)] = 3773,
  [SMALL_STATE(382)] = 3777,
  [SMALL_STATE(383)] = 3781,
  [SMALL_STATE(384)] = 3785,
  [SMALL_STATE(385)] = 3789,
  [SMALL_STATE(386)] = 3793,
  [SMALL_STATE(387)] = 3797,
  [SMALL_STATE(388)] = 3801,
  [SMALL_STATE(389)] = 3805,
  [SMALL_STATE(390)] = 3809,
  [SMALL_STATE(391)] = 3813,
  [SMALL_STATE(392)] = 3817,
  [SMALL_STATE(393)] = 3821,
  [SMALL_STATE(394)] = 3825,
  [SMALL_STATE(395)] = 3829,
  [SMALL_STATE(396)] = 3833,
  [SMALL_STATE(397)] = 3837,
  [SMALL_STATE(398)] = 3841,
  [SMALL_STATE(399)] = 3845,
  [SMALL_STATE(400)] = 3849,
  [SMALL_STATE(401)] = 3853,
  [SMALL_STATE(402)] = 3857,
  [SMALL_STATE(403)] = 3861,
  [SMALL_STATE(404)] = 3865,
  [SMALL_STATE(405)] = 3869,
  [SMALL_STATE(406)] = 3873,
  [SMALL_STATE(407)] = 3877,
  [SMALL_STATE(408)] = 3881,
  [SMALL_STATE(409)] = 3885,
  [SMALL_STATE(410)] = 3889,
  [SMALL_STATE(411)] = 3893,
  [SMALL_STATE(412)] = 3897,
  [SMALL_STATE(413)] = 3901,
  [SMALL_STATE(414)] = 3905,
  [SMALL_STATE(415)] = 3909,
  [SMALL_STATE(416)] = 3913,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(368),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(367),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(366),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(397),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(416),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(364),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intSubset, 1),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(331),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(334),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(345),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(369),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(323),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2), SHIFT_REPEAT(274),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(405),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(13),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(410),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(411),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(412),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(409),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(18),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(413),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(414),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(415),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(399),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(400),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(401),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(23),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(406),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(407),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(408),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(24),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(323),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intSubset_repeat1, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(170),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(336),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(279),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(333),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(84),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(299),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(71),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(303),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(142),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(312),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(357),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(188),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(166),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(168),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(173),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(181),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(219),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttDef, 6),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1051] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
