#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 424
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 1
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_standalone = 61,
  anon_sym_yes = 62,
  anon_sym_no = 63,
  anon_sym_LT_BANGDOCTYPE = 64,
  anon_sym_RBRACK = 65,
  anon_sym_LT = 66,
  anon_sym_SLASH_GT = 67,
  anon_sym_LT_SLASH = 68,
  sym_CharData = 69,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 70,
  sym_CData = 71,
  sym_document = 72,
  sym__markupdecl = 73,
  sym__DeclSep = 74,
  sym_elementdecl = 75,
  sym_contentspec = 76,
  sym_Mixed = 77,
  sym_children = 78,
  sym__cp = 79,
  sym__choice = 80,
  sym__seq = 81,
  sym_AttlistDecl = 82,
  sym_AttDef = 83,
  sym__AttType = 84,
  sym__EnumeratedType = 85,
  sym_NotationType = 86,
  sym_Enumeration = 87,
  sym_DefaultDecl = 88,
  sym__EntityDecl = 89,
  sym_GEDecl = 90,
  sym_PEDecl = 91,
  sym_EntityValue = 92,
  sym_NDataDecl = 93,
  sym_NotationDecl = 94,
  sym_PEReference = 95,
  sym__Reference = 96,
  sym_EntityRef = 97,
  sym_CharRef = 98,
  sym_AttValue = 99,
  sym_ExternalID = 100,
  sym_PublicID = 101,
  sym_SystemLiteral = 102,
  sym_PubidLiteral = 103,
  sym_XMLDecl = 104,
  sym__VersionInfo = 105,
  sym__EncodingDecl = 106,
  sym_PI = 107,
  sym__Eq = 108,
  sym_prolog = 109,
  sym__Misc = 110,
  sym__SDDecl = 111,
  sym_doctypedecl = 112,
  aux_sym__intSubset = 113,
  sym_element = 114,
  sym_EmptyElemTag = 115,
  sym_Attribute = 116,
  sym_STag = 117,
  sym_ETag = 118,
  sym_content = 119,
  sym_CDSect = 120,
  aux_sym_document_repeat1 = 121,
  aux_sym_Mixed_repeat1 = 122,
  aux_sym__choice_repeat1 = 123,
  aux_sym__seq_repeat1 = 124,
  aux_sym_AttlistDecl_repeat1 = 125,
  aux_sym_NotationType_repeat1 = 126,
  aux_sym_Enumeration_repeat1 = 127,
  aux_sym_EntityValue_repeat1 = 128,
  aux_sym_EntityValue_repeat2 = 129,
  aux_sym_AttValue_repeat1 = 130,
  aux_sym_AttValue_repeat2 = 131,
  aux_sym_EmptyElemTag_repeat1 = 132,
  aux_sym_content_repeat1 = 133,
  alias_sym_PITarget = 134,
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
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_LT_BANGDOCTYPE] = "<!DOCTYPE",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "<![CDATA[",
  [sym_CData] = "CData",
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
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym_PI] = "PI",
  [sym__Eq] = "_Eq",
  [sym_prolog] = "prolog",
  [sym__Misc] = "_Misc",
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
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_LT_BANGDOCTYPE] = anon_sym_LT_BANGDOCTYPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CharData] = sym_CharData,
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [sym_CData] = sym_CData,
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
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym_PI] = sym_PI,
  [sym__Eq] = sym__Eq,
  [sym_prolog] = sym_prolog,
  [sym__Misc] = sym__Misc,
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
  [sym_CData] = {
    .visible = true,
    .named = true,
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
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym__Misc] = {
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
  [74] = 49,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 38,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 45,
  [86] = 86,
  [87] = 46,
  [88] = 88,
  [89] = 89,
  [90] = 45,
  [91] = 91,
  [92] = 92,
  [93] = 9,
  [94] = 94,
  [95] = 9,
  [96] = 34,
  [97] = 46,
  [98] = 98,
  [99] = 99,
  [100] = 34,
  [101] = 101,
  [102] = 46,
  [103] = 103,
  [104] = 45,
  [105] = 46,
  [106] = 34,
  [107] = 45,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 34,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 48,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 35,
  [129] = 124,
  [130] = 130,
  [131] = 131,
  [132] = 37,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 123,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 28,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 118,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 47,
  [154] = 41,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 50,
  [161] = 161,
  [162] = 119,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 44,
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
  [237] = 234,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 231,
  [247] = 230,
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
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 384,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 375,
  [394] = 374,
  [395] = 395,
  [396] = 371,
  [397] = 397,
  [398] = 369,
  [399] = 325,
  [400] = 375,
  [401] = 374,
  [402] = 325,
  [403] = 375,
  [404] = 374,
  [405] = 375,
  [406] = 374,
  [407] = 392,
  [408] = 383,
  [409] = 382,
  [410] = 381,
  [411] = 380,
  [412] = 377,
  [413] = 332,
  [414] = 383,
  [415] = 382,
  [416] = 381,
  [417] = 332,
  [418] = 383,
  [419] = 382,
  [420] = 381,
  [421] = 383,
  [422] = 382,
  [423] = 381,
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
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(114);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(106);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(106);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(136);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == '[') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '[') ADVANCE(27);
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
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'Q') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'X') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'Y') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'Y') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == '[') ADVANCE(164);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 80:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 83:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(165);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(116);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(16);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(145);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(161);
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead != 0) ADVANCE(165);
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
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'Y') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'Y') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'Y') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'F') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'K') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'Y') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 86},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 86},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 160},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 160},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 160},
  [47] = {.lex_state = 160},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 86},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 86},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 86},
  [60] = {.lex_state = 86},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 86},
  [63] = {.lex_state = 86},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 86},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 86},
  [68] = {.lex_state = 86},
  [69] = {.lex_state = 86},
  [70] = {.lex_state = 86},
  [71] = {.lex_state = 86},
  [72] = {.lex_state = 86},
  [73] = {.lex_state = 86},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 86},
  [76] = {.lex_state = 86},
  [77] = {.lex_state = 86},
  [78] = {.lex_state = 86},
  [79] = {.lex_state = 86},
  [80] = {.lex_state = 86},
  [81] = {.lex_state = 86},
  [82] = {.lex_state = 86},
  [83] = {.lex_state = 86},
  [84] = {.lex_state = 86},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 86},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 86},
  [89] = {.lex_state = 86},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 86},
  [92] = {.lex_state = 86},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 86},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 86},
  [99] = {.lex_state = 86},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 86},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 86},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 86},
  [109] = {.lex_state = 86},
  [110] = {.lex_state = 86},
  [111] = {.lex_state = 86},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 86},
  [114] = {.lex_state = 86},
  [115] = {.lex_state = 86},
  [116] = {.lex_state = 86},
  [117] = {.lex_state = 86},
  [118] = {.lex_state = 86},
  [119] = {.lex_state = 86},
  [120] = {.lex_state = 86},
  [121] = {.lex_state = 86},
  [122] = {.lex_state = 86},
  [123] = {.lex_state = 86},
  [124] = {.lex_state = 86},
  [125] = {.lex_state = 86},
  [126] = {.lex_state = 86},
  [127] = {.lex_state = 86},
  [128] = {.lex_state = 86},
  [129] = {.lex_state = 86},
  [130] = {.lex_state = 86},
  [131] = {.lex_state = 86},
  [132] = {.lex_state = 86},
  [133] = {.lex_state = 86},
  [134] = {.lex_state = 86},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 86},
  [137] = {.lex_state = 86},
  [138] = {.lex_state = 86},
  [139] = {.lex_state = 86},
  [140] = {.lex_state = 86},
  [141] = {.lex_state = 86},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 86},
  [144] = {.lex_state = 86},
  [145] = {.lex_state = 86},
  [146] = {.lex_state = 86},
  [147] = {.lex_state = 86},
  [148] = {.lex_state = 86},
  [149] = {.lex_state = 86},
  [150] = {.lex_state = 86},
  [151] = {.lex_state = 86},
  [152] = {.lex_state = 86},
  [153] = {.lex_state = 86},
  [154] = {.lex_state = 86},
  [155] = {.lex_state = 86},
  [156] = {.lex_state = 86},
  [157] = {.lex_state = 86},
  [158] = {.lex_state = 86},
  [159] = {.lex_state = 86},
  [160] = {.lex_state = 86},
  [161] = {.lex_state = 86},
  [162] = {.lex_state = 86},
  [163] = {.lex_state = 86},
  [164] = {.lex_state = 86},
  [165] = {.lex_state = 86},
  [166] = {.lex_state = 86},
  [167] = {.lex_state = 86},
  [168] = {.lex_state = 86},
  [169] = {.lex_state = 86},
  [170] = {.lex_state = 86},
  [171] = {.lex_state = 86},
  [172] = {.lex_state = 86},
  [173] = {.lex_state = 86},
  [174] = {.lex_state = 86},
  [175] = {.lex_state = 86},
  [176] = {.lex_state = 86},
  [177] = {.lex_state = 86},
  [178] = {.lex_state = 86},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 86},
  [181] = {.lex_state = 86},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 86},
  [184] = {.lex_state = 86},
  [185] = {.lex_state = 86},
  [186] = {.lex_state = 86},
  [187] = {.lex_state = 86},
  [188] = {.lex_state = 86},
  [189] = {.lex_state = 86},
  [190] = {.lex_state = 86},
  [191] = {.lex_state = 86},
  [192] = {.lex_state = 86},
  [193] = {.lex_state = 86},
  [194] = {.lex_state = 86},
  [195] = {.lex_state = 86},
  [196] = {.lex_state = 86},
  [197] = {.lex_state = 86},
  [198] = {.lex_state = 86},
  [199] = {.lex_state = 86},
  [200] = {.lex_state = 86},
  [201] = {.lex_state = 86},
  [202] = {.lex_state = 86},
  [203] = {.lex_state = 86},
  [204] = {.lex_state = 86},
  [205] = {.lex_state = 86},
  [206] = {.lex_state = 86},
  [207] = {.lex_state = 86},
  [208] = {.lex_state = 86},
  [209] = {.lex_state = 86},
  [210] = {.lex_state = 86},
  [211] = {.lex_state = 86},
  [212] = {.lex_state = 86},
  [213] = {.lex_state = 86},
  [214] = {.lex_state = 86},
  [215] = {.lex_state = 86},
  [216] = {.lex_state = 86},
  [217] = {.lex_state = 86},
  [218] = {.lex_state = 86},
  [219] = {.lex_state = 86},
  [220] = {.lex_state = 86},
  [221] = {.lex_state = 86},
  [222] = {.lex_state = 86},
  [223] = {.lex_state = 86},
  [224] = {.lex_state = 86},
  [225] = {.lex_state = 86},
  [226] = {.lex_state = 86},
  [227] = {.lex_state = 86},
  [228] = {.lex_state = 86},
  [229] = {.lex_state = 86},
  [230] = {.lex_state = 86},
  [231] = {.lex_state = 86},
  [232] = {.lex_state = 86},
  [233] = {.lex_state = 86},
  [234] = {.lex_state = 19},
  [235] = {.lex_state = 86},
  [236] = {.lex_state = 86},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 86},
  [239] = {.lex_state = 86},
  [240] = {.lex_state = 86},
  [241] = {.lex_state = 86},
  [242] = {.lex_state = 86},
  [243] = {.lex_state = 86},
  [244] = {.lex_state = 86},
  [245] = {.lex_state = 86},
  [246] = {.lex_state = 86},
  [247] = {.lex_state = 86},
  [248] = {.lex_state = 86},
  [249] = {.lex_state = 86},
  [250] = {.lex_state = 86},
  [251] = {.lex_state = 80},
  [252] = {.lex_state = 86},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 86},
  [255] = {.lex_state = 86},
  [256] = {.lex_state = 86},
  [257] = {.lex_state = 86},
  [258] = {.lex_state = 86},
  [259] = {.lex_state = 86},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 86},
  [263] = {.lex_state = 86},
  [264] = {.lex_state = 86},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 86},
  [267] = {.lex_state = 86},
  [268] = {.lex_state = 86},
  [269] = {.lex_state = 86},
  [270] = {.lex_state = 86},
  [271] = {.lex_state = 86},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 86},
  [274] = {.lex_state = 19},
  [275] = {.lex_state = 86},
  [276] = {.lex_state = 86},
  [277] = {.lex_state = 86},
  [278] = {.lex_state = 86},
  [279] = {.lex_state = 86},
  [280] = {.lex_state = 86},
  [281] = {.lex_state = 86},
  [282] = {.lex_state = 86},
  [283] = {.lex_state = 86},
  [284] = {.lex_state = 86},
  [285] = {.lex_state = 86},
  [286] = {.lex_state = 86},
  [287] = {.lex_state = 86},
  [288] = {.lex_state = 86},
  [289] = {.lex_state = 86},
  [290] = {.lex_state = 86},
  [291] = {.lex_state = 86},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 86},
  [294] = {.lex_state = 86},
  [295] = {.lex_state = 80},
  [296] = {.lex_state = 86},
  [297] = {.lex_state = 143},
  [298] = {.lex_state = 141},
  [299] = {.lex_state = 139},
  [300] = {.lex_state = 86},
  [301] = {.lex_state = 86},
  [302] = {.lex_state = 137},
  [303] = {.lex_state = 86},
  [304] = {.lex_state = 86},
  [305] = {.lex_state = 86},
  [306] = {.lex_state = 86},
  [307] = {.lex_state = 86},
  [308] = {.lex_state = 86},
  [309] = {.lex_state = 80},
  [310] = {.lex_state = 86},
  [311] = {.lex_state = 86},
  [312] = {.lex_state = 86},
  [313] = {.lex_state = 86},
  [314] = {.lex_state = 86},
  [315] = {.lex_state = 86},
  [316] = {.lex_state = 86},
  [317] = {.lex_state = 86},
  [318] = {.lex_state = 86},
  [319] = {.lex_state = 86},
  [320] = {.lex_state = 83},
  [321] = {.lex_state = 86},
  [322] = {.lex_state = 86},
  [323] = {.lex_state = 86},
  [324] = {.lex_state = 86},
  [325] = {.lex_state = 86},
  [326] = {.lex_state = 86},
  [327] = {.lex_state = 80},
  [328] = {.lex_state = 86},
  [329] = {.lex_state = 86},
  [330] = {.lex_state = 86},
  [331] = {.lex_state = 86},
  [332] = {.lex_state = 86},
  [333] = {.lex_state = 19},
  [334] = {.lex_state = 86},
  [335] = {.lex_state = 86},
  [336] = {.lex_state = 80},
  [337] = {.lex_state = 86},
  [338] = {.lex_state = 80},
  [339] = {.lex_state = 86},
  [340] = {.lex_state = 86},
  [341] = {.lex_state = 86},
  [342] = {.lex_state = 86},
  [343] = {.lex_state = 86},
  [344] = {.lex_state = 86},
  [345] = {.lex_state = 86},
  [346] = {.lex_state = 86},
  [347] = {.lex_state = 86},
  [348] = {.lex_state = 86},
  [349] = {.lex_state = 86},
  [350] = {.lex_state = 86},
  [351] = {.lex_state = 86},
  [352] = {.lex_state = 86},
  [353] = {.lex_state = 86},
  [354] = {.lex_state = 86},
  [355] = {.lex_state = 86},
  [356] = {.lex_state = 86},
  [357] = {.lex_state = 86},
  [358] = {.lex_state = 86},
  [359] = {.lex_state = 83},
  [360] = {.lex_state = 86},
  [361] = {.lex_state = 86},
  [362] = {.lex_state = 86},
  [363] = {.lex_state = 86},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 86},
  [366] = {.lex_state = 86},
  [367] = {.lex_state = 86},
  [368] = {.lex_state = 86},
  [369] = {.lex_state = 86},
  [370] = {.lex_state = 86},
  [371] = {.lex_state = 19},
  [372] = {.lex_state = 86},
  [373] = {.lex_state = 86},
  [374] = {.lex_state = 86},
  [375] = {.lex_state = 86},
  [376] = {.lex_state = 86},
  [377] = {.lex_state = 149},
  [378] = {.lex_state = 86},
  [379] = {.lex_state = 165},
  [380] = {.lex_state = 86},
  [381] = {.lex_state = 82},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 86},
  [384] = {.lex_state = 86},
  [385] = {.lex_state = 86},
  [386] = {.lex_state = 86},
  [387] = {.lex_state = 86},
  [388] = {.lex_state = 86},
  [389] = {.lex_state = 86},
  [390] = {.lex_state = 86},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 86},
  [393] = {.lex_state = 86},
  [394] = {.lex_state = 86},
  [395] = {.lex_state = 86},
  [396] = {.lex_state = 19},
  [397] = {.lex_state = 86},
  [398] = {.lex_state = 86},
  [399] = {.lex_state = 86},
  [400] = {.lex_state = 86},
  [401] = {.lex_state = 86},
  [402] = {.lex_state = 86},
  [403] = {.lex_state = 86},
  [404] = {.lex_state = 86},
  [405] = {.lex_state = 86},
  [406] = {.lex_state = 86},
  [407] = {.lex_state = 86},
  [408] = {.lex_state = 86},
  [409] = {.lex_state = 5},
  [410] = {.lex_state = 82},
  [411] = {.lex_state = 86},
  [412] = {.lex_state = 149},
  [413] = {.lex_state = 86},
  [414] = {.lex_state = 86},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 82},
  [417] = {.lex_state = 86},
  [418] = {.lex_state = 86},
  [419] = {.lex_state = 5},
  [420] = {.lex_state = 82},
  [421] = {.lex_state = 86},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 82},
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
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(391),
    [sym_XMLDecl] = STATE(31),
    [sym_PI] = STATE(17),
    [sym_prolog] = STATE(24),
    [sym__Misc] = STATE(17),
    [sym_doctypedecl] = STATE(127),
    [sym_element] = STATE(78),
    [sym_EmptyElemTag] = STATE(128),
    [sym_STag] = STATE(3),
    [aux_sym_document_repeat1] = STATE(17),
    [sym__S] = ACTIONS(3),
    [anon_sym_LT_QMARK] = ACTIONS(5),
    [sym_Comment] = ACTIONS(3),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(13), 1,
      anon_sym_AMP_POUND,
    ACTIONS(15), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_CharData,
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(2), 1,
      sym_STag,
    STATE(35), 1,
      sym_EmptyElemTag,
    STATE(37), 1,
      sym_ETag,
    STATE(231), 1,
      sym_content,
    STATE(34), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [51] = 15,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(13), 1,
      anon_sym_AMP_POUND,
    ACTIONS(15), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      sym_Comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_CharData,
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_STag,
    STATE(35), 1,
      sym_EmptyElemTag,
    STATE(132), 1,
      sym_ETag,
    STATE(246), 1,
      sym_content,
    STATE(34), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [102] = 13,
    ACTIONS(31), 1,
      anon_sym_AMP,
    ACTIONS(34), 1,
      anon_sym_AMP_POUND,
    ACTIONS(37), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(40), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      sym_Comment,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      sym_CharData,
    ACTIONS(54), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(2), 1,
      sym_STag,
    STATE(35), 1,
      sym_EmptyElemTag,
    STATE(34), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [147] = 13,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(13), 1,
      anon_sym_AMP_POUND,
    ACTIONS(15), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(57), 1,
      sym_Comment,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    ACTIONS(61), 1,
      sym_CharData,
    STATE(2), 1,
      sym_STag,
    STATE(35), 1,
      sym_EmptyElemTag,
    STATE(34), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [192] = 12,
    ACTIONS(63), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(66), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(69), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(72), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(75), 1,
      sym__S,
    ACTIONS(78), 1,
      anon_sym_LT_QMARK,
    ACTIONS(81), 1,
      sym_Comment,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [234] = 12,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [276] = 12,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [318] = 1,
    ACTIONS(104), 17,
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
  [338] = 12,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [380] = 12,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [422] = 11,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [461] = 11,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [500] = 11,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [539] = 11,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(94), 1,
      sym__S,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(141), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [578] = 9,
    ACTIONS(86), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(88), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(90), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(92), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(98), 1,
      sym_Comment,
    STATE(117), 1,
      sym__markupdecl,
    STATE(280), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(279), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [611] = 9,
    ACTIONS(7), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(75), 1,
      sym_element,
    STATE(128), 1,
      sym_EmptyElemTag,
    STATE(130), 1,
      sym_doctypedecl,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [642] = 8,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_AMP_POUND,
    ACTIONS(122), 1,
      anon_sym_AMP_POUNDx,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [670] = 8,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(132), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      anon_sym_AMP_POUND,
    ACTIONS(138), 1,
      anon_sym_AMP_POUNDx,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [698] = 8,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_AMP_POUND,
    ACTIONS(149), 1,
      anon_sym_AMP_POUNDx,
    STATE(96), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [726] = 8,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_AMP_POUND,
    ACTIONS(122), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      aux_sym_EntityValue_token2,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [754] = 8,
    ACTIONS(155), 1,
      anon_sym_PERCENT,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_POUND,
    ACTIONS(169), 1,
      anon_sym_AMP_POUNDx,
    STATE(96), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [782] = 8,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_AMP_POUND,
    ACTIONS(149), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      aux_sym_EntityValue_token1,
    STATE(96), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(20), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [810] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(75), 1,
      sym_element,
    STATE(128), 1,
      sym_EmptyElemTag,
    ACTIONS(174), 2,
      sym__S,
      sym_Comment,
    STATE(26), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [835] = 6,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    STATE(268), 1,
      sym_contentspec,
    ACTIONS(176), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(109), 2,
      sym__choice,
      sym__seq,
    STATE(264), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [858] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    STATE(3), 1,
      sym_STag,
    STATE(71), 1,
      sym_element,
    STATE(128), 1,
      sym_EmptyElemTag,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [883] = 7,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_NOTATION,
    STATE(254), 1,
      sym__AttType,
    ACTIONS(184), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(252), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(255), 2,
      sym_NotationType,
      sym_Enumeration,
  [908] = 2,
    ACTIONS(188), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(190), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [922] = 2,
    ACTIONS(192), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(194), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [936] = 2,
    ACTIONS(196), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(198), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [950] = 6,
    ACTIONS(7), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(202), 1,
      anon_sym_LT,
    STATE(130), 1,
      sym_doctypedecl,
    ACTIONS(200), 2,
      sym__S,
      sym_Comment,
    STATE(60), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [972] = 7,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(208), 1,
      anon_sym_AMP_POUND,
    ACTIONS(210), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(212), 1,
      aux_sym_AttValue_token1,
    STATE(39), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [996] = 7,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_AMP_POUND,
    ACTIONS(218), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(220), 1,
      aux_sym_AttValue_token2,
    STATE(40), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(106), 2,
      sym_EntityRef,
      sym_CharRef,
  [1020] = 2,
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
  [1034] = 2,
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
  [1048] = 5,
    ACTIONS(235), 1,
      anon_sym_LT_QMARK,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(232), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1068] = 2,
    ACTIONS(240), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(242), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1082] = 2,
    ACTIONS(244), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(246), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1096] = 7,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(208), 1,
      anon_sym_AMP_POUND,
    ACTIONS(210), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_AttValue_token1,
    STATE(53), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1120] = 7,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_AMP_POUND,
    ACTIONS(218), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      aux_sym_AttValue_token2,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(106), 2,
      sym_EntityRef,
      sym_CharRef,
  [1144] = 2,
    ACTIONS(254), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(256), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1158] = 2,
    ACTIONS(258), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(260), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1172] = 2,
    ACTIONS(262), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(264), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1186] = 2,
    ACTIONS(266), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(268), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1200] = 2,
    ACTIONS(270), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(272), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1214] = 2,
    ACTIONS(274), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(276), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1228] = 2,
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
  [1242] = 2,
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
  [1256] = 2,
    ACTIONS(286), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(288), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1270] = 2,
    ACTIONS(290), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(292), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1284] = 8,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(300), 1,
      sym__S,
    STATE(61), 1,
      sym_PEReference,
    STATE(86), 1,
      sym__cp,
    STATE(76), 2,
      sym__choice,
      sym__seq,
  [1310] = 7,
    ACTIONS(302), 1,
      anon_sym_SQUOTE,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(307), 1,
      anon_sym_AMP_POUND,
    ACTIONS(310), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(313), 1,
      aux_sym_AttValue_token2,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(106), 2,
      sym_EntityRef,
      sym_CharRef,
  [1334] = 7,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_AMP,
    ACTIONS(321), 1,
      anon_sym_AMP_POUND,
    ACTIONS(324), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(327), 1,
      aux_sym_AttValue_token1,
    STATE(53), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1358] = 1,
    ACTIONS(330), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1369] = 7,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_POUNDPCDATA,
    STATE(62), 1,
      sym_PEReference,
    STATE(91), 1,
      sym__cp,
    STATE(76), 2,
      sym__choice,
      sym__seq,
  [1392] = 1,
    ACTIONS(334), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1403] = 1,
    ACTIONS(336), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1414] = 1,
    ACTIONS(84), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1425] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym__S,
    STATE(218), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1446] = 5,
    ACTIONS(7), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    STATE(115), 1,
      sym_doctypedecl,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1465] = 6,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(344), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1486] = 6,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      sym__S,
    STATE(171), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(344), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1507] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__S,
    STATE(207), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1528] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym__S,
    STATE(190), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1549] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym__S,
    STATE(208), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1570] = 1,
    ACTIONS(360), 8,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [1581] = 1,
    ACTIONS(362), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1592] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym__S,
    STATE(86), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1613] = 1,
    ACTIONS(366), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [1624] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1642] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 2,
      sym__S,
      sym_Comment,
    STATE(79), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1658] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1674] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1692] = 2,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1704] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 2,
      sym__S,
      sym_Comment,
    STATE(72), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1720] = 2,
    ACTIONS(344), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(346), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1732] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1750] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 2,
      sym__S,
      sym_Comment,
    STATE(83), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1766] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1782] = 2,
    ACTIONS(244), 1,
      anon_sym_LT,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [1794] = 6,
    ACTIONS(386), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_AttValue,
    STATE(315), 1,
      sym_DefaultDecl,
    ACTIONS(384), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1814] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1832] = 4,
    ACTIONS(96), 1,
      anon_sym_LT_QMARK,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [1848] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(294), 1,
      sym_Name,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym__cp,
    STATE(76), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [1866] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(272), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1877] = 6,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      sym__S,
    STATE(116), 1,
      aux_sym__choice_repeat1,
    STATE(150), 1,
      aux_sym__seq_repeat1,
  [1896] = 2,
    ACTIONS(274), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(276), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1907] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(402), 1,
      sym_Name,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym__S,
    STATE(89), 1,
      aux_sym_NotationType_repeat1,
    STATE(281), 1,
      sym_PEReference,
  [1926] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym__S,
    ACTIONS(408), 1,
      sym_Name,
    STATE(103), 1,
      aux_sym_NotationType_repeat1,
    STATE(271), 1,
      sym_PEReference,
  [1945] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(272), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1956] = 6,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      sym__S,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym__choice_repeat1,
    STATE(174), 1,
      aux_sym__seq_repeat1,
  [1975] = 6,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_SYSTEM,
    ACTIONS(418), 1,
      anon_sym_PUBLIC,
    STATE(197), 1,
      sym_ExternalID,
    STATE(229), 1,
      sym_EntityValue,
  [1994] = 2,
    ACTIONS(420), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(104), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2005] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(402), 1,
      sym_Name,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_NotationType_repeat1,
    STATE(281), 1,
      sym_PEReference,
  [2024] = 2,
    ACTIONS(420), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(104), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2035] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2046] = 2,
    ACTIONS(274), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(276), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2057] = 5,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_SYSTEM,
    ACTIONS(422), 1,
      anon_sym_PUBLIC,
    STATE(395), 1,
      sym_PEReference,
    STATE(232), 2,
      sym_ExternalID,
      sym_PublicID,
  [2074] = 5,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_SYSTEM,
    ACTIONS(418), 1,
      anon_sym_PUBLIC,
    STATE(256), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2091] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2102] = 6,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym__S,
    ACTIONS(424), 1,
      sym_Name,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    STATE(286), 1,
      sym_PEReference,
  [2121] = 2,
    ACTIONS(274), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(276), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2131] = 4,
    ACTIONS(428), 1,
      anon_sym_PIPE,
    ACTIONS(431), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(426), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2145] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(272), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2155] = 2,
    ACTIONS(274), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(276), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2165] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2175] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(272), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2185] = 2,
    ACTIONS(436), 1,
      anon_sym_LT,
    ACTIONS(434), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2195] = 2,
    ACTIONS(438), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2205] = 2,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(442), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2215] = 5,
    ACTIONS(416), 1,
      anon_sym_SYSTEM,
    ACTIONS(418), 1,
      anon_sym_PUBLIC,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_GT,
    STATE(175), 1,
      sym_ExternalID,
  [2231] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2241] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(450), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2251] = 2,
    ACTIONS(456), 1,
      anon_sym_LT,
    ACTIONS(454), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_BANGDOCTYPE,
  [2261] = 2,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(458), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2270] = 4,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      sym__S,
    STATE(158), 1,
      aux_sym__choice_repeat1,
  [2283] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(466), 1,
      sym__S,
    STATE(66), 2,
      sym__DeclSep,
      sym_PEReference,
  [2294] = 4,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(470), 1,
      sym__S,
    ACTIONS(472), 1,
      anon_sym_SLASH_GT,
    STATE(161), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2307] = 4,
    ACTIONS(474), 1,
      sym_Name,
    ACTIONS(476), 1,
      anon_sym_GT,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
    STATE(185), 1,
      sym_Attribute,
  [2320] = 4,
    ACTIONS(480), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Enumeration_repeat1,
  [2333] = 2,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(488), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2342] = 1,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2349] = 4,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(472), 1,
      anon_sym_SLASH_GT,
    ACTIONS(474), 1,
      sym_Name,
    STATE(185), 1,
      sym_Attribute,
  [2362] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(495), 1,
      sym__S,
    ACTIONS(497), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2375] = 1,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2382] = 2,
    ACTIONS(503), 1,
      anon_sym_LT,
    ACTIONS(501), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2391] = 2,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(505), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2400] = 1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2407] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      sym__S,
    ACTIONS(509), 1,
      anon_sym_SLASH_GT,
    STATE(148), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2420] = 2,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(511), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2429] = 4,
    ACTIONS(515), 1,
      anon_sym_PIPE,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Enumeration_repeat1,
  [2442] = 1,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2449] = 4,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      sym__S,
    STATE(171), 1,
      aux_sym_Mixed_repeat1,
  [2462] = 4,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      sym__S,
    STATE(168), 1,
      aux_sym_Mixed_repeat1,
  [2475] = 4,
    ACTIONS(525), 1,
      sym__S,
    ACTIONS(527), 1,
      anon_sym_QMARK_GT,
    STATE(179), 1,
      sym__EncodingDecl,
    STATE(253), 1,
      sym__SDDecl,
  [2488] = 4,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(529), 1,
      sym_Name,
    ACTIONS(531), 1,
      sym__S,
    STATE(101), 1,
      sym_PEReference,
  [2501] = 4,
    ACTIONS(515), 1,
      anon_sym_PIPE,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(535), 1,
      sym__S,
    STATE(120), 1,
      aux_sym_Enumeration_repeat1,
  [2514] = 4,
    ACTIONS(515), 1,
      anon_sym_PIPE,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(535), 1,
      sym__S,
    STATE(131), 1,
      aux_sym_Enumeration_repeat1,
  [2527] = 3,
    ACTIONS(537), 1,
      anon_sym_GT,
    ACTIONS(539), 1,
      sym__S,
    STATE(164), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2538] = 4,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(474), 1,
      sym_Name,
    ACTIONS(541), 1,
      anon_sym_SLASH_GT,
    STATE(185), 1,
      sym_Attribute,
  [2551] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(543), 1,
      sym__S,
    STATE(58), 2,
      sym__DeclSep,
      sym_PEReference,
  [2562] = 4,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_Mixed_repeat1,
  [2575] = 1,
    ACTIONS(426), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2582] = 1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2589] = 2,
    ACTIONS(547), 1,
      anon_sym_LT,
    ACTIONS(545), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2598] = 2,
    ACTIONS(549), 1,
      sym__S,
    ACTIONS(426), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2607] = 4,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      sym_Name,
    ACTIONS(554), 1,
      sym__S,
    STATE(201), 1,
      sym_PEReference,
  [2620] = 4,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(541), 1,
      anon_sym_SLASH_GT,
    ACTIONS(556), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2633] = 2,
    ACTIONS(560), 1,
      anon_sym_LT,
    ACTIONS(558), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2642] = 4,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(562), 1,
      sym__S,
    STATE(157), 1,
      aux_sym__seq_repeat1,
  [2655] = 2,
    ACTIONS(566), 1,
      anon_sym_LT,
    ACTIONS(564), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2664] = 1,
    ACTIONS(568), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2671] = 1,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2678] = 1,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2685] = 3,
    ACTIONS(570), 1,
      anon_sym_GT,
    ACTIONS(572), 1,
      sym__S,
    STATE(155), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2696] = 4,
    ACTIONS(515), 1,
      anon_sym_PIPE,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(577), 1,
      sym__S,
    STATE(137), 1,
      aux_sym_Enumeration_repeat1,
  [2709] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__S,
    STATE(157), 1,
      aux_sym__seq_repeat1,
  [2722] = 4,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      sym__S,
    STATE(158), 1,
      aux_sym__choice_repeat1,
  [2735] = 4,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(595), 1,
      sym_Name,
    ACTIONS(597), 1,
      anon_sym_GT,
    STATE(366), 1,
      sym_PEReference,
  [2748] = 1,
    ACTIONS(292), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2755] = 3,
    ACTIONS(601), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2766] = 4,
    ACTIONS(474), 1,
      sym_Name,
    ACTIONS(476), 1,
      anon_sym_GT,
    ACTIONS(604), 1,
      anon_sym_SLASH_GT,
    STATE(185), 1,
      sym_Attribute,
  [2779] = 2,
    ACTIONS(608), 1,
      anon_sym_LT,
    ACTIONS(606), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2788] = 3,
    ACTIONS(610), 1,
      anon_sym_GT,
    ACTIONS(612), 1,
      sym__S,
    STATE(155), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2799] = 2,
    ACTIONS(616), 1,
      anon_sym_LT,
    ACTIONS(614), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2808] = 4,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(618), 1,
      sym_Name,
    ACTIONS(620), 1,
      sym__S,
    STATE(187), 1,
      sym_PEReference,
  [2821] = 1,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2828] = 4,
    ACTIONS(622), 1,
      anon_sym_PIPE,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(627), 1,
      sym__S,
    STATE(168), 1,
      aux_sym_Mixed_repeat1,
  [2841] = 4,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(595), 1,
      sym_Name,
    ACTIONS(610), 1,
      anon_sym_GT,
    STATE(366), 1,
      sym_PEReference,
  [2854] = 2,
    ACTIONS(632), 1,
      anon_sym_LT,
    ACTIONS(630), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2863] = 4,
    ACTIONS(340), 1,
      anon_sym_PIPE,
    ACTIONS(523), 1,
      sym__S,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_Mixed_repeat1,
  [2876] = 4,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      sym__S,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym__choice_repeat1,
  [2889] = 2,
    ACTIONS(640), 1,
      anon_sym_LT,
    ACTIONS(638), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2898] = 4,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      sym__S,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym__seq_repeat1,
  [2911] = 3,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      sym__S,
  [2921] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(595), 1,
      sym_Name,
    STATE(366), 1,
      sym_PEReference,
  [2931] = 3,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym_SystemLiteral,
  [2941] = 1,
    ACTIONS(654), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [2947] = 3,
    ACTIONS(656), 1,
      sym__S,
    ACTIONS(658), 1,
      anon_sym_QMARK_GT,
    STATE(265), 1,
      sym__SDDecl,
  [2957] = 1,
    ACTIONS(660), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [2963] = 3,
    ACTIONS(662), 1,
      sym_Name,
    ACTIONS(664), 1,
      anon_sym_PERCENT,
    STATE(322), 1,
      sym_PEReference,
  [2973] = 3,
    ACTIONS(658), 1,
      anon_sym_QMARK_GT,
    ACTIONS(666), 1,
      anon_sym_encoding,
    ACTIONS(668), 1,
      anon_sym_standalone,
  [2983] = 2,
    ACTIONS(672), 1,
      anon_sym_STAR,
    ACTIONS(670), 2,
      anon_sym_GT,
      sym__S,
  [2991] = 3,
    ACTIONS(674), 1,
      sym__S,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym__Eq,
  [3001] = 1,
    ACTIONS(599), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3007] = 3,
    ACTIONS(674), 1,
      sym__S,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(259), 1,
      sym__Eq,
  [3017] = 2,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(678), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3025] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(683), 1,
      sym_Name,
    STATE(139), 1,
      sym_PEReference,
  [3035] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(618), 1,
      sym_Name,
    STATE(187), 1,
      sym_PEReference,
  [3045] = 1,
    ACTIONS(579), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3051] = 2,
    ACTIONS(687), 1,
      sym__S,
    ACTIONS(685), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3059] = 3,
    ACTIONS(674), 1,
      sym__S,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym__Eq,
  [3069] = 3,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      sym_PubidLiteral,
  [3079] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(693), 1,
      sym_Name,
    STATE(321), 1,
      sym_PEReference,
  [3089] = 1,
    ACTIONS(695), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3095] = 3,
    ACTIONS(674), 1,
      sym__S,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym__Eq,
  [3105] = 3,
    ACTIONS(697), 1,
      anon_sym_GT,
    ACTIONS(699), 1,
      sym__S,
    STATE(244), 1,
      sym_NDataDecl,
  [3115] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(701), 1,
      sym_Name,
    STATE(324), 1,
      sym_PEReference,
  [3125] = 3,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    STATE(261), 1,
      sym_PubidLiteral,
  [3135] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(703), 1,
      sym_Name,
    STATE(228), 1,
      sym_PEReference,
  [3145] = 2,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(625), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3153] = 1,
    ACTIONS(708), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3159] = 1,
    ACTIONS(678), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3165] = 1,
    ACTIONS(710), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3171] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(712), 1,
      sym_Name,
    STATE(214), 1,
      sym_PEReference,
  [3181] = 2,
    ACTIONS(716), 1,
      anon_sym_STAR,
    ACTIONS(714), 2,
      anon_sym_GT,
      sym__S,
  [3189] = 1,
    ACTIONS(718), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3195] = 1,
    ACTIONS(720), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3201] = 2,
    ACTIONS(724), 1,
      sym__S,
    ACTIONS(722), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3209] = 3,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    ACTIONS(728), 1,
      anon_sym_GT,
    ACTIONS(730), 1,
      sym__S,
  [3219] = 1,
    ACTIONS(732), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3225] = 3,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    STATE(284), 1,
      sym_AttValue,
  [3235] = 1,
    ACTIONS(734), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3241] = 2,
    ACTIONS(736), 1,
      sym__S,
    ACTIONS(732), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3249] = 1,
    ACTIONS(739), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3255] = 1,
    ACTIONS(741), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3261] = 1,
    ACTIONS(743), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3267] = 1,
    ACTIONS(590), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3273] = 1,
    ACTIONS(745), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3279] = 1,
    ACTIONS(747), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3285] = 1,
    ACTIONS(749), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3291] = 1,
    ACTIONS(483), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3297] = 3,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      sym_AttValue,
  [3307] = 3,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    STATE(330), 1,
      sym_PubidLiteral,
  [3317] = 3,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym_SystemLiteral,
  [3327] = 3,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(751), 1,
      sym_Name,
    STATE(88), 1,
      sym_PEReference,
  [3337] = 2,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    ACTIONS(755), 1,
      anon_sym_SQUOTE,
  [3344] = 1,
    ACTIONS(757), 2,
      anon_sym_GT,
      sym__S,
  [3349] = 2,
    ACTIONS(697), 1,
      anon_sym_GT,
    ACTIONS(759), 1,
      sym__S,
  [3356] = 2,
    ACTIONS(761), 1,
      anon_sym_GT,
    ACTIONS(763), 1,
      sym__S,
  [3363] = 2,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(41), 1,
      sym_ETag,
  [3370] = 2,
    ACTIONS(765), 1,
      anon_sym_GT,
    ACTIONS(767), 1,
      sym__S,
  [3377] = 1,
    ACTIONS(769), 2,
      anon_sym_GT,
      sym__S,
  [3382] = 2,
    ACTIONS(771), 1,
      sym__S,
    ACTIONS(773), 1,
      anon_sym_QMARK_GT,
  [3389] = 2,
    ACTIONS(775), 1,
      anon_sym_GT,
    ACTIONS(777), 1,
      sym__S,
  [3396] = 1,
    ACTIONS(779), 2,
      anon_sym_PERCENT,
      sym__S,
  [3401] = 2,
    ACTIONS(781), 1,
      sym__S,
    ACTIONS(783), 1,
      anon_sym_QMARK_GT,
  [3408] = 1,
    ACTIONS(785), 2,
      anon_sym_GT,
      sym__S,
  [3413] = 1,
    ACTIONS(787), 2,
      anon_sym_PERCENT,
      sym__S,
  [3418] = 1,
    ACTIONS(789), 2,
      anon_sym_GT,
      sym__S,
  [3423] = 1,
    ACTIONS(791), 2,
      anon_sym_PERCENT,
      sym__S,
  [3428] = 2,
    ACTIONS(793), 1,
      sym__S,
    STATE(135), 1,
      sym__VersionInfo,
  [3435] = 2,
    ACTIONS(795), 1,
      anon_sym_GT,
    ACTIONS(797), 1,
      anon_sym_NDATA,
  [3442] = 2,
    ACTIONS(795), 1,
      anon_sym_GT,
    ACTIONS(799), 1,
      sym__S,
  [3449] = 1,
    ACTIONS(801), 2,
      anon_sym_PERCENT,
      sym__S,
  [3454] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(154), 1,
      sym_ETag,
  [3461] = 2,
    ACTIONS(803), 1,
      anon_sym_GT,
    ACTIONS(805), 1,
      sym__S,
  [3468] = 2,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_PIPE,
  [3475] = 2,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    ACTIONS(811), 1,
      anon_sym_COMMA,
  [3482] = 1,
    ACTIONS(813), 2,
      anon_sym_PERCENT,
      sym__S,
  [3487] = 2,
    ACTIONS(815), 1,
      sym__S,
    ACTIONS(817), 1,
      sym_Nmtoken,
  [3494] = 1,
    ACTIONS(819), 2,
      anon_sym_GT,
      sym__S,
  [3499] = 2,
    ACTIONS(658), 1,
      anon_sym_QMARK_GT,
    ACTIONS(821), 1,
      sym__S,
  [3506] = 2,
    ACTIONS(823), 1,
      anon_sym_GT,
    ACTIONS(825), 1,
      sym__S,
  [3513] = 1,
    ACTIONS(827), 2,
      anon_sym_GT,
      sym__S,
  [3518] = 2,
    ACTIONS(829), 1,
      anon_sym_GT,
    ACTIONS(831), 1,
      sym__S,
  [3525] = 1,
    ACTIONS(833), 2,
      anon_sym_GT,
      sym__S,
  [3530] = 1,
    ACTIONS(835), 2,
      anon_sym_PERCENT,
      sym__S,
  [3535] = 2,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
  [3542] = 2,
    ACTIONS(668), 1,
      anon_sym_standalone,
    ACTIONS(841), 1,
      anon_sym_QMARK_GT,
  [3549] = 2,
    ACTIONS(843), 1,
      anon_sym_GT,
    ACTIONS(845), 1,
      sym__S,
  [3556] = 1,
    ACTIONS(843), 2,
      anon_sym_GT,
      sym__S,
  [3561] = 1,
    ACTIONS(847), 2,
      anon_sym_PERCENT,
      sym__S,
  [3566] = 1,
    ACTIONS(849), 2,
      anon_sym_GT,
      sym__S,
  [3571] = 2,
    ACTIONS(841), 1,
      anon_sym_QMARK_GT,
    ACTIONS(851), 1,
      sym__S,
  [3578] = 1,
    ACTIONS(853), 2,
      anon_sym_PERCENT,
      sym__S,
  [3583] = 1,
    ACTIONS(670), 2,
      anon_sym_GT,
      sym__S,
  [3588] = 2,
    ACTIONS(855), 1,
      anon_sym_GT,
    ACTIONS(857), 1,
      sym__S,
  [3595] = 1,
    ACTIONS(859), 2,
      anon_sym_GT,
      sym__S,
  [3600] = 1,
    ACTIONS(861), 2,
      anon_sym_GT,
      sym__S,
  [3605] = 2,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      sym__S,
  [3612] = 1,
    ACTIONS(867), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3617] = 2,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_PIPE,
  [3624] = 1,
    ACTIONS(869), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3629] = 2,
    ACTIONS(871), 1,
      anon_sym_GT,
    ACTIONS(873), 1,
      sym__S,
  [3636] = 1,
    ACTIONS(875), 2,
      anon_sym_GT,
      sym__S,
  [3641] = 1,
    ACTIONS(877), 2,
      anon_sym_GT,
      sym__S,
  [3646] = 1,
    ACTIONS(879), 2,
      anon_sym_GT,
      sym__S,
  [3651] = 1,
    ACTIONS(881), 2,
      anon_sym_PERCENT,
      sym__S,
  [3656] = 1,
    ACTIONS(883), 2,
      anon_sym_PERCENT,
      sym__S,
  [3661] = 2,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      sym__S,
  [3668] = 1,
    ACTIONS(889), 2,
      anon_sym_GT,
      sym__S,
  [3673] = 1,
    ACTIONS(891), 2,
      anon_sym_PERCENT,
      sym__S,
  [3678] = 1,
    ACTIONS(893), 2,
      anon_sym_GT,
      sym__S,
  [3683] = 2,
    ACTIONS(474), 1,
      sym_Name,
    STATE(185), 1,
      sym_Attribute,
  [3690] = 2,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(897), 1,
      sym__S,
  [3697] = 1,
    ACTIONS(722), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3702] = 2,
    ACTIONS(899), 1,
      anon_sym_PIPE,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [3709] = 1,
    ACTIONS(903), 2,
      anon_sym_GT,
      sym__S,
  [3714] = 2,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    ACTIONS(907), 1,
      anon_sym_SQUOTE,
  [3721] = 2,
    ACTIONS(909), 1,
      anon_sym_GT,
    ACTIONS(911), 1,
      sym__S,
  [3728] = 1,
    ACTIONS(913), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3733] = 1,
    ACTIONS(915), 2,
      anon_sym_PERCENT,
      sym__S,
  [3738] = 2,
    ACTIONS(909), 1,
      anon_sym_GT,
    ACTIONS(917), 1,
      anon_sym_LBRACK,
  [3745] = 2,
    ACTIONS(919), 1,
      sym__S,
    ACTIONS(921), 1,
      sym_Nmtoken,
  [3752] = 1,
    ACTIONS(923), 2,
      anon_sym_PERCENT,
      sym__S,
  [3757] = 2,
    ACTIONS(925), 1,
      anon_sym_SQUOTE,
    ACTIONS(927), 1,
      aux_sym_PubidLiteral_token2,
  [3764] = 2,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    ACTIONS(929), 1,
      aux_sym_PubidLiteral_token1,
  [3771] = 2,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
    ACTIONS(933), 1,
      aux_sym_SystemLiteral_token2,
  [3778] = 1,
    ACTIONS(935), 2,
      anon_sym_GT,
      sym__S,
  [3783] = 1,
    ACTIONS(937), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3788] = 2,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      aux_sym_SystemLiteral_token1,
  [3795] = 2,
    ACTIONS(941), 1,
      anon_sym_GT,
    ACTIONS(943), 1,
      sym__S,
  [3802] = 2,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_PIPE,
  [3809] = 1,
    ACTIONS(945), 2,
      anon_sym_GT,
      sym__S,
  [3814] = 2,
    ACTIONS(947), 1,
      sym_Name,
    ACTIONS(949), 1,
      anon_sym_xml,
  [3821] = 1,
    ACTIONS(951), 2,
      anon_sym_GT,
      sym__S,
  [3826] = 2,
    ACTIONS(953), 1,
      sym_Name,
    ACTIONS(955), 1,
      sym__S,
  [3833] = 2,
    ACTIONS(957), 1,
      sym__S,
    ACTIONS(959), 1,
      sym_Nmtoken,
  [3840] = 1,
    ACTIONS(961), 2,
      anon_sym_GT,
      sym__S,
  [3845] = 2,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_PIPE,
  [3852] = 1,
    ACTIONS(963), 2,
      anon_sym_yes,
      anon_sym_no,
  [3857] = 1,
    ACTIONS(965), 2,
      anon_sym_yes,
      anon_sym_no,
  [3862] = 1,
    ACTIONS(967), 2,
      anon_sym_GT,
      sym__S,
  [3867] = 1,
    ACTIONS(969), 2,
      anon_sym_GT,
      sym__S,
  [3872] = 1,
    ACTIONS(971), 2,
      anon_sym_PERCENT,
      sym__S,
  [3877] = 1,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
  [3881] = 1,
    ACTIONS(975), 1,
      sym__S,
  [3885] = 1,
    ACTIONS(977), 1,
      sym__S,
  [3889] = 1,
    ACTIONS(979), 1,
      sym_EncName,
  [3893] = 1,
    ACTIONS(981), 1,
      sym__S,
  [3897] = 1,
    ACTIONS(983), 1,
      sym__S,
  [3901] = 1,
    ACTIONS(973), 1,
      anon_sym_SQUOTE,
  [3905] = 1,
    ACTIONS(985), 1,
      sym__S,
  [3909] = 1,
    ACTIONS(987), 1,
      anon_sym_SEMI,
  [3913] = 1,
    ACTIONS(989), 1,
      sym__S,
  [3917] = 1,
    ACTIONS(921), 1,
      sym_Nmtoken,
  [3921] = 1,
    ACTIONS(941), 1,
      anon_sym_GT,
  [3925] = 1,
    ACTIONS(991), 1,
      anon_sym_STAR,
  [3929] = 1,
    ACTIONS(845), 1,
      sym__S,
  [3933] = 1,
    ACTIONS(993), 1,
      anon_sym_GT,
  [3937] = 1,
    ACTIONS(953), 1,
      sym_Name,
  [3941] = 1,
    ACTIONS(995), 1,
      anon_sym_QMARK_GT,
  [3945] = 1,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
  [3949] = 1,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
  [3953] = 1,
    ACTIONS(1001), 1,
      sym_Nmtoken,
  [3957] = 1,
    ACTIONS(1003), 1,
      sym_VersionNum,
  [3961] = 1,
    ACTIONS(1005), 1,
      sym_Nmtoken,
  [3965] = 1,
    ACTIONS(899), 1,
      anon_sym_PIPE,
  [3969] = 1,
    ACTIONS(1007), 1,
      sym_VersionNum,
  [3973] = 1,
    ACTIONS(999), 1,
      anon_sym_SQUOTE,
  [3977] = 1,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
  [3981] = 1,
    ACTIONS(811), 1,
      anon_sym_COMMA,
  [3985] = 1,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
  [3989] = 1,
    ACTIONS(809), 1,
      anon_sym_PIPE,
  [3993] = 1,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
  [3997] = 1,
    ACTIONS(1013), 1,
      sym__S,
  [4001] = 1,
    ACTIONS(1015), 1,
      sym_Name,
  [4005] = 1,
    ACTIONS(1017), 1,
      sym__S,
  [4009] = 1,
    ACTIONS(871), 1,
      anon_sym_GT,
  [4013] = 1,
    ACTIONS(1019), 1,
      anon_sym_DQUOTE,
  [4017] = 1,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
  [4021] = 1,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [4025] = 1,
    ACTIONS(1021), 1,
      sym__S,
  [4029] = 1,
    ACTIONS(1023), 1,
      anon_sym_DQUOTE,
  [4033] = 1,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [4037] = 1,
    ACTIONS(1023), 1,
      anon_sym_SQUOTE,
  [4041] = 1,
    ACTIONS(1025), 1,
      sym__S,
  [4045] = 1,
    ACTIONS(1027), 1,
      sym_EncName,
  [4049] = 1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [4053] = 1,
    ACTIONS(807), 1,
      anon_sym_PIPE,
  [4057] = 1,
    ACTIONS(1031), 1,
      sym__S,
  [4061] = 1,
    ACTIONS(1033), 1,
      sym__S,
  [4065] = 1,
    ACTIONS(841), 1,
      anon_sym_QMARK_GT,
  [4069] = 1,
    ACTIONS(672), 1,
      anon_sym_STAR,
  [4073] = 1,
    ACTIONS(1035), 1,
      sym__S,
  [4077] = 1,
    ACTIONS(1037), 1,
      anon_sym_GT,
  [4081] = 1,
    ACTIONS(1039), 1,
      anon_sym_EQ,
  [4085] = 1,
    ACTIONS(1041), 1,
      anon_sym_GT,
  [4089] = 1,
    ACTIONS(1043), 1,
      sym__S,
  [4093] = 1,
    ACTIONS(1045), 1,
      anon_sym_QMARK_GT,
  [4097] = 1,
    ACTIONS(1047), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4101] = 1,
    ACTIONS(1049), 1,
      sym__S,
  [4105] = 1,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
  [4109] = 1,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
  [4113] = 1,
    ACTIONS(1055), 1,
      anon_sym_version,
  [4117] = 1,
    ACTIONS(1057), 1,
      aux_sym_PI_token1,
  [4121] = 1,
    ACTIONS(1059), 1,
      anon_sym_GT,
  [4125] = 1,
    ACTIONS(1061), 1,
      sym_CData,
  [4129] = 1,
    ACTIONS(1063), 1,
      sym_Name,
  [4133] = 1,
    ACTIONS(1065), 1,
      aux_sym_CharRef_token2,
  [4137] = 1,
    ACTIONS(1065), 1,
      aux_sym_CharRef_token1,
  [4141] = 1,
    ACTIONS(1067), 1,
      sym_Name,
  [4145] = 1,
    ACTIONS(1069), 1,
      sym_Name,
  [4149] = 1,
    ACTIONS(1071), 1,
      sym_Name,
  [4153] = 1,
    ACTIONS(1073), 1,
      anon_sym_GT,
  [4157] = 1,
    ACTIONS(795), 1,
      anon_sym_GT,
  [4161] = 1,
    ACTIONS(1075), 1,
      anon_sym_GT,
  [4165] = 1,
    ACTIONS(1077), 1,
      sym_Name,
  [4169] = 1,
    ACTIONS(775), 1,
      anon_sym_GT,
  [4173] = 1,
    ACTIONS(1079), 1,
      ts_builtin_sym_end,
  [4177] = 1,
    ACTIONS(1081), 1,
      sym_Name,
  [4181] = 1,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
  [4185] = 1,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
  [4189] = 1,
    ACTIONS(1087), 1,
      sym__S,
  [4193] = 1,
    ACTIONS(1089), 1,
      anon_sym_QMARK_GT,
  [4197] = 1,
    ACTIONS(1091), 1,
      sym__S,
  [4201] = 1,
    ACTIONS(1093), 1,
      anon_sym_GT,
  [4205] = 1,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
  [4209] = 1,
    ACTIONS(1097), 1,
      anon_sym_SEMI,
  [4213] = 1,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
  [4217] = 1,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
  [4221] = 1,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
  [4225] = 1,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
  [4229] = 1,
    ACTIONS(1107), 1,
      anon_sym_SEMI,
  [4233] = 1,
    ACTIONS(1109), 1,
      anon_sym_SEMI,
  [4237] = 1,
    ACTIONS(1111), 1,
      sym_Name,
  [4241] = 1,
    ACTIONS(1113), 1,
      sym_Name,
  [4245] = 1,
    ACTIONS(1115), 1,
      aux_sym_CharRef_token1,
  [4249] = 1,
    ACTIONS(1115), 1,
      aux_sym_CharRef_token2,
  [4253] = 1,
    ACTIONS(1117), 1,
      sym_Name,
  [4257] = 1,
    ACTIONS(1119), 1,
      aux_sym_PI_token1,
  [4261] = 1,
    ACTIONS(1121), 1,
      sym_Name,
  [4265] = 1,
    ACTIONS(1123), 1,
      sym_Name,
  [4269] = 1,
    ACTIONS(1125), 1,
      aux_sym_CharRef_token1,
  [4273] = 1,
    ACTIONS(1125), 1,
      aux_sym_CharRef_token2,
  [4277] = 1,
    ACTIONS(1127), 1,
      sym_Name,
  [4281] = 1,
    ACTIONS(1129), 1,
      sym_Name,
  [4285] = 1,
    ACTIONS(1131), 1,
      aux_sym_CharRef_token1,
  [4289] = 1,
    ACTIONS(1131), 1,
      aux_sym_CharRef_token2,
  [4293] = 1,
    ACTIONS(1133), 1,
      sym_Name,
  [4297] = 1,
    ACTIONS(1135), 1,
      aux_sym_CharRef_token1,
  [4301] = 1,
    ACTIONS(1135), 1,
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
  [SMALL_STATE(10)] = 338,
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
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 883,
  [SMALL_STATE(28)] = 908,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 972,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1034,
  [SMALL_STATE(36)] = 1048,
  [SMALL_STATE(37)] = 1068,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1096,
  [SMALL_STATE(40)] = 1120,
  [SMALL_STATE(41)] = 1144,
  [SMALL_STATE(42)] = 1158,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1186,
  [SMALL_STATE(45)] = 1200,
  [SMALL_STATE(46)] = 1214,
  [SMALL_STATE(47)] = 1228,
  [SMALL_STATE(48)] = 1242,
  [SMALL_STATE(49)] = 1256,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1284,
  [SMALL_STATE(52)] = 1310,
  [SMALL_STATE(53)] = 1334,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1369,
  [SMALL_STATE(56)] = 1392,
  [SMALL_STATE(57)] = 1403,
  [SMALL_STATE(58)] = 1414,
  [SMALL_STATE(59)] = 1425,
  [SMALL_STATE(60)] = 1446,
  [SMALL_STATE(61)] = 1465,
  [SMALL_STATE(62)] = 1486,
  [SMALL_STATE(63)] = 1507,
  [SMALL_STATE(64)] = 1528,
  [SMALL_STATE(65)] = 1549,
  [SMALL_STATE(66)] = 1570,
  [SMALL_STATE(67)] = 1581,
  [SMALL_STATE(68)] = 1592,
  [SMALL_STATE(69)] = 1613,
  [SMALL_STATE(70)] = 1624,
  [SMALL_STATE(71)] = 1642,
  [SMALL_STATE(72)] = 1658,
  [SMALL_STATE(73)] = 1674,
  [SMALL_STATE(74)] = 1692,
  [SMALL_STATE(75)] = 1704,
  [SMALL_STATE(76)] = 1720,
  [SMALL_STATE(77)] = 1732,
  [SMALL_STATE(78)] = 1750,
  [SMALL_STATE(79)] = 1766,
  [SMALL_STATE(80)] = 1782,
  [SMALL_STATE(81)] = 1794,
  [SMALL_STATE(82)] = 1814,
  [SMALL_STATE(83)] = 1832,
  [SMALL_STATE(84)] = 1848,
  [SMALL_STATE(85)] = 1866,
  [SMALL_STATE(86)] = 1877,
  [SMALL_STATE(87)] = 1896,
  [SMALL_STATE(88)] = 1907,
  [SMALL_STATE(89)] = 1926,
  [SMALL_STATE(90)] = 1945,
  [SMALL_STATE(91)] = 1956,
  [SMALL_STATE(92)] = 1975,
  [SMALL_STATE(93)] = 1994,
  [SMALL_STATE(94)] = 2005,
  [SMALL_STATE(95)] = 2024,
  [SMALL_STATE(96)] = 2035,
  [SMALL_STATE(97)] = 2046,
  [SMALL_STATE(98)] = 2057,
  [SMALL_STATE(99)] = 2074,
  [SMALL_STATE(100)] = 2091,
  [SMALL_STATE(101)] = 2102,
  [SMALL_STATE(102)] = 2121,
  [SMALL_STATE(103)] = 2131,
  [SMALL_STATE(104)] = 2145,
  [SMALL_STATE(105)] = 2155,
  [SMALL_STATE(106)] = 2165,
  [SMALL_STATE(107)] = 2175,
  [SMALL_STATE(108)] = 2185,
  [SMALL_STATE(109)] = 2195,
  [SMALL_STATE(110)] = 2205,
  [SMALL_STATE(111)] = 2215,
  [SMALL_STATE(112)] = 2231,
  [SMALL_STATE(113)] = 2241,
  [SMALL_STATE(114)] = 2251,
  [SMALL_STATE(115)] = 2261,
  [SMALL_STATE(116)] = 2270,
  [SMALL_STATE(117)] = 2283,
  [SMALL_STATE(118)] = 2294,
  [SMALL_STATE(119)] = 2307,
  [SMALL_STATE(120)] = 2320,
  [SMALL_STATE(121)] = 2333,
  [SMALL_STATE(122)] = 2342,
  [SMALL_STATE(123)] = 2349,
  [SMALL_STATE(124)] = 2362,
  [SMALL_STATE(125)] = 2375,
  [SMALL_STATE(126)] = 2382,
  [SMALL_STATE(127)] = 2391,
  [SMALL_STATE(128)] = 2400,
  [SMALL_STATE(129)] = 2407,
  [SMALL_STATE(130)] = 2420,
  [SMALL_STATE(131)] = 2429,
  [SMALL_STATE(132)] = 2442,
  [SMALL_STATE(133)] = 2449,
  [SMALL_STATE(134)] = 2462,
  [SMALL_STATE(135)] = 2475,
  [SMALL_STATE(136)] = 2488,
  [SMALL_STATE(137)] = 2501,
  [SMALL_STATE(138)] = 2514,
  [SMALL_STATE(139)] = 2527,
  [SMALL_STATE(140)] = 2538,
  [SMALL_STATE(141)] = 2551,
  [SMALL_STATE(142)] = 2562,
  [SMALL_STATE(143)] = 2575,
  [SMALL_STATE(144)] = 2582,
  [SMALL_STATE(145)] = 2589,
  [SMALL_STATE(146)] = 2598,
  [SMALL_STATE(147)] = 2607,
  [SMALL_STATE(148)] = 2620,
  [SMALL_STATE(149)] = 2633,
  [SMALL_STATE(150)] = 2642,
  [SMALL_STATE(151)] = 2655,
  [SMALL_STATE(152)] = 2664,
  [SMALL_STATE(153)] = 2671,
  [SMALL_STATE(154)] = 2678,
  [SMALL_STATE(155)] = 2685,
  [SMALL_STATE(156)] = 2696,
  [SMALL_STATE(157)] = 2709,
  [SMALL_STATE(158)] = 2722,
  [SMALL_STATE(159)] = 2735,
  [SMALL_STATE(160)] = 2748,
  [SMALL_STATE(161)] = 2755,
  [SMALL_STATE(162)] = 2766,
  [SMALL_STATE(163)] = 2779,
  [SMALL_STATE(164)] = 2788,
  [SMALL_STATE(165)] = 2799,
  [SMALL_STATE(166)] = 2808,
  [SMALL_STATE(167)] = 2821,
  [SMALL_STATE(168)] = 2828,
  [SMALL_STATE(169)] = 2841,
  [SMALL_STATE(170)] = 2854,
  [SMALL_STATE(171)] = 2863,
  [SMALL_STATE(172)] = 2876,
  [SMALL_STATE(173)] = 2889,
  [SMALL_STATE(174)] = 2898,
  [SMALL_STATE(175)] = 2911,
  [SMALL_STATE(176)] = 2921,
  [SMALL_STATE(177)] = 2931,
  [SMALL_STATE(178)] = 2941,
  [SMALL_STATE(179)] = 2947,
  [SMALL_STATE(180)] = 2957,
  [SMALL_STATE(181)] = 2963,
  [SMALL_STATE(182)] = 2973,
  [SMALL_STATE(183)] = 2983,
  [SMALL_STATE(184)] = 2991,
  [SMALL_STATE(185)] = 3001,
  [SMALL_STATE(186)] = 3007,
  [SMALL_STATE(187)] = 3017,
  [SMALL_STATE(188)] = 3025,
  [SMALL_STATE(189)] = 3035,
  [SMALL_STATE(190)] = 3045,
  [SMALL_STATE(191)] = 3051,
  [SMALL_STATE(192)] = 3059,
  [SMALL_STATE(193)] = 3069,
  [SMALL_STATE(194)] = 3079,
  [SMALL_STATE(195)] = 3089,
  [SMALL_STATE(196)] = 3095,
  [SMALL_STATE(197)] = 3105,
  [SMALL_STATE(198)] = 3115,
  [SMALL_STATE(199)] = 3125,
  [SMALL_STATE(200)] = 3135,
  [SMALL_STATE(201)] = 3145,
  [SMALL_STATE(202)] = 3153,
  [SMALL_STATE(203)] = 3159,
  [SMALL_STATE(204)] = 3165,
  [SMALL_STATE(205)] = 3171,
  [SMALL_STATE(206)] = 3181,
  [SMALL_STATE(207)] = 3189,
  [SMALL_STATE(208)] = 3195,
  [SMALL_STATE(209)] = 3201,
  [SMALL_STATE(210)] = 3209,
  [SMALL_STATE(211)] = 3219,
  [SMALL_STATE(212)] = 3225,
  [SMALL_STATE(213)] = 3235,
  [SMALL_STATE(214)] = 3241,
  [SMALL_STATE(215)] = 3249,
  [SMALL_STATE(216)] = 3255,
  [SMALL_STATE(217)] = 3261,
  [SMALL_STATE(218)] = 3267,
  [SMALL_STATE(219)] = 3273,
  [SMALL_STATE(220)] = 3279,
  [SMALL_STATE(221)] = 3285,
  [SMALL_STATE(222)] = 3291,
  [SMALL_STATE(223)] = 3297,
  [SMALL_STATE(224)] = 3307,
  [SMALL_STATE(225)] = 3317,
  [SMALL_STATE(226)] = 3327,
  [SMALL_STATE(227)] = 3337,
  [SMALL_STATE(228)] = 3344,
  [SMALL_STATE(229)] = 3349,
  [SMALL_STATE(230)] = 3356,
  [SMALL_STATE(231)] = 3363,
  [SMALL_STATE(232)] = 3370,
  [SMALL_STATE(233)] = 3377,
  [SMALL_STATE(234)] = 3382,
  [SMALL_STATE(235)] = 3389,
  [SMALL_STATE(236)] = 3396,
  [SMALL_STATE(237)] = 3401,
  [SMALL_STATE(238)] = 3408,
  [SMALL_STATE(239)] = 3413,
  [SMALL_STATE(240)] = 3418,
  [SMALL_STATE(241)] = 3423,
  [SMALL_STATE(242)] = 3428,
  [SMALL_STATE(243)] = 3435,
  [SMALL_STATE(244)] = 3442,
  [SMALL_STATE(245)] = 3449,
  [SMALL_STATE(246)] = 3454,
  [SMALL_STATE(247)] = 3461,
  [SMALL_STATE(248)] = 3468,
  [SMALL_STATE(249)] = 3475,
  [SMALL_STATE(250)] = 3482,
  [SMALL_STATE(251)] = 3487,
  [SMALL_STATE(252)] = 3494,
  [SMALL_STATE(253)] = 3499,
  [SMALL_STATE(254)] = 3506,
  [SMALL_STATE(255)] = 3513,
  [SMALL_STATE(256)] = 3518,
  [SMALL_STATE(257)] = 3525,
  [SMALL_STATE(258)] = 3530,
  [SMALL_STATE(259)] = 3535,
  [SMALL_STATE(260)] = 3542,
  [SMALL_STATE(261)] = 3549,
  [SMALL_STATE(262)] = 3556,
  [SMALL_STATE(263)] = 3561,
  [SMALL_STATE(264)] = 3566,
  [SMALL_STATE(265)] = 3571,
  [SMALL_STATE(266)] = 3578,
  [SMALL_STATE(267)] = 3583,
  [SMALL_STATE(268)] = 3588,
  [SMALL_STATE(269)] = 3595,
  [SMALL_STATE(270)] = 3600,
  [SMALL_STATE(271)] = 3605,
  [SMALL_STATE(272)] = 3612,
  [SMALL_STATE(273)] = 3617,
  [SMALL_STATE(274)] = 3624,
  [SMALL_STATE(275)] = 3629,
  [SMALL_STATE(276)] = 3636,
  [SMALL_STATE(277)] = 3641,
  [SMALL_STATE(278)] = 3646,
  [SMALL_STATE(279)] = 3651,
  [SMALL_STATE(280)] = 3656,
  [SMALL_STATE(281)] = 3661,
  [SMALL_STATE(282)] = 3668,
  [SMALL_STATE(283)] = 3673,
  [SMALL_STATE(284)] = 3678,
  [SMALL_STATE(285)] = 3683,
  [SMALL_STATE(286)] = 3690,
  [SMALL_STATE(287)] = 3697,
  [SMALL_STATE(288)] = 3702,
  [SMALL_STATE(289)] = 3709,
  [SMALL_STATE(290)] = 3714,
  [SMALL_STATE(291)] = 3721,
  [SMALL_STATE(292)] = 3728,
  [SMALL_STATE(293)] = 3733,
  [SMALL_STATE(294)] = 3738,
  [SMALL_STATE(295)] = 3745,
  [SMALL_STATE(296)] = 3752,
  [SMALL_STATE(297)] = 3757,
  [SMALL_STATE(298)] = 3764,
  [SMALL_STATE(299)] = 3771,
  [SMALL_STATE(300)] = 3778,
  [SMALL_STATE(301)] = 3783,
  [SMALL_STATE(302)] = 3788,
  [SMALL_STATE(303)] = 3795,
  [SMALL_STATE(304)] = 3802,
  [SMALL_STATE(305)] = 3809,
  [SMALL_STATE(306)] = 3814,
  [SMALL_STATE(307)] = 3821,
  [SMALL_STATE(308)] = 3826,
  [SMALL_STATE(309)] = 3833,
  [SMALL_STATE(310)] = 3840,
  [SMALL_STATE(311)] = 3845,
  [SMALL_STATE(312)] = 3852,
  [SMALL_STATE(313)] = 3857,
  [SMALL_STATE(314)] = 3862,
  [SMALL_STATE(315)] = 3867,
  [SMALL_STATE(316)] = 3872,
  [SMALL_STATE(317)] = 3877,
  [SMALL_STATE(318)] = 3881,
  [SMALL_STATE(319)] = 3885,
  [SMALL_STATE(320)] = 3889,
  [SMALL_STATE(321)] = 3893,
  [SMALL_STATE(322)] = 3897,
  [SMALL_STATE(323)] = 3901,
  [SMALL_STATE(324)] = 3905,
  [SMALL_STATE(325)] = 3909,
  [SMALL_STATE(326)] = 3913,
  [SMALL_STATE(327)] = 3917,
  [SMALL_STATE(328)] = 3921,
  [SMALL_STATE(329)] = 3925,
  [SMALL_STATE(330)] = 3929,
  [SMALL_STATE(331)] = 3933,
  [SMALL_STATE(332)] = 3937,
  [SMALL_STATE(333)] = 3941,
  [SMALL_STATE(334)] = 3945,
  [SMALL_STATE(335)] = 3949,
  [SMALL_STATE(336)] = 3953,
  [SMALL_STATE(337)] = 3957,
  [SMALL_STATE(338)] = 3961,
  [SMALL_STATE(339)] = 3965,
  [SMALL_STATE(340)] = 3969,
  [SMALL_STATE(341)] = 3973,
  [SMALL_STATE(342)] = 3977,
  [SMALL_STATE(343)] = 3981,
  [SMALL_STATE(344)] = 3985,
  [SMALL_STATE(345)] = 3989,
  [SMALL_STATE(346)] = 3993,
  [SMALL_STATE(347)] = 3997,
  [SMALL_STATE(348)] = 4001,
  [SMALL_STATE(349)] = 4005,
  [SMALL_STATE(350)] = 4009,
  [SMALL_STATE(351)] = 4013,
  [SMALL_STATE(352)] = 4017,
  [SMALL_STATE(353)] = 4021,
  [SMALL_STATE(354)] = 4025,
  [SMALL_STATE(355)] = 4029,
  [SMALL_STATE(356)] = 4033,
  [SMALL_STATE(357)] = 4037,
  [SMALL_STATE(358)] = 4041,
  [SMALL_STATE(359)] = 4045,
  [SMALL_STATE(360)] = 4049,
  [SMALL_STATE(361)] = 4053,
  [SMALL_STATE(362)] = 4057,
  [SMALL_STATE(363)] = 4061,
  [SMALL_STATE(364)] = 4065,
  [SMALL_STATE(365)] = 4069,
  [SMALL_STATE(366)] = 4073,
  [SMALL_STATE(367)] = 4077,
  [SMALL_STATE(368)] = 4081,
  [SMALL_STATE(369)] = 4085,
  [SMALL_STATE(370)] = 4089,
  [SMALL_STATE(371)] = 4093,
  [SMALL_STATE(372)] = 4097,
  [SMALL_STATE(373)] = 4101,
  [SMALL_STATE(374)] = 4105,
  [SMALL_STATE(375)] = 4109,
  [SMALL_STATE(376)] = 4113,
  [SMALL_STATE(377)] = 4117,
  [SMALL_STATE(378)] = 4121,
  [SMALL_STATE(379)] = 4125,
  [SMALL_STATE(380)] = 4129,
  [SMALL_STATE(381)] = 4133,
  [SMALL_STATE(382)] = 4137,
  [SMALL_STATE(383)] = 4141,
  [SMALL_STATE(384)] = 4145,
  [SMALL_STATE(385)] = 4149,
  [SMALL_STATE(386)] = 4153,
  [SMALL_STATE(387)] = 4157,
  [SMALL_STATE(388)] = 4161,
  [SMALL_STATE(389)] = 4165,
  [SMALL_STATE(390)] = 4169,
  [SMALL_STATE(391)] = 4173,
  [SMALL_STATE(392)] = 4177,
  [SMALL_STATE(393)] = 4181,
  [SMALL_STATE(394)] = 4185,
  [SMALL_STATE(395)] = 4189,
  [SMALL_STATE(396)] = 4193,
  [SMALL_STATE(397)] = 4197,
  [SMALL_STATE(398)] = 4201,
  [SMALL_STATE(399)] = 4205,
  [SMALL_STATE(400)] = 4209,
  [SMALL_STATE(401)] = 4213,
  [SMALL_STATE(402)] = 4217,
  [SMALL_STATE(403)] = 4221,
  [SMALL_STATE(404)] = 4225,
  [SMALL_STATE(405)] = 4229,
  [SMALL_STATE(406)] = 4233,
  [SMALL_STATE(407)] = 4237,
  [SMALL_STATE(408)] = 4241,
  [SMALL_STATE(409)] = 4245,
  [SMALL_STATE(410)] = 4249,
  [SMALL_STATE(411)] = 4253,
  [SMALL_STATE(412)] = 4257,
  [SMALL_STATE(413)] = 4261,
  [SMALL_STATE(414)] = 4265,
  [SMALL_STATE(415)] = 4269,
  [SMALL_STATE(416)] = 4273,
  [SMALL_STATE(417)] = 4277,
  [SMALL_STATE(418)] = 4281,
  [SMALL_STATE(419)] = 4285,
  [SMALL_STATE(420)] = 4289,
  [SMALL_STATE(421)] = 4293,
  [SMALL_STATE(422)] = 4297,
  [SMALL_STATE(423)] = 4301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(383),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(382),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(381),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(389),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(407),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(379),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(363),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(362),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(358),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(354),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(384),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(279),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(417),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(421),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(422),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(423),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(413),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(22),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(418),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(419),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(420),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(384),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(414),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(415),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(416),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(52),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(408),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(409),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(410),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(121),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(342),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(309),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(339),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(143),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(152),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(176),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(64),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(343),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(59),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(345),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(285),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(147),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(361),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(211),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(203),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(213),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 5),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1079] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
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
